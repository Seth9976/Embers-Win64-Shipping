// 函数: sub_14090ac80
// 地址: 0x14090ac80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1c838
arg1[1].d = *(arg2 + 8)
*(arg1 + 0xc) = *(arg2 + 0xc)
arg1[2].d = *(arg2 + 0x10)
*arg1 = &data_142e1c898
arg1[3] = 0
int32_t i_1 = *(arg2 + 0x20)
void* rdi = *(arg2 + 0x18)
arg1[4].d = i_1

if (i_1 != 0)
    sub_1405a4be0(&arg1[3], i_1, 0)
    int64_t* rbx_1 = arg1[3]
    int32_t i
    
    do
        *rbx_1 = 0
        int64_t rsi_1 = sx.q(*(rdi + 8))
        int64_t r14_1 = *rdi
        rbx_1[1].d = rsi_1.d
        
        if (rsi_1.d != 0)
            sub_140638750(rbx_1, rsi_1.d, 0)
            memcpy(*rbx_1, r14_1, (rsi_1 << 2).d)
        else
            *(rbx_1 + 0xc) = 0
        
        rbx_1 = &rbx_1[2]
        rdi += 0x10
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    *(arg1 + 0x24) = 0

arg1[5].d = *(arg2 + 0x28)
return arg1
