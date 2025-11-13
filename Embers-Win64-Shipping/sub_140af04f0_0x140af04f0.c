// 函数: sub_140af04f0
// 地址: 0x140af04f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
char r12 = arg2

if (*(arg1 + 0x5a) != 1)
    if (*(arg1 + 0x58) == 0)
        int32_t r9_1 = 0
        int32_t var_b8 = 0
        int32_t r11_1 = *(arg1 + 0x30)
        void* r8 = arg1 + 0x18
        int32_t var_b4_1 = 1
        int32_t rcx = 0
        void* var_b0_1 = r8
        int32_t var_a8_1 = 0xffffffff
        int32_t var_a4_1 = 0
        int32_t var_a0_1 = 0
        
        if (r11_1 != 0)
            void* rax = *(r8 + 0x10)
            
            if (rax != 0)
                r8 = rax
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_2 = *r8
            int32_t var_a4_3
            
            if (rdx_2 != 0)
            label_140af05a8:
                int32_t rax_7 = neg.d(rdx_2) & rdx_2
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
                int32_t var_b4_2 = rax_7
                int32_t rax_8
                
                if (rax_7 == 0)
                    rax_8 = 0x20
                else
                    rax_8 = 0x1f - temp0_2
                
                int32_t var_a4_2 = rcx - rax_8 + 0x1f
                
                if (rcx - rax_8 + 0x1f s> r11_1)
                    var_a4_3 = r11_1
            else
                while (true)
                    int64_t rdx_3 = sx.q(r9_1)
                    rcx += 0x20
                    r9_1 += 1
                    int32_t var_a0_2 = rcx
                    var_b8 = r9_1
                    
                    if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_2 = *(r8 + (rdx_3 << 2) + 4)
                    var_a8_1 = 0xffffffff
                    
                    if (rdx_2 != 0)
                        goto label_140af05a8
                
                var_a4_3 = r11_1
        
        double zmm4[0x2] = var_a8_1.o
        void* var_30_1 = arg1 + 8
        char var_60_1 = 0
        double zmm3[0x2] = var_b8.o
        result = zmm3[0]
        int128_t var_98 = (arg1 + 8).o
        double rcx_2 = zmm4[0]
        zmm4[0] = (_mm_unpackhi_pd(zmm4, zmm4[0])).q
        double var_78_1[0x2] = zmm4
        
        if ((rcx_2 u>> 0x20).d s< result[3].d)
            int32_t i = zmm3[1]:4.d
            
            do
                int32_t rdx_5 = arg3[1].d
                void** rsi_1 = var_98.q
                int32_t rax_10 = rdx_5 - 1
                
                if (rdx_5 == 0)
                    rax_10 = 0
                
                int32_t rax_12
                
                if (rax_10 != 0)
                    void* rcx_5 = sx.q(i) * 0x158 + *rsi_1
                    int16_t* rdx_6
                    
                    if (rdx_5 == 0)
                        rdx_6 = &data_142d40450
                    else
                        rdx_6 = *arg3
                    
                    int16_t* const rcx_6
                    
                    if (*(rcx_5 + 8) == 0)
                        rcx_6 = &data_142d40450
                    else
                        rcx_6 = *rcx_5
                    
                    rax_12, r8 = sub_140a54510(rcx_6, rdx_6)
                
                if (rax_10 == 0 || rax_12 == 0)
                    var_b8.q = 0
                    int64_t var_b0_2 = 0
                    int64_t* r14_1 = sx.q(i) * 0x158
                    void* rax_14 = *rsi_1
                    int16_t* rdi_1
                    
                    if (*(r14_1 + rax_14 + 8) == 0)
                        rdi_1 = &data_142d40450
                    else
                        rdi_1 = *(r14_1 + rax_14)
                    
                    int64_t var_c8 = 0
                    int32_t rdx_7 = 0
                    int32_t var_c0_1 = 0
                    int32_t rcx_7 = 0
                    int32_t var_bc_1 = 0
                    
                    if (rdi_1 != 0 && *rdi_1 != 0)
                        int64_t rbx_2 = -1
                        
                        do
                            rbx_2 += 1
                        while (rdi_1[rbx_2] != 0)
                        
                        if (rbx_2.d + 1 s> 0)
                            sub_1405947f0(&var_c8, rbx_2.d + 1)
                            rcx_7 = var_bc_1
                            rdx_7 = var_c0_1
                        
                        int32_t rax_15 = rbx_2.d + 1 + rdx_7
                        int32_t var_c0_2 = rax_15
                        
                        if (rax_15 s> rcx_7)
                            sub_140594770(&var_c8)
                        
                        UnDecorator::getReferenceType(var_c8, rdi_1, (rbx_2.d + 1) * 2)
                    
                    var_b8.q = 0
                    int64_t var_b0_3 = 0
                    r8.b = 1
                    sub_140b030b0(*rsi_1 + 0x10 + r14_1, &var_c8, r8.b, &var_b8)
                    int64_t rcx_14 = var_b8.q
                    
                    if (rcx_14 != 0)
                        sub_140a74f90(rcx_14)
                    
                    int64_t rcx_15 = var_c8
                    
                    if (rcx_15 != 0)
                        sub_140a74f90(rcx_15)
                
                zmm3[1].d &= not.d(var_98:0xc.d)
                sub_14059bdd0(&var_98:8)
                result = zmm3[0]
                i = zmm3[1]:4.d
            while (i s< result[3].d)
            
            r12 = arg2
            char var_5f
            
            if (var_60_1 != 0 && var_5f != 0)
                r8.b = 1
                result = sub_140aed150(arg1 + 8, *(arg1 + 0x10) - *(arg1 + 0x3c), r8.b)
    
    if (r12 != 0 && *(arg1 + 0x58) == 0)
        int32_t rdx_13 = arg3[1].d
        int32_t rax_18 = rdx_13 - 1
        
        if (rdx_13 == 0)
            rax_18 = 0
        
        if (rax_18 == 0)
            return sub_140aee9a0(arg1 + 8, 0)
        
        return sub_140afe520(arg1 + 8, arg3)

return result
