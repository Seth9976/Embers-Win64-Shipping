// 函数: sub_14122e850
// 地址: 0x14122e850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(arg2)

if (*(arg1 + 0x128) != *(arg1 + 0x154))
    void* r8_1 = *(arg1 + 0x160)
    void* r10_1 = arg1 + 0x158
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    int32_t rdx_1 = *(r10_1 + (((sx.q(*(arg1 + 0x168)) - 1) & result) << 2))
    
    if (rdx_1 != 0xffffffff)
        int64_t rbx_1 = *(arg1 + 0x120)
        int64_t r8_2
        
        while (true)
            r8_2 = sx.q(rdx_1)
            int64_t rcx = r8_2 * 3
            
            if (*(rbx_1 + (rcx << 3)) == result.d)
                break
            
            rdx_1 = *(rbx_1 + (rcx << 3) + 0x10)
            
            if (rdx_1 == 0xffffffff)
                return result
        
        if (rdx_1 != 0xffffffff)
            void* rbx_2 = *(rbx_1 + r8_2 * 0x18 + 8)
            sub_1405c2fb0(arg1 + 0x120, rdx_1)
            
            if (*(rbx_2 + 0x30) s>= 0 && *(rbx_2 + 0x34) s>= 0 && *(rbx_2 + 0x38) s>= 0)
                int32_t rdx_2 = *(rbx_2 + 0x3c)
                
                if (rdx_2 s> 0)
                    int512_t zmm0
                    zmm0.o = zx.o(*(rbx_2 + 0x30))
                    int32_t r9_4 = *(rbx_2 + 0x38)
                    int64_t var_18 = (zmm0.o).q
                    int32_t var_10_1 = r9_4
                    
                    if (rdx_2 s> 1)
                        sub_14122f7d0(arg1 + 0x80, var_18.d, (var_18 u>> 0x20).d, r9_4, zmm0, 
                            rdx_2, rdx_2, rdx_2)
                    
                    sub_14122ec00(arg1 + 0x30, &var_18)
            
            return j_sub_140a74f90(rbx_2)

return result
