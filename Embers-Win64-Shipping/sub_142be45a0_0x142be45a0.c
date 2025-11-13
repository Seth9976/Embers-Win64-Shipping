// 函数: sub_142be45a0
// 地址: 0x142be45a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2

if (arg2 u>= 0x10000)
    return 0

if ((arg1[4].b & 1) == 0)
    return sub_142be9180(arg1, &arg_10, 0)

void* r8 = arg1[3]
uint32_t rsi = 0
uint32_t rbx = 0
void* r13 = *arg1
uint64_t rcx_3 = (zx.q(zx.d(*(r8 + 6)) << 8) | zx.q(*(r8 + 7))) & 0xfffffffe
uint32_t rbp_1 = rcx_3.d u>> 1

if (rbp_1 != 0 && arg2 u<= 0xffff)
    int32_t rdi_1 = 0
    uint64_t rdx = zx.q(rcx_3.d)
    
    if (rbp_1 != 0)
        uint64_t rax_2 = rcx_3 * 2
        void* r15_1 = r8 + 0xd
        void* r14_1 = 1 - rdx
        void* r11_3 = r8 + 0xe + rcx_3 + rax_2
        void* var_48_1 = r14_1
        void* rcx_8 = 1 - rax_2
        void* var_58_1 = rcx_8
        int64_t r8_1 = neg.q(rdx) * 2
        int64_t var_50_1 = r8_1
        
        do
            uint32_t rax_3 = zx.d(*(r15_1 + 2))
            r15_1 += 2
            r11_3 += 2
            uint32_t rdx_4 = zx.d(*(r15_1 - 1)) << 8 | rax_3
            uint32_t r10_3 = zx.d(*(r8_1 + r11_3)) << 8 | zx.d(*(rcx_8 + r11_3))
            
            if (arg2 u< r10_3)
                break
            
            if (arg2 u<= rdx_4)
                void* rcx_9 = r14_1 + r11_3
                uint16_t r14_3 = zx.w(*(neg.q(zx.q(rdx.d)) + r11_3)) << 8 | zx.w(*rcx_9)
                uint32_t r8_3 = zx.d(*(rcx_9 + rax_2 - rdx)) | zx.d(*r11_3) << 8
                
                if (rdi_1 u>= rbp_1 - 1 && r10_3 == 0xffff && rdx_4 == r10_3 && r8_3 != 0
                        && r11_3 + 2 + zx.q(r8_3) u> zx.q(*(r13 + 0x298)) + *(r13 + 0x290))
                    rbx = zx.d(1 + arg2.w)
                    break
                
                if (r8_3 != 0xffff)
                    if (r8_3 == 0)
                        rbx = zx.d(r14_3 + arg2.w)
                        break
                    
                    uint64_t rax_15 = zx.q(r8_3 + ((arg2 - r10_3) << 1))
                    rbx = zx.d(*(rax_15 + r11_3)) << 8 | zx.d(*(rax_15 + r11_3 + 1))
                    
                    if (rbx != 0)
                        rbx = zx.d(r14_3 + rbx.w)
                        
                        if (rbx u>= *(r13 + 0x10))
                            rbx = 0
                    
                    break
                
                rcx_8 = var_58_1
                r8_1 = var_50_1
                r14_1 = var_48_1
            
            rdi_1 += 1
        while (rdi_1 u< rbp_1)
    
    rsi = rbx

return zx.q(rsi)
