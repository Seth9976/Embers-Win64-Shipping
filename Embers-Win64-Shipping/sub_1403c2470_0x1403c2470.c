// 函数: sub_1403c2470
// 地址: 0x1403c2470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
sub_14036ef90(arg1 + 0x160)
png_free(arg1, *(arg1 + 0x1b8))
png_free(arg1, *(arg1 + 0x200))
png_free(arg1, *(arg1 + 0x1f8))
png_free(arg1, *(arg1 + 0x208))
png_free(arg1, *(arg1 + 0x210))
png_free(arg1, *(arg1 + 0x218))
png_free(arg1, *(arg1 + 0x220))
png_free(arg1, *(arg1 + 0x3e0))
*(arg1 + 0x3b0) = 1
int64_t rdx_8 = *(arg1 + 0x3b8)

if (rdx_8 != 0)
    *(arg1 + 0x3b8) = 0
    png_free(arg1, rdx_8)

int64_t rdx_9 = *(arg1 + 0x3c0)

if (rdx_9 != 0)
    *(arg1 + 0x3c0) = 0
    png_free(arg1, rdx_9)

int64_t rdx_10 = *(arg1 + 0x3c8)

if (rdx_10 != 0)
    *(arg1 + 0x3c8) = 0
    png_free(arg1, rdx_10)

png_free(arg1, *(arg1 + 0x3d0))
png_free(arg1, *(arg1 + 0x3d8))
void var_148
memcpy(&var_148, arg1, 0x100)
int128_t zmm6 = *(arg1 + 0x108)
int64_t rbx = *(arg1 + 0x118)
int64_t rdi = *(arg1 + 0x430)
memset(arg1 + 0x100, 0, 0x3b0)
*(arg1 + 0x108) = zmm6
*(arg1 + 0x118) = rbx
*(arg1 + 0x430) = rdi
int64_t result = memcpy(arg1, &var_148, 0x100)
__security_check_cookie(rax_1 ^ &var_168)
return result
