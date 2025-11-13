// 函数: sub_142235740
// 地址: 0x142235740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd8) == 0)
    return 

int64_t* rcx = **(arg1 + 0xd0)
int32_t rax_3 = (*(*rcx + 0x28))(rcx)
int64_t* rcx_1 = **(arg1 + 0xd0)
int64_t rdx = *rcx_1
void* rax_4 = (*(rdx + 0x38))(rcx_1, rdx)
int32_t rcx_2 = arg2[1].d

if (rax_3 s<= rcx_2)
    rcx_2 = rax_3

int64_t r11_1 = 0
int64_t rdx_1 = sx.q(rcx_2)
int32_t zmm1

if (rdx_1 s>= 4)
    void* r8_2 = rax_4 + 0x14
    int64_t i_3 = ((rdx_1 - 4) u>> 2) + 1
    r11_1 = i_3 << 2
    int64_t i
    
    do
        int64_t rax_5 = *arg2
        int32_t* rcx_3 = -0x14 - rax_4 + r8_2
        zmm1 = *(rcx_3 + rax_5 + 4)
        arg3 = *(rcx_3 + rax_5 + 8)
        *(r8_2 - 0x14) = *(rcx_3 + rax_5)
        *(r8_2 - 0x10) = zmm1
        *(r8_2 - 0xc) = arg3
        int64_t rax_6 = *arg2
        zmm1 = *(rcx_3 + rax_6 + 0x10)
        arg3 = *(rcx_3 + rax_6 + 0x14)
        *(r8_2 - 8) = *(rcx_3 + rax_6 + 0xc)
        *(r8_2 - 4) = zmm1
        *r8_2 = arg3
        void* rax_8 = 4 - rax_4 + r8_2 + *arg2
        zmm1 = *(rax_8 + 4)
        arg3 = *(rax_8 + 8)
        void* rax_9 = 0x10 - rax_4 + r8_2
        *(r8_2 + 4) = *rax_8
        *(r8_2 + 8) = zmm1
        *(r8_2 + 0xc) = arg3
        r8_2 += 0x30
        void* rax_10 = rax_9 + *arg2
        zmm1 = *(rax_10 + 4)
        arg3 = *(rax_10 + 8)
        *(r8_2 - 0x20) = *rax_10
        *(r8_2 - 0x1c) = zmm1
        *(r8_2 - 0x18) = arg3
        i = i_3
        i_3 -= 1
    while (i != 1)

if (r11_1 s< rdx_1)
    void* rcx_6 = rax_4 + ((r11_1 + ((r11_1 + 1) << 1)) << 2)
    int64_t i_2 = rdx_1 - r11_1
    int64_t i_1
    
    do
        int32_t* rax_12 = -8 - rax_4 + rcx_6 + *arg2
        rcx_6 += 0xc
        zmm1 = rax_12[1]
        arg3 = rax_12[2]
        *(rcx_6 - 0x14) = *rax_12
        *(rcx_6 - 0x10) = zmm1
        *(rcx_6 - 0xc) = arg3
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

int64_t* rcx_7 = **(arg1 + 0xd0)
void var_28
(*(*rcx_7 + 0x40))(rcx_7, &var_28, arg3)
