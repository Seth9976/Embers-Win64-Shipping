// 函数: sub_140932e70
// 地址: 0x140932e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140939320(*(arg1 + 8))
int32_t i = 0

while (i s>= 0)
    if (i s>= *(arg2 + 8))
        break
    
    int64_t* rbx_1 = *(arg1 + 8)
    int64_t r14_3 = (sx.q(i) << 4) + *arg2
    int32_t rcx_1 = rbx_1[4].d
    int16_t arg_8
    
    if (((rcx_1 - 2) & 0xfffffff5) != 0 || rcx_1 == 0xa)
        int64_t* rcx_2 = rbx_1[1]
        arg_8 = 0x2c
        (*(*rcx_2 + 0x150))(rcx_2, &arg_8, 2)
    
    sub_14067f880(rbx_1[1])
    int32_t j_2 = *(rbx_1 + 0x24)
    int64_t* rsi_1 = rbx_1[1]
    
    if (j_2 s> 0)
        uint64_t j_1 = zx.q(j_2)
        uint64_t j
        
        do
            int64_t rax_3 = *rsi_1
            arg_8 = 9
            (*(rax_3 + 0x150))(rsi_1, &arg_8, 2)
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    (*(*rbx_1 + 0x10))(rbx_1, r14_3)
    i += 1
    rbx_1[4].d = 7

return sub_140938f70(*(arg1 + 8)) __tailcall
