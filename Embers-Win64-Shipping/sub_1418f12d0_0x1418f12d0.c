// 函数: sub_1418f12d0
// 地址: 0x1418f12d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_a8 = zx.o(0)
int128_t zmm0 = data_143dbb1e0
int32_t var_58 = 1
char var_40 = 0
int32_t var_84 = (1 << (data_1439c7a34).b) - 1
*arg1 = &data_142d3ff08
char var_80 = 0
int64_t var_78 = 0
int32_t var_70 = 0
arg1[1].d = 0
*(arg1 + 0xc) = 0
arg1[2].w = 0x100
arg1[3] = 0
*(arg1 + 0x20) = 1.o
arg1[6].d = zmm0:0xc.d
arg1[9] = &arg1[0xa]
*(arg1 + 0x3c) = arg4
arg1[8].d = arg7
*(arg1 + 0x34) = 1
arg1[7].d = 1
arg1[0xa] = -0x3810000020000000
arg1[0xb] = 0
*arg1 = &data_142ef29a0
arg1[0xc].d = arg5
*(arg1 + 0x64) = arg6
int128_t zmm1 = data_143dbb1e0
int32_t rax_5 = (1 << (data_1439c7a34).b) - 1
int128_t var_68 = zx.o(0)
int32_t var_44 = rax_5
arg1[0xd] = &data_142ff18d8
int128_t var_54 = zmm1
int64_t var_38 = 0
int32_t var_30 = 0
sub_1418f2510(&arg1[0xe], arg2, 1, arg4, arg5, arg6, 1, 1, 1, 1, 0, arg7, &var_68)
__builtin_memset(&arg1[0x1d], 0, 0x14)
arg1[0x20] = 0
arg1[0x21] = 0
int64_t rbp = arg1[0x10]

if (rbp != 0)
    int32_t rax_6 = arg1[0x1b].d
    int32_t rcx_3 = 1
    
    if (rax_6 u>= 1)
        rcx_3 = rax_6
    
    arg1[0x1d] =
        sub_141903390(arg2, rbp, 1, arg1[0x1c].d, arg4, *(arg1 + 0x8c), 0, rcx_3, 0, 1, 0, nullptr)
    arg1[0x1e] = rbp
    
    if (data_1439c7a08 s<= 1)
        int32_t rax_8 = (data_143efb4e0).d
        data_143efb4e0 += 1
        arg1[0x1f].d = rax_8 + 1

if (arg1[0x1c].d != *(arg1 + 0xe4))
    int64_t* rax_11 = j_sub_140a82f30(0x18)
    int64_t* r14_1 = rax_11
    
    if (rax_11 == 0)
        r14_1 = nullptr
    else
        __builtin_memset(rax_11, 0, 0x14)
    
    int32_t rcx_5 = *(arg1 + 0x9c)
    int32_t rax_12 = *(arg1 + 0x8c)
    int64_t rbx_1 = arg1[0x10]
    int32_t r9_3 = *(arg1 + 0xe4)
    int32_t r8_1 = arg1[0x19].d
    arg1[0x20] = r14_1
    *r14_1 = sub_141903390(arg2, rbx_1, r8_1, r9_3, rcx_5, rax_12, 0, 1, 0, 1, 0, nullptr)
    r14_1[1] = rbx_1
    
    if (data_1439c7a08 s<= 1)
        int32_t rsi_1 = (data_143efb4e0).d
        data_143efb4e0 += 1
        r14_1[2].d = rsi_1 + 1
else
    arg1[0x20] = &arg1[0x1d]

arg1[0x22] = arg3
*arg1 = &data_142ff1c78
arg1[0xd] = &data_142ff1cd0
return arg1
