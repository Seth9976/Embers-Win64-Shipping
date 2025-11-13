// 函数: sub_1428900c0
// 地址: 0x1428900c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    int64_t* result
    
    if ((*(arg1 + 0x14) & 8) == 0)
        result = sub_142890500()
    else
        int64_t* result_1 = sub_1428a6a70(0x18)
        result = result_1
        
        if (result_1 != 0)
            *(result_1 + 0x14) = 9
        else
            sub_1428a5670((result_1 + 3).d, (result_1 + 0x71).d, (result_1 + 0x41).d, 
                "crypto\bn\bn_lib.c", 0xbf)
    
    if (result != 0)
        if (result == arg1)
            return result
        
        int32_t rdx_3 = arg1[1].d
        int64_t* result_2
        
        if (rdx_3 s> *(result + 0xc))
            result_2 = sub_142890d10(result, rdx_3)
        else
            result_2 = result
        
        if (result_2 != 0)
            int64_t rax_2 = sx.q(arg1[1].d)
            
            if (rax_2.d s> 0)
                memcpy(*result, *arg1, (rax_2 << 3).d)
            
            result[2].d = arg1[2].d
            result[1].d = arg1[1].d
            return result
        
        sub_1428901a0(result)

return 0
