// 函数: sub_141e69be0
// 地址: 0x141e69be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
void var_2e8
int64_t rax_1 = __security_cookie ^ &var_2e8
int64_t* var_278 = arg1
int32_t rax_2 = arg1[0x7c].d
int32_t i_4 = 0
int64_t* i_3 = nullptr
int32_t i_5 = 0
int32_t i_6 = 0
int32_t var_254 = 0
int64_t* var_298 = nullptr
int32_t i_7 = 0
int32_t var_28c = 0
void* var_2a0
int64_t* rdx_5

if (rax_2 == *(arg1 + 0x40c))
label_141e69cae_1:
    rdx_5 = nullptr
else
    var_2a0 = arg2
    int32_t rax_4 = sub_140b5ead0(arg2.d) + var_2a0:4.d
    void* r8 = &arg1[0x82]
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_6 = *(r8 + (((sx.q(arg1[0x84].d) - 1) & sx.q(rax_4)) << 2))
    
    if (rax_6 == 0xffffffff)
    label_141e69cae_2:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_6) << 5) + arg1[0x7b]
            
            if (*rdx_5 == arg2)
                break
            
            rax_6 = rdx_5[3].d
            
            if (rax_6 == 0xffffffff)
                goto label_141e69cae
        
        if (rax_6 == 0xffffffff)
        label_141e69cae:
            rdx_5 = nullptr

void* rdi = &rdx_5[1]

if (rdx_5 == 0)
    rdi = nullptr

int32_t rsi_9

if (arg6 != 0)
    rsi_9 = 0
else
    char var_2c8
    int16_t* var_2b8
    void* var_2b0
    int32_t var_288
    uint128_t var_238
    int64_t* var_228
    
    if (rdi == 0)
        int16_t* rax_7 = j_sub_140a82f30(0xe8)
        int16_t* rbx_1 = rax_7
        
        if (rax_7 == 0)
            rdi = nullptr
            rbx_1 = nullptr
        else
            var_2c8 = 0
            sub_141e4f940(rax_7, arg_10, arg4, arg5, var_2c8)
            *(rbx_1 + 0x88) = rdi
            void* rcx_3 = &rbx_1[0x4c]
            *(rbx_1 + 0x90) = rdi
            *(rcx_3 + 0x10) = rdi
            *(rcx_3 + 0x18) = rdi.d
            *(rcx_3 + 0x1c) = 0x80
            void* rax_8 = *(rcx_3 + 0x10)
            
            if (rax_8 != 0)
                rcx_3 = rax_8
            
            *rcx_3 = rdi
            *(rcx_3 + 8) = rdi
            *(rbx_1 + 0xb8) = 0xffffffff
            *(rbx_1 + 0xbc) = rdi.d
            *(rbx_1 + 0xc8) = rdi
            *(rbx_1 + 0xd0) = rdi.d
            *(rbx_1 + 0xd8) = rdi
            *(rbx_1 + 0xe0) = rdi
        
        void* rax_9 = j_sub_140a82f30(0x18)
        
        if (rax_9 == 0)
            rax_9 = rdi
        else
            *(rax_9 + 8) = 1
            *rax_9 = &data_14324d050
            *(rax_9 + 0xc) = 1
            *(rax_9 + 0x10) = rbx_1
        
        var_2b8 = rbx_1
        var_2b0 = rax_9
        uint128_t zmm0_1 = var_2b8.o
        var_238 = zmm0_1
        void* rax_10 = _mm_bsrli_si128(zmm0_1, 8).q
        
        if (rax_10 != 0)
            *(rax_10 + 8) += 1
        
        var_228 = &arg_10
        uint128_t* var_220_1 = &var_238
        sub_141e4ca70(&arg1[0x7b], &var_288, &var_228, nullptr)
        int64_t* rbx_2 = var_238:8.q
        rdi = arg1[0x7b] + (sx.q(var_288) << 5) + 8
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (var_2b0 != 0)
            int32_t temp3_1 = *(var_2b0 + 8)
            *(var_2b0 + 8) -= 1
            
            if (temp3_1 == 1)
                (**var_2b0)(var_2b0)
                int32_t temp5_1 = *(var_2b0 + 0xc)
                *(var_2b0 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*var_2b0 + 8))(var_2b0, 1)
    
    void* rax_18 = *rdi
    
    if (*(rax_18 + 0x30) != arg4)
        rsi_9 = 0
    else
        char rbx_4 = arg5
        
        if (*(rax_18 + 0x38) != rbx_4 || *(rax_18 + 0x39) != 0)
            rsi_9 = 0
        else
            int64_t* r15_1 = *arg3
            void* rcx_11 = &r15_1[sx.q(arg3[1].d) * 2]
            var_2a0 = rcx_11
            
            if (r15_1 != rcx_11)
                do
                    if (sub_1406daa50(rax_18 + 0x70, r15_1) == 0xffffffff)
                        int64_t rbx_5 = sx.q(*(rax_18 + 0x78))
                        int32_t rax_20 = (rbx_5 + 1).d
                        *(rax_18 + 0x78) = rax_20
                        
                        if (rax_20 s> *(rax_18 + 0x7c))
                            sub_1405a4f90(rax_18 + 0x70)
                        
                        sub_140596d10((rbx_5 << 4) + *(rax_18 + 0x70), r15_1)
                    
                    int16_t* r8_5 = *r15_1
                    int64_t r11_1 = sx.q(r15_1[1].d)
                    int16_t* rcx_17 = r8_5
                    void* rdx_12 = &r8_5[r11_1]
                    int32_t rcx_19
                    
                    if (r8_5 != rdx_12)
                        while (*rcx_17 != 0x2e)
                            rcx_17 = &rcx_17[1]
                            
                            if (rcx_17 == rdx_12)
                                goto label_141e69f10
                        
                        rcx_19 = ((rcx_17 - r8_5) s>> 1).d
                    
                    if (r8_5 == rdx_12 || rcx_19 == 0xffffffff)
                    label_141e69f10:
                        int64_t* i_9 = i_3
                        int64_t* i_12 = i_9
                        void* rdi_4 = &i_9[sx.q(i_4) * 2]
                        
                        if (i_9 != rdi_4)
                            while (true)
                                int16_t* rdx_13
                                
                                if (r15_1[1].d == 0)
                                    rdx_13 = &data_142d40450
                                else
                                    rdx_13 = *r15_1
                                
                                int16_t* const rcx_28
                                
                                if (i_12[1].d == 0)
                                    rcx_28 = &data_142d40450
                                else
                                    rcx_28 = *i_12
                                
                                if (sub_140a54510(rcx_28, rdx_13) == 0)
                                    break
                                
                                i_12 = &i_12[2]
                                
                                if (i_12 == rdi_4)
                                    goto label_141e6a2bf
                        
                        if (i_9 == rdi_4 || ((i_12 - i_9) s>> 4).d == 0xffffffff)
                        label_141e6a2bf:
                            int64_t i_8 = sx.q(i_4)
                            i_4 = (i_8 + 1).d
                            i_6 = i_4
                            
                            if (i_4 s> var_254)
                                sub_1405a4f90(&i_3)
                                i_9 = i_3
                                i_6 = i_4
                            
                            sub_140596d10(&i_9[i_8 * 2], r15_1)
                    else
                        int16_t* rsi_1 = nullptr
                        int32_t r14_1 = 0
                        int32_t r12 = 0
                        
                        if (rcx_19 s>= 0)
                            int32_t rbx_6 = (r11_1 - 1).d
                            
                            if (r11_1.d == 0)
                                rbx_6 = 0
                            
                            int32_t rdx_14 = rbx_6
                            
                            if (rbx_6 s> 0)
                                rdx_14 = 0
                            
                            int64_t rax_21 = sx.q(rcx_19)
                            int64_t r10_1 = sx.q(rdx_14)
                            
                            if (rax_21 s< r10_1)
                                rbx_6 = rdx_14
                            else if (rax_21 s< sx.q(rbx_6))
                                rbx_6 = rcx_19
                            
                            int16_t* rax_22 = &data_142d40450
                            
                            if (r11_1.d != 0)
                                rax_22 = r8_5
                            
                            int32_t rbx_7 = rbx_6 - rdx_14
                            void* rdi_5 = &rax_22[r10_1]
                            var_2b8 = nullptr
                            int64_t var_2b0_1 = 0
                            
                            if (rdi_5 != 0 && *rdi_5 != 0 && rbx_7 s> 0)
                                if (rbx_7 + 1 s> 0)
                                    sub_1405947f0(&var_2b8, rbx_7 + 1)
                                    r12 = var_2b0_1:4.d
                                    r14_1 = var_2b0_1.d
                                    rsi_1 = var_2b8
                                
                                r14_1 = r14_1 + 1 + rbx_7
                                var_2b0_1.d = r14_1
                                
                                if (r14_1 s> r12)
                                    sub_140594770(&var_2b8)
                                    r12 = var_2b0_1:4.d
                                    r14_1 = var_2b0_1.d
                                    rsi_1 = var_2b8
                                
                                UnDecorator::getReferenceType(rsi_1, rdi_5, rbx_7 * 2)
                                rsi_1[sx.q(r14_1) - 1] = 0
                            
                            var_2b8 = nullptr
                            var_2b0 = nullptr
                        
                        int64_t* rbx_8 = var_298
                        void* rdi_8 = &rbx_8[sx.q(i_7) * 2]
                        int64_t* rdx_19
                        
                        if (rbx_8 == rdi_8)
                        label_141e6a086:
                            rdx_19 = var_298
                        label_141e6a08b:
                            int64_t i_13 = sx.q(i_7)
                            int32_t i_11 = (i_13 + 1).d
                            i_7 = i_11
                            
                            if (i_11 s> var_28c)
                                sub_1405a4f90(&var_298)
                                rdx_19 = var_298
                                i_7 = i_11
                            
                            int64_t rax_27 = i_13 * 2
                            rdx_19[rax_27] = rsi_1
                            rdx_19[rax_27 + 1].d = r14_1
                            *(&rdx_19[rax_27] + 0xc) = r12
                        else
                            while (true)
                                int16_t* rdx_18 = &data_142d40450
                                
                                if (r14_1 != 0)
                                    rdx_18 = rsi_1
                                
                                int16_t* const rcx_23
                                
                                if (rbx_8[1].d == 0)
                                    rcx_23 = &data_142d40450
                                else
                                    rcx_23 = *rbx_8
                                
                                if (sub_140a54510(rcx_23, rdx_18) == 0)
                                    break
                                
                                rbx_8 = &rbx_8[2]
                                
                                if (rbx_8 == rdi_8)
                                    goto label_141e6a086
                            
                            rdx_19 = var_298
                            
                            if (((rbx_8 - rdx_19) s>> 4).d == 0xffffffff)
                                goto label_141e6a08b
                            
                            if (rsi_1 != 0)
                                sub_140a74f90(rsi_1)
                        i_4 = i_6
                    
                    r15_1 = &r15_1[2]
                while (r15_1 != var_2a0)
                
                i_5 = i_7
                rbx_4 = arg5
            
            int64_t* rax_28 = sub_141e5ea90(var_278)
            int32_t var_17c_1 = 0x80
            int64_t var_1e8
            __builtin_memset(&var_1e8, 0, 0x6c)
            int32_t var_178_1 = 0xffffffff
            int32_t var_174_1 = 0
            int64_t var_168_1 = 0
            int32_t var_160_1 = 0
            uint64_t var_158 = 0
            int64_t var_150
            __builtin_memset(&var_150, 0, 0x24)
            int32_t var_12c_1 = 0x80
            int32_t var_128_1 = 0xffffffff
            int32_t var_124_1 = 0
            int64_t var_118_1 = 0
            int32_t var_110_1 = 0
            int16_t var_108_1 = 0
            char var_106_1 = 0
            uint64_t var_a8 = 0
            int64_t var_a0
            __builtin_memset(&var_a0, 0, 0x24)
            int32_t var_7c_1 = 0x80
            int32_t var_78_1 = 0xffffffff
            int32_t var_74_1 = 0
            int64_t var_68_1 = 0
            int32_t var_60_1 = 0
            int64_t var_270 = 0
            int32_t var_268_1 = 0
            int64_t* var_1b8
            
            if (arg4 != 0)
                int64_t var_1b0
                
                if (rbx_4 != 0)
                    var_2b8 = nullptr
                    var_2b0 = nullptr
                    sub_140d3c7c0(sub_1424791d0(), &var_2b8, 1)
                    int16_t* rsi_2 = var_2b8
                    int64_t r14_3 = 0
                    uint64_t r15_3 = sx.q(var_2b0.d) << 3 u>> 3
                    
                    if (rsi_2 u> &rsi_2[sx.q(var_2b0.d) * 4])
                        r15_3 = 0
                    
                    if (r15_3 != 0)
                        do
                            int64_t rdi_9 = sx.q(var_1b0.d)
                            int32_t rax_35 = (rdi_9 + 1).d
                            int64_t rbx_15 = *(*rsi_2 + 0x18)
                            var_1b0.d = rax_35
                            
                            if (rax_35 s> var_1b0:4.d)
                                sub_1405a4d70(&var_1b8)
                            
                            rsi_2 = &rsi_2[4]
                            r14_3 += 1
                            var_1b8[rdi_9] = rbx_15
                        while (r14_3 != r15_3)
                    
                    int64_t rdi_10 = sx.q(var_268_1)
                    int32_t rax_37 = (rdi_10 + 1).d
                    int64_t rbx_17 = *(arg4 + 0x18)
                    var_268_1 = rax_37
                    
                    if (rax_37 s> 0)
                        sub_1405a4d70(&var_270)
                    
                    int64_t rax_38 = var_270
                    int32_t var_cc_1 = 0x80
                    uint64_t var_f8 = 0
                    int64_t var_f0
                    __builtin_memset(&var_f0, 0, 0x24)
                    *(rax_38 + (rdi_10 << 3)) = rbx_17
                    int32_t var_c8_1 = 0xffffffff
                    int32_t var_c4_1 = 0
                    int64_t var_b8_1 = 0
                    int32_t var_b0_1 = 0
                    (*(*rax_28 + 0xb8))(rax_28, &var_270, &var_f8, &var_a8, var_2c8)
                    int32_t var_b0_2 = 0
                    
                    if (var_b8_1 != 0)
                        sub_140a74f90(var_b8_1)
                    
                    var_f0.d = 0
                    int32_t var_c8_2 = 0xffffffff
                    int32_t var_c4_2 = 0
                    int64_t var_e8
                    sub_14059a8e0(&var_e8, 0)
                    int64_t var_d8
                    
                    if (var_d8 != 0)
                        sub_140a74f90(var_d8)
                    
                    uint64_t rcx_41 = var_f8
                    
                    if (rcx_41 != 0)
                        sub_140a74f90(rcx_41)
                    
                    int16_t* rcx_42 = var_2b8
                    
                    if (rcx_42 != 0)
                        sub_140a74f90(rcx_42)
                else
                    int64_t rbx_9 = *(arg4 + 0x18)
                    var_1b0.d = 1
                    sub_1405a4d70(&var_1b8)
                    *var_1b8 = rbx_9
                    var_108_1:1.b = 1
            
            int64_t* i = i_3
            int64_t var_1d8
            
            while (i != &i[sx.q(i_6) * 2])
                int16_t* rdx_28
                
                if (i[1].d == 0)
                    rdx_28 = &data_142d40450
                else
                    rdx_28 = *i
                
                int64_t* rax_40 = sub_140b58260(&var_2a0, rdx_28, 1)
                int64_t var_1d0_1
                int64_t rdi_11 = sx.q(var_1d0_1.d)
                int32_t rcx_44 = (rdi_11 + 1).d
                var_1d0_1.d = rcx_44
                
                if (rcx_44 s> var_1d0_1:4.d)
                    sub_1405a4d70(&var_1d8)
                
                i = &i[2]
                *(var_1d8 + (rdi_11 << 3)) = *rax_40
            
            int64_t* rax_42 = var_298
            int64_t* rbx_18 = rax_42
            void* rsi_8 = &rax_42[sx.q(i_5) * 2]
            
            if (rax_42 != rsi_8)
                do
                    int16_t* rdx_30
                    
                    if (rbx_18[1].d == 0)
                        rdx_30 = &data_142d40450
                    else
                        rdx_30 = *rbx_18
                    
                    int64_t* rax_43 = sub_140b58260(&var_2a0, rdx_30, 1)
                    int64_t var_1e0_1
                    int64_t rdi_12 = sx.q(var_1e0_1.d)
                    int32_t rcx_48 = (rdi_12 + 1).d
                    var_1e0_1.d = rcx_48
                    
                    if (rcx_48 s> var_1e0_1:4.d)
                        sub_1405a4d70(&var_1e8)
                    
                    rbx_18 = &rbx_18[2]
                    *(var_1e8 + (rdi_12 << 3)) = *rax_43
                while (rbx_18 != rsi_8)
            
            var_108_1.b = 1
            char var_106_2 = 1
            void* var_250 = nullptr
            int32_t var_248_1 = 0
            (*(*rax_28 + 0x40))(rax_28, &var_1e8, &var_250)
            void* rdi_13 = var_250
            rsi_9 = 0
            int64_t* r12_2 = var_278
            void* r14_8 = sx.q(var_248_1) * 0x50 + rdi_13
            
            if (rdi_13 != r14_8)
                TEB* gsbase
                void* r15_4 = gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)
                
                do
                    int64_t var_208
                    char rax_49 = (*(*r12_2 + 0x480))(r12_2, sub_140b63b70(rdi_13 + 8, &var_208))
                    int64_t rcx_55 = var_208
                    
                    if (rcx_55 != 0)
                        sub_140a74f90(rcx_55)
                    
                    if (rax_49 == 0)
                        if (arg5 == 0)
                        label_141e6a663:
                            (*(*r12_2 + 0x3b8))(r12_2, &var_2b8, rdi_13, arg_10, var_2c8)
                            int16_t* rax_53 = var_2b8
                            int64_t var_280_1 = 0
                            
                            if (rax_53 == 0)
                            label_141e6a6c2:
                                var_2a0 = nullptr
                                
                                if (rax_53 != 0)
                                    int32_t rcx_60
                                    rcx_60.b = sub_140b5b8a0(var_2b0.d, 0) == 0
                                    
                                    if ((var_2b0:4.d != 0 | rcx_60.b) != 0)
                                        if (data_143f39b90 s> *(0x14 + *r15_4))
                                            _Init_thread_header(&data_143f39b90)
                                            
                                            if (data_143f39b90 == 0xffffffff)
                                                atexit(sub_142cf9bb0)
                                                _Init_thread_footer(&data_143f39b90)
                                        
                                        var_228 = arg_10
                                        int16_t* var_220_2 = var_2b8
                                        
                                        if (*sub_141e5cfc0(&data_143a2d2e0, &var_288, &var_228)
                                                == 0xffffffff)
                                            sub_140b63b70(&var_2b8, &var_238)
                                            int16_t* var_218
                                            sub_140b63b70(&arg_10, &var_218)
                                            int16_t* const r8_15 = &data_142d40450
                                            int32_t var_210
                                            
                                            if (var_210 != 0)
                                                r8_15 = var_218
                                            
                                            int64_t var_1f8
                                            sub_140a2e390(&var_1f8, 
                                                Ignoring PrimaryAssetType %s - Conflicts with %s", 
                                                r8_15)
                                            int16_t* rcx_65 = var_218
                                            
                                            if (rcx_65 != 0)
                                                sub_140a74f90(rcx_65)
                                            
                                            int64_t rcx_66 = var_238.q
                                            
                                            if (rcx_66 != 0)
                                                sub_140a74f90(rcx_66)
                                            
                                            sub_141e4c180(&data_143a2d2e0, &var_278, &var_228, 
                                                nullptr)
                                            int64_t rcx_67 = var_1f8
                                            
                                            if (rcx_67 != 0)
                                                sub_140a74f90(rcx_67)
                            else
                                int32_t rcx_58
                                rcx_58.b = sub_140b5b8a0(var_2b0.d, 0) == 0
                                rax_53 = var_2b8
                                
                                if ((var_2b0:4.d != 0 | rcx_58.b) == 0 || rax_53 != arg_10)
                                    goto label_141e6a6c2
                                
                                rsi_9 += 1
                                (*(*r12_2 + 0x430))(r12_2, &var_2b8, rdi_13, 0)
                        else if ((*(*r12_2 + 0x3c8))(r12_2, rdi_13, &var_a8) != 0)
                            goto label_141e6a663
                    
                    rdi_13 += 0x50
                while (rdi_13 != r14_8)
                
                i_5 = i_7
            
            if (*(r12_2 + 0x2d6) == 0)
                (*(*r12_2 + 0x438))(r12_2)
            
            sub_141c94120(&var_250)
            int64_t rcx_70 = var_270
            
            if (rcx_70 != 0)
                sub_140a74f90(rcx_70)
            
            int32_t var_60_2 = 0
            
            if (var_68_1 != 0)
                sub_140a74f90(var_68_1)
            
            sub_140a627d0(&var_a8)
            int32_t var_110_2 = 0
            
            if (var_118_1 != 0)
                sub_140a74f90(var_118_1)
            
            sub_140a627d0(&var_158)
            int64_t var_1a8
            sub_141e506a0(&var_1a8)
            int64_t* rcx_76 = var_1b8
            
            if (rcx_76 != 0)
                sub_140a74f90(rcx_76)
            
            int64_t var_1c8
            
            if (var_1c8 != 0)
                sub_140a74f90(var_1c8)
            
            int64_t rcx_78 = var_1d8
            
            if (rcx_78 != 0)
                sub_140a74f90(rcx_78)
            
            int64_t rcx_79 = var_1e8
            
            if (rcx_79 != 0)
                sub_140a74f90(rcx_79)
            
            i_4 = i_6

int64_t* rdi_14 = var_298
int64_t* rbx_23 = rdi_14

if (i_5 != 0)
    int32_t i_1
    
    do
        int64_t rcx_80 = *rbx_23
        
        if (rcx_80 != 0)
            sub_140a74f90(rcx_80)
        
        rbx_23 = &rbx_23[2]
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)

if (rdi_14 != 0)
    sub_140a74f90(rdi_14)

int64_t* i_10 = i_3
int64_t* i_14 = i_10

if (i_4 != 0)
    int32_t i_2
    
    do
        int64_t rcx_82 = *i_14
        
        if (rcx_82 != 0)
            sub_140a74f90(rcx_82)
        
        i_14 = &i_14[2]
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

if (i_10 != 0)
    sub_140a74f90(i_10)

__security_check_cookie(rax_1 ^ &var_2e8)
return zx.q(rsi_9)
