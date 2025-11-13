// 函数: sub_141e4f730
// 地址: 0x141e4f730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[5] = 0
arg1[1].d = 0xffffffff
*(arg1 + 0xc) = 0
__builtin_memset(&arg1[3], 0, 0x14)
int64_t arg_8 = 0

if (*(arg1 + 0x2c) s<= 0xffffffff)
    sub_1405947f0(&arg1[4], 0)

int16_t* rax_1 = arg1[4]

if (rax_1 != 0)
    *rax_1 = 0

arg1[2].d = 0
arg1[1] = arg2[1]
arg1[2].d = arg2[2].d
arg1[3] = arg2[3]
sub_140597df0(&arg1[4], &arg2[4])
arg1[6] = arg2[6]
arg1[7].b = arg2[7].b
*(arg1 + 0x39) = *(arg2 + 0x39)
arg1[8] = 0
int32_t i_4 = arg2[9].d
int64_t* rdi = arg2[8]
arg1[9].d = i_4

if (i_4 != 0)
    sub_1405a4be0(&arg1[8], i_4, 0)
    int64_t* rbx_1 = arg1[8]
    int32_t i
    
    do
        sub_140596d10(rbx_1, rdi)
        rbx_1 = &rbx_1[2]
        rdi = &rdi[2]
        i = i_4
        i_4 -= 1
    while (i != 1)
else
    *(arg1 + 0x4c) = 0

arg1[0xa] = 0
int32_t i_5 = arg2[0xb].d
int64_t* rbx_2 = arg2[0xa]
arg1[0xb].d = i_5

if (i_5 != 0)
    sub_140808f70(&arg1[0xa], i_5, 0)
    int64_t* rdi_1 = arg1[0xa]
    int32_t i_1
    
    do
        *rdi_1 = *rbx_2
        sub_140596d10(&rdi_1[1], &rbx_2[1])
        rdi_1 = &rdi_1[3]
        rbx_2 = &rbx_2[3]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x5c) = 0

arg1[0xc] = arg2[0xc]
arg1[0xd].d = arg2[0xd].d
arg1[0xe] = 0
int32_t i_3 = arg2[0xf].d
void* rdi_2 = arg2[0xe]
arg1[0xf].d = i_3

if (i_3 != 0)
    sub_1405a4be0(&arg1[0xe], i_3, 0)
    int64_t* rbx_3 = arg1[0xe]
    int32_t i_2
    
    do
        *rbx_3 = 0
        int32_t rsi = *(rdi_2 + 8)
        int64_t r12_1 = *rdi_2
        rbx_3[1].d = rsi
        
        if (rsi != 0)
            sub_1405a4c70(rbx_3, rsi, 0)
            memcpy(*rbx_3, r12_1, rsi * 2)
        else
            *(rbx_3 + 0xc) = 0
        
        rbx_3 = &rbx_3[2]
        rdi_2 += 0x10
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x7c) = 0

arg1[0x10].b = arg2[0x10].b
*(arg1 + 0x84) = *(arg2 + 0x84)
return arg1
