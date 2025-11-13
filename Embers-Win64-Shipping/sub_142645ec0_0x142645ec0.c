// 函数: sub_142645ec0
// 地址: 0x142645ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result

if (data_143b5150d == 0 || data_143f71424 != 0)
    result.b = 0
else
    result.b = 1

if (result.b != 0)
    int64_t result_2 = *(arg2 + 0xa8)
    
    if (result_2 != 0)
    label_142645f0f:
        void* rsi_1 = *(result_2 + 0x120)
        
        if (rsi_1 != 0)
            void* rax = sub_14269bba0()
            void* rdx = *(rsi_1 + 0x10)
            result = sx.q(*(rax + 0x38))
            
            if (result.d s<= *(rdx + 0x38))
                int64_t result_1 = result
                result = *(rdx + 0x30)
                
                if (*(result + (result_1 << 3)) == rax + 0x30)
                    result = zx.q(*(rsi_1 + 0x68) u>> 2)
                    
                    if ((result.b & 1) != 0)
                    label_142645f55:
                        int64_t* rcx_2 = *(arg2 + 0xa0)
                        
                        if (rcx_2 != 0 && rcx_2[0x26] == arg2)
                            rdx.b = 1
                            return sub_14266bf60(rcx_2, rdx.b)
                    else
                        result, rdx = sub_14243ac50(result_2)
                        
                        if (result.d != 3)
                            goto label_142645f55
    else
        result = sub_141ee69e0(arg2)
        result_2 = result
        
        if (result != 0)
            goto label_142645f0f

return result
