#include "kv.h"

kv_t *kv_init(size_t capacity)
{
	kv_t init_kv_t = {
		.capacity = capacity;
		.count = 0;
	}
	
	int *entries = malloc(sizeof(kv_entry_t) * capacity);
	if (entries = NULL) {
		perror("malloc");
		return NULL;
	}
	
	init_kv_t->entries = entries;	
	return init_kv_t;
}
