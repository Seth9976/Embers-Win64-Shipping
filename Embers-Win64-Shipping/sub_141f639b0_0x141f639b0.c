// 函数: sub_141f639b0
// 地址: 0x141f639b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
void* rax = arg1[0x88]

if (rax != 0)
    int64_t* r9_1 = *(rax + 0x50)
    
    if (r9_1 != 0 && arg2 s>= 0)
        int64_t rcx = sx.q(*(rax + 0x90))
        
        if (rcx.d s>= 0 && rcx.d s< r9_1[1].d)
            int32_t r8 = 0
            int32_t rbx = 0
            void* r9_2 = *(*r9_1 + (rcx << 3))
            int64_t r11 = sx.q(*(r9_2 + 0x30))
            
            if (r11 s> 0)
                void* rax_2 = *(r9_2 + 0x28)
                void* r9_3 = r9_2 + 0x10
                int64_t rdx = 0
                
                if (rax_2 != 0)
                    r9_3 = rax_2
                
                void* rcx_1 = nullptr
                
                do
                    if (*(rcx_1 + r9_3 + 0x14) != 0)
                        r8 += *(rcx_1 + r9_3 + 8)
                        
                        if (arg2 s< r8)
                            int64_t result = (*(*arg1 + 0x548))(arg1, zx.q(*(rcx_1 + r9_3)), r8)
                            *arg3 = rbx
                            return result
                    
                    rbx += 1
                    rdx += 1
                    rcx_1 += 0x18
                while (rdx s< r11)

return 0
