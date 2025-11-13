// 函数: sub_140afaf70
// 地址: 0x140afaf70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_e4 = 0
int64_t* result = sub_140aefb30(arg1, arg6, 0)

if (result != 0)
    int32_t j_4 = 0
    int32_t rcx = 0
    int32_t j_2 = 0
    int64_t* rsi_1 = nullptr
    int32_t var_ec_1 = 0
    int64_t* var_f8 = nullptr
    
    if (arg2 != 0 && *arg2 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg2[rbx_1] != 0)
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&var_f8, rbx_1.d + 1)
            rcx = var_ec_1
            j_4 = j_2
            rsi_1 = var_f8
        
        int32_t j_3 = rbx_1.d + 1 + j_4
        j_2 = j_3
        
        if (j_3 s> rcx)
            sub_140594770(&var_f8)
            rsi_1 = var_f8
        
        UnDecorator::getReferenceType(rsi_1, arg2, (rbx_1.d + 1) * 2)
    
    int32_t var_e8
    sub_140a452d0(result, &var_e8, &var_f8)
    int64_t rax = sx.q(var_e8)
    
    if (rax.d == 0xffffffff)
        result = nullptr
    else
        result = rax * 0xb8 + *result
    
    void* rbx_3 = &result[2]
    
    if (result == 0)
        rbx_3 = nullptr
    
    if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)
    
    if (rbx_3 != 0)
        int32_t r11_1 = *(rbx_3 + 0x28)
        void* r9 = rbx_3 + 0x10
        int32_t var_dc_1 = 1
        int32_t rcx_6 = 0
        int32_t var_e0 = 0
        int64_t* rsi_2 = nullptr
        void* var_d8_1 = r9
        int32_t r8_3 = 0
        int32_t var_d0_1 = 0xffffffff
        int64_t var_cc_1 = 0
        
        if (r11_1 != 0)
            void* rax_2 = *(r9 + 0x10)
            
            if (rax_2 != 0)
                r9 = rax_2
            
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r11_1 - 1)
            int32_t rdx_6 = *r9
            
            if (rdx_6 != 0)
            label_140afb10b:
                int32_t rax_9 = neg.d(rdx_6) & rdx_6
                uint64_t rflags_1
                int32_t temp0_2
                temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
                int32_t var_dc_2 = rax_9
                int32_t rax_10
                
                if (rax_9 == 0)
                    rax_10 = 0x20
                else
                    rax_10 = 0x1f - temp0_2
                
                var_cc_1.d = r8_3 - rax_10 + 0x1f
                
                if (r8_3 - rax_10 + 0x1f s> r11_1)
                    var_cc_1.d = r11_1
            else
                while (true)
                    int64_t rdx_7 = sx.q(rcx_6)
                    r8_3 += 0x20
                    rcx_6 += 1
                    var_cc_1:4.d = r8_3
                    var_e0 = rcx_6
                    
                    if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_6 = *(r9 + (rdx_7 << 2) + 4)
                    var_d0_1 = 0xffffffff
                    
                    if (rdx_6 != 0)
                        goto label_140afb10b
                
                var_cc_1.d = r11_1
        
        double zmm4_1[0x2] = var_d0_1.o
        void* var_40_1 = rbx_3
        int128_t zmm0_1 = var_e0.o
        double var_50_1[0x2] = zmm4_1
        int16_t var_80_1 = 0
        result = zmm0_1.q
        int128_t var_a8_1 = zmm0_1
        int128_t var_b8 = rbx_3.o
        double rcx_8 = zmm4_1[0]
        zmm0_1.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1[0])).q
        int128_t var_98_1 = zmm0_1
        
        if ((rcx_8 u>> 0x20).d s< result[3].d)
            int32_t i = var_a8_1:0xc.d
            
            do
                int64_t* r14_1 = var_b8.q
                int64_t rbx_5 = sx.q(i) * 0x30
                int64_t var_38
                char rax_14 = sub_140a32ae0(sub_140b63b70(*r14_1 + rbx_5, &var_38), arg3, 1)
                int64_t rcx_13 = var_38
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                if (rax_14 == 0)
                    char rdi_1
                    
                    if (sub_140a32ae0(sub_140b63b70(*r14_1 + rbx_5, &var_e0), arg4, 1) == 0
                            || rsi_2 == 0)
                        rdi_1 = 0
                    else
                        rdi_1 = 1
                    
                    int64_t rcx_24 = var_e0.q
                    
                    if (rcx_24 != 0)
                        sub_140a74f90(rcx_24)
                    
                    if (rdi_1 == 0)
                        rsi_2 = nullptr
                    else
                        int64_t rdi_2 = sx.q(rsi_2[1].d)
                        void* rdx_20 = *r14_1 + rbx_5
                        void* const rbx_7 = 0x18
                        int32_t rax_25 = *(rdx_20 + 0x20)
                        int32_t rcx_25 = rax_25 - 1
                        
                        if (rax_25 == 0)
                            rcx_25 = 0
                        
                        if (rcx_25 s<= 0)
                            rbx_7 = 8
                        
                        int32_t rax_26 = (rdi_2 + 1).d
                        rsi_2[1].d = rax_26
                        
                        if (rax_26 s> *(rsi_2 + 0xc))
                            sub_1405a4f90(rsi_2)
                        
                        sub_140596d10((rdi_2 << 4) + *rsi_2, rbx_7 + rdx_20)
                else
                    void* rdx_11 = *r14_1 + rbx_5
                    void* const r8_5 = 0x18
                    int32_t rax_15 = *(rdx_11 + 0x20)
                    int32_t rcx_14 = rax_15 - 1
                    
                    if (rax_15 == 0)
                        rcx_14 = 0
                    
                    if (rcx_14 s<= 0)
                        r8_5 = 8
                    
                    sub_140926e00(arg5, &var_e8, r8_5 + rdx_11)
                    int64_t rax_16 = sx.q(var_e8)
                    void* rcx_16
                    
                    if (rax_16.d == 0xffffffff)
                        rcx_16 = nullptr
                    else
                        rcx_16 = *arg5 + rax_16 * 0x28
                    
                    rsi_2 = rcx_16 + 0x10
                    
                    if (rcx_16 == 0)
                        rsi_2 = nullptr
                    
                    if (rsi_2 == 0)
                        var_f8 = nullptr
                        j_2.q = 0
                        void* rdx_15 = *r14_1 + rbx_5
                        int32_t rax_18 = *(rdx_15 + 0x20)
                        int32_t rcx_17 = rax_18 - 1
                        void* const rax_19 = 0x18
                        
                        if (rax_18 == 0)
                            rcx_17 = 0
                        
                        if (rcx_17 s<= 0)
                            rax_19 = 8
                        
                        void* var_78 = rax_19 + rdx_15
                        int64_t* var_70_1 = &var_f8
                        sub_140ae4c60(arg5, &var_e4, &var_78, nullptr)
                        int32_t j_1 = j_2
                        int64_t* rbx_6 = var_f8
                        rsi_2 = *arg5 + ((sx.q(var_e4) * 5 + 2) << 3)
                        
                        if (j_1 != 0)
                            int32_t j
                            
                            do
                                int64_t rcx_19 = *rbx_6
                                
                                if (rcx_19 != 0)
                                    sub_140a74f90(rcx_19)
                                
                                rbx_6 = &rbx_6[2]
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                            rbx_6 = var_f8
                        
                        if (rbx_6 != 0)
                            sub_140a74f90(rbx_6)
                
                var_a8_1:8.d &= not.d(var_b8:0xc.d)
                sub_14059bdd0(&var_b8:8)
                result = var_a8_1.q
                i = var_a8_1:0xc.d
            while (i s< result[3].d)
            
            if (var_80_1.b != 0 && var_80_1:1.b != 0)
                return sub_140a6d3f0(rbx_3, *(rbx_3 + 8) - *(rbx_3 + 0x34), 1)

return result
