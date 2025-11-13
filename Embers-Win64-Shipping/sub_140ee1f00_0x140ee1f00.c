// 函数: sub_140ee1f00
// 地址: 0x140ee1f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t i_5 = arg2[1].d
int64_t* rbx = *arg2
arg1[1].d = i_5

if (i_5 != 0)
    sub_1405a4be0(arg1, i_5, 0)
    int64_t* rcx = *arg1
    int32_t i
    
    do
        *rcx = *rbx
        void* rax_2 = rbx[1]
        rcx[1] = rax_2
        
        if (rax_2 != 0)
            *(rax_2 + 8) += 1
        
        rcx = &rcx[2]
        rbx = &rbx[2]
        i = i_5
        i_5 -= 1
    while (i != 1)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int32_t i_3 = arg2[3].d
void* rbp = arg2[2]
arg1[3].d = i_3

if (i_3 != 0)
    sub_140808f70(&arg1[2], i_3, 0)
    int32_t* rcx_2 = arg1[2]
    int32_t* rdx_2 = rbp + 4
    int32_t i_1
    
    do
        *rcx_2 = rdx_2[-1]
        rcx_2[1] = *rdx_2
        *(rcx_2 + 8) = *(rdx_2 + 4)
        void* rax_6 = *(rdx_2 + 0xc)
        *(rcx_2 + 0x10) = rax_6
        
        if (rax_6 != 0)
            *(rax_6 + 8) += 1
        
        rcx_2 = &rcx_2[6]
        rdx_2 = &rdx_2[6]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
int32_t i_4 = arg2[5].d
void* rbp_1 = arg2[4]
arg1[5].d = i_4

if (i_4 != 0)
    sub_140808f70(&arg1[4], i_4, 0)
    int32_t* rcx_4 = arg1[4]
    void* rdx_4 = rbp_1 + 4
    int32_t i_2
    
    do
        *rcx_4 = *(rdx_4 - 4)
        rcx_4[1] = *rdx_4
        *(rcx_4 + 8) = *(rdx_4 + 4)
        void* rax_10 = *(rdx_4 + 0xc)
        *(rcx_4 + 0x10) = rax_10
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        rcx_4 = &rcx_4[6]
        rdx_4 += 0x18
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x2c) = 0

arg1[6] = arg2[6]
arg1[7] = arg2[7]
arg1[8].d = arg2[8].d
*(arg1 + 0x44) = *(arg2 + 0x44)
arg1[9] = arg2[9]
arg1[0xa].b = arg2[0xa].b
*(arg1 + 0x54) = *(arg2 + 0x54)
return arg1
