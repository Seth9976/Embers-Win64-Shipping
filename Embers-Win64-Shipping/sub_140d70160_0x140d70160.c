// 函数: sub_140d70160
// 地址: 0x140d70160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
*(arg1 + 8) = *(arg2 + 8)
sub_140596d10(&arg1[4], &arg2[4])
*(arg1 + 0x20) = 0
int32_t i_1 = arg2[0xa]
void* rdi = *(arg2 + 0x20)
arg1[0xa] = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[8], i_1, 0)
    int64_t* rbx_1 = *(arg1 + 0x20)
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
    arg1[0xb] = 0

arg1[0xc].b = arg2[0xc].b
arg1[0xe] = arg2[0xe]
*(arg1 + 0x3c) = *(arg2 + 0x3c)
return arg1
