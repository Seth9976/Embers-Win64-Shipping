// 函数: sub_141dd0860
// 地址: 0x141dd0860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x60))
int64_t r11 = sx.q(arg2)

if (result.d != *(arg1 + 0x8c))
    void* r10_1 = arg1 + 0x90
    void* r8_1 = *(r10_1 + 8)
    
    if (r8_1 != 0)
        r10_1 = r8_1
    
    result = zx.q(*(r10_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & r11) << 2)))
    
    if (result.d != 0xffffffff)
        int64_t rcx = *(arg1 + 0x58)
        int64_t r8_2
        
        while (true)
            r8_2 = sx.q(result.d)
            int64_t rdx = r8_2 * 9
            
            if (*(rcx + (rdx << 3)) == r11.d)
                break
            
            result = zx.q(*(rcx + (rdx << 3) + 0x40))
            
            if (result.d == 0xffffffff)
                return result
        
        if (result.d != 0xffffffff)
            result = r8_2 * 9
            void* rdi_1 = rcx + (result << 3)
            
            if (rdi_1 != 0 && rdi_1 != -4)
                void* const rbx_1 = *(arg1 + 0x20)
                
                if (rbx_1 == 0)
                    rbx_1 = nullptr
                else
                    void* rax = sub_1425be5e0()
                    void* rdx_1 = *(rbx_1 + 0x10)
                    result = sx.q(*(rax + 0x38))
                    
                    if (result.d s> *(rdx_1 + 0x38))
                        rbx_1 = nullptr
                    else
                        uint64_t result_1 = result
                        result = *(rdx_1 + 0x30)
                        
                        if (*(result + (result_1 << 3)) != rax + 0x30)
                            rbx_1 = nullptr
                
                int128_t zmm6
                zmm6.d = arg3.d f+ *(rbx_1 + 0x520)
                *(rdi_1 + 0x2c) = zmm6.d

return result
