// 函数: sub_141eef100
// 地址: 0x141eef100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = (*(*arg1 + 0x5c0))()

if (result.b != 0)
    if (arg2 == 0 || (*(arg2 + 0x264) & 1) == 0)
        result = (*(*arg1 + 0x558))(arg1)
        
        if (result.b != 0)
            result = (*(*arg1 + 0x590))(arg1, 3, 0)
            int64_t var_48 = 0
            bool cond:0_1 = 0f f>= *(arg1 + 0x234)
            float var_40_1 = 0f
            int64_t var_38 = 0
            int32_t var_30_1 = 0
            
            if (not(cond:0_1))
                result = (*(*arg1 + 0x660))(arg1, &var_48)
                
                if (result.b != 0)
                    int64_t zmm0
                    zmm0.d = var_48.d.d f* *(arg1 + 0x22c)
                    float zmm2 = var_48:4.d f* arg1[0x46].d f+ zmm0.d + var_40_1 f* *(arg1 + 0x234)
                    
                    if (not(zmm2 <= 0f))
                        float var_20_1 = var_40_1
                        int64_t rax_7 = *arg1
                        int64_t var_28 = var_48
                        result = (*(rax_7 + 0x810))(arg1, &var_28, &var_38)
                        
                        if (result.b != 0)
                            int32_t var_20_2 = var_30_1
                            int64_t rax_9 = *arg1
                            var_28 = var_38
                            (*(rax_9 + 0x668))(arg1, &var_28, zmm2)
                            result = zx.q(*(arg1 + 0x204))
                            *(arg1 + 0xcc) = result.d
    else if ((arg1[0x1e].b & 8) != 0)
        result = (*(*arg1 + 0x558))(arg1)
        
        if (result.b == 0)
            jump(*(*arg1 + 0x590))
    else
        result = sub_141ee5990(arg1)
        
        if (result != 0)
            jump(*(*result + 0x10))

return result
