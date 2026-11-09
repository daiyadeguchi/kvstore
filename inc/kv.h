#define TOMBSTONE ((char *)0x1)

#include <stddef.h>

typedef struct {
	char *key;
	char *value;
} kv_entry_t;

typedef struct {
	kv_entry_t *entries;
	size_t     capacity;
	size_t     count;
} kv_t;
