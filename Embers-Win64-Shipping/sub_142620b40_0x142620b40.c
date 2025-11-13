// 函数: sub_142620b40
// 地址: 0x142620b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1
int64_t rax_1 = __security_cookie ^ &i_1
void* rax_2 = *arg1
int32_t r11 = 0
int64_t var_80 = arg4
int64_t rsi = arg3
uint32_t r15 = zx.d(*(rax_2 + 0x32))
uint64_t r10 = zx.q(*(rax_2 + 0x30))
int32_t rax_3 = arg2 * 2
int32_t var_a0 = rax_3
int32_t var_b4 = 0

if (r15 != 0)
    int64_t rcx = 0
    int64_t var_88_1 = 0
    int64_t rdx = sx.q(r10.d)
    
    do
        int32_t i = 0
        i_1 = 0
        
        if (r10.d != 0)
            int64_t rdi_1 = rcx
            int64_t var_a8_1 = rcx
            
            do
                uint32_t rbp_3 = zx.d(*(rsi + (rdi_1 << 1)))
                uint64_t r12_1 = zx.q(rbp_3)
                
                if (rbp_3 s> rax_3)
                    int32_t r13_1 = 2
                    uint32_t rdx_1 = rbp_3
                    int128_t var_68
                    __builtin_memcpy(&var_68, 
                        "\xff\xff\xff\xff\x00\x00\x00\x00\x01\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
                    "00\x01\x00\x00\x00\x00\x00\x00\x00\xff\xff\xff\xff", 
                        0x20)
                    int64_t j_1 = 2
                    int32_t rbx_1 = 1
                    int64_t r14_1 = 0
                    int64_t j
                    
                    do
                        uint64_t rcx_1 = (zx.q(r14_1.d) & 3) << 2
                        int32_t r9_1 = *(&var_68 + rcx_1) + i
                        int128_t var_58
                        int32_t r8_1 = *(&var_58 + rcx_1) + r11
                        char* r11_1
                        
                        if (r9_1 s>= 0 && r9_1 s< r10.d && r8_1 s>= 0 && r8_1 s< r15)
                            r11_1 = arg1[4]
                        
                        int128_t var_78
                        uint32_t rdx_7
                        
                        if (r9_1 s< 0 || r9_1 s>= r10.d || r8_1 s< 0 || r8_1 s>= r15
                                || (r11_1[rdi_1] & rbx_1.b) == 0)
                            rdx_7 = rdx_1 + (r12_1 << 1).d
                        else
                            var_78 = data_142fc59d0
                            int64_t rdi_2 = sx.q(r8_1 * r10.d + r9_1)
                            uint64_t rax_11 = zx.q(r13_1 - 1) & 3
                            uint32_t rsi_2 = zx.d(*(rsi + (rdi_2 << 1))) + rdx_1
                            int32_t r9_2 = r9_1 + *(&var_78 + (rax_11 << 2))
                            bool cond:0_1 = r9_1 + *(&var_78 + (rax_11 << 2)) s< 0
                            var_78 = data_14344e350
                            int32_t rdx_2
                            int32_t rdx_3
                            
                            if (not(cond:0_1) && r9_2 s< r10.d)
                                rdx_2 = *(&var_78 + (rax_11 << 2))
                                rdx_3 = rdx_2 + r8_1
                            
                            if (cond:0_1 || r9_2 s>= r10.d || rdx_2 + r8_1 s< 0 || rdx_3 s>= r15
                                    || (r11_1[rdi_2] & (1 << rax_11.b).b) == 0)
                                rdi_1 = var_a8_1
                                rdx_7 = zx.d(rbp_3.w) + rsi_2
                                rsi = arg3
                            else
                                rdi_1 = var_a8_1
                                rdx_7 = zx.d(*(arg3 + (sx.q(r9_2 + rdx_3 * r10.d) << 1))) + rsi_2
                                rsi = arg3
                        
                        uint64_t rcx_5 = (zx.q(r14_1.d + 1) & 3) << 2
                        int32_t r9_4 = i_1 + *(&var_68 + rcx_5)
                        int32_t r8_3 = var_b4 + *(&var_58 + rcx_5)
                        char* r11_2
                        
                        if (r9_4 s>= 0 && r9_4 s< r10.d && r8_3 s>= 0 && r8_3 s< r15)
                            r11_2 = arg1[4]
                        
                        if (r9_4 s< 0 || r9_4 s>= r10.d || r8_3 s< 0 || r8_3 s>= r15
                                || (r11_2[rdi_1] & (rol.d(rbx_1, 1)).b) == 0)
                            rdx_1 = rdx_7 + (r12_1 << 1).d
                        else
                            var_78 = data_142fc59d0
                            int64_t rdi_3 = sx.q(r8_3 * r10.d + r9_4)
                            uint64_t rax_22 = zx.q(r13_1) & 3
                            uint64_t rcx_8 = zx.q(rax_22.d)
                            int32_t rax_23 = *(&var_78 + (rax_22 << 2))
                            uint32_t rsi_4 = zx.d(*(rsi + (rdi_3 << 1))) + rdx_7
                            int32_t r9_5 = r9_4 + rax_23
                            var_78 = data_14344e350
                            int32_t rax_24
                            int32_t rax_25
                            
                            if (r9_4 + rax_23 s>= 0 && r9_5 s< r10.d)
                                rax_24 = *(&var_78 + (rcx_8 << 2))
                                rax_25 = rax_24 + r8_3
                            
                            if (r9_4 + rax_23 s< 0 || r9_5 s>= r10.d || rax_24 + r8_3 s< 0
                                    || rax_25 s>= r15 || (r11_2[rdi_3] & (1 << rcx_8.b).b) == 0)
                                rdx_1 = zx.d(rbp_3.w) + rsi_4
                            else
                                rdx_1 = zx.d(*(arg3 + (sx.q(rax_25 * r10.d + r9_5) << 1))) + rsi_4
                        
                        rsi = arg3
                        r14_1 += 2
                        rdi_1 = var_a8_1
                        r13_1 += 2
                        i = i_1
                        r11 = var_b4
                        rbx_1 = rol.d(rbx_1, 2)
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                    arg4 = var_80
                    rbp_3 = (rdx_1 + 5) s/ 9
                    rax_3 = var_a0
                
                i += 1
                *(arg4 + (rdi_1 << 1)) = rbp_3.w
                rdi_1 += 1
                i_1 = i
                var_a8_1 = rdi_1
            while (i s< r10.d)
            
            rcx = var_88_1
            rdx = r10
        
        r11 += 1
        rcx += rdx
        var_b4 = r11
        var_88_1 = rcx
    while (r11 s< r15)

__security_check_cookie(rax_1 ^ &i_1)
return arg4
