# Created by: TAKATSU Tomonari <tota@FreeBSD.org>

PORTNAME=	curl
PORTVERSION=	4.3.2
CATEGORIES=	ftp
DISTNAME=	${PORTNAME}_${PORTVERSION}

MAINTAINER=	tota@FreeBSD.org
COMMENT=	Modern and Flexible Web Client for R

LICENSE=	MIT

BUILD_DEPENDS=	${LOCALBASE}/include/curl/curl.h:ftp/curl
LIB_DEPENDS=	libcurl.so:ftp/curl

USES=	cran:auto-plist,compiles

.include <bsd.port.mk>
