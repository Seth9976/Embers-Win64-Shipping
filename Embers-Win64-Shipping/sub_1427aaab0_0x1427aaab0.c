// 函数: sub_1427aaab0
// 地址: 0x1427aaab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = sub_1427ad500(arg1)

if (result.b != 0)
    int64_t* rcx = *(arg1 + 8)
    result = (*(*rcx + 0x6a0))(rcx)
    int64_t rsi_1 = sx.q(arg2[1].d)
    int64_t rbx_1 = sx.q(result.d)
    
    if (rbx_1.d s> rsi_1.d)
        arg2[1].d = rbx_1.d
        
        if (rbx_1.d s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        result = memset(*arg2 + (rsi_1 << 3), 0, sx.q(rbx_1.d - rsi_1.d) << 3)
    else if (rbx_1.d s< rsi_1.d && rbx_1.d != rsi_1.d)
        arg2[1].d = rbx_1.d
        result = sub_1405c53d0(arg2)
    
    int32_t rbp_3 = 0
    
    if (rbx_1.d s> 0)
        int64_t rsi_2 = 0
        
        do
            int64_t* rcx_4 = *(arg1 + 8)
            int64_t rbx_2 = *arg2
            result = (*(*rcx_4 + 0x548))(rcx_4, zx.q(rbp_3))
            *(rbx_2 + (rsi_2 << 3)) = result
            rbp_3 += 1
            rsi_2 += 1
        while (rsi_2 s< rbx_1)

return result
