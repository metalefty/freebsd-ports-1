--- components/autofill/content/renderer/password_form_conversion_utils.cc.orig	2021-04-14 01:08:44 UTC
+++ components/autofill/content/renderer/password_form_conversion_utils.cc
@@ -18,7 +18,11 @@
 #include "third_party/blink/public/web/web_form_control_element.h"
 #include "third_party/blink/public/web/web_input_element.h"
 #include "third_party/blink/public/web/web_local_frame.h"
+#if defined(OS_BSD)
+#include <re2/re2.h>
+#else
 #include "third_party/re2/src/re2/re2.h"
+#endif
 #include "url/gurl.h"
 
 using blink::WebElement;
