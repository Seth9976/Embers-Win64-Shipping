// 函数: sub_140afcdf0
// 地址: 0x140afcdf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *arg1
void* rax_2 = sx.q(arg1[1].d) * 0x28 + r13

if (r13 == rax_2)
    arg1[2].b = 0
    return rax_2

do
    int16_t* rdi_1
    
    if (*(r13 + 0x18) == 0)
        rdi_1 = &data_142d40450
    else
        rdi_1 = *(r13 + 0x10)
    
    int64_t var_f8 = 0
    int32_t rdx_1 = 0
    int32_t var_f0_1 = 0
    int32_t rcx = 0
    int32_t var_ec_1 = 0
    
    if (rdi_1 != 0 && *rdi_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (rdi_1[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_f8, rbx_1.d + 1)
            rcx = var_ec_1
            rdx_1 = var_f0_1
        
        int32_t rax_3 = rbx_1.d + 1 + rdx_1
        int32_t var_f0_2 = rax_3
        
        if (rax_3 s> rcx)
            sub_140594770(&var_f8)
        
        UnDecorator::getReferenceType(var_f8, rdi_1, (rbx_1.d + 1) * 2)
    
    int16_t* rdx_4
    
    if (*(r13 + 8) == 0)
        rdx_4 = &data_142d40450
    else
        rdx_4 = *r13
    
    void* r9
    r9.b = 1
    int64_t* rax_4
    rax_4, r9 = sub_140af5690(data_143ddb400, rdx_4, 0, r9.b, &var_f8)
    int64_t rcx_5 = var_f8
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    if (rax_4 != 0)
        int32_t r11_1 = rax_4[5].d
        r9 = &rax_4[2]
        int32_t var_a4_1 = 1
        int32_t rcx_6 = 0
        int32_t var_a8_1 = 0
        int32_t r8_3 = 0
        void* var_a0_1 = r9
        int32_t var_98_1 = 0xffffffff
        int64_t var_94_1 = 0
        
        if (r11_1 != 0)
            void* rax_5 = *(r9 + 0x10)
            
            if (rax_5 != 0)
                r9 = rax_5
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_7 = *r9
            
            if (rdx_7 != 0)
            label_140afcf98:
                int32_t rax_12 = neg.d(rdx_7) & rdx_7
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_12)
                int32_t var_a4_2 = rax_12
                int32_t rax_13
                
                if (rax_12 == 0)
                    rax_13 = 0x20
                else
                    rax_13 = 0x1f - temp0_2
                
                var_94_1.d = r8_3 - rax_13 + 0x1f
                
                if (r8_3 - rax_13 + 0x1f s> r11_1)
                    var_94_1.d = r11_1
            else
                while (true)
                    int64_t rdx_8 = sx.q(rcx_6)
                    r8_3 += 0x20
                    rcx_6 += 1
                    var_94_1:4.d = r8_3
                    var_a8_1 = rcx_6
                    
                    if (rdx_8.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_7 = *(r9 + (rdx_8 << 2) + 4)
                    int32_t var_98_2 = 0xffffffff
                    
                    if (rdx_7 != 0)
                        goto label_140afcf98
                
                var_94_1.d = r11_1
        
        int128_t var_48_1 = 0xffffffff
        double var_58_1[0x2] = var_a8_1.o
        double var_88[0x2] = rax_4.o
        int64_t var_68_1 = (_mm_unpackhi_pd(0xffffffff, 0xffffffff)).q
        
        if (0 s< r11_1)
            int32_t i = var_58_1[1]:4.d
            
            do
                double rbx_4 = var_88[0]
                int64_t rdi_3 = sx.q(i) * 0x30
                int16_t* var_c8
                sub_140b5e690(*rbx_4 + rdi_3, &var_c8)
                void* const r12_1 = 0x18
                void* rdx_11 = *rbx_4 + rdi_3
                int32_t rax_16 = *(rdx_11 + 0x20)
                int32_t rcx_10 = rax_16 - 1
                
                if (rax_16 == 0)
                    rcx_10 = 0
                
                int64_t* rcx_11 = data_143db18d0
                
                if (rcx_10 s<= 0)
                    r12_1 = 8
                
                void* r12_2 = r12_1 + rdx_11
                
                if (rcx_11 == 0)
                    sub_140a53c40()
                    rcx_11 = data_143db18d0
                
                int16_t* const rdx_12 = &data_142d40450
                int64_t r8_5
                r8_5.b = 1
                int32_t var_c0
                
                if (var_c0 != 0)
                    rdx_12 = var_c8
                
                int64_t* rax_18 = (*(*rcx_11 + 0xb0))(rcx_11, rdx_12, r8_5)
                int32_t rax_20
                int32_t rbx_5
                
                if (rax_18 != 0)
                    rbx_5 = *(r13 + 0x20)
                    rax_20 = (*(*rax_18 + 0x18))(rax_18)
                
                if (rax_18 == 0 || (rbx_5 & rax_20) == 0)
                    int16_t* rcx_12 = var_c8
                    
                    if (rcx_12 != 0)
                        sub_140a74f90(rcx_12)
                else
                    int16_t* const rcx_14
                    
                    if (*(r12_2 + 8) == 0)
                        rcx_14 = &data_142d40450
                    else
                        rcx_14 = *r12_2
                    
                    wchar32 const (* rax_21)[0x3] = sub_140aed2b0(rcx_14)
                    int64_t r8_6 = *rax_18
                    void* var_b8
                    (*(r8_6 + 0xa0))(rax_18, &var_b8, r8_6)
                    int16_t* var_e8 = nullptr
                    int32_t rdx_14 = 0
                    int32_t var_e0_1 = 0
                    int32_t rax_22 = 0
                    int32_t var_dc_1 = 0
                    int16_t* r14_1 = nullptr
                    int16_t* const rcx_19
                    int32_t rsi_1
                    
                    if (rax_21 != 0 && *rax_21 != 0)
                        int64_t rbx_6 = -1
                        
                        do
                            rbx_6 += 1
                        while (*(rax_21 + (rbx_6 << 1)) != 0)
                        
                        if (rbx_6.d + 1 s> 0)
                            sub_1405947f0(&var_e8, rbx_6.d + 1)
                            rax_22 = var_dc_1
                            rdx_14 = var_e0_1
                            r14_1 = var_e8
                        
                        rsi_1 = rdx_14 + rbx_6.d + 1
                        
                        if (rsi_1 s> rax_22)
                            sub_140594770(&var_e8)
                            r14_1 = var_e8
                        
                        UnDecorator::getReferenceType(r14_1, rax_21, (rbx_6.d + 1) * 2)
                        rcx_19 = r14_1
                    
                    if (rax_21 == 0 || *rax_21 == 0 || rsi_1 == 0)
                        rcx_19 = &data_142d40450
                    
                    void* rax_23 = &data_142d40450
                    void* r8_9 = var_b8
                    int32_t var_b0
                    
                    if (var_b0 != 0)
                        rax_23 = r8_9
                    
                    void* rcx_20 = rcx_19 - rax_23
                    uint32_t j
                    uint32_t rbx_8
                    
                    do
                        rbx_8 = zx.d(*rax_23)
                        j = zx.d(*(rax_23 + rcx_20))
                        
                        if (rbx_8 != j)
                            break
                        
                        rax_23 += 2
                    while (j != 0)
                    
                    if (r14_1 != 0)
                        sub_140a74f90(r14_1)
                        r8_9 = var_b8
                    
                    if (rbx_8 - j != 0)
                        uint64_t rsi_2 = 0
                        int32_t rdx_17 = 0
                        int32_t rax_24 = 0
                        uint64_t var_d8 = 0
                        int64_t var_d0_1 = 0
                        uint64_t rdx_20
                        int32_t r14_2
                        
                        if (rax_21 != 0 && *rax_21 != 0)
                            int64_t rbx_10 = -1
                            
                            do
                                rbx_10 += 1
                            while (*(rax_21 + (rbx_10 << 1)) != 0)
                            
                            if (rbx_10.d + 1 s> 0)
                                sub_1405947f0(&var_d8, rbx_10.d + 1)
                                rax_24 = var_d0_1:4.d
                                rdx_17 = var_d0_1.d
                                rsi_2 = var_d8
                            
                            r14_2 = rbx_10.d + 1 + rdx_17
                            var_d0_1.d = r14_2
                            
                            if (r14_2 s> rax_24)
                                sub_140594770(&var_d8)
                                r14_2 = var_d0_1.d
                                rsi_2 = var_d8
                            
                            UnDecorator::getReferenceType(rsi_2, rax_21, (rbx_10.d + 1) * 2)
                            r8_9 = var_b8
                            rdx_20 = rsi_2
                        
                        if (rax_21 == 0 || *rax_21 == 0 || r14_2 == 0)
                            rdx_20 = &data_142d40450
                        
                        void* rcx_26 = &data_142d40450
                        
                        if (var_b0 != 0)
                            rcx_26 = r8_9
                        
                        uint32_t rbx_9
                        rbx_9.b = sub_140a54510(rcx_26, rdx_20) == 0
                        
                        if (rsi_2 != 0)
                            sub_140a74f90(rsi_2)
                        
                        if (rbx_9.b == 0 && (((*(*rax_18 + 0x18))(rax_18) u>> 2).b & 1) == 0)
                            int16_t* const r8_12
                            
                            if (*(r12_2 + 8) == 0)
                                r8_12 = &data_142d40450
                            else
                                r8_12 = *r12_2
                            
                            int16_t* rdx_21 = &data_142d40450
                            
                            if (var_c0 != 0)
                                rdx_21 = var_c8
                            
                            int16_t* const rcx_29
                            
                            if (*(r13 + 0x18) == 0)
                                rcx_29 = &data_142d40450
                            else
                                rcx_29 = *(r13 + 0x10)
                            
                            int64_t* var_108_1
                            var_108_1.b = *(r13 + 0x24)
                            sub_140afa9b0(rcx_29, rdx_21, r8_12, *(r13 + 0x20), var_108_1.b)
                        
                        void* rcx_22 = var_b8
                        
                        if (rcx_22 != 0)
                            sub_140a74f90(rcx_22)
                    else if (r8_9 != 0)
                        sub_140a74f90(r8_9)
                    
                    int16_t* rcx_30 = var_c8
                    
                    if (rcx_30 != 0)
                        sub_140a74f90(rcx_30)
                
                var_58_1[1].d &= not.d(var_88[1]:4.d)
                sub_14059bdd0(&var_88[1])
                i = var_58_1[1]:4.d
            while (i s< *(var_58_1[0] i+ 0x18))
    
    r13 += 0x28
while (r13 != rax_2)

arg1[2].b = 0
return arg1
