# Created by: Po-Chuan Hsieh <sunpoet@FreeBSD.org>

PORTNAME=	sidekiq-scheduler
PORTVERSION=	3.1.0
CATEGORIES=	devel rubygems
MASTER_SITES=	RG

MAINTAINER=	sunpoet@FreeBSD.org
COMMENT=	Lightweight job scheduler extension for Sidekiq

LICENSE=	MIT
LICENSE_FILE=	${WRKSRC}/MIT-LICENSE

RUN_DEPENDS=	rubygem-e2mmap>=0:devel/rubygem-e2mmap \
		rubygem-redis>=3<5:databases/rubygem-redis \
		rubygem-rufus-scheduler>=3.2<4:devel/rubygem-rufus-scheduler \
		rubygem-sidekiq>=3:devel/rubygem-sidekiq \
		rubygem-thwait>=0:devel/rubygem-thwait \
		rubygem-tilt>=1.4.0:devel/rubygem-tilt

USES=		gem
USE_RUBY=	yes

NO_ARCH=	yes

.include <bsd.port.mk>
