// 函数: sub_1419e2910
// 地址: 0x1419e2910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = (*(*arg1 + 0x18))()
int32_t rsi = result.d

if (result.d s> 0)
    int64_t r9_1 = *(arg1[1] + 0x440)
    int64_t arg_8 = r9_1
    uint32_t rdx_1 = (r9_1 u>> 4).d
    int32_t r8_1 = (0x9e3779b9 - rdx_1) ^ rdx_1 << 8
    int32_t r10_3 = neg.d(r8_1 + rdx_1) ^ r8_1 u>> 0xd
    int32_t rdx_4 = (rdx_1 - r8_1 - r10_3) ^ r10_3 u>> 0xc
    int32_t r8_4 = (r8_1 - rdx_4 - r10_3) ^ rdx_4 << 0x10
    int32_t r10_6 = (r10_3 - r8_4 - rdx_4) ^ r8_4 u>> 5
    int32_t rdx_7 = (rdx_4 - r8_4 - r10_6) ^ r10_6 u>> 3
    int32_t r8_7 = (r8_4 - rdx_7 - r10_6) ^ rdx_7 << 0xa
    int32_t r10_9 = (r10_6 - r8_7 - rdx_7) ^ r8_7 u>> 0xf
    
    if (arg3[1].d != *(arg3 + 0x34))
        void* rcx_3 = arg3[8]
        void* r8_9 = &arg3[7]
        
        if (rcx_3 != 0)
            r8_9 = rcx_3
        
        int32_t i = *(r8_9 + (((sx.q(arg3[9].d) - 1) & sx.q(r10_9)) << 2))
        
        if (i != 0xffffffff)
            int64_t r8_10 = *arg3
            
            do
                int64_t rdx_11 = sx.q(i) * 3
                void* rcx_5 = r8_10 + (rdx_11 << 3)
                
                if (*(r8_10 + (rdx_11 << 3)) == r9_1)
                    if (i == 0xffffffff || rcx_5 == 0)
                        break
                    
                    *(rcx_5 + 8) += rsi
                    return rcx_5 + 8
                
                i = *(rcx_5 + 0x10)
            while (i != 0xffffffff)
    
    result = sub_1419de140(arg3, r10_9, &arg_8)
    *result += rsi

return result
