#pragma once
#include <cstdint>
#include <cstddef>
#define UNREFERENCED_PARAMETER(param) (param)

class ICore {
public:
	virtual void encrypt(uint8_t* block) = 0;
	virtual void decrypt(uint8_t* block) = 0;
	virtual void set_substitution_tables(const uint8_t** sbox, const uint8_t** inv_sbox) = 0;
	virtual void set_key(const char* key) = 0;
	virtual size_t get_block_length() const noexcept = 0;
	virtual ~ICore() noexcept = default;
};