// 函数: sub_141f86d30
// 地址: 0x141f86d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x10) - *(arg1 + 0x3c)

if (result != arg2)
    int32_t i_1 = *(arg1 + 0x60)
    
    if (i_1 s> arg2)
        int32_t i = arg2
        
        do
            sub_141f96690(arg1 + 8, *(arg1 + 0x58) + (sx.q(i) << 2))
            i += 1
        while (i s< *(arg1 + 0x60))
        
        return sub_141f9cf00(arg1 + 0x58, arg2, 1)
    
    if (i_1 s< arg2)
        if (arg2 s> *(arg1 + 0x64))
            result = sub_1405dadb0(arg1 + 0x58, arg2)
            i_1 = *(arg1 + 0x60)
        
        for (; i_1 s< arg2; i_1 += 1)
            int64_t rdi_1 = sx.q(*(arg1 + 0x60))
            int32_t rax_2 = (rdi_1 + 1).d
            *(arg1 + 0x60) = rax_2
            
            if (rax_2 s> *(arg1 + 0x64))
                sub_1405a4cf0(arg1 + 0x58)
            
            int32_t rax_4 = data_143a2d8ec + 1
            *(*(arg1 + 0x58) + (rdi_1 << 2)) = rax_4
            data_143a2d8ec = rax_4
            void* rdi_2 = *(arg1 + 0x58) + (sx.q(*(arg1 + 0x60)) << 2)
            int32_t var_28
            sub_14090a150(arg1 + 8, &var_28)
            int32_t* var_20
            *var_20 = *(rdi_2 - 4)
            int32_t rax_7 = var_28
            var_20[1] = i_1
            var_20[2] = 0xffffffff
            void arg_10
            result = sub_141f86230(arg1 + 8, &arg_10, *var_20, var_20, rax_7, nullptr)

return result
