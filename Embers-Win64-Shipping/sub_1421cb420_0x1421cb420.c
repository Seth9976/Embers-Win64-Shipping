// 函数: sub_1421cb420
// 地址: 0x1421cb420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x18)

if (rcx != 0 && arg2 s>= 0 && arg2 s< *(rcx + 0x418))
    int64_t r11_1 = sx.q(arg2) << 3
    
    if (*(r11_1 + *(rcx + 0x410)) != 0)
        int64_t r8_1 = 0
        void* rdx = *(arg1 + 0x1e8)
        int64_t r10_1 = sx.q(*(arg1 + 0x1f0)) << 3
        uint64_t r10_2 = r10_1 u>> 3
        
        if (rdx u> r10_1 + rdx)
            r10_2 = 0
        
        if (r10_2 != 0)
            do
                rdx += 8
                r8_1 += 1
                *(rdx - 8) = *(r11_1 + *(*(arg1 + 0x18) + 0x410))
            while (r8_1 != r10_2)

uint64_t result = *(arg1 + 0x28)

if (result != 0)
    void* r14_1 = *(result + 0x30)
    
    if (r14_1 != 0)
        void* rbp_1 = *(arg1 + 0x18)
        
        if (rbp_1 != 0)
            void* r15_1 = *(rbp_1 + 0x408)
            
            if (r15_1 != 0)
                result = zx.q(*(r14_1 + 0x110))
                
                if (result.d s> 0)
                    int64_t rbx_1 = sx.q(*(arg1 + 0x1f0))
                    
                    if (result.d s> rbx_1.d)
                        *(arg1 + 0x1f0) = result.d
                        
                        if (result.d s> *(arg1 + 0x1f4))
                            sub_1405a4d70(arg1 + 0x1e8)
                        
                        result =
                            memset(*(arg1 + 0x1e8) + (rbx_1 << 3), 0, sx.q(result.d - rbx_1.d) << 3)
                    else if (result.d s< rbx_1.d && result.d != rbx_1.d)
                        *(arg1 + 0x1f0) = result.d
                        result = sub_1405c53d0(arg1 + 0x1e8)
                    
                    int32_t i = 0
                    
                    if (*(r14_1 + 0x110) s> 0)
                        int64_t* r9_1 = nullptr
                        
                        do
                            int64_t rcx_5 = sx.q(*(r15_1 + 0x100))
                            int32_t r8_4 = 0
                            int64_t rdx_2 = 0
                            
                            if (rcx_5.d s> 0)
                                uint64_t result_1 = *(r15_1 + 0xf8)
                                result = result_1
                                
                                do
                                    if (*(r9_1 + *(r14_1 + 0x108)) == *result)
                                        result = *(result_1 + rdx_2 * 0x10 + 8)
                                        *(r9_1 + *(arg1 + 0x1e8)) = result
                                        
                                        if (rdx_2 s>= 0 && r8_4 s< *(rbp_1 + 0x418))
                                            result = *(rbp_1 + 0x410)
                                            int64_t rcx_7 = *(result + (rdx_2 << 3))
                                            
                                            if (rcx_7 != 0)
                                                result = *(arg1 + 0x1e8)
                                                *(r9_1 + result) = rcx_7
                                        
                                        break
                                    
                                    r8_4 += 1
                                    rdx_2 += 1
                                    result += 0x10
                                while (rdx_2 s< rcx_5)
                            
                            i += 1
                            r9_1 = &r9_1[1]
                        while (i s< *(r14_1 + 0x110))

return result
