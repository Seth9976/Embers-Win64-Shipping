// 函数: sub_141d462f0
// 地址: 0x141d462f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_168
int64_t rax_1 = __security_cookie ^ &var_168
int64_t* rbx = arg7
int64_t r11 = arg6
int64_t* rdi = arg3
int64_t var_d0 = arg4
int64_t* result_1 = arg1
int64_t var_c8 = r11
int64_t* var_c0 = rbx

if (rbx == 0 || rbx[1].d == 0)
    goto label_141d463f0

int64_t* rcx = *rbx

if (rcx == 0)
    goto label_141d463f0

int64_t* result
int64_t* var_f8
int64_t* var_f0

if ((*(*rcx + 0x28))(rcx) == 0)
label_141d463d8:
    arg4 = var_d0
    r11 = var_c8
label_141d463f0:
    int64_t* var_108
    int64_t* rcx_81
    
    if (arg2 == 0)
    label_141d471bf:
        int64_t rax_128 = *arg2
        int64_t var_138_3 = 0
        int32_t var_140_2 = 0
        var_108 = nullptr
        int64_t var_100_5 = 0
        (*(rax_128 + 0xa0))(arg2, &var_108, rdi, 0, 0, var_140_2, var_138_3)
    label_141d471f4:
        void*** rax_129 = j_sub_140a82f30(0x30)
        void*** rbx_21 = rax_129
        
        if (rax_129 == 0)
            rbx_21 = nullptr
        else
            rax_129[1].d = 1
            *(rax_129 + 0xc) = 1
            *rbx_21 = &data_142d85508
            rbx_21[3].d = 0
            rbx_21[2] = &data_142d84ab0
            sub_140596d10(&rbx_21[4], &var_108)
            rbx_21[3].d = 2
        
        var_f8 = &rbx_21[2]
        *result_1 = var_f8
        result_1[1] = rbx_21
        
        if (rbx_21 != 0)
            rbx_21[1].d += 1
        
        sub_1406b63d0(&var_f8)
        rcx_81 = var_108
        goto label_141d47285
    
    int64_t rcx_6 = *(arg2[1] + 0x10)
    void* var_128
    int64_t rax_9
    int64_t* rcx_7
    void* rbx_2
    
    if (((rcx_6 u>> 0x30).b & 1) != 0)
        rcx_7 = arg2[0xf]
        rbx_2 = arg2[0x10]
        rax_9 = *rcx_7
    label_141d46432:
        sub_140bdef30(rbx_2, &var_f8, (*(rax_9 + 0x168))(rcx_7, rdi))
        void*** rax_11 = j_sub_140a82f30(0x30)
        void*** rbx_3 = rax_11
        
        if (rax_11 == 0)
            rbx_3 = nullptr
        else
            rax_11[1].d = 1
            *(rax_11 + 0xc) = 1
            *rbx_3 = &data_142d85508
            rbx_3[3].d = 0
            rbx_3[2] = &data_142d84ab0
            rbx_3[4] = 0
            int32_t rsi_1 = var_f0.d
            int64_t* r14_1 = var_f8
            rbx_3[5].d = rsi_1
            
            if (rsi_1 != 0)
                sub_1405a4c70(&rbx_3[4], rsi_1, 0)
                memcpy(rbx_3[4], r14_1, rsi_1 * 2)
                rbx_3[3].d = 2
            else
                *(rbx_3 + 0x2c) = 0
                rbx_3[3].d = 2
        
        var_128 = &rbx_3[2]
        *result_1 = var_128
        result_1[1] = rbx_3
        
        if (rbx_3 != 0)
            rbx_3[1].d += 1
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp2_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp2_1 == 1)
                        (*rbx_3)[1](rbx_3, 1)
        
        rcx_81 = var_f8
    label_141d47285:
        
        if (rcx_81 == 0)
            result = result_1
        else
            sub_140a74f90(rcx_81)
            result = result_1
    else
        void*** var_120_3
        void* rdx_9
        
        if (((rcx_6 u>> 0x18).b & 1) == 0)
            if (arg2 == 0)
                goto label_141d471bf
            
            int64_t rcx_20 = *(arg2[1] + 0x10)
            
            if (((rcx_20 u>> 0x11).b & 1) == 0)
                if (((rcx_20 u>> 0xe).b & 1) != 0)
                    goto label_141d4675b
                
                if (((rcx_20 u>> 0x1e).b & 1) != 0)
                    rdi = sub_140ac6680(rdi)
                label_141d4675b:
                    void*** rax_38 = j_sub_140a82f30(0x30)
                    void*** rbx_7 = rax_38
                    
                    if (rax_38 == 0)
                        rbx_7 = nullptr
                    else
                        rax_38[1].d = 1
                        *(rax_38 + 0xc) = 1
                        *rbx_7 = &data_142d85508
                        rbx_7[3].d = 0
                        rbx_7[2] = &data_142d84ab0
                        sub_140596d10(&rbx_7[4], rdi)
                        rbx_7[3].d = 2
                    
                    rdx_9 = &rbx_7[2]
                    var_120_3 = rbx_7
                    goto label_141d467b3
                
                int32_t var_140
                void* var_e0
                
                if (((rcx_20 u>> 0x15).b & 1) != 0)
                    int64_t* r10_2 = arg2
                    void* r14_2 = nullptr
                    var_128 = nullptr
                    int32_t i_4 = 0
                    int64_t var_120_4 = 0
                    int32_t r13_1 = 0
                    int32_t i_6 = rdi[1].d
                    
                    if (i_6 s> 0)
                        int32_t rdx_11
                        rdx_11.b = not.b(r10_2[0x10].d.b)
                        var_e0 = sx.q(*(r10_2[0xf] + 0x3c))
                        rdx_11.b &= 1
                        void* const r15 = nullptr
                        int64_t r9_1 = arg4 & 0xfffffffff7fffa7d
                        int32_t var_118_1 = rdx_11
                        int64_t var_d0_1 = r9_1
                        uint64_t i_5 = zx.q(i_6)
                        uint64_t i
                        
                        do
                            int64_t* r8_5
                            
                            if (rdi[1].d != 0)
                                void* rax_46 = *rdi
                                
                                if (rdx_11.b == 0 && (rax_46.b & 1) != 0)
                                    rax_46 = (rax_46 s>> 1) + rdi
                                
                                r8_5 = r15 + rax_46
                            else
                                r8_5 = nullptr
                            
                            var_140.q = rbx
                            arg5 =
                                sub_141d494f0(&var_108, r10_2[0xf], r8_5, r9_1, arg5, r11, var_140)
                            int64_t* rax_48 = var_108
                            
                            if (rax_48 == 0)
                                goto label_141d46916
                            
                            int64_t i_7 = sx.q(i_4)
                            i_4 = (i_7 + 1).d
                            var_120_4.d = i_4
                            
                            if (i_4 s> r13_1)
                                arg5 = sub_140610660(&var_128)
                                rax_48 = var_108
                                r13_1 = var_120_4:4.d
                                i_4 = var_120_4.d
                                r14_2 = var_128
                            
                            int64_t rcx_30 = i_7 * 2
                            *(r14_2 + (rcx_30 << 3)) = rax_48
                            int64_t* var_100
                            *(r14_2 + (rcx_30 << 3) + 8) = var_100
                            
                            if (var_100 != 0)
                                var_100[1].d += 1
                            label_141d46916:
                                
                                if (var_100 != 0)
                                    var_100[1].d -= 1
                                    
                                    if (var_100[1].d == 1)
                                        (**var_100)(var_100)
                                        int32_t temp17_1 = *(var_100 + 0xc)
                                        *(var_100 + 0xc) -= 1
                                        
                                        if (temp17_1 == 1)
                                            (*(*var_100 + 8))(var_100, 1)
                            
                            r15 += var_e0
                            rdx_11 = var_118_1
                            r10_2 = arg2
                            rbx = var_c0
                            r9_1 = var_d0_1
                            r11 = var_c8
                            i = i_5
                            i_5 -= 1
                        while (i != 1)
                        result_1 = arg1
                    
                    void*** rax_53 = j_sub_140a82f30(0x30)
                    void*** rbx_10 = rax_53
                    
                    if (rax_53 == 0)
                        rbx_10 = nullptr
                    else
                        rax_53[1].d = 1
                        *(rax_53 + 0xc) = 1
                        *rbx_10 = &data_142d84f58
                        rbx_10[2] = &data_142d84d00
                        rbx_10[3].d = 0
                        rbx_10[4] = 0
                        rbx_10[5].d = i_4
                        
                        if (i_4 != 0)
                            sub_14061cb30(&rbx_10[4], i_4, 0)
                            int64_t* rcx_34 = rbx_10[4]
                            int32_t i_1
                            
                            do
                                *rcx_34 = *r14_2
                                void* rax_55 = *(r14_2 + 8)
                                rcx_34[1] = rax_55
                                
                                if (rax_55 != 0)
                                    *(rax_55 + 8) += 1
                                
                                rcx_34 = &rcx_34[2]
                                r14_2 += 0x10
                                i_1 = i_4
                                i_4 -= 1
                            while (i_1 != 1)
                            rbx_10[3].d = 5
                        else
                            *(rbx_10 + 0x2c) = 0
                            rbx_10[3].d = 5
                    
                    var_108 = &rbx_10[2]
                    *result_1 = var_108
                    result_1[1] = rbx_10
                    
                    if (rbx_10 != 0)
                        rbx_10[1].d += 1
                        
                        if (rbx_10 != 0)
                            rbx_10[1].d -= 1
                            
                            if (rbx_10[1].d == 1)
                                (**rbx_10)(rbx_10)
                                int32_t temp13_1 = *(rbx_10 + 0xc)
                                *(rbx_10 + 0xc) -= 1
                                
                                if (temp13_1 == 1)
                                    (*rbx_10)[1](rbx_10, 1)
                    
                    sub_140627040(&var_128)
                    result = result_1
                else
                    int64_t* var_120
                    
                    if (((rcx_20 u>> 0x2f).b & 1) != 0)
                        int32_t rsi_2 = arg2[0x12].d
                        int32_t r15_1 = 0
                        var_e0 = nullptr
                        int64_t var_d8_1 = 0
                        int32_t rsi_3 = 0
                        int32_t r12_1 = rdi[1].d
                        int32_t i_2 = r12_1 - *(rdi + 0x34)
                        
                        if (r12_1 != *(rdi + 0x34))
                            int32_t rax_62 = rsi_2
                            int32_t r14_3 = 1
                            int32_t r13_2 = 0
                            
                            do
                                if (rsi_3 s>= 0 && rsi_3 s< rdi[5].d)
                                    void* rax_63 = rdi[4]
                                    void* rcx_38 = &rdi[2]
                                    
                                    if (rax_63 != 0)
                                        rcx_38 = rax_63
                                    
                                    int32_t rax_64 = rsi_3
                                    
                                    if (rsi_3 s< 0)
                                        rax_64 = rsi_3 + 0x1f
                                    
                                    if ((*(rcx_38 + (sx.q(rax_64 s>> 5) << 2)) & r14_3) != 0)
                                        int64_t* r8_6
                                        
                                        if (rdi[1].d != *(rdi + 0x34))
                                            r8_6 = sx.q(r13_2) + *rdi
                                        else
                                            r8_6 = nullptr
                                        
                                        var_140.q = rbx
                                        arg5 = sub_141d494f0(&var_128, arg2[0xf], r8_6, 
                                            arg4 & 0xfffffffff7fffa7d, arg5, r11, var_140)
                                        void* rax_69 = var_128
                                        int64_t* rbx_13
                                        
                                        if (rax_69 == 0)
                                            rbx_13 = var_120
                                        else
                                            int64_t rbx_12 = sx.q(r15_1)
                                            r15_1 = (rbx_12 + 1).d
                                            var_d8_1.d = r15_1
                                            
                                            if (r15_1 s> var_d8_1:4.d)
                                                arg5 = sub_140610660(&var_e0)
                                                rax_69 = var_128
                                                r15_1 = var_d8_1.d
                                            
                                            void** rcx_43 = (rbx_12 << 4) + var_e0
                                            *rcx_43 = rax_69
                                            rcx_43[1] = var_120
                                            rbx_13 = var_120
                                            
                                            if (rbx_13 != 0)
                                                rbx_13[1].d += 1
                                                rbx_13 = var_120
                                        
                                        i_2 -= 1
                                        
                                        if (rbx_13 != 0)
                                            rbx_13[1].d -= 1
                                            
                                            if (rbx_13[1].d == 1)
                                                (**rbx_13)(rbx_13)
                                                int32_t temp19_1 = *(rbx_13 + 0xc)
                                                *(rbx_13 + 0xc) -= 1
                                                
                                                if (temp19_1 == 1)
                                                    (*(*rbx_13 + 8))(rbx_13, 1)
                                    
                                    rax_62 = rsi_2
                                
                                rbx = var_c0
                                rsi_3 += 1
                                arg4 = var_d0
                                r13_2 += rax_62
                                r11 = var_c8
                                r14_3 = rol.d(r14_3, 1)
                            while (i_2 != 0)
                        
                        void*** rax_73 = j_sub_140a82f30(0x30)
                        void*** rbx_14 = rax_73
                        
                        if (rax_73 == 0)
                            rbx_14 = nullptr
                        else
                            rax_73[1].d = 1
                            *(rax_73 + 0xc) = 1
                            *rbx_14 = &data_142d84f58
                            sub_140669740(&rbx_14[2], &var_e0)
                        
                        var_108 = &rbx_14[2]
                        *arg1 = var_108
                        arg1[1] = rbx_14
                        
                        if (rbx_14 != 0)
                            rbx_14[1].d += 1
                            
                            if (rbx_14 != 0)
                                rbx_14[1].d -= 1
                                
                                if (rbx_14[1].d == 1)
                                    (**rbx_14)(rbx_14)
                                    int32_t temp16_1 = *(rbx_14 + 0xc)
                                    *(rbx_14 + 0xc) -= 1
                                    
                                    if (temp16_1 == 1)
                                        (*rbx_14)[1](rbx_14, 1)
                        
                        sub_140627040(&var_e0)
                        result = arg1
                    else if (((rcx_20 u>> 0x2e).b & 1) == 0)
                        if (((rcx_20 u>> 0x14).b & 1) == 0)
                            goto label_141d471bf
                        
                        int64_t* rbx_18 = *(arg2[0xf] + 0xb8)
                        int64_t rax_115 = sub_141d49ef0()
                        char rax_117
                        
                        if (arg2[0xf] != rax_115 && rbx_18 != 0)
                            rax_117 = (*(*rbx_18 + 0xc0))(rbx_18)
                        
                        if (arg2[0xf] != rax_115 && rbx_18 != 0 && rax_117 != 0)
                            int64_t rax_118 = *rbx_18
                            int64_t var_138_2 = 0
                            int32_t var_140_1 = 0
                            var_108 = nullptr
                            int64_t var_100_4 = 0
                            (*(rax_118 + 0xc8))(rbx_18, &var_108, rdi, 0, 0, var_140_1, var_138_2)
                            goto label_141d471f4
                        
                        void*** rax_119 = sub_140666cd0()
                        void*** var_120_5 = rax_119
                        var_128 = &rax_119[2]
                        uint128_t zmm0_4 = var_128.o
                        var_f8.o = zmm0_4
                        void* rax_120 = _mm_bsrli_si128(zmm0_4, 8).q
                        
                        if (rax_120 != 0)
                            *(rax_120 + 8) += 1
                        
                        var_140.q = var_c0
                        char rax_123 = sub_141d497e0(arg2[0xf], rdi, var_f8, 
                            var_d0 & 0xfffffffff7fffa7d, var_c8, var_140)
                        sub_1406b63d0(&var_f8)
                        
                        if (rax_123 == 0)
                            sub_1406b63d0(&var_128)
                        label_141d471b3:
                            *result_1 = 0
                            result_1[1] = 0
                            result = result_1
                        else
                            void*** rax_124 = j_sub_140a82f30(0x30)
                            void*** rbx_20 = rax_124
                            
                            if (rax_124 == 0)
                                rbx_20 = nullptr
                            else
                                rax_124[1].d = 1
                                *(rax_124 + 0xc) = 1
                                *rbx_20 = &data_142d84f48
                                uint128_t zmm0_5 = var_128.o
                                var_108.o = zmm0_5
                                void* rax_125 = _mm_bsrli_si128(zmm0_5, 8).q
                                
                                if (rax_125 != 0)
                                    *(rax_125 + 8) += 1
                                
                                sub_140669820(&rbx_20[2], &var_108)
                            
                            var_f8 = &rbx_20[2]
                            *result_1 = var_f8
                            result_1[1] = rbx_20
                            
                            if (rbx_20 != 0)
                                rbx_20[1].d += 1
                            
                            sub_1406b63d0(&var_f8)
                            sub_1406b63d0(&var_128)
                            result = result_1
                    else
                        void*** rax_80 = sub_140666cd0()
                        void*** var_f0_1 = rax_80
                        var_f8 = &rax_80[2]
                        int32_t rcx_50 = arg2[0x14].d
                        int32_t rbx_16 = 0
                        int128_t zmm0_1 = *(arg2 + 0x88)
                        int32_t r13_3 = rdi[1].d
                        int64_t zmm1 = arg2[0x13]
                        int32_t var_88_1 = zmm0_1.d
                        int32_t i_3
                        
                        if ((not.b(rcx_50.b) & 1) != 0)
                            i_3 = r13_3 - *(rdi + 0x34)
                        else
                            i_3 = r13_3 - *(rdi + 0x24)
                        
                        if (i_3 != 0)
                            int64_t* r15_2 = var_c0
                            rcx_50.b = not.b(rcx_50.b)
                            int32_t r12_2 = 1
                            rcx_50.b &= 1
                            int32_t var_118_3 = rcx_50
                            int32_t r14_4 = 0
                            
                            do
                                int64_t* r8_9
                                
                                if (rcx_50.b != 0)
                                    if (rbx_16 s>= 0 && rbx_16 s< rdi[5].d)
                                        void* rax_89 = rdi[4]
                                        void* rcx_53 = &rdi[2]
                                        
                                        if (rax_89 != 0)
                                            rcx_53 = rax_89
                                        
                                        int32_t rax_90 = rbx_16
                                        
                                        if (rbx_16 s< 0)
                                            rax_90 = rbx_16 + 0x1f
                                        
                                        if ((*(rcx_53 + (sx.q(rax_90 s>> 5) << 2)) & r12_2) == 0)
                                            rcx_50 = var_118_3
                                        else
                                            if (rdi[1].d != *(rdi + 0x34))
                                                r8_9 = sx.q(r14_4) + *rdi
                                            else
                                                r8_9 = nullptr
                                            
                                        label_141d46db0:
                                            var_140.q = r15_2
                                            int64_t rsi_5 = var_d0 & 0xfffffffff7fffa7d
                                            int128_t zmm0_2 = sub_141d494f0(&var_c0, arg2[0xf], 
                                                r8_9, rsi_5, zmm0_1, var_c8, var_140)
                                            int32_t rax_96 = rdi[1].d
                                            int64_t* r8_12
                                            
                                            if (var_118_3.b != 0)
                                                if (rax_96 != *(rdi + 0x34))
                                                    r8_12 = sx.q(r14_4) + sx.q(var_88_1) + *rdi
                                                else
                                                    r8_12 = nullptr
                                            else if (rax_96 != *(rdi + 0x24))
                                                void* rcx_55 = *rdi
                                                
                                                if ((rcx_55.b & 1) != 0)
                                                    rcx_55 = (rcx_55 s>> 1) + rdi
                                                
                                                r8_12 = sx.q(var_88_1) + sx.q(r14_4) + rcx_55
                                            else
                                                r8_12 = nullptr
                                            
                                            var_140.q = r15_2
                                            sub_141d494f0(&var_108, arg2[0x10], r8_12, rsi_5, 
                                                zmm0_2, var_c8, var_140)
                                            int64_t* rcx_58 = var_c0
                                            
                                            if (rcx_58 != 0 && var_108 != 0)
                                                var_e0 = nullptr
                                                int32_t var_d8_2 = 0
                                                
                                                if ((*(*rcx_58 + 0x58))(rcx_58, &var_e0) == 0)
                                                    int32_t rax_103 = rdi[1].d
                                                    void* r8_16
                                                    
                                                    if (var_118_3.b != 0)
                                                        if (rax_103 != *(rdi + 0x34))
                                                            r8_16 = sx.q(r14_4) + *rdi
                                                        else
                                                            r8_16 = nullptr
                                                    else if (rax_103 != *(rdi + 0x24))
                                                        void* rax_104 = *rdi
                                                        
                                                        if ((rax_104.b & 1) != 0)
                                                            rax_104 = (rax_104 s>> 1) + rdi
                                                        
                                                        r8_16 = sx.q(r14_4) + rax_104
                                                    else
                                                        r8_16 = nullptr
                                                    
                                                    int64_t* rcx_59 = arg2[0xf]
                                                    (*(*rcx_59 + 0xa0))(rcx_59, &var_e0, r8_16, 0, 
                                                        0, 0, 0)
                                                    
                                                    if (var_d8_2 s<= 1)
                                                        sub_140a2e390(&var_128, Unparsed Key %d", 
                                                            zx.q(rbx_16))
                                                        void* rcx_61 = var_e0
                                                        
                                                        if (rcx_61 != 0)
                                                            sub_140a74f90(rcx_61)
                                                        
                                                        var_e0 = var_128
                                                        var_d8_2 = var_120.d
                                                        var_d8_2 = var_120:4.d
                                                        var_120 = nullptr
                                                        var_128 = nullptr
                                                
                                                j_sub_140b746f0(var_f8, &var_e0, &var_108)
                                                void* rcx_63 = var_e0
                                                
                                                if (rcx_63 != 0)
                                                    sub_140a74f90(rcx_63)
                                            
                                            i_3 -= 1
                                            sub_140669d70(&var_108)
                                            zmm0_1 = sub_140669d70(&var_c0)
                                            rcx_50 = var_118_3
                                else if (rbx_16 s>= 0 && rbx_16 s< rdi[3].d)
                                    void* rcx_51 = rdi[2]
                                    
                                    if ((rcx_51.b & 1) != 0)
                                        rcx_51 = (rcx_51 s>> 1) + &rdi[2]
                                    
                                    int32_t rax_83 = rbx_16
                                    
                                    if (rbx_16 s< 0)
                                        rax_83 = rbx_16 + 0x1f
                                    
                                    if ((*(rcx_51 + (sx.q(rax_83 s>> 5) << 2)) & r12_2) != 0)
                                        if (rdi[1].d != *(rdi + 0x24))
                                            void* rax_87 = *rdi
                                            
                                            if ((rax_87.b & 1) != 0)
                                                rax_87 = (rax_87 s>> 1) + rdi
                                            
                                            r8_9 = sx.q(r14_4) + rax_87
                                        else
                                            r8_9 = nullptr
                                        
                                        goto label_141d46db0
                                    
                                    rcx_50 = var_118_3
                                r14_4 += zmm1:4.d
                                rbx_16 += 1
                                r12_2 = rol.d(r12_2, 1)
                            while (i_3 != 0)
                            
                            result_1 = arg1
                        
                        void*** rax_110 = j_sub_140a82f30(0x30)
                        void*** rbx_17 = rax_110
                        
                        if (rax_110 == 0)
                            rbx_17 = nullptr
                        else
                            rax_110[1].d = 1
                            *(rax_110 + 0xc) = 1
                            *rbx_17 = &data_142d84f48
                            uint128_t zmm0_3 = var_f8.o
                            var_128.o = zmm0_3
                            void* rax_111 = _mm_bsrli_si128(zmm0_3, 8).q
                            
                            if (rax_111 != 0)
                                *(rax_111 + 8) += 1
                            
                            sub_140669820(&rbx_17[2], &var_128)
                        
                        var_108 = &rbx_17[2]
                        *result_1 = var_108
                        result_1[1] = rbx_17
                        
                        if (rbx_17 != 0)
                            rbx_17[1].d += 1
                        
                        sub_1406b63d0(&var_108)
                        sub_1406b63d0(&var_f8)
                        result = result_1
            else
                rbx.b = (*(arg2 + 0x7b) & *(zx.q(*(arg2 + 0x79)) + rdi)) != 0
                void*** rax_32 = j_sub_140a82f30(0x28)
                
                if (rax_32 == 0)
                label_141d466b2:
                    var_120_3 = nullptr
                    rdx_9 = 0x10
                    goto label_141d467b3
                
                rax_32[1].d = 1
                *rax_32 = &data_142d854f8
                rdx_9 = &rax_32[2]
                *(rax_32 + 0xc) = 1
                rax_32[2] = &data_142d84c78
                rax_32[4].b = rbx.b
                rax_32[3].d = 4
                var_120_3 = rax_32
            label_141d467b3:
                var_128 = rdx_9
                *result_1 = var_128
                result_1[1] = var_120_3
                
                if (var_120_3 != 0)
                    var_120_3[1].d += 1
                    
                    if (var_120_3 != 0)
                        var_120_3[1].d -= 1
                        
                        if (var_120_3[1].d == 1)
                            (**var_120_3)(var_120_3)
                            int32_t temp8_1 = *(var_120_3 + 0xc)
                            *(var_120_3 + 0xc) -= 1
                            
                            if (temp8_1 == 1)
                                (*var_120_3)[1](var_120_3, 1)
                
                result = result_1
        else
            rbx_2 = (*(*arg2 + 0x140))(arg2)
            rcx_7 = arg2
            rax_9 = *arg2
            
            if (rbx_2 != 0)
                goto label_141d46432
            
            char rax_18 = (*(rax_9 + 0x130))(rcx_7)
            int64_t r8_4 = *arg2
            
            if (rax_18 == 0)
                if ((*(r8_4 + 0x138))(arg2) == 0)
                    goto label_141d471b3
                
                int64_t rax_26 = (*(*arg2 + 0x168))(arg2, rdi)
                void*** rax_27 = j_sub_140a82f30(0x28)
                
                if (rax_27 == 0)
                    goto label_141d466b2
                
                rax_27[1].d = 1
                *rax_27 = &data_142d854f8
                rdx_9 = &rax_27[2]
                *(rax_27 + 0xc) = 1
                rax_27[2] = &data_142d84b38
                rax_27[3].d = 3
                rax_27[4] = float.d(rax_26)
                var_120_3 = rax_27
                goto label_141d467b3
            
            (*(r8_4 + 0x178))(arg2, rdi, r8_4)
            void*** rax_19 = j_sub_140a82f30(zx.q((rbx_2 + 0x28).d))
            
            if (rax_19 == 0)
                rax_19 = nullptr
            else
                rax_19[1].d = 1
                *rax_19 = &data_142d854f8
                *(rax_19 + 0xc) = 1
                rax_19[2] = &data_142d84b38
                rax_19[4] = arg5.q
                rax_19[3].d = 3
            
            var_128 = &rax_19[2]
            *result_1 = var_128
            result_1[1] = rax_19
            
            if (rax_19 != 0)
                rax_19[1].d += 1
                
                if (rax_19 != 0)
                    rax_19[1].d -= 1
                    
                    if (rax_19[1].d == 1)
                        (**rax_19)(rax_19)
                        int32_t temp9_1 = *(rax_19 + 0xc)
                        *(rax_19 + 0xc) -= 1
                        
                        if (temp9_1 == 1)
                            (*rax_19)[1](rax_19, 1)
            
            result = result_1
else
    int64_t* rcx_1
    
    if (rbx[1].d == 0)
        rcx_1 = nullptr
    else
        rcx_1 = *rbx
    
    (*(*rcx_1 + 0x48))(rcx_1, &var_f8, arg2, rdi)
    int64_t* rcx_2 = var_f8
    
    if (rcx_2 == 0)
        if (var_f0 != 0)
            var_f0[1].d -= 1
            
            if (var_f0[1].d == 1)
                (**var_f0)(var_f0)
                int32_t temp3_1 = *(var_f0 + 0xc)
                *(var_f0 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*var_f0 + 8))(var_f0, 1)
        
        rbx = var_c0
        goto label_141d463d8
    
    *result_1 = rcx_2
    result = result_1
    result_1[1] = var_f0
__security_check_cookie(rax_1 ^ &var_168)
return result
