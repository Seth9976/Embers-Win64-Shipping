// 函数: sub_141f6c980
// 地址: 0x141f6c980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x88]
void* var_18

if (rax == 0)
    var_18 = rax
    void* var_10_1 = rax
else
    var_18.o = *(*(rax + 0x88) + 0xc0)

uint128_t zmm1 = var_18.o
int64_t rdx = _mm_bsrli_si128(zmm1, 8).q
int64_t rcx = zmm1.q
int32_t r8_5 = ((rdx u>> 0x20).d ^ *(arg1 + 0x514)) | ((rcx u>> 0x20).d ^ *(arg1 + 0x50c))
    | (arg1[0xa2].d ^ rdx.d) | (arg1[0xa1].d ^ rcx.d)

if (r8_5 != 0)
    sub_141f6d630(arg1, zmm1, r8_5)

sub_141f20210(arg1)
char rax_10 = (*(*arg1 + 0x3e0))(arg1)
*(arg1 + 0x8a) &= 0xfb
*(arg1 + 0x8a) |= (rax_10 & 1) << 2
return sub_141df0440(arg1) __tailcall
