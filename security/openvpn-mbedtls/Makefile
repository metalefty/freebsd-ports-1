# Created by: Matthias Andree <mandree@FreeBSD.org>

PKGNAMESUFFIX=		-mbedtls

COMMENT=		Secure IP/Ethernet tunnel daemon, mbedTLS-based build

CONFLICTS_INSTALL=	openvpn-[0-9].* openvpn-beta-[0-9]* openvpn-devel-[0-9]*

OPTIONS_EXCLUDE=	OPENSSL PKCS11 X509ALTUSERNAME
OPTIONS_SLAVE=		MBEDTLS

MASTERDIR=		${.CURDIR}/../../security/openvpn

.include "${MASTERDIR}/Makefile"
