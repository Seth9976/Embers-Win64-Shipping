// 函数: sub_14189cca0
// 地址: 0x14189cca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = &data_142fe9aa8
__builtin_memset(&arg1[2], 0, 0x38)
void* rcx = &arg1[9]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax = *(rcx + 0x10)

if (rax != 0)
    rcx = rax

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x13]
arg1[0xd].d = 0xffffffff
*(arg1 + 0x6c) = 0
arg1[0xf] = 0
arg1[0x10].d = 0
arg1[0x11] = 0
arg1[0x12] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_1 = *(rcx_1 + 0x10)

if (rax_1 != 0)
    rcx_1 = rax_1

__builtin_memset(rcx_1, 0, 0x1c)
arg1[0x17].d = 0xffffffff
*(arg1 + 0xbc) = 0
arg1[0x19] = 0
arg1[0x1a].d = 0
int64_t* rax_2 = j_sub_140a82f30(0x38)

if (rax_2 == 0)
    rax_2 = nullptr
else
    *rax_2 = 0
    rax_2[6].b = 0xff

arg1[0x1d] = rax_2
arg1[0x1c] = rax_2
arg1[0x1e] = 0
void*** var_18 = nullptr
void*** rax_3 = sub_140a84c80(0, 0x30, 0)
var_18 = rax_3
int32_t var_10 = 3

if (rax_3 != 0)
    rax_3[1] = arg1
    *rax_3 = &data_142d42fd0
    rax_3[2] = sub_1418aced0
    rax_3[4] = sub_140a387b0()

void arg_8
arg1[2] = *sub_140a208a0(arg1[1], &arg_8, &var_18, zx.o(0))
void*** rax_7

if (var_10 == 0)
    rax_7 = var_18
label_14189ce3c:
    
    if (rax_7 != 0)
        sub_140a74f90(rax_7)
else
    void*** rcx_4 = var_18
    
    if (rcx_4 != 0)
        (*rcx_4)[7](rcx_4, 0)
        rax_7 = var_18
        
        if (rax_7 != 0)
            rax_7 = sub_140a84c80(rax_7, 0, 0)
            var_18 = rax_7
        
        int32_t var_10_1 = 0
        goto label_14189ce3c
return arg1
