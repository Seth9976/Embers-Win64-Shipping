// 函数: sub_141861750
// 地址: 0x141861750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
int32_t i_1 = arg2[1].d
void* rdi = *arg2
arg1[1].d = i_1

if (i_1 != 0)
    sub_1405a4be0(arg1, i_1, 0)
    int64_t* rbx_1 = *arg1
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rsi_1 = *(rdi + 8)
        int64_t r12_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r12_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0xc) = 0

arg1[2].d = arg2[2].d
*(arg1 + 0x14) = *(arg2 + 0x14)
arg1[3].d = arg2[3].d
arg1[4] = 0
int64_t rdi_1 = sx.q(arg2[5].d)
int64_t rsi_2 = arg2[4]
arg1[5].d = rdi_1.d

if (rdi_1.d != 0)
    sub_140638750(&arg1[4], rdi_1.d, 0)
    memcpy(arg1[4], rsi_2, (rdi_1 << 2).d)
else
    *(arg1 + 0x2c) = 0

arg1[6] = 0
int64_t rdi_2 = sx.q(arg2[7].d)
int64_t rsi_3 = arg2[6]
arg1[7].d = rdi_2.d

if (rdi_2.d != 0)
    sub_140638750(&arg1[6], rdi_2.d, 0)
    memcpy(arg1[6], rsi_3, (rdi_2 << 2).d)
else
    *(arg1 + 0x3c) = 0

arg1[8].d = arg2[8].d
*(arg1 + 0x44) = *(arg2 + 0x44)
arg1[9].d = arg2[9].d
return arg1
