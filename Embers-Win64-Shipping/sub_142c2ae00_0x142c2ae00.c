// 函数: sub_142c2ae00
// 地址: 0x142c2ae00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdi = zx.q(arg2)

if (rdi.d u>= sub_142c1f860(arg1 + 0xc0)[1].d)
    return 0

void* var_28 = arg1
bool var_14_1 = arg5 != 0
int32_t var_10_1 = 0
int128_t* const r8 = &data_14369a5d0
int32_t* rcx_2 = *sub_142c1f860(arg1 + 0xc0)
int32_t* rax_3 = &data_14369a5d0

if (rcx_2 != 0)
    rax_3 = rcx_2

if (rax_3[6] u>= 0xa)
    r8 = *(rax_3 + 0x10)

int128_t* rax_4 = sub_142c1f4d0(r8, rdi.d)
int32_t** rax_5 = sub_142c1f860(arg1 + 0xc0)
int32_t rdx_1
int32_t* r8_3

if (arg4 != 0)
    r8_3 = &rax_5[2][rdi * 8]
    rdx_1 = *arg3

if (arg4 == 0 || not(test_bit(*r8_3, rdx_1 u>> 4 & 0x1f)) || not(test_bit(r8_3[1], rdx_1 & 0x1f))
        || not(test_bit(r8_3[2], rdx_1 u>> 9 & 0x1f)))
    rax_5.b = 0
else
    rax_5 = sub_142c162f0(rax_4, &var_28)

return zx.q(rax_5.b)
