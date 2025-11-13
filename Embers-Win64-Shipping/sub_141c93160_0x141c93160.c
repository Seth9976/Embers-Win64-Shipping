// 函数: sub_141c93160
// 地址: 0x141c93160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t rbx = arg2[1].d
int64_t rdi = *arg2
arg1[1].d = rbx

if (rbx != 0)
    sub_140874c00(arg1, rbx, 0)
    memcpy(*arg1, rdi, rbx * 0x38)
else
    *(arg1 + 0xc) = 0

arg1[2] = 0
int64_t rdi_1 = sx.q(arg2[3].d)
int64_t rsi = arg2[2]
arg1[3].d = rdi_1.d

if (rdi_1.d != 0)
    sub_141add040(&arg1[2], rdi_1.d, 0)
    memcpy(arg1[2], rsi, (rdi_1 << 7).d)
else
    *(arg1 + 0x1c) = 0

arg1[4] = 0
int32_t i_1 = arg2[5].d
void* rdi_2 = arg2[4]
arg1[5].d = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[4], i_1, 0)
    int64_t* rbx_1 = arg1[4]
    int32_t i
    
    do
        *rbx_1 = 0
        int64_t rsi_1 = sx.q(*(rdi_2 + 8))
        int64_t r12_1 = *rdi_2
        rbx_1[1].d = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_1405c4a90(rbx_1, rsi_1.d, 0)
            memcpy(*rbx_1, r12_1, (rsi_1 << 2).d)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi_2 += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x2c) = 0

arg1[6] = 0
int64_t rdi_3 = sx.q(arg2[7].d)
int64_t rsi_2 = arg2[6]
arg1[7].d = rdi_3.d

if (rdi_3.d != 0)
    sub_1405c4a00(&arg1[6], rdi_3.d, 0)
    memcpy(arg1[6], rsi_2, (rdi_3 << 3).d)
else
    __builtin_memset(arg1 + 0x3c, 0, 0x14)

void* rdx_9 = &arg1[0xa]
*(rdx_9 + 0x1c) = 0x80
void* rax = *(rdx_9 + 0x10)

if (rax != 0)
    rdx_9 = rax

__builtin_memset(rdx_9, 0, 0x1c)
arg1[0xe].d = 0xffffffff
*(arg1 + 0x74) = 0
arg1[0x10] = 0
arg1[0x11].d = 0
sub_141c94f90(&arg1[8], &arg2[8])
return arg1
