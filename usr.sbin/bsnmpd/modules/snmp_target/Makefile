# $FreeBSD$
#
# Author: Shteryana Shopova <syrinx@freebsd.org>

CONTRIB= ${.CURDIR}/../../../../contrib/bsnmp
.PATH: ${CONTRIB}/snmp_target

MOD=	target
SRCS=	target_snmp.c
XSYM=	snmpTargetMIB snmpNotificationMIB snmpUDPDomain

MAN=	snmp_target.3

CFLAGS+= -I${CONTRIB}/lib -I${CONTRIB}/snmpd -DSNMPTREE_TYPES
CFLAGS+= -DHAVE_ERR_H -DHAVE_GETADDRINFO -DHAVE_STRLCPY -DHAVE_SYS_TREE_H

DEFS=	${MOD}_tree.def
BMIBS=

.include <bsd.snmpmod.mk>
