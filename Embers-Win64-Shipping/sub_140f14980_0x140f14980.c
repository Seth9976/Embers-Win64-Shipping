// 函数: sub_140f14980
// 地址: 0x140f14980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg2

if (arg2 s< 0 || arg2 s>= *(arg1 + 0x20))
    int64_t rax
    rax.b = 0
    return rax

sub_140f14730(arg1 + 0x18, arg2, 1, 1)
int32_t rax_1

if ((*(arg1 + 0x88) & 1) == 0)
    rax_1 = *(arg1 + 0x30)
    int32_t rbp_1 = 0
    int128_t zmm6 = zx.o(0)
    int128_t zmm7 = zx.o(0)
    
    if (rax_1 s> 0)
        int64_t rdi_1 = 0
        int32_t r14_1 = 1
        
        do
            int64_t* rcx_1 = *(arg1 + 0x28)
            int32_t rdx = *(rcx_1 + rdi_1 + 0x54)
            
            if (rdx == rbx)
                zmm7.d = zmm7.d f+ *(rcx_1 + rdi_1 + 0x3c)
                
                if (r14_1 s>= 0 && r14_1 s< rax_1)
                    zmm6.d = zmm6.d f+ *(rcx_1 + rdi_1 + 0x8c) f- *(rcx_1 + rdi_1 + 0x34)
                
                int64_t rsi_1 = sx.q(rbp_1)
                void* r15_1 = rsi_1 * 0x58
                int64_t* rbx_1 = r15_1 + rcx_1
                sub_14094b310(&rbx_1[4])
                sub_14094b310(&rbx_1[2])
                sub_140596d80(rbx_1)
                int32_t rcx_5 = *(arg1 + 0x30)
                int32_t rax_3 = rcx_5 - rbp_1
                
                if (rax_3 != 1)
                    void* rcx_6 = *(arg1 + 0x28)
                    memmove(rcx_6 + r15_1, sx.q(r14_1) * 0x58 + rcx_6, (rax_3 - 1) * 0x58)
                    rcx_5 = *(arg1 + 0x30)
                
                *(arg1 + 0x30) = rcx_5 - 1
                sub_14083ac10(arg1 + 0x28)
                
                if (*(arg1 + 0x40) != *(arg1 + 0x6c))
                    void* rax_9 = *(arg1 + 0x78)
                    void* r10_1 = arg1 + 0x70
                    int64_t r11_2 = sx.q(*(arg1 + 0x80)) - 1
                    
                    if (rax_9 != 0)
                        r10_1 = rax_9
                    
                    int32_t rdx_3 = *(r10_1 + ((rsi_1 & r11_2) << 2))
                    
                    if (rdx_3 != 0xffffffff)
                        int64_t r8_2 = *(arg1 + 0x38)
                        
                        while (true)
                            int64_t rax_10 = sx.q(rdx_3)
                            int64_t rcx_9 = rax_10 * 3
                            
                            if (*(r8_2 + (rcx_9 << 2)) == rbp_1)
                                int64_t rbx_2 = rax_10 * 3
                                int64_t rax_12 = sx.q(*(r8_2 + (rbx_2 << 2) + 8)) & r11_2
                                void* rcx_10 = r10_1 + (rax_12 << 2)
                                int32_t i = *(r10_1 + (rax_12 << 2))
                                
                                while (i != 0xffffffff)
                                    if (i == rdx_3)
                                        *rcx_10 = *(r8_2 + (rbx_2 << 2) + 4)
                                        break
                                    
                                    int64_t i_2 = sx.q(i)
                                    i = *(r8_2 + ((i_2 * 3 + 1) << 2))
                                    rcx_10 = r8_2 + ((i_2 * 3 + 1) << 2)
                                
                                sub_14090a460(arg1 + 0x38, rdx_3, 1)
                                break
                            
                            rdx_3 = *(r8_2 + (rcx_9 << 2) + 4)
                            
                            if (rdx_3 == 0xffffffff)
                                rbp_1 -= 1
                                r14_1 -= 1
                                rdi_1 -= 0x58
                                goto label_140f14bd1_1
                
                rbp_1 -= 1
                r14_1 -= 1
                rdi_1 -= 0x58
            label_140f14bd1:
                rbx = arg2
            else if (rdx s> rbx)
                float zmm0_1 = *(rcx_1 + rdi_1 + 0x34)
                *(rcx_1 + rdi_1 + 0x54) = rdx - 1
                *(rcx_1 + rdi_1 + 0x34) = zmm0_1 f- zmm6.d
                int64_t* i_1 = *(rcx_1 + rdi_1)
                
                for (void* rsi_5 = &i_1[sx.q(*(rcx_1 + rdi_1 + 8)) * 2]; i_1 != rsi_5; 
                        i_1 = &i_1[2])
                    int64_t* rcx_14 = *i_1
                    void arg_18
                    (*(*rcx_14 + 0x38))(rcx_14, &arg_18)
                    int64_t* rcx_15 = *i_1
                    arg3 = arg3 f- zmm6.d
                    (*(*rcx_15 + 0x30))(rcx_15, &arg_18)
                
            label_140f14bd1_1:
                rbx = arg2
            
            rax_1 = *(arg1 + 0x30)
            rbp_1 += 1
            r14_1 += 1
            rdi_1 += 0x58
        while (rbp_1 s< rax_1)
    
    *(arg1 + 0xb8) = *(arg1 + 0xb8) f- zmm7.d

rax_1.b = 1
return rax_1
