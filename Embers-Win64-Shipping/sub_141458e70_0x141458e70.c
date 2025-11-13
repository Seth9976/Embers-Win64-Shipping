// 函数: sub_141458e70
// 地址: 0x141458e70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = data_1439b6bc0
uint64_t result = data_1439b6be8
arg1[1] = result

if (arg2 != 0)
    result = zx.q(arg5)
    
    if (result.d s>= 0)
        if ((*(arg4 + 0x9c) & 0x200000) != 0 && (arg6 == 0 || *(arg2 + 0x515b) == 0))
            void* r9 = arg2 + 0x1688
            void* r8 = *(r9 + 0x10)
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(result.d)
            int32_t rdi_1 = 1 << (result.b & 0x1f)
            
            if (r8 != 0)
                r9 = r8
            
            if ((*(r9 + (sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5) << 2)) & rdi_1) == 0)
                int32_t* result_1 = arg2 + 0x16a8
                result = *(result_1 + 0x10)
                
                if (result != 0)
                    result_1 = result
                
                if ((result_1[sx.q((temp1_1 + (temp0_1 & 0x1f)) s>> 5)] & rdi_1) != 0)
                    result = *(arg2 + 0x1648)
                    arg1[1] = result
            else
                result = *(arg2 + 0x1650)
                arg1[1] = result
        
        if (arg3 != 0)
            void* r8_1 = arg2 + 0x1628
            int64_t r9_1 = sx.q(*(*(arg3 + 0x110) + 0x110))
            void* rax_5 = *(r8_1 + 0x10)
            
            if (rax_5 != 0)
                r8_1 = rax_5
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r9_1.d)
            result = zx.q(*(r8_1 + (sx.q((temp3_1 + (temp2_1 & 0x1f)) s>> 5) << 2)))
            
            if (test_bit(result.d, r9_1.d & 0x1f))
                result = *(arg2 + 0x1618)
                *arg1 = *(result + (r9_1 << 3))

return result
