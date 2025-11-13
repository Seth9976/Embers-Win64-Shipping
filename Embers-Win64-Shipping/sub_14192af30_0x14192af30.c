// 函数: sub_14192af30
// 地址: 0x14192af30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t i_3 = arg2[1].d
void* rdi = *arg2
arg1[1].d = i_3

if (i_3 != 0)
    sub_1405a4be0(arg1, i_3, 0)
    int64_t* rbx_1 = *arg1
    int32_t i
    
    do
        *rbx_1 = 0
        int64_t rsi_1 = sx.q(*(rdi + 8))
        int64_t r12_1 = *rdi
        rbx_1[1].d = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_1405c4a90(rbx_1, rsi_1.d, 0)
            memcpy(*rbx_1, r12_1, (rsi_1 << 2).d)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_3
        i_3 -= 1
    while (i != 1)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int64_t rdi_1 = sx.q(arg2[3].d)
int64_t rsi_2 = arg2[2]
arg1[3].d = rdi_1.d

if (rdi_1.d != 0)
    sub_1405c4a90(&arg1[2], rdi_1.d, 0)
    memcpy(arg1[2], rsi_2, (rdi_1 << 2).d)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
int32_t i_4 = arg2[5].d
void* rdi_2 = arg2[4]
arg1[5].d = i_4

if (i_4 != 0)
    sub_140808f70(&arg1[4], i_4, 0)
    int64_t* rbx_2 = arg1[4]
    void* rdi_3 = rdi_2 + 0x10
    int32_t i_1
    
    do
        *rbx_2 = 0
        uint32_t count = *(rdi_3 - 8)
        int64_t r12_2 = *(rdi_3 - 0x10)
        rbx_2[1].d = count
        
        if (count != 0)
            sub_1405da9e0(rbx_2, count, 0)
            memcpy(*rbx_2, r12_2, count)
        else
            *(rbx_2 + 0xc) = 0
        
        int32_t rax_1 = *rdi_3
        rdi_3 += 0x18
        rbx_2[2].d = rax_1
        rbx_2 = &rbx_2[3]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)
else
    *(arg1 + 0x2c) = 0

arg1[6] = 0
int32_t i_5 = arg2[7].d
void* rdi_4 = arg2[6]
arg1[7].d = i_5

if (i_5 != 0)
    sub_140808f70(&arg1[6], i_5, 0)
    int64_t* rbx_3 = arg1[6]
    void* rdi_5 = rdi_4 + 0x10
    int32_t i_2
    
    do
        *rbx_3 = 0
        uint32_t count_1 = *(rdi_5 - 8)
        int64_t r12_3 = *(rdi_5 - 0x10)
        rbx_3[1].d = count_1
        
        if (count_1 != 0)
            sub_1405da9e0(rbx_3, count_1, 0)
            memcpy(*rbx_3, r12_3, count_1)
        else
            *(rbx_3 + 0xc) = 0
        
        int32_t rax_2 = *rdi_5
        rdi_5 += 0x18
        rbx_3[2].d = rax_2
        rbx_3 = &rbx_3[3]
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
else
    *(arg1 + 0x3c) = 0

sub_141929660(&arg1[8], &arg2[8])
arg1[0x11] = 0
int64_t rsi_3 = sx.q(arg2[0x12].d)
int64_t rdi_6 = arg2[0x11]
arg1[0x12].d = rsi_3.d

if (rsi_3.d != 0)
    sub_1405c4a90(&arg1[0x11], rsi_3.d, 0)
    memcpy(arg1[0x11], rdi_6, (rsi_3 << 2).d)
else
    *(arg1 + 0x94) = 0

arg1[0x13].w = arg2[0x13].w
*(arg1 + 0x9a) = *(arg2 + 0x9a)
*(arg1 + 0x9b) = *(arg2 + 0x9b)
*(arg1 + 0x9c) = *(arg2 + 0x9c)
*(arg1 + 0x9d) = *(arg2 + 0x9d)
*(arg1 + 0x9e) = *(arg2 + 0x9e)
*(arg1 + 0xae) = *(arg2 + 0xae)
return arg1
