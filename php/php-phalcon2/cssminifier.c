/* Fake version to avoid non-free stuff */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "phalcon.h"
#include "ext/standard/php_smart_str.h"

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"
#include "kernel/exception.h"

int phalcon_cssmin(zval *return_value, zval *style TSRMLS_DC) {
	ZEPHIR_THROW_EXCEPTION_STR(phalcon_assets_exception_ce, "Non-free jsminifier not available");
	return FAILURE;
}
