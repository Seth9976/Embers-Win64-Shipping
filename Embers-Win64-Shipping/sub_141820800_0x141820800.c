// 函数: sub_141820800
// 地址: 0x141820800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
sub_140596d10(&arg1[2], &arg2[2])
*(arg1 + 0x20) = *(arg2 + 0x20)
arg1[6].d = arg2[6].d
*(arg1 + 0x34) = *(arg2 + 0x34)
arg1[7] = 0
int32_t i_1 = arg2[8].d
void* rdi = arg2[7]
arg1[8].d = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[7], i_1, 0)
    int64_t* rbx_1 = arg1[7]
    int32_t i
    
    do
        *rbx_1 = 0
        int32_t rsi_1 = *(rdi + 8)
        int64_t r14_1 = *rdi
        rbx_1[1].d = rsi_1
        
        if (rsi_1 != 0)
            sub_1405a4c70(rbx_1, rsi_1, 0)
            memcpy(*rbx_1, r14_1, rsi_1 * 2)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x44) = 0

arg1[9] = 0
int64_t rdi_1 = sx.q(arg2[0xa].d)
int64_t rsi_2 = arg2[9]
arg1[0xa].d = rdi_1.d

if (rdi_1.d != 0)
    sub_140808f70(&arg1[9], rdi_1.d, 0)
    memcpy(arg1[9], rsi_2, (rdi_1 * 0x18).d)
else
    *(arg1 + 0x54) = 0

arg1[0xb] = arg2[0xb]
return arg1
