# Created by: Li-Wen Hsu <lwhsu@FreeBSD.org>

PORTNAME=	pgxnclient
PORTVERSION=	1.2.1
PORTREVISION=	3
CATEGORIES=	databases python
MASTER_SITES=	CHEESESHOP

MAINTAINER=	lwhsu@FreeBSD.org
COMMENT=	Command line tool to interact with the PostgreSQL Extension Network

LICENSE=	BSD3CLAUSE
LICENSE_FILE=	${WRKSRC}/COPYING

USES=		python:3.6+ shebangfix
SHEBANG_FILES=	pgxnclient/libexec/pgxn-*
USE_PYTHON=	distutils autoplist concurrent optsuffix
NO_ARCH=	yes

.include <bsd.port.mk>
