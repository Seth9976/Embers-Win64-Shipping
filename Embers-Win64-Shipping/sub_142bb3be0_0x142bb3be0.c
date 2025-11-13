// 函数: sub_142bb3be0
// 地址: 0x142bb3be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg2[6]
int32_t arg_10
int32_t rax_1 = (*(arg1 + 0x2a0))(arg1, 0x68646d78, arg2, &arg_10)
int32_t arg_8 = rax_1

if (rax_1 == 0)
    int32_t rdx = arg_10
    
    if (rdx u>= 8)
        int32_t rax_2 = sub_142b96670(arg2, rdx, arg1 + 0x440)
        arg_8 = rax_2
        int32_t rcx_1 = rax_2
        
        if (rax_2 == 0)
            void* rdi_1 = *(arg1 + 0x440)
            void* r15_2 = zx.q(arg_10) + rdi_1
            void* rdi_2 = rdi_1 + 8
            uint32_t rbp_3 = zx.d(*(rdi_1 + 2)) << 8 | zx.d(*(rdi_1 + 3))
            uint32_t rcx_8 =
                ((zx.d(*(rdi_2 - 4)) << 8 | zx.d(*(rdi_2 - 3))) << 8 | zx.d(*(rdi_2 - 2))) << 8
                | zx.d(*(rdi_2 - 1))
            uint64_t r13_1 = zx.q(rcx_8.w)
            
            if (rcx_8 u< 0xffff0000)
                r13_1 = zx.q(rcx_8)
            
            int32_t rbx_1 = 0
            
            if (rbp_3 u> 0xff || (rbp_3 != 0 && (r13_1 - 4).d u> 0xfffd))
                arg_8 = 3
            label_142bb3d57:
                sub_142b97020(arg2, arg1 + 0x440)
                rcx_1 = arg_8
                *(arg1 + 0x448) = 0
            else
                int64_t rax_8 = sub_142b99a90(rax, 1, 0, rbp_3, 0, &arg_8)
                rcx_1 = arg_8
                *(arg1 + 0x458) = rax_8
                
                if (rcx_1 != 0)
                    goto label_142bb3d57
                
                if (rbp_3 != 0)
                    do
                        void* r8_2 = rdi_2 + r13_1
                        
                        if (r8_2 u> r15_2)
                            break
                        
                        char rax_9 = *rdi_2
                        rdi_2 = r8_2
                        uint64_t rdx_1 = zx.q(rbx_1)
                        rbx_1 += 1
                        *(rdx_1 + *(arg1 + 0x458)) = rax_9
                    while (rbx_1 u< rbp_3)
                    
                    rcx_1 = arg_8
                
                *(arg1 + 0x448) = arg_10
                *(arg1 + 0x44c) = rbx_1
                *(arg1 + 0x450) = r13_1.d
        
        return zx.q(rcx_1)

return 0
