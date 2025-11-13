// 函数: sub_142ac7ab0
// 地址: 0x142ac7ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    return 0

struct icu_64::GMTOffsetField::VTable** result = j_sub_142a7dd00(0x18)
struct icu_64::GMTOffsetField::VTable** result_1 = result

if (result == 0)
    *arg2 = 7
    return 0

result[1] = 0
result[2].d = 0
*(result + 0x14) = 0
*result = &icu_64::GMTOffsetField::`vftable'
int16_t rax_1 = *(arg1 + 8)
int32_t rbp_1

if (rax_1 s< 0)
    rbp_1 = *(arg1 + 0xc)
else
    rbp_1 = sx.d(rax_1) s>> 5

int64_t rax_3 = sub_142a7dd00(sx.q(rbp_1 + 1) * 2)
result[1] = rax_3

if (rax_3 == 0)
    *arg2 = 7
    (*result)->vFunc_0(result, zx.q((rax_3 + 1).d))
    return nullptr

char rax_6 = (*(arg1 + 8)).b
void* rdx_1

if ((rax_6 & 0x11) == 0)
    rdx_1 = arg1 + 0xa
    
    if ((rax_6 & 2) == 0)
        rdx_1 = *(arg1 + 0x18)
else
    rdx_1 = nullptr

sub_142a8c350(rax_3, rdx_1, rbp_1)
*(result[1] + (sx.q(rbp_1) << 1)) = 0
result[2].d = 0
return result
