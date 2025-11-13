// 函数: sub_141da6d60
// 地址: 0x141da6d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x368))
void* rbx = arg1

if (result.d != *(arg1 + 0x394))
    void* r15_1 = arg1 + 0x360
    void* r14_1 = r15_1 + 0x10
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    void* arg_10 = r14_1
    void* arg_18 = r15_1
    
    do
        int32_t r11_1 = *(r14_1 + 0x18)
        int32_t rcx = 0
        int64_t r12_1 = 0
        int32_t rdi_1 = 0
        int64_t var_118
        __builtin_memset(&var_118, 0, 0x14)
        int32_t rsi_1 = 0
        int32_t r13_1 = 0
        int32_t var_104_1 = 1
        int32_t r8_1 = 0
        void* var_100_1 = r14_1
        int32_t var_f8_1 = 0xffffffff
        zmm6 = zx.o(0)
        int64_t var_f4_1 = 0
        int32_t var_108_1
        
        if (r11_1 != 0)
            void* rax = *(r14_1 + 0x10)
            void* r9_1 = r14_1
            
            if (rax != 0)
                r9_1 = rax
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_3 = *r9_1
            
            if (rdx_3 != 0)
            label_141da6e5b:
                int32_t rax_7 = neg.d(rdx_3) & rdx_3
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
                int32_t var_104_2 = rax_7
                int32_t rax_8
                
                if (rax_7 == 0)
                    rax_8 = 0x20
                else
                    rax_8 = 0x1f - temp0_2
                
                var_f4_1.d = r8_1 - rax_8 + 0x1f
                
                if (r8_1 - rax_8 + 0x1f s> r11_1)
                    var_f4_1.d = r11_1
            else
                while (true)
                    int64_t rdx_4 = sx.q(rcx)
                    r8_1 += 0x20
                    rcx += 1
                    var_f4_1:4.d = r8_1
                    var_108_1 = rcx
                    
                    if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                    int32_t var_f8_2 = 0xffffffff
                    
                    if (rdx_3 != 0)
                        goto label_141da6e5b
                
                var_f4_1.d = r11_1
        
        void* var_58_1 = r15_1
        int16_t var_b0_1 = 0
        int128_t var_90_1 = 0xffffffff
        int128_t zmm0
        zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int128_t var_c8_1 = zmm0
        int128_t var_e8 = r15_1.o
        int128_t var_d8_1 = var_108_1.o
        int128_t var_60 = zmm0
        
        if (0 s< r11_1)
            int32_t i = var_d8_1:0xc.d
            
            do
                int64_t* r14_2 = var_e8.q
                int64_t rbx_2
                
                if (rdi_1 s> 1)
                    rbx_2 = sx.q(i) * 0x30
                
                if (rdi_1 s<= 1 || not(zmm6.q f<= *(rbx_2 + *r14_2 + 0x20)))
                    rbx_2 = sx.q(i) * 0x30
                    int64_t* rcx_3 = *r14_2 + rbx_2
                    zmm6 = zx.o(rcx_3[4])
                    
                    if (&var_118 != rcx_3)
                        rdi_1 = rcx_3[1].d
                        int64_t r15_2 = *rcx_3
                        int64_t var_110_1
                        var_110_1.d = rdi_1
                        
                        if (rdi_1 != 0 || rsi_1 != 0)
                            sub_1405a4c70(&var_118, rdi_1, rsi_1)
                            r12_1 = var_118
                            memcpy(r12_1, r15_2, rdi_1 * 2)
                            rsi_1 = var_110_1:4.d
                            rdi_1 = var_110_1.d
                        else
                            var_110_1:4.d = rsi_1
                
                int64_t* rcx_6 = *(rbx_2 + *r14_2 + 0x10)
                r13_1 += *((*(*rcx_6 + 0x30))(rcx_6) + 8)
                var_d8_1:8.d &= not.d(var_e8:0xc.d)
                sub_14059bdd0(&var_e8:8)
                i = var_d8_1:0xc.d
            while (i s< *(var_d8_1.q + 0x18))
            
            if (var_b0_1.b != 0 && var_b0_1:1.b != 0)
                sub_1419ca2d0(r15_1, *(r15_1 + 8) - *(r15_1 + 0x34), 1)
            
            rbx = arg1
            r14_1 = arg_10
            r15_1 = arg_18
        
        result = data_143f38868
        
        if (r13_1 u<= *result)
            if (r12_1 != 0)
                result = sub_140a74f90(r12_1)
            
            break
        
        sub_141dae960(r15_1, &var_118)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        result = zx.q(*(rbx + 0x368))
    while (result.d != *(rbx + 0x394))

return result
