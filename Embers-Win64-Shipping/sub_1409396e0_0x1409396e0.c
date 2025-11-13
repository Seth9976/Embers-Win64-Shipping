// 函数: sub_1409396e0
// 地址: 0x1409396e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_8 = arg1
uint64_t result = zx.q(*(arg4 + 0x70))
int64_t* rbx = arg3

if (result.d s> 0)
    void* rsi_1 = arg4 + 8
    void* rdi_1 = rsi_1 + 0x10
    uint64_t i_1 = zx.q(result.d)
    int64_t r12_1 = 0
    void* var_68_1 = rdi_1
    uint64_t result_1 = result
    uint64_t i
    
    do
        *(arg4 + 0x5c)
        *(arg4 + 0x58)
        void* rax_1 = sub_1409273d0(sub_140927250(arg1, *(arg4 + 0x68) + r12_1), rbx)
        int32_t r11_1 = *(rdi_1 + 0x18)
        int32_t rcx_1 = 0
        int32_t var_c0_1 = 0
        int32_t var_bc_1 = 1
        int32_t r8_1 = 0
        void* var_b8_1 = rdi_1
        int32_t var_b0_1 = 0xffffffff
        int64_t var_ac_1 = 0
        
        if (r11_1 != 0)
            void* rax_2 = *(rdi_1 + 0x10)
            void* r9_1 = rdi_1
            
            if (rax_2 != 0)
                r9_1 = rax_2
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(r11_1 - 1)
            int32_t rdx_5 = *r9_1
            
            if (rdx_5 != 0)
            label_1409397d8:
                int32_t rax_9 = neg.d(rdx_5) & rdx_5
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_bc_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_1
                
                var_ac_1.d = r8_1 - rax_10 + 0x1f
                
                if (r8_1 - rax_10 + 0x1f s> r11_1)
                    var_ac_1.d = r11_1
            else
                while (true)
                    int64_t rdx_6 = sx.q(rcx_1)
                    r8_1 += 0x20
                    rcx_1 += 1
                    var_ac_1:4.d = r8_1
                    var_c0_1 = rcx_1
                    
                    if (rdx_6.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                    int32_t var_b0_2 = 0xffffffff
                    
                    if (rdx_5 != 0)
                        goto label_1409397d8
                
                var_ac_1.d = r11_1
        
        int512_t zmm2
        zmm2.o = 0xffffffff
        int128_t var_48_1 = 0xffffffff
        double var_58_1[0x2] = var_c0_1.o
        double var_98[0x2] = rsi_1.o
        int64_t var_78_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        
        if (0 s< r11_1)
            int32_t j = var_58_1[1]:4.d
            
            do
                int64_t rdx_7 = sx.q(j) * 5
                int64_t rcx_3 = *var_98[0]
                int64_t rbx_2 = *(rcx_3 + (rdx_7 << 3))
                int64_t* rsi_2 = rcx_3 + (rdx_7 << 3)
                void* const rcx_7
                
                if (*(rax_1 + 0x30) == *(rax_1 + 0x5c))
                label_1409398d0:
                    rcx_7 = nullptr
                else
                    int32_t rax_16 = sub_140b5ead0(rbx_2.d) + rbx_2:4.d
                    void* r8_3 = rax_1 + 0x60
                    void* rcx_5 = *(r8_3 + 8)
                    
                    if (rcx_5 != 0)
                        r8_3 = rcx_5
                    
                    int32_t rax_18 = *(r8_3 + (((sx.q(*(rax_1 + 0x70)) - 1) & sx.q(rax_16)) << 2))
                    
                    if (rax_18 == 0xffffffff)
                    label_1409398d0_1:
                        rcx_7 = nullptr
                    else
                        int64_t r8_4 = *(rax_1 + 0x28)
                        
                        while (true)
                            int64_t rdx_11 = sx.q(rax_18) * 5
                            rcx_7 = r8_4 + (rdx_11 << 3)
                            
                            if (*(r8_4 + (rdx_11 << 3)) == rbx_2)
                                break
                            
                            rax_18 = *(rcx_7 + 0x20)
                            
                            if (rax_18 == 0xffffffff)
                                goto label_1409398d0_2
                        
                        if (rax_18 == 0xffffffff)
                        label_1409398d0_2:
                            rcx_7 = nullptr
                
                void* rbx_3 = rcx_7 + 8
                
                if (rcx_7 == 0)
                    rbx_3 = nullptr
                
                if (rbx_3 == 0)
                    sub_140917800(rax_1 + 0x28, rsi_2, &rsi_2[1])
                else
                    int32_t rax_19 = rsi_2[1].d
                    
                    if (*rbx_3 != rax_19 || rax_19 != 1)
                        sub_14093ccd0(rbx_3, &rsi_2[1])
                    else
                        int32_t var_c8
                        sub_1409401f0(&rsi_2[1], &var_c8)
                        int32_t arg_20
                        sub_1409401f0(rbx_3, &arg_20)
                        int32_t rcx_10 = *(arg4 + 0x58)
                        int32_t rax_20
                        
                        if (rcx_10 == 1)
                            rax_20.b = var_c8 s< arg_20
                        label_14093992a:
                            
                            if (rax_20.b != 0)
                                sub_14093ccd0(rbx_3, &rsi_2[1])
                        else
                            if (rcx_10 == 2)
                                rax_20.b = var_c8 s> arg_20
                                goto label_14093992a
                            
                            sub_14093ccd0(rbx_3, &rsi_2[1])
                
                var_58_1[1].d &= not.d(var_98[1]:4.d)
                sub_14059bdd0(&var_98[1])
                j = var_58_1[1]:4.d
            while (j s< *(var_58_1[0] + 0x18))
            
            i_1 = result_1
            rsi_1 = arg4 + 8
            rdi_1 = var_68_1
        
        rbx = arg3
        r12_1 += 8
        arg1 = arg_8
        i = i_1
        i_1 -= 1
        result_1 = i_1
    while (i != 1)

result.b = 1
return result
