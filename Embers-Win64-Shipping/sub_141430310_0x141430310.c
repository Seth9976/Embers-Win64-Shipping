// 函数: sub_141430310
// 地址: 0x141430310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp2
int32_t temp3
temp2:temp3 = muls.dp.d(0x2aaaaaab, arg5)
double zmm6[0x2] = arg2
uint64_t result = zx.q(temp2 u>> 0x1f)

if (arg5 == (temp2 + result.d) * 6)
    int64_t* rbx_1 = arg1 + 0x1248
    int32_t* r9_1 = &rbx_1[2]
    int32_t r11_1 = r9_1[6]
    int32_t i_2 = 3
    int64_t* var_b8_1 = rbx_1
    
    if (data_1439c7a38 s<= 3)
        i_2 = data_1439c7a38
    
    int32_t rcx = 0
    int32_t var_b0_1 = 0
    int32_t r8_1 = 0
    int32_t var_ac_1 = 1
    int32_t* var_a8 = r9_1
    int32_t var_a0_1 = 0xffffffff
    int64_t var_9c_1 = 0
    
    if (r11_1 != 0)
        int32_t* rax_1 = *(r9_1 + 0x10)
        
        if (rax_1 != 0)
            r9_1 = rax_1
        
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(r11_1 - 1)
        int32_t rdx_6 = *r9_1
        
        if (rdx_6 != 0)
        label_1414303f8:
            int32_t rax_8 = neg.d(rdx_6) & rdx_6
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_8)
            int32_t var_ac_2 = rax_8
            int32_t rax_9
            
            if (rax_8 == 0)
                rax_9 = 0x20
            else
                rax_9 = 0x1f - temp0_1
            
            var_9c_1.d = r8_1 - rax_9 + 0x1f
            
            if (r8_1 - rax_9 + 0x1f s> r11_1)
                var_9c_1.d = r11_1
        else
            while (true)
                int64_t rdx_7 = sx.q(rcx)
                r8_1 += 0x20
                rcx += 1
                var_9c_1:4.d = r8_1
                var_b0_1 = rcx
                
                if (rdx_7.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                    break
                
                rdx_6 = r9_1[rdx_7 + 1]
                var_a0_1 = 0xffffffff
                
                if (rdx_6 != 0)
                    goto label_1414303f8
            
            var_9c_1.d = r11_1
    
    int64_t* var_88_1 = rbx_1
    int128_t var_68_1 = 0xffffffff
    double var_78_1[0x2] = var_b0_1.o
    var_b0_1.o = rbx_1.o
    result = 0
    int64_t var_90_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
    var_a0_1.o = var_78_1
    
    if (0 s< r11_1)
        int32_t var_94
        int32_t r14_1 = var_94
        
        while (true)
            int64_t* r13_1 = var_b0_1.q
            int64_t r12_1 = sx.q(r14_1) * 0x70
            void* rdi_2 = *r13_1 + r12_1
            
            if (not(arg4.d f<= *(rdi_2 + 0x54)))
                int32_t i_1 = i_2
                
                if (i_2 != 0)
                    int32_t i
                    
                    do
                        if (arg5 u>= i_1 - 1)
                            uint64_t rdx_9 = zx.q(mods.dp.d(sx.q(arg5 - i_1 + 1), i_2))
                            
                            if (*(rdi_2 + (rdx_9 << 2) + 0x38) != arg5 - i_1 + 1)
                                zmm6 = sub_1413de930((zx.q(rdx_9.d) << 4) + 8 + rdi_2)
                        
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                rbx_1 = var_b8_1
            
            double zmm0[0x2] = *(r12_1 + *r13_1 + 0x54)
            
            if (zmm0[0].d f< arg3.d || not(zmm0[0].d f<= zmm6[0].d))
                zmm6 = sub_141425b50(rbx_1, r14_1)
            
            var_9c_1:4.d &= not.d(var_a8:4.d)
            sub_14059bdd0(&var_a8)
            result = var_a0_1.q
            r14_1 = var_94
            
            if (r14_1 s>= *(result + 0x18))
                break
            
            rbx_1 = var_88_1
            var_b8_1 = rbx_1

return result
