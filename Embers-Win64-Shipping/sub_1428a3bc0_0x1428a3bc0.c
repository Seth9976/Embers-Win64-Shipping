// 函数: sub_1428a3bc0
// 地址: 0x1428a3bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
*(arg1 + 0xa8) = 0
*(arg1 + 0xb0) = 0xffffffff
*(arg1 + 0xb4) = 0
int32_t result_1
int32_t arg_10
uint64_t result = sub_1428e38e0(sub_1428a96d0(*(arg1 + 0x80)), &result_1, &arg_10)

if (result.d != 0)
    int32_t rdx_1 = arg_10
    
    if (rdx_1 != 0)
        int32_t result_2 = result_1
        *(arg1 + 0xac) = rdx_1
        
        if (result_2 != 0)
            *(arg1 + 0xb4) |= 1
            *(arg1 + 0xa8) = result_2
            result = sub_14289b970(sub_1428a9620(result_2))
            
            if (result != 0)
                *(arg1 + 0xb0) = sub_1428916c0(result) << 2
                result = zx.q(result_1)
                
                if (result.d == 0x40)
                    *(arg1 + 0xb4) |= 2
                else
                    result = zx.q(result.d - 0x2a0)
                    
                    if (result.d u<= 2)
                        *(arg1 + 0xb4) |= 2
        else
            result = sub_1428bc150(nullptr, rdx_1)
            
            if (result != 0)
                result = *(result + 0xd8)
                
                if (result != 0)
                    result = result(arg1 + 0xa8, arg1 + 0x80, arg1 + 0x90)
                    
                    if (result.d != 0)
                        *(arg1 + 0xb4) |= 1

return result
