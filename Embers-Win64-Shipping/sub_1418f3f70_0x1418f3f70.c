// 函数: sub_1418f3f70
// 地址: 0x1418f3f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d3ff08
int128_t var_74 = zx.o(0)
arg1[1].d = 0
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = 0
uint128_t temp0 = _mm_bsrli_si128(zx.o(0), 0xc)
*(arg1 + 0x34) = 0
*(arg1 + 0x3c) = 0
*(arg1 + 0x20) = 1.o
arg1[6].d = temp0.d

if (arg3 == 0)
    arg3 = &arg1[0xa]

arg1[9] = arg3
arg1[0xa] = -0x3810000020000000
arg1[0xb] = 0
*arg1 = &data_142ef2b00
arg1[0xc] = 0
uint128_t zmm1 = data_143dbb1e0
int32_t rax_1 = (1 << (data_1439c7a34).b) - 1
int128_t var_58 = zx.o(0)
int32_t var_34 = rax_1
arg1[0xd] = &data_142ff18d8
int32_t var_48 = 1
uint128_t var_44 = zmm1
char var_30 = 0
int64_t var_28 = 0
int32_t var_20 = 0
sub_1418f2510(&arg1[0xe], arg2, 0x7fffffff, 0, 0, 0, 0, 1, 1, 1, 0, 0, &var_58)
__builtin_memset(&arg1[0x1d], 0, 0x14)
arg1[0x20] = 0
arg1[0x21] = 0

if (arg1[0x1c].d != *(arg1 + 0xe4))
    int64_t* rax_3 = j_sub_140a82f30(0x18)
    int64_t* r14_1 = rax_3
    
    if (rax_3 == 0)
        r14_1 = nullptr
    else
        __builtin_memset(rax_3, 0, 0x14)
    
    int32_t rcx_3 = *(arg1 + 0x9c)
    int32_t rax_4 = *(arg1 + 0x8c)
    int64_t rbx_1 = arg1[0x10]
    int32_t r9_1 = *(arg1 + 0xe4)
    int32_t r8 = arg1[0x19].d
    arg1[0x20] = r14_1
    int64_t rax_5 = sub_141903390(arg2, rbx_1, r8, r9_1, rcx_3, rax_4, 0, 1, 0, 1, 0, nullptr)
    r14_1[1] = rbx_1
    *r14_1 = rax_5
    
    if (data_1439c7a08 s<= 1)
        int32_t rsi_1 = (data_143efb4e0).d
        data_143efb4e0 += 1
        r14_1[2].d = rsi_1 + 1
else
    arg1[0x20] = &arg1[0x1d]

*arg1 = &data_142ff1b50
arg1[0xd] = &data_142ff1ba8
return arg1
