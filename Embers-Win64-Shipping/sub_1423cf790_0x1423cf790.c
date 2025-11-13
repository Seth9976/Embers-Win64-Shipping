// 函数: sub_1423cf790
// 地址: 0x1423cf790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d10(arg1, arg2)
sub_140596d10(&arg1[2], &arg2[2])
arg1[4].d = arg2[4].d
*(arg1 + 0x24) = *(arg2 + 0x24)
sub_140596d10(&arg1[5], &arg2[5])
sub_140596d10(&arg1[7], &arg2[7])
arg1[9] = 0
int32_t i_1 = arg2[0xa].d
void* rdi = arg2[9]
arg1[0xa].d = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[9], i_1, 0)
    int64_t* rbx_1 = arg1[9]
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
    *(arg1 + 0x54) = 0

sub_140596d10(&arg1[0xb], &arg2[0xb])
return arg1
