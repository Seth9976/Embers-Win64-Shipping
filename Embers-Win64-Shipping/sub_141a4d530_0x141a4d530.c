// 函数: sub_141a4d530
// 地址: 0x141a4d530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_328
char var_2f8
char* result_2
uint128_t var_118

if (arg3[3].b == 2 && arg3[4].b == 2)
    int32_t var_324_1 = 0
    var_328 = 2
    result_2 = var_328.q
    int32_t var_2f4_1 = 0
    var_2f8 = 2
    int32_t var_2d0
    var_2d0.q = var_2f8.q
    var_118 = result_2.o
    sub_141a52730(arg1, &result_2, &var_118, arg5)
    char* result_6 = result_2
    
    if (result_6 != 0)
        sub_140a74f90(result_6)

result_2 = arg3[0x10]
int32_t var_2d0_1 = arg3[0x11].d
int64_t var_128
double zmm2[0x2] = sub_141a57190(&arg3[0xc], &var_128, &result_2)
void* r9 = *arg3
int32_t r15 = data_143f29fb0
int64_t rcx_1 = sx.q(*(r9 + 0x28))
int64_t var_268 = var_128
int32_t var_120
int32_t var_260 = var_120
int64_t var_258 = 0
int64_t var_250 = 0

if (rcx_1.d != 0)
    void* rax_6 = *(r9 + 0x20)
    int64_t r11_1 = rcx_1 << 2
    int64_t r10_1 = 0
    
    if (rax_6 != 0)
        r9 = rax_6
    
    uint64_t r11_2 = r11_1 u>> 2
    
    if (r9 u> r11_1 + r9)
        r11_2 = 0
    
    if (r11_2 != 0)
        do
            int32_t rax_8 = *r9
            
            if (r15 != 0)
                int32_t r15_2 = (r15 - rax_8) ^ rax_8 u>> 0xd
                int32_t r8_4 = (0x9e3779b9 - r15_2 - rax_8) ^ r15_2 << 8
                int32_t r15_6 = (rax_8 - r8_4 - r15_2) ^ r8_4 u>> 0xd
                int32_t rdx_5 = (r15_2 - r8_4 - r15_6) ^ r15_6 u>> 0xc
                int32_t r8_7 = (r8_4 - rdx_5 - r15_6) ^ rdx_5 << 0x10
                int32_t r15_9 = (r15_6 - r8_7 - rdx_5) ^ r8_7 u>> 5
                int32_t rdx_8 = (rdx_5 - r8_7 - r15_9) ^ r15_9 u>> 3
                int32_t r8_10 = (r8_7 - rdx_8 - r15_9) ^ rdx_8 << 0xa
                r15 = (r15_9 - r8_10 - rdx_8) ^ r8_10 u>> 0xf
            else
                r15 = rax_8
            
            r9 += 4
            r10_1 += 1
        while (r10_1 != r11_2)

char rcx_6 = arg3[7].b
uint64_t rsi
int64_t r14

if (rcx_6 == 2)
label_141a4d745:
    char rdx_10 = arg3[9].b
    
    if (rdx_10 == 2)
    label_141a4d788:
        char r10_2 = arg3[8].b
        void* r14_1 = &arg3[0xa]
        
        if (r10_2 != 2)
            if (*r14_1 != 2)
                int32_t r9_2 = *(r14_1 + 4)
                int32_t temp2_1 = *(arg3 + 0x44)
                
                if (temp2_1 s< r9_2)
                    r14_1 = &arg3[8]
                else if (temp2_1 s<= r9_2 && r10_2 == 0)
                    r14_1 = &arg3[8]
            else
                r14_1 = &arg3[8]
        
        int64_t* rsi_1
        
        if (rcx_6 == 2)
            rsi_1 = 0x48
        else if (rdx_10 != 2)
            int32_t rax_24 = *(arg3 + 0x4c)
            int32_t temp3_1 = *(arg3 + 0x3c)
            
            if (temp3_1 s> rax_24)
                rsi_1 = 0x38
            else if (temp3_1 s>= rax_24)
                int32_t rax_25 = 0x48
                
                if (rcx_6 == 0)
                    rax_25 = 0x38
                
                rsi_1 = zx.q(rax_25)
            else
                rsi_1 = 0x48
        else
            rsi_1 = 0x38
        
        rsi = *(rsi_1 + arg3)
        r14 = *r14_1
    else
        char rax_22 = arg3[0xa].b
        
        if (rax_22 == 2)
            goto label_141a4d788
        
        int32_t r9_1 = *(arg3 + 0x4c)
        int32_t temp1_1 = *(arg3 + 0x54)
        
        if (r9_1 s> temp1_1)
            goto label_141a4d724
        
        if (r9_1 != temp1_1)
            goto label_141a4d788
        
        if (rdx_10 == 0)
            goto label_141a4d724
        
        if (rax_22 != 0)
            goto label_141a4d788
        
        var_2f8 = 0
        int32_t var_2f4_3 = 0
        r14 = var_2f8.q
        var_328 = 0
        int32_t var_324_3 = 0
        rsi = var_328.q
else
    char rax_21 = arg3[8].b
    
    if (rax_21 == 2)
        goto label_141a4d745
    
    int32_t rdx_9 = *(arg3 + 0x44)
    int32_t temp0_1 = *(arg3 + 0x3c)
    
    if (temp0_1 s<= rdx_9 && (temp0_1 != rdx_9 || (rcx_6 != 0 && rax_21 != 0)))
        goto label_141a4d745
    
label_141a4d724:
    var_2f8 = 0
    int32_t var_2f4_2 = 0
    r14 = var_2f8.q
    var_328 = 0
    int32_t var_324_2 = 0
    rsi = var_328.q

int64_t var_318
char* result
uint64_t rdx_12
uint64_t r9_3
result, rdx_12, r9_3 = sub_141a2ff30(&var_318, arg1 + 0x40, rsi)

while (true)
    char* result_1
    char* result_4 = result_1
    int128_t* rdx_38
    
    while (true)
        int64_t r13_1 = var_318
        uint64_t var_310
        uint64_t rbx_1 = var_310
        int32_t r10_3 = rsi:4.d
        uint32_t r8_13 = r14:4.d
        char var_338
        int64_t var_320
        int128_t* r13_3
        
        while (true)
            if (result_4.d != 0xffffffff || result_1:4.d == 0)
                if (r13_1.b == 2 || rbx_1.b == 2)
                label_141a4d884:
                    
                    if (rsi.b == 2 || r14.b == 2)
                    label_141a4d8b6:
                        
                        if (rbx_1.b == 2 || rsi.b == 2)
                            result.b = 1
                        else
                            result.b = 0
                        
                        if (r13_1.b == 2 || r14.b == 2)
                            r9_3.b = 1
                        else
                            r9_3.b = 0
                        
                        rdx_12.b = 1
                        bool rcx_10 = true
                        
                        if (result.b == 0)
                            uint32_t rax_28 = (rbx_1 u>> 0x20).d
                            rdx_12.b = rax_28 s> r10_3
                            rax_28.b = rax_28 s>= r10_3
                            
                            if (rbx_1.b != 1 || rsi.b != 1)
                                r8_13.b = 0
                            else
                                r8_13 = 1
                            
                            bool cond:11_1 = r8_13.b != 0
                            rdx_12 = zx.q(rdx_12.b)
                            r8_13 = r14:4.d
                            result = zx.q(rax_28.b)
                            
                            if (cond:11_1)
                                rdx_12 = zx.q(result.d)
                        
                        if (r9_3.b == 0)
                            uint32_t rax_30 = (r13_1 u>> 0x20).d
                            rcx_10 = rax_30 s< r8_13
                            rax_30.b = rax_30 s<= r8_13
                            
                            if (r13_1.b != 1 || r14.b != r13_1.b)
                                r8_13.b = 0
                            else
                                r8_13 = zx.d(r13_1.b)
                            
                            result = zx.q(rax_30.b)
                            
                            if (r8_13.b != 0)
                                rcx_10 = result.b
                        
                        if (rdx_12.b != 0 && rcx_10 != 0)
                            var_328.o = var_318.o
                            int32_t var_2b0
                            sub_141a4ade0(arg1, &var_2b0, &var_328)
                            int32_t rax_31 = var_2b0
                            int32_t var_2b8
                            
                            if (rax_31 == 0xffffffff)
                                uint128_t var_58 = var_318.o
                                int128_t var_48_1 = result_1.o
                                zmm2 = sub_141a3f350(arg1, &var_2b8, &var_58, zmm2)
                                rax_31 = var_2b8
                                r13_1 = var_318
                            else
                                var_2b8 = rax_31
                            int128_t* rcx_36
                            char* rdx_20
                            int64_t* r8_20
                            int64_t r9_5
                            
                            if (rax_31 == 0xffffffff)
                                var_328.o = var_318.o
                                int64_t rbx_3
                                
                                if (r13_1.b != 2)
                                    int128_t* r8_16 = &var_268
                                    
                                    if (r13_1.b != 1)
                                        int32_t var_14c_1 = 0
                                        void var_d0
                                        int32_t* rax_35
                                        rax_35, zmm2 = sub_141a352a0(&var_d0, var_318:4.d.q, r8_16)
                                        int32_t var_144_1 = *rax_35
                                        rbx_3 = 0.q
                                    else
                                        int32_t var_15c_1 = 0
                                        void var_a8
                                        int32_t* rax_32
                                        rax_32, zmm2 =
                                            sub_141a352a0(&var_a8, (r13_1 u>> 0x20).d.q, r8_16)
                                        int32_t var_154_1 = *rax_32
                                        rbx_3 = 1.q
                                else
                                    int32_t var_164_1 = 0
                                    rbx_3 = r13_1.b.q
                                
                                int64_t rax_37 = var_320
                                int64_t rax_38
                                
                                if (rax_37.b != 2)
                                    int128_t* r8_17 = &var_268
                                    
                                    if (rax_37.b != 1)
                                        int32_t var_244_1 = 0
                                        void var_c0
                                        int32_t* rax_43
                                        rax_43, zmm2 = sub_141a352a0(&var_c0, var_320:4.d.q, r8_17)
                                        int32_t var_23c_1 = *rax_43
                                        rax_38 = 0.q
                                    else
                                        int32_t var_134_1 = 0
                                        void var_c8
                                        int32_t* rax_40
                                        rax_40, zmm2 =
                                            sub_141a352a0(&var_c8, (rax_37 u>> 0x20).d.q, r8_17)
                                        int32_t var_12c_1 = *rax_40
                                        rax_38 = 1.q
                                else
                                    int32_t var_13c_1 = 0
                                    rax_38 = rax_37.b.q
                                
                                char r9_4 = arg3[5].b
                                void* rdx_19 = &arg3[5]
                                int64_t var_29c = rbx_3
                                int64_t var_294 = rax_38
                                int64_t var_278_1
                                int64_t rax_46
                                
                                if (r9_4 == 2)
                                label_141a4db67:
                                    uint32_t rcx_19
                                    uint32_t r8_19
                                    
                                    if (rbx_3.b != 2 && rax_38.b != 2)
                                        rcx_19 = (rbx_3 u>> 0x20).d
                                        r8_19 = (rax_38 u>> 0x20).d
                                    
                                    if (rbx_3.b != 2 && rax_38.b != 2 && (rcx_19 s> r8_19 ||
                                            (rcx_19 == r8_19 && (rbx_3.b == 0 || rax_38.b == 0))))
                                        int32_t var_224_1 = 0
                                        var_278_1 = 0.q
                                        int32_t var_21c_1 = 0
                                        rax_46 = 0.q
                                    else
                                        char r11_4 = arg3[6].b
                                        void* rcx_20 = &arg3[6]
                                        
                                        if (r11_4 == 2)
                                            rcx_20 = &var_294
                                        else if (rax_38.b != 2)
                                            uint32_t rax_48 = (rax_38 u>> 0x20).d
                                            int32_t temp8_1 = *(rcx_20 + 4)
                                            
                                            if (temp8_1 s>= rax_48)
                                                if (temp8_1 s<= rax_48)
                                                    void* rax_49 = &var_294
                                                    
                                                    if (r11_4 == 0)
                                                        rax_49 = rcx_20
                                                    
                                                    rcx_20 = rax_49
                                                else
                                                    rcx_20 = &var_294
                                        
                                        if (r9_4 == 2)
                                            rdx_19 = &var_29c
                                        else if (rbx_3.b != 2)
                                            uint32_t rbx_4 = (rbx_3 u>> 0x20).d
                                            int32_t temp10_1 = *(arg3 + 0x2c)
                                            
                                            if (temp10_1 s<= rbx_4)
                                                if (temp10_1 s>= rbx_4)
                                                    void* rax_50 = &var_29c
                                                    
                                                    if (r9_4 == 0)
                                                        rax_50 = rdx_19
                                                    
                                                    rdx_19 = rax_50
                                                else
                                                    rdx_19 = &var_29c
                                        
                                        var_278_1 = *rdx_19
                                        rax_46 = *rcx_20
                                else
                                    char r11_3 = arg3[6].b
                                    
                                    if (r11_3 == 2)
                                        goto label_141a4db67
                                    
                                    int32_t rcx_17 = *(arg3 + 0x34)
                                    int32_t temp7_1 = *(arg3 + 0x2c)
                                    
                                    if (temp7_1 s<= rcx_17
                                            && (temp7_1 != rcx_17 || (r9_4 != 0 && r11_3 != 0)))
                                        goto label_141a4db67
                                    
                                    int32_t var_234_1 = 0
                                    var_278_1 = 0.q
                                    int32_t var_22c_1 = 0
                                    rax_46 = 0.q
                                
                                rcx_36 = arg4
                                r8_20 = &var_328
                                int64_t var_270_1 = rax_46
                                rdx_20 = &var_2f8
                                int32_t var_214_1 = 0
                                r9_5 = 0xffffffff.q
                                var_2f8.o = var_278_1.o
                                var_328.q = &data_14302ec20
                                goto label_141a4e148
                            
                            int32_t var_104_1 = arg2
                            uint64_t var_e0_1 = r15.q
                            char* rdi_2 = sx.q(*(*(arg1 + 0x18) + (sx.q(rax_31) << 2))) * 0x58
                                + *(arg1 + 0x28)
                            int64_t* rax_52
                            rax_52, zmm2 = sub_141a51ae0()
                            int64_t r9_6 = *rax_52
                            void var_2b4
                            int16_t rcx_23 =
                                *(*(r9_6 + 0x48))(rax_52, &var_2b4, *(arg1 + 0xe8), r9_6, var_338)
                            int32_t var_f4_1 = arg3[0x12].d
                            uint32_t var_f0_1 = zx.d(*(arg1 + 0x10))
                            void* rax_57 = sub_141a2a8d0(&rdi_2[0x18], arg1)
                            char r9_7 = *rdi_2
                            r13_1 = var_318
                            rbx_1 = var_310
                            bool var_ec_1 = rax_57 != 0
                            var_2f8.q = r13_1
                            var_328.o = var_318.o
                            int64_t rax_59
                            int64_t rdi_3
                            
                            if (r9_7 == 2)
                            label_141a4dd4c:
                                uint32_t rax_61
                                uint32_t rcx_26
                                
                                if (r13_1.b != 2 && rbx_1.b != 2)
                                    rax_61 = (r13_1 u>> 0x20).d
                                    rcx_26 = (rbx_1 u>> 0x20).d
                                
                                if (r13_1.b != 2 && rbx_1.b != 2 && (rax_61 s> rcx_26
                                        || (rax_61 == rcx_26 && (r13_1.b == 0 || rbx_1.b == 0))))
                                    int32_t var_1f4_1 = 0
                                    rdi_3 = 0.q
                                    int32_t var_1fc_1 = 0
                                    rax_59 = 0.q
                                else
                                    char r8_22 = rdi_2[8]
                                    void* rcx_27 = &rdi_2[8]
                                    
                                    if (r8_22 == 2)
                                        rcx_27 = &var_320
                                    else if (rbx_1.b != 2)
                                        uint32_t rax_63 = (rbx_1 u>> 0x20).d
                                        int32_t temp5_1 = *(rcx_27 + 4)
                                        
                                        if (temp5_1 s>= rax_63)
                                            if (temp5_1 s<= rax_63)
                                                void* rax_64 = &var_320
                                                
                                                if (r8_22 == 0)
                                                    rax_64 = rcx_27
                                                
                                                rcx_27 = rax_64
                                            else
                                                rcx_27 = &var_320
                                    
                                    if (r9_7 == 2)
                                        rdi_2 = &var_328
                                    else if (r13_1.b != 2)
                                        uint32_t rax_66 = (r13_1 u>> 0x20).d
                                        int32_t temp6_1 = *(rdi_2 + 4)
                                        
                                        if (temp6_1 s<= rax_66)
                                            if (temp6_1 s>= rax_66)
                                                char* rax_67 = &var_328
                                                
                                                if (r9_7 == 0)
                                                    rax_67 = rdi_2
                                                
                                                rdi_2 = rax_67
                                            else
                                                rdi_2 = &var_328
                                    
                                    rax_59 = *rdi_2
                                    rdi_3 = *rcx_27
                            else
                                char rdx_25 = rdi_2[8]
                                
                                if (rdx_25 == 2)
                                    goto label_141a4dd4c
                                
                                int32_t rax_58 = *(rdi_2 + 0xc)
                                int32_t temp4_1 = *(rdi_2 + 4)
                                
                                if (temp4_1 s<= rax_58
                                        && (temp4_1 != rax_58 || (r9_7 != 0 && rdx_25 != 0)))
                                    goto label_141a4dd4c
                                
                                int32_t var_204_1 = 0
                                rdi_3 = 0.q
                                int32_t var_20c_1 = 0
                                rax_59 = 0.q
                            
                            int64_t rax_68
                            
                            if (rax_59.b != 2)
                                int128_t* r8_23 = &var_268
                                
                                if (rax_59.b != 1)
                                    int32_t var_1d4_1 = 0
                                    void var_b8
                                    int32_t* rax_73
                                    rax_73, zmm2 = sub_141a352a0(&var_b8, rax_59:4.d.q, r8_23)
                                    int32_t var_1cc_1 = *rax_73
                                    rax_68 = 0.q
                                else
                                    int32_t var_1e4_1 = 0
                                    void var_b0
                                    int32_t* rax_70
                                    rax_70, zmm2 =
                                        sub_141a352a0(&var_b0, (rax_59 u>> 0x20).d.q, r8_23)
                                    int32_t var_1dc_1 = *rax_70
                                    rax_68 = 1.q
                                
                                r13_1 = var_318
                                rbx_1 = var_310
                                var_2f8.q = r13_1
                            else
                                int32_t var_1ec_1 = 0
                                rax_68 = rax_59.b.q
                            
                            var_328.q = rax_68
                            int64_t rax_75
                            
                            if (rdi_3.b != 2)
                                int128_t* r8_24 = &var_268
                                
                                if (rdi_3.b != 1)
                                    int32_t var_1ac_1 = 0
                                    void var_98
                                    int32_t* rax_79
                                    rax_79, zmm2 = sub_141a352a0(&var_98, rdi_3:4.d.q, r8_24)
                                    int32_t var_1a4_1 = *rax_79
                                    rax_75 = 0.q
                                else
                                    int32_t var_1bc_1 = 0
                                    void var_a0
                                    int32_t* rax_76
                                    rax_76, zmm2 =
                                        sub_141a352a0(&var_a0, (rdi_3 u>> 0x20).d.q, r8_24)
                                    int32_t var_1b4_1 = *rax_76
                                    rax_75 = 1.q
                                
                                r13_1 = var_318
                                rbx_1 = var_310
                                var_2f8.q = r13_1
                            else
                                int32_t var_1c4_1 = 0
                                rax_75 = rdi_3.b.q
                            
                            char r10_5 = arg3[5].b
                            void* r8_25 = &arg3[5]
                            int64_t rcx_32 = var_328.q
                            int64_t var_2ac = rcx_32
                            int64_t var_2a4 = rax_75
                            int64_t rcx_33
                            
                            if (r10_5 == 2)
                            label_141a4dfd4:
                                uint32_t rdx_32
                                uint32_t r9_9
                                
                                if (rcx_32.b != 2 && rax_75.b != 2)
                                    rdx_32 = (rcx_32 u>> 0x20).d
                                    r9_9 = (rax_75 u>> 0x20).d
                                
                                if (rcx_32.b != 2 && rax_75.b != 2 && (rdx_32 s> r9_9
                                        || (rdx_32 == r9_9 && (rcx_32.b == 0 || rax_75.b == 0))))
                                    int32_t var_184_1 = 0
                                    rcx_33 = 0.q
                                    int32_t var_18c_1 = 0
                                    result = 0.q
                                else
                                    char rdi_6 = arg3[6].b
                                    void* rdx_33 = &arg3[6]
                                    
                                    if (rdi_6 == 2)
                                        rdx_33 = &var_2a4
                                    else if (rax_75.b != 2)
                                        uint32_t rax_81 = (rax_75 u>> 0x20).d
                                        int32_t temp11_1 = *(rdx_33 + 4)
                                        
                                        if (temp11_1 s>= rax_81)
                                            if (temp11_1 s<= rax_81)
                                                void* rax_82 = &var_2a4
                                                
                                                if (rdi_6 == 0)
                                                    rax_82 = rdx_33
                                                
                                                rdx_33 = rax_82
                                            else
                                                rdx_33 = &var_2a4
                                    
                                    if (r10_5 == 2)
                                        r8_25 = &var_2ac
                                    else if (rcx_32.b != 2)
                                        uint32_t rcx_34 = (rcx_32 u>> 0x20).d
                                        int32_t temp12_1 = *(arg3 + 0x2c)
                                        
                                        if (temp12_1 s<= rcx_34)
                                            if (temp12_1 s>= rcx_34)
                                                void* rax_83 = &var_2ac
                                                
                                                if (r10_5 == 0)
                                                    rax_83 = r8_25
                                                
                                                r8_25 = rax_83
                                            else
                                                r8_25 = &var_2ac
                                    
                                    result = *r8_25
                                    rcx_33 = *rdx_33
                            else
                                char rdi_5 = arg3[6].b
                                
                                if (rdi_5 == 2)
                                    goto label_141a4dfd4
                                
                                int32_t rdx_30 = *(arg3 + 0x34)
                                int32_t temp9_1 = *(arg3 + 0x2c)
                                
                                if (temp9_1 s<= rdx_30
                                        && (temp9_1 != rdx_30 || (r10_5 != 0 && rdi_5 != 0)))
                                    goto label_141a4dfd4
                                
                                int32_t var_194_1 = 0
                                rcx_33 = 0.q
                                int32_t var_19c_1 = 0
                                result = 0.q
                            
                            result_2 = result
                            var_2d0_1.q = rcx_33
                            
                            if (result.b == 2 || rcx_33.b == 2)
                            label_141a4e0e0:
                                void** const var_90
                                r8_20 = &var_90
                                rdx_20 = &var_328
                                rcx_36 = &arg4[4]
                                var_328.o = result_2.o
                                int32_t var_17c_1 = 0
                                r9_5 = 0xffffffff.q
                                uint128_t var_80_1 = rcx_23.o
                                var_90 = &data_14302f428
                                uint64_t var_60_1 = rax_31.q
                                int128_t* var_88_1 = rcx_36
                                int128_t var_70_1 = arg1.o
                            label_141a4e148:
                                result, rdx_12, r9_3 = sub_141a37e10(rcx_36, rdx_20, r8_20, r9_5)
                                r13_1 = var_318
                                rbx_1 = var_310
                                var_2f8.q = r13_1
                            else
                                rdx_12 = result u>> 0x20
                                uint32_t r8_27 = (rcx_33 u>> 0x20).d
                                
                                if (rdx_12.d s<= r8_27)
                                    if (rdx_12.d != r8_27)
                                        goto label_141a4e0e0
                                    
                                    if (result.b != 0 && rcx_33.b != 0)
                                        goto label_141a4e0e0
                            
                            result_4 = result_1
                            int128_t* var_300
                            
                            if (result_4.d == 0xffffffff)
                                r8_13 = r14:4.d
                                r10_3 = rsi:4.d
                                
                                if (result_1:4.d != 0)
                                    continue
                                else if (result_4.d == result_4.d)
                                    r13_3 = var_300
                                    rdx_38 = r13_3
                                    break
                            
                            r13_3 = var_300
                            rdx_38 = ((sx.q(*(r13_3[2].q + sx.q(result_4.d) * 0xc))
                                + sx.q((result_4 u>> 0x20).d)) << 5) + r13_3[3].q
                            break
                    else if (r10_3 s<= r8_13)
                        if (r10_3 != r8_13)
                            goto label_141a4d8b6
                        
                        if (rsi.b != 0 && r14.b != 0)
                            goto label_141a4d8b6
                else
                    result = r13_1 u>> 0x20
                    uint32_t rcx_9 = (rbx_1 u>> 0x20).d
                    
                    if (result.d s<= rcx_9)
                        if (result.d != rcx_9)
                            goto label_141a4d884
                        
                        if (r13_1.b != 0 && rbx_1.b != 0)
                            goto label_141a4d884
            
            return result
        
        var_328.o = *rdx_38
        int64_t rax_89 = var_320
        
        if (rax_89.b == rbx_1.b)
            if (rax_89.b == 2)
                break
            
            if ((rax_89 u>> 0x20).d == (rbx_1 u>> 0x20).d)
                break
        
        char rax_91 = (var_2f8.q).b
        
        if (rax_91 == 2 || rbx_1.b == 2)
        label_141a4e22b:
            
            if (rbx_1.b != 0)
            label_141a4e240:
                char var_2c8
                
                if (rbx_1.b != 1)
                    var_2c8.q = rbx_1
                else
                    uint32_t var_2c4_2 = (rbx_1 u>> 0x20).d
                    rbx_1 = 0.q
            else
                uint32_t var_2c4_1 = (rbx_1 u>> 0x20).d
                rbx_1 = 1.q
        else
            int32_t rcx_41 = var_318:4.d
            int32_t temp13_1 = var_310:4.d
            int32_t var_174_1
            
            if (rcx_41 s> temp13_1)
                var_174_1 = 0
                rbx_1 = 2.q
            else
                if (rcx_41 != temp13_1)
                    goto label_141a4e22b
                
                if (rax_91 != 0 && rbx_1.b != 0)
                    goto label_141a4e240
                
                var_174_1 = 0
                rbx_1 = 2.q
        
        var_338 = 1
        char* result_3
        sub_141a4b4f0(&var_318, &result_3, result_4, rbx_1, 1)
        result = result_3
        
        while (true)
            uint128_t* r8_32
            
            if (result.d != 0xffffffff)
                r8_32 = ((sx.q(*(r13_3[2].q + sx.q(result.d) * 0xc)) + sx.q((result u>> 0x20).d))
                    << 5) + r13_3[3].q
            else
                if ((result u>> 0x20).d != 0)
                    break
                
                if (result.d == result.d)
                    r8_32 = r13_3
                else
                    r8_32 = ((sx.q(*(r13_3[2].q + sx.q(result.d) * 0xc))
                        + sx.q((result u>> 0x20).d)) << 5) + r13_3[3].q
            
            var_328.o = *r8_32
            int64_t rcx_50 = var_328.q
            
            if (rcx_50.b != rbx_1.b)
                break
            
            if (rcx_50.b != 2 && (rcx_50 u>> 0x20).d != (rbx_1 u>> 0x20).d)
                break
            
            result_1 = result
            var_338 = 1
            result_4 = result
            result = *sub_141a4b4f0(&var_318, &var_128, result, rbx_1, 1)
            result_3 = result
        
        uint128_t* r8_37
        
        if (result_4.d == 0xffffffff)
            r8_37 = r13_3
        else
            r8_37 = ((sx.q(*(r13_3[2].q + sx.q(result_4.d) * 0xc)) + sx.q((result_4 u>> 0x20).d))
                << 5) + r13_3[3].q
        
        var_328.o = *r8_37
        int64_t rcx_58 = var_320
        
        if (result.d != 0xffffffff)
        label_141a4e372:
            r13_3 = ((sx.q(*(r13_3[2].q + sx.q(result.d) * 0xc)) + sx.q((result u>> 0x20).d)) << 5)
                + r13_3[3].q
        label_141a4e392:
            uint128_t zmm0_2 = *r13_3
            var_328.o = zmm0_2
            result = var_328.q
            
            if (result.b != rbx_1.b)
            label_141a4e3b8:
                var_328.o = zmm0_2
                rcx_58 = var_328.q
                
                if (rcx_58.b == 0)
                    uint32_t var_2bc_1 = (rcx_58 u>> 0x20).d
                    rcx_58 = 1.q
                else
                    char var_2c0
                    
                    if (rcx_58.b != 1)
                        var_2c0.q = rcx_58
                    else
                        uint32_t var_2bc_2 = (rcx_58 u>> 0x20).d
                        rcx_58 = 0.q
            else if (result.b != 2)
                result u>>= 0x20
                
                if (result.d != (rbx_1 u>> 0x20).d)
                    goto label_141a4e3b8
        else if ((result u>> 0x20).d == 0)
            if (result.d == result.d)
                goto label_141a4e392
            
            goto label_141a4e372
        
        var_118.q = rbx_1
        var_118:8.q = rcx_58
        var_318.o = var_118
    
    char* result_5 = rdx_38[1].q
    rdx_38.b = 1
    result_1 = result_5
    result, rdx_12, r9_3 = sub_141a58090(&var_318, rdx_38.b)
