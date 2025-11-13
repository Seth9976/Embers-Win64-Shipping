// 函数: sub_140ee1bd0
// 地址: 0x140ee1bd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
void* rax_1 = arg2[1]
arg1[1] = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

arg1[2] = arg2[2]
void* rax_3 = arg2[3]
arg1[3] = rax_3

if (rax_3 != 0)
    *(rax_3 + 8) += 1

arg1[4].b = arg2[4].b
arg1[5] = 0
sub_140edf8c0(&arg1[5], arg2[5], arg2[6].d, 0, 0)
arg1[7] = 0
int64_t rbp = sx.q(arg2[8].d)
int64_t r14 = arg2[7]
arg1[8].d = rbp.d

if (rbp.d != 0)
    sub_1407751d0(&arg1[7], rbp.d, 0)
    memcpy(arg1[7], r14, (rbp * 0x28).d)
else
    *(arg1 + 0x44) = 0

arg1[9] = 0
int32_t i_2 = arg2[0xa].d
void* rbp_1 = arg2[9]
arg1[0xa].d = i_2

if (i_2 != 0)
    sub_14083a1f0(&arg1[9], i_2, 0)
    int32_t* rcx_4 = arg1[9]
    int64_t* rdx_4 = rbp_1 + 4
    int32_t i
    
    do
        *rcx_4 = *(rdx_4 - 4)
        *(rcx_4 + 4) = *rdx_4
        *(rcx_4 + 0x10) = *(rdx_4 + 0xc)
        void* rax_8 = *(rdx_4 + 0x14)
        *(rcx_4 + 0x18) = rax_8
        
        if (rax_8 != 0)
            *(rax_8 + 8) += 1
        
        rcx_4 = &rcx_4[8]
        rdx_4 = &rdx_4[4]
        i = i_2
        i_2 -= 1
    while (i != 1)
else
    *(arg1 + 0x54) = 0

arg1[0xb] = 0
int32_t i_3 = arg2[0xc].d
void* rbp_2 = arg2[0xb]
arg1[0xc].d = i_3

if (i_3 != 0)
    sub_14083a1f0(&arg1[0xb], i_3, 0)
    int32_t* rcx_6 = arg1[0xb]
    void* rdx_6 = rbp_2 + 4
    int32_t i_1
    
    do
        *rcx_6 = *(rdx_6 - 4)
        *(rcx_6 + 4) = *rdx_6
        rcx_6[3] = *(rdx_6 + 8)
        *(rcx_6 + 0x10) = *(rdx_6 + 0xc)
        void* rax_13 = *(rdx_6 + 0x14)
        *(rcx_6 + 0x18) = rax_13
        
        if (rax_13 != 0)
            *(rax_13 + 8) += 1
        
        rcx_6 = &rcx_6[8]
        rdx_6 += 0x20
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x64) = 0

arg1[0xd].b = arg2[0xd].b
return arg1
