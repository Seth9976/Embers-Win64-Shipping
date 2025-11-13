// 函数: sub_141042210
// 地址: 0x141042210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
void* rdi = arg2
void*** rax = j_sub_140a82f30(0x218)
int64_t* var_128 = &r15[3]
void*** result_1
void*** result
void*** r14

if (rax == 0)
    r14 = nullptr
    result = nullptr
    result_1 = nullptr
else
    r14 = nullptr
    rdi = arg2
    void*** result_2 = sub_14103e0d0(rax, rdi, **r15, *r15[1], *r15[2], *r15[3], *r15[4], *r15[5], 
        *r15[6], *r15[7], r15[8] + 0x10, 0)
    result = result_2
    result_1 = result_2

int64_t* r10_2 = r15[8]
void* rsi_2 = &result[0x17]
void* var_108 = rsi_2
int32_t r11_3

if (*r10_2 == 0)
    var_128 = &r15[3]
    r11_3 = *r15[0xc]
else
    r11_3 = 0x400

char var_158
var_158.q = r10_2[6]
int32_t var_170
var_170.b = *r15[5]
int32_t var_178
var_178.q = rsi_2
uint128_t zmm6 =
    sub_14105a560(rdi, *r15[9], r15[0xa], *r15[0xb], var_178, var_170.b, *r15[7], r11_3, var_158)
int32_t r13_1 = 0
int32_t r12_1 = 1

if (*r15[0xd] != 0)
    char arg_18
    int32_t rdx_6
    
    if ((*r15[7] & 0x800000) == 0 || (*r15[0xe] == 0 && *r15[6] == 0))
        arg_18 = 0
        rdx_6 = **var_128
    else
        arg_18 = 1
        rdx_6 = zx.d(*(r15[0xa] + 0x1c)) * *r15[3]
    
    zmm6 = sub_14105aad0(&result[0xe], rdx_6)
    int32_t i = 0
    int32_t i_5 = 0
    
    if (**var_128 u> 0)
        do
            if (arg_18 == 0)
                int64_t var_c8_1 = 0
                int32_t rbx_5 = *r15[0xf]
                char* rax_43 = r15[0xe]
                int32_t var_d8 = rbx_5
                
                if (*rax_43 != 0 || *r15[6] != 0)
                    int32_t var_d4_2 = 5
                    int32_t var_cc_2 = 0
                    int32_t i_3 = i
                    var_c8_1.d = zx.d(*(r15[0xa] + 0x1c))
                    int32_t rax_51 = sub_141021240(*r15[0x10])
                    int32_t rax_52
                    int32_t rbx_7
                    bool cond:2_1
                    
                    if (rax_51 == 0x13)
                        rbx_7 = rbx_5 - 0x15
                        cond:2_1 = rbx_5 == 0x15
                    label_1410426ec:
                        
                        if (cond:2_1)
                            rax_52 = 0
                        else
                            rax_52 = 1
                            
                            if (rbx_7 != 1)
                                rax_52 = 0
                    else
                        if (rax_51 == 0x2c)
                            rbx_7 = rbx_5 - 0x2e
                            cond:2_1 = rbx_5 == 0x2e
                            goto label_1410426ec
                        
                        rax_52 = 0
                    var_c8_1:4.d = rax_52
                else
                    int32_t i_2 = i
                    int32_t var_d4_1 = *r15[0x11]
                    int32_t rax_47 = sub_141021240(*r15[0x10])
                    int32_t rax_48
                    int32_t rbx_6
                    bool cond:6_1
                    
                    if (rax_47 == 0x13)
                        rbx_6 = rbx_5 - 0x15
                        cond:6_1 = rbx_5 == 0x15
                    label_1410426a1:
                        
                        if (cond:6_1)
                            rax_48 = 0
                        else
                            rax_48 = 1
                            
                            if (rbx_6 != 1)
                                rax_48 = 0
                    else
                        if (rax_47 == 0x2c)
                            rbx_6 = rbx_5 - 0x2e
                            cond:6_1 = rbx_5 == 0x2e
                            goto label_1410426a1
                        
                        rax_48 = 0
                    int32_t var_cc_1 = rax_48
                
                void*** rax_53 = j_sub_140a82f30(0x88)
                void*** rdx_14
                
                if (rax_53 == 0)
                    rdx_14 = nullptr
                else
                    void*** rax_54
                    rax_54, zmm6 = sub_14103f110(rax_53, rdi, &var_d8, rsi_2)
                    rdx_14 = rax_54
                
                result = result_1
                
                if (r13_1 u< result[0x2f].d)
                    void* rcx_23 = &result[0x2d]
                    void* rax_55 = *(rcx_23 + 8)
                    
                    if (rax_55 != 0)
                        rcx_23 = rax_55
                    
                    zmm6 = sub_1410407f0(rcx_23 + (sx.q(r13_1) << 3), rdx_14)
                
                i = i_5
                r13_1 += 1
            else
                int32_t j = 0
                int32_t j_1 = 0
                *(result + 0x184) = zx.d(*(r15[0xa] + 0x1c))
                result[0x30].b = 1
                
                if (0 u< *(r15[0xa] + 0x1c))
                    do
                        int32_t var_bc_1 = 5
                        int32_t j_2 = j
                        int32_t var_b0_1 = 1
                        int32_t rbx_1 = *r15[0xf]
                        int32_t i_4 = i
                        int32_t rax_24 = sub_141021240(*r15[0x10])
                        int32_t rax_25
                        int32_t rbx_2
                        bool cond:3_1
                        
                        if (rax_24 == 0x13)
                            rbx_2 = rbx_1 - 0x15
                            cond:3_1 = rbx_1 == 0x15
                        label_14104244a:
                            
                            if (cond:3_1)
                                rax_25 = 0
                            else
                                rax_25 = 1
                                
                                if (rbx_2 != 1)
                                    rax_25 = 0
                        else
                            if (rax_24 == 0x2c)
                                rbx_2 = rbx_1 - 0x2e
                                cond:3_1 = rbx_1 == 0x2e
                                goto label_14104244a
                            
                            rax_25 = 0
                        int32_t var_ac_1 = rax_25
                        void*** rax_26 = j_sub_140a82f30(0x88)
                        void*** rdi_2 = rax_26
                        
                        if (rax_26 == 0)
                            rdi_2 = nullptr
                        else
                            *rdi_2 = &data_142f009c8
                            rdi_2[1] = arg2
                            rdi_2[2] = 0
                            
                            if (arg2 != 0)
                                void var_a8
                                int64_t* rax_28
                                rax_28, zmm6 = sub_141013ee0(arg2 + 0xb0, &var_a8, &rdi_2[3])
                                rdi_2[2] = *rax_28
                            
                            uint64_t r9_5 = 1
                            rdi_2[4].d = 0
                            rdi_2[0xc] = &data_142d3ff08
                            rdi_2[0xd].d = 0
                            *(rdi_2 + 0x6c) = 0
                            rdi_2[0xe].w = 0x100
                            rdi_2[0xf] = 0
                            rdi_2[0x10].b = 1
                            *rdi_2 = &data_142f009d0
                            rdi_2[0xc] = &data_142f009d8
                            rdi_2[5] = var_108
                            void* r8_6 = *(var_108 + 0x10)
                            void* rdx_8 = *(r8_6 + 0x28)
                            *(rdi_2 + 0x48) = rbx_1.o
                            void* rcx_10 = rdx_8 + 0x28
                            rdi_2[0xb] = var_b0_1.q
                            
                            if (rdx_8 == 0)
                                rcx_10 = r8_6 + 0x30
                            
                            rdi_2[6] = rcx_10
                            
                            if (*(r8_6 + 0x88) != 4)
                                r9_5 = zx.q(*(r8_6 + 0xa4))
                            
                            void var_98
                            *(rdi_2 + 0x38) = *sub_14103e460(&var_98, rdi_2 + 0x48, 
                                zx.q(*(r8_6 + 0xa6)), r9_5, *(r8_6 + 0xa8), rdi_2[4].d)
                            sub_141010dd8(sub_141022ce0(rdi_2[1]), *(*(var_108 + 0x10) + 0x20), 
                                &rdi_2[9], rdi_2[2])
                            j = j_1
                        
                        result = result_1
                        
                        if (r13_1 u< result[0x2f].d)
                            void* rcx_14 = &result[0x2d]
                            void* rax_35 = *(rcx_14 + 8)
                            
                            if (rax_35 != 0)
                                rcx_14 = rax_35
                            
                            zmm6 = sub_1410407f0(rcx_14 + (sx.q(r13_1) << 3), rdi_2)
                        
                        j += 1
                        i = i_5
                        r13_1 += 1
                        j_1 = j
                    while (j u< zx.d(*(r15[0xa] + 0x1c)))
                    
                    rdi = arg2
                
                rsi_2 = &result[0x17]
            
            i += 1
            i_5 = i
        while (i u< **var_128)

if (*r15[0x12] != 0)
    uint128_t var_58_1 = zmm6
    int64_t var_110_1 = 0
    int32_t rcx_17 = *r15[0x10]
    int32_t rdx_12
    
    if (rcx_17 == 0x13)
        rdx_12 = 0x14
    else if (rcx_17 == 0x27)
        rdx_12 = 0x28
    else if (rcx_17 == 0x2c)
        rdx_12 = 0x2d
    else
        rdx_12 = 0x37
        
        if (rcx_17 != 0x35)
            rdx_12 = rcx_17
    
    char* rax_57 = r15[0xe]
    int32_t var_120 = rdx_12
    uint32_t rcx_25
    
    if (*rax_57 != 0 || *r15[6] != 0)
        int32_t var_11c_2 = 4
        int64_t var_114_1 = 0
        rcx_25 = zx.d(*(r15[0xa] + 0x1c))
        var_110_1:4.d = rcx_25
    else
        int64_t var_114
        var_114.d = 0
        rcx_25 = *r15[0x13]
        uint32_t var_11c_1 = rcx_25
    
    if (rdx_12 == 0x14 || rdx_12 == 0x2d)
        r15 = 1
    else
        r15.b = 0
    
    zmm6 = zx.o(var_110_1)
    
    for (int32_t i_1 = 0; i_1 u< 4; i_1 += 1)
        int32_t rdx_15
        rdx_15.b = (i_1.b & 0x21) != 0
        int32_t var_118_1 = rdx_15
        
        if (r15.b != 0)
            int32_t var_118_2 = (sbb.d(rcx_25, rcx_25, (i_1.b & 0x12) != 0) & 2) | rdx_15
        
        void*** rax_62
        rax_62, rcx_25 = j_sub_140a82f30(0xb0)
        void*** rsi_4 = rax_62
        
        if (rax_62 == 0)
            rsi_4 = nullptr
        else
            *rax_62 = &data_142f009e0
            rax_62[1] = rdi
            rax_62[2] = 0
            
            if (rdi != 0)
                void var_a0
                int64_t* rax_63
                rax_63, zmm6 = sub_141013ee0(rdi + 0x130, &var_a0, &rax_62[3])
                rsi_4[2] = *rax_63
            
            int128_t zmm0_1 = var_120.o
            rsi_4[4].d = 3
            uint64_t r9_8 = 1
            rsi_4[0xc] = &data_142d3ff08
            rsi_4[0xd].d = 0
            *(rsi_4 + 0x6c) = 0
            rsi_4[0xe].w = 0x100
            rsi_4[0xf] = 0
            rsi_4[0x10].b = 1
            *rsi_4 = &data_142f009e8
            rsi_4[0xc] = &data_142f009f0
            rsi_4[0x11].b = 1
            *(rsi_4 + 0x89) = r15.b
            rsi_4[5] = var_108
            void* r8_11 = *(var_108 + 0x10)
            void* rdx_17 = *(r8_11 + 0x28)
            *(rsi_4 + 0x48) = zmm0_1
            void* rcx_31 = rdx_17 + 0x28
            rsi_4[0xb] = zmm6.q
            
            if (rdx_17 == 0)
                rcx_31 = r8_11 + 0x30
            
            rsi_4[6] = rcx_31
            
            if (*(r8_11 + 0x88) != 4)
                r9_8 = zx.q(*(r8_11 + 0xa4))
            
            void var_88
            *(rsi_4 + 0x38) = *sub_14103e2d0(&var_88, rsi_4 + 0x48, zx.q(*(r8_11 + 0xa6)), r9_8, 
                *(r8_11 + 0xa8), rsi_4[4].d)
            rcx_25 = sub_141042f40(sub_141022ce0(rsi_4[1]), *(*(var_108 + 0x10) + 0x20), &rsi_4[9], 
                rsi_4[2])
            void* rbx_10 = *(var_108 + 0x10)
            
            if (rsi_4[0x11].b != 0)
                uint64_t r9_10 = 1
                
                if (*(rbx_10 + 0x88) != 4)
                    r9_10 = zx.q(*(rbx_10 + 0xa4))
                
                void var_78
                int128_t* rax_72
                rax_72, rcx_25 = sub_14103e2d0(&var_78, &var_120, zx.q(*(rbx_10 + 0xa6)), r9_10, 
                    *(rbx_10 + 0xa8), 1)
                *(rsi_4 + 0x8a) = *rax_72
            
            if (*(rsi_4 + 0x89) != 0)
                uint64_t r9_11 = 1
                
                if (*(rbx_10 + 0x88) != 4)
                    r9_11 = zx.q(*(rbx_10 + 0xa4))
                
                void var_68
                int128_t* rax_74
                rax_74, rcx_25 = sub_14103e2d0(&var_68, &var_120, zx.q(*(rbx_10 + 0xa6)), r9_11, 
                    *(rbx_10 + 0xa8), 2)
                *(rsi_4 + 0x9a) = *rax_74
        
        result = result_1
        
        if (i_1 u< 4)
            zmm6 = sub_1410407f0(&result[zx.q(i_1) + 0x31], rsi_4)
            rcx_25 = result[0x35].d
            
            if (i_1 + 1 u>= rcx_25)
                rcx_25 = i_1 + 1
            
            result[0x35].d = rcx_25
        
        rdi = arg2
    
    r15 = arg1

if (*r15[0x14] != 0)
    int64_t var_f8_1 = 0x1688
    int128_t var_e8_1 = zx.o(0)
    int32_t rbx_11 = *r15[0x15]
    char* rax_80 = r15[6]
    int32_t var_100 = rbx_11
    char rcx_38 = *rax_80
    
    if (rcx_38 == 0)
    label_141042acd:
        int32_t var_f0_3 = 0
        
        if (*r15[0xe] == 0)
            int32_t var_fc_4 = *r15[0x16]
            int32_t var_ec_4 = *r15[3]
            int32_t rax_93 = sub_141021240(*r15[0x10])
            
            if (rax_93 == 0x13)
                if (rbx_11 == 0x15 || rbx_11 != 0x16)
                    r12_1 = 0
            else if (rax_93 != 0x2c || rbx_11 == 0x2e || rbx_11 != 0x2f)
                r12_1 = 0
            
            var_e8_1.d = r12_1
        else
            int32_t var_fc_3 = 5
            var_e8_1.d = 0
            int32_t var_ec_3 = *r15[3]
            var_e8_1:4.d = zx.d(*(r15[0xa] + 0x1c))
            int32_t rax_89 = sub_141021240(*r15[0x10])
            
            if (rax_89 == 0x13)
                if (rbx_11 == 0x15 || rbx_11 != 0x16)
                    var_e8_1:8.d = 0
                else
                    var_e8_1:8.d = r12_1
            else if (rax_89 != 0x2c || rbx_11 == 0x2e || rbx_11 != 0x2f)
                var_e8_1:8.d = 0
            else
                var_e8_1:8.d = 1
    else if (*r15[0xe] == 0)
        if (rcx_38 == 0)
            goto label_141042acd
        
        int32_t var_fc_2 = 9
        int32_t var_f0_2 = 0
        int32_t var_ec_2 = *r15[3]
    else
        int32_t var_fc_1 = 0xa
        int32_t var_f0_1 = 0
        var_e8_1.d = 0
        int32_t var_ec_1 = *r15[3]
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = mulu.dp.d(0xaaaaaaab, *r15[2])
        var_e8_1:4.d = temp0_1 u>> 2
    
    void*** rax_94 = j_sub_140a82f30(0xa8)
    
    if (rax_94 != 0)
        r14 = sub_14103fc50(rax_94, arg2, &var_100, var_108, 0xffffffff, 0)
    
    result = result_1
    sub_1405d16e0(&result[0x2c], r14)

return result
