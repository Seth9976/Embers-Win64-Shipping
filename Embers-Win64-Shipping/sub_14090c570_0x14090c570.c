// 函数: sub_14090c570
// 地址: 0x14090c570
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x20))
int64_t result_1 = sx.q(*(arg1 + 0x20))
int64_t rsi = sx.q(arg2)

if (rsi.d s> rdi.d)
    *(arg1 + 0x20) = rsi.d
    int32_t i_2 = rsi.d - rdi.d
    
    if (rsi.d s> *(arg1 + 0x24))
        sub_1405a4f90(arg1 + 0x18)
    
    int64_t* rax_3 = (rdi << 4) + *(arg1 + 0x18)
    
    if (i_2 != 0)
        int32_t i
        
        do
            *rax_3 = 0
            rax_3[1] = 0
            rax_3 = &rax_3[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
else if (rsi.d s< rdi.d)
    sub_140838580(arg1 + 0x18, rsi.d, rdi.d - rsi.d, 1)

int64_t result = result_1

if (result s< rsi)
    int64_t rsi_2 = result << 4
    int64_t i_3 = rsi - result
    int64_t i_1
    
    do
        int32_t rdi_2 = *(arg1 + 0xc)
        int64_t* rbx_3 = *(arg1 + 0x18) + rsi_2
        rbx_3[1].d = 0
        
        if (rdi_2 s> *(rbx_3 + 0xc))
            sub_1405dadb0(rbx_3, rdi_2)
        
        result = sub_14090bb30(rbx_3, rdi_2 - 1, arg1 + 0x28)
        rsi_2 += 0x10
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)

return result
