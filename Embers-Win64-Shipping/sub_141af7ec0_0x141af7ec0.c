// 函数: sub_141af7ec0
// 地址: 0x141af7ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143058528
arg1[1] = 0
int64_t rdi = sx.q(*(arg2 + 0x10))
int64_t rsi = *(arg2 + 8)
arg1[2].d = rdi.d

if (rdi.d != 0)
    sub_1405c4a90(&arg1[1], rdi.d, 0)
    memcpy(arg1[1], rsi, (rdi << 2).d)
else
    *(arg1 + 0x14) = 0

arg1[3] = 0
int32_t i_1 = *(arg2 + 0x20)
void* rdi_1 = *(arg2 + 0x18)
arg1[4].d = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[3], i_1, 0)
    int64_t* rbx_1 = arg1[3]
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rsi_1 = *(rdi_1 + 8)
        int64_t r15_1 = *rdi_1
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r15_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi_1 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x24) = 0

sub_140596d10(&arg1[5], arg2 + 0x28)
void* rcx_6 = &arg1[0xc]
arg1[7].b = *(arg2 + 0x38)
__builtin_memset(&arg1[8], 0, 0x20)
*(rcx_6 + 0x10) = 0
*(rcx_6 + 0x18) = 0
*(rcx_6 + 0x1c) = 0x80
void* rax_1 = *(rcx_6 + 0x10)

if (rax_1 != 0)
    rcx_6 = rax_1

*rcx_6 = 0
*(rcx_6 + 8) = 0
arg1[0x10].d = 0xffffffff
*(arg1 + 0x84) = 0
arg1[0x12] = 0
arg1[0x13].d = 0
return arg1
