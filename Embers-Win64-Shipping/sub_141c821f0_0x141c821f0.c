// 函数: sub_141c821f0
// 地址: 0x141c821f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdx = &arg1[3]
*arg1 = &data_14320f5d0
arg1[1] = 0
arg1[2] = 0
rdx[2] = 0
rdx[3].d = 0
*(rdx + 0x1c) = 0x80
int64_t* rax = rdx[2]

if (rax != 0)
    rdx = rax

*rdx = 0
rdx[1] = 0
arg1[7].d = 0xffffffff
*(arg1 + 0x3c) = 0
arg1[9] = 0
arg1[0xa].d = 0
arg1[0xb].b = 0
arg1[0xc] = 0
arg1[0xd] = 0
arg1[0xf] = 0
arg1[0x10] = 0
void* rcx = &arg1[0x11]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_1 = *(rcx + 0x10)

if (rax_1 != 0)
    rcx = rax_1

*rcx = 0
*(rcx + 8) = 0
void* rcx_1 = &arg1[0x1b]
arg1[0x15].d = 0xffffffff
*(arg1 + 0xac) = 0
arg1[0x17] = 0
arg1[0x18].d = 0
arg1[0x19] = 0
arg1[0x1a] = 0
*(rcx_1 + 0x1c) = 0x80
void* rax_2 = *(rcx_1 + 0x10)

if (rax_2 != 0)
    rcx_1 = rax_2

__builtin_memset(rcx_1, 0, 0x1c)
void* rcx_2 = &arg1[0x25]
arg1[0x1f].d = 0xffffffff
*(arg1 + 0xfc) = 0
arg1[0x21] = 0
arg1[0x22].d = 0
arg1[0x23] = 0
arg1[0x24] = 0
*(rcx_2 + 0x1c) = 0x80
void* rax_3 = *(rcx_2 + 0x10)

if (rax_3 != 0)
    rcx_2 = rax_3

__builtin_memset(rcx_2, 0, 0x1c)
void* rcx_3 = &arg1[0x2f]
arg1[0x29].d = 0xffffffff
*(arg1 + 0x14c) = 0
arg1[0x2b] = 0
arg1[0x2c].d = 0
arg1[0x2d] = 0
arg1[0x2e] = 0
*(rcx_3 + 0x1c) = 0x80
void* rax_4 = *(rcx_3 + 0x10)

if (rax_4 != 0)
    rcx_3 = rax_4

__builtin_memset(rcx_3, 0, 0x1c)
arg1[0x33].d = 0xffffffff
*(arg1 + 0x19c) = 0
arg1[0x35] = 0
arg1[0x36].d = 0
arg1[0x37].w = 0
arg1[0x38] = 0
int64_t* rax_5 = j_sub_140a82f30(0x50)

if (rax_5 == 0)
    rax_5 = nullptr
else
    *rax_5 = 0
    rax_5[2] = 0
    rax_5[4] = 0

arg1[0x3b] = rax_5
arg1[0x3a] = rax_5
arg1[0x3c] = 0
arg1[0x3d] = 0
arg1[0x3e] = 2
arg1[0x3f] = 0
arg1[0x40] = 0
arg1[0x41] = 2
arg1[0x42] = 0
arg1[0x43] = 0
arg1[0x44] = 2
arg1[0xe] = sub_140a491d0(0)
void*** var_18 = nullptr
void*** rax_7 = sub_140a84c80(0, 0x30, 0)
var_18 = rax_7
int32_t var_10 = 3

if (rax_7 != 0)
    rax_7[1] = arg1
    *rax_7 = &data_142d42fd0
    rax_7[2] = sub_14094eaf0
    rax_7[4] = sub_140a387b0()

void arg_8
arg1[0x38] = *sub_140a208a0(sub_140b18f30(), &arg_8, &var_18, zx.o(0))
void*** rax_12

if (var_10 == 0)
    rax_12 = var_18
label_141c824d8:
    
    if (rax_12 != 0)
        sub_140a74f90(rax_12)
else
    void*** rcx_6 = var_18
    
    if (rcx_6 != 0)
        (*rcx_6)[7](rcx_6, 0)
        rax_12 = var_18
        
        if (rax_12 != 0)
            rax_12 = sub_140a84c80(rax_12, 0, 0)
            var_18 = rax_12
        
        int32_t var_10_1 = 0
        goto label_141c824d8
return arg1
