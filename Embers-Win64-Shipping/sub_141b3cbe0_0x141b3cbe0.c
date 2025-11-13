// 函数: sub_141b3cbe0
// 地址: 0x141b3cbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == arg2)
    return arg1

int32_t i_2 = arg1[1].d

if (i_2 != 0)
    void*** rbx_1 = *arg1 + 8
    int32_t i
    
    do
        sub_140746700(rbx_1)
        rbx_1 = &rbx_1[0x13]
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t i_3 = arg2[1].d
void* rsi_1 = *arg2
int32_t r8 = *(arg1 + 0xc)
arg1[1].d = i_3

if (i_3 == 0 && r8 == 0)
    *(arg1 + 0xc) = 0
    return arg1

sub_14174fef0(arg1, i_3, r8)
int64_t* r13_1 = *arg1

if (i_3 == 0)
    return arg1

void* rsi_2 = rsi_1 + 0x30
void* rbx_2 = &r13_1[0xd]
int32_t i_1

do
    *r13_1 = *(rsi_2 - 0x30)
    *(rbx_2 - 0x60) = &data_142d9ab38
    *(rbx_2 - 0x58) = 0
    int64_t rbp_1 = sx.q(*(rsi_2 - 0x18))
    int64_t rax_3 = *(rsi_2 - 0x20)
    *(rbx_2 - 0x50) = rbp_1.d
    
    if (rbp_1.d != 0)
        sub_1405c4a90(rbx_2 - 0x58, rbp_1.d, 0)
        memcpy(*(rbx_2 - 0x58), rax_3, (rbp_1 << 2).d)
    else
        *(rbx_2 - 0x4c) = 0
    
    *(rbx_2 - 0x48) = *(rsi_2 - 0x10)
    *(rbx_2 - 0x47) = *(rsi_2 - 0xf)
    *(rbx_2 - 0x40) = 0
    uint32_t count = *rsi_2
    int64_t rax_6 = *(rsi_2 - 8)
    *(rbx_2 - 0x38) = count
    
    if (count != 0)
        sub_1405da9e0(rbx_2 - 0x40, count, 0)
        memcpy(*(rbx_2 - 0x40), rax_6, count)
    else
        __builtin_memset(rbx_2 - 0x34, 0, 0x24)
    
    void* rcx_6 = rbx_2 - 0x10
    *rbx_2 = 0
    *(rbx_2 + 8) = 0
    *(rbx_2 + 0xc) = 0x80
    void* rax_7 = *rbx_2
    
    if (rax_7 != 0)
        rcx_6 = rax_7
    
    r13_1 = &r13_1[0x13]
    rsi_2 += 0x98
    *rcx_6 = 0
    *(rcx_6 + 8) = 0
    *(rbx_2 + 0x10) = 0xffffffff
    *(rbx_2 + 0x14) = 0
    *(rbx_2 + 0x20) = 0
    *(rbx_2 + 0x28) = 0
    rbx_2 += 0x98
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
return arg1
