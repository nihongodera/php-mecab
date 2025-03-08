php-mecab: MeCab binding for PHP
================================


INSTALL
-------

To compile your new extension, you will have to execute the following steps:

1. `phpize`
2. `./configure`
    * You cah specify mecab `--with-mecab=/path/to/mecab-config`.
    * For developers: `CFLAGS="-Wall -Wextra -Wno-unused-parameter" ./configure`
3. `make`
4. `make test`
5. `[sudo] make install`
