// 函数: sub_142c44450
// 地址: 0x142c44450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* result = sub_140dc0ea0(1, 0x10)

if (result != 0)
    int32_t rdx_1 = *(arg1 + 0x38)
    int32_t r10_1 = 0
    int32_t rdx_2 = rdx_1 - 1
    int64_t r11_1 = *(arg1 + 0x40)
    int32_t r8_1 = 0
    
    if (rdx_1 - 1 s>= 0)
        do
            uint64_t rax_1 = zx.q((rdx_2 + r8_1) u>> 1)
            uint64_t rcx = zx.q(rax_1.d)
            int32_t r9_1 = *(r11_1 + rax_1 * 0x24)
            bool c_1 = r9_1 u< 0x72706866
            int32_t rax_3
            
            if (r9_1 == 0x72706866 || c_1)
                rax_3.b = c_1
            
            if ((r9_1 != 0x72706866 && not(c_1)) || rax_3 s< 0)
                rdx_2 = (rcx - 1).d
            else
                if (rax_3 s<= 0)
                    void* rax_4 = r11_1 + rcx * 0x24
                    
                    if (rax_4 != 0)
                        r10_1 = *(rax_4 + 0x1c)
                    
                    break
                
                r8_1 = (rcx + 1).d
        while (r8_1 s<= rdx_2)
    
    *result = r10_1
    int32_t rcx_2 = *(arg1 + 4)
    
    if (rcx_2 s> 0x4d6f6e67)
        if (rcx_2 != 0x4e6b6f6f && rcx_2 != 0x50686167 && rcx_2 != 0x50686c70
                && rcx_2 != 0x53797263)
            return result
    else if (rcx_2 != 0x4d6f6e67 && rcx_2 != 0x41646c6d && rcx_2 != 0x41726162
            && rcx_2 != 0x4d616e64 && rcx_2 != 0x4d616e69)
        return result
    
    void* rax_6 = sub_142c3ab00(arg1)
    *(result + 8) = rax_6
    
    if (rax_6 != 0)
        return result
    
    j_sub_140a74f90(result)

return 0
