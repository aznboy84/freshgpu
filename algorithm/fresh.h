#ifndef FRESH_H
#define FRESH_H

#include "miner.h"

extern int fresh_test(unsigned char *pdata, const unsigned char *ptarget,
			uint32_t nonce);
extern void fresh_regenhash(struct work *work);

#endif /* FRESH_H */