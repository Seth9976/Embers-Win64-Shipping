// 函数: sub_1408fe840
// 地址: 0x1408fe840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t* r13 = arg4
void*** rax_2 = sub_140a82f30(0x48, 8)
*rax_2 = &data_142e1b270
rax_2[1] = *arg3
rax_2[2] = arg3[1]
rax_2[3] = arg3[2]
__builtin_memset(&arg3[1], 0, 0x20)
rax_2[4] = 0
rax_2[4] = arg3[3]
rax_2[5].d = arg3[4].d
*(rax_2 + 0x2c) = *(arg3 + 0x24)
sub_140596d10(&rax_2[6], &arg3[5])
rax_2[8].b = arg3[7].b
*rax_2 = &data_142e1b290
void (* var_88)(uint64_t* arg1)
void (* rax_10)(uint64_t* arg1) = var_88

if (rax_2 != -8)
    rax_10 = j_sub_140900420

void*** var_78 = rax_2
void (* var_88_1)(uint64_t* arg1) = rax_10
void*** rax_11 = sub_1405eac40(r13)
void* r14 = &rax_11[2]
void* var_148 = r14
void*** var_140 = rax_11

if (rax_11 != 0)
    rax_11[1].d += 1
    
    if (rax_11 != 0)
        rax_11[1].d -= 1
        
        if (rax_11[1].d == 1)
            (**rax_11)(rax_11)
            int32_t rax_14 = *(rax_11 + 0xc)
            *(rax_11 + 0xc) -= 1
            
            if (rax_14 == 1)
                (*rax_11)[1](rax_11, 1)
    
    r14 = var_148

char var_138 = 1
void* var_c0 = r14

if (rax_11 != 0)
    rax_11[1].d += 1
    r14 = var_148

int128_t var_68

if (arg2 s>= 0)
    int128_t var_58
    
    if (arg2 s<= 1)
        void var_a8
        void** rax_45 = sub_1405f45f0(&var_a8, nullptr, 0xff)
        void* rsi_3 = *rax_45
        int32_t rax_46 = 2
        
        if (arg2 == 0)
            rax_46 = 0xff
        
        *(rsi_3 + 0x10) = var_88_1
        *(rsi_3 + 0x20) = var_78
        int128_t zmm0_3 = var_68
        var_78 = nullptr
        var_140 = nullptr
        *(rsi_3 + 0x30) = zmm0_3
        int64_t* var_c8 = nullptr
        int64_t var_148_3 = 0
        int64_t var_d0_1 = 0
        *(rsi_3 + 0x40) = var_58
        void (* rax_49)(uint64_t* arg1) = var_88_1
        
        if (*(rsi_3 + 0x10) != 0)
            rax_49 = nullptr
        
        var_88_1 = rax_49
        *(rsi_3 + 0x50) = r14
        *(rsi_3 + 0x58) = rax_11
        sub_1405aeff0(&var_140, &var_c8)
        int64_t* rcx_26 = var_c8
        
        if (rcx_26 != 0)
            rcx_26[1].d -= 1
            
            if (rcx_26[1].d == 1)
                int64_t* rbx_6 = var_c8
                (**rbx_6)(rbx_6)
                int32_t rax_52 = *(rbx_6 + 0xc)
                *(rbx_6 + 0xc) -= 1
                
                if (rax_52 == 1)
                    int64_t* rcx_28 = var_c8
                    (*(*rcx_28 + 8))(rcx_28, 1)
        
        *(rsi_3 + 0x60) = 0
        *(rsi_3 + 0x68) = rax_46
        void* rcx_29 = *rax_45
        int64_t* rsi_4 = *(rcx_29 + 0x78)
        
        if (rsi_4 != 0)
            rsi_4[9].d += 1
        
        sub_1405ff810(rcx_29, rax_45[1], rax_45[2].d, 1)
        
        if (rsi_4 != 0)
            rsi_4[9].d -= 1
            
            if (rsi_4[9].d == 1)
                sub_140a2f6e0(rsi_4)
        
        r13 = arg4
    else if (arg2 == 2)
        char rax_26
        int128_t zmm1_2
        rax_26, zmm1_2 = sub_140a54810()
        
        if (rax_26 == 0)
            void*** rcx_21 = &var_68
            
            if (var_78 != 0)
                rcx_21 = var_78
            
            var_88_1((*rcx_21)[1](rcx_21))
            *(r14 + 0x80) = 0
            sub_1405fc0f0(r14, zmm1_2, arg5, arg6)
        else
            CRITICAL_SECTION* var_118
            sub_1405eb890(&var_118)
            void*** rax_27 = j_sub_140a82f30(0x80)
            int64_t* var_110
            int64_t* rbx_3 = var_110
            void*** rsi_2 = rax_27
            CRITICAL_SECTION* r14_1
            
            if (rax_27 == 0)
                r14_1 = var_118
                rsi_2 = nullptr
            else
                if (rbx_3 != 0)
                    rbx_3[1].d += 1
                    r14 = var_148
                    rbx_3 = var_110
                
                *rsi_2 = &data_142d5ec40
                rsi_2[2] = var_88_1
                rsi_2[4] = var_78
                int128_t zmm0_2 = var_68
                var_78 = nullptr
                int64_t* var_d8 = nullptr
                *(rsi_2 + 0x30) = zmm0_2
                int64_t var_148_2 = 0
                int64_t var_e0_1 = 0
                *(rsi_2 + 0x40) = var_58
                void (* rax_30)(uint64_t* arg1) = var_88_1
                
                if (rsi_2[2] != 0)
                    rax_30 = nullptr
                
                var_88_1 = rax_30
                void*** rax_31 = var_140
                var_140 = nullptr
                rsi_2[0xa] = r14
                rsi_2[0xb] = rax_31
                sub_1405aeff0(&var_140, &var_d8)
                int64_t* rcx_12 = var_d8
                
                if (rcx_12 != 0)
                    rcx_12[1].d -= 1
                    
                    if (rcx_12[1].d == 1)
                        int64_t* rbx_4 = var_d8
                        (**rbx_4)(rbx_4)
                        int32_t rax_34 = *(rbx_4 + 0xc)
                        *(rbx_4 + 0xc) -= 1
                        
                        if (rax_34 == 1)
                            int64_t* rcx_14 = var_d8
                            (*(*rcx_14 + 8))(rcx_14, 1)
                    
                    rbx_3 = var_110
                
                r14_1 = var_118
                rsi_2[0xc].b = 0
                rsi_2[0xd] = r14_1
                rsi_2[0xe] = rbx_3
            
            int16_t* var_b8
            sub_140a2e390(&var_b8, u"TAsync %d", zx.q(sub_1405f81c0()))
            int16_t* const rdx_6 = &data_142d40450
            int32_t var_b0
            
            if (var_b0 != 0)
                rdx_6 = var_b8
            
            void*** rax_37
            int128_t zmm1_4
            rax_37, zmm1_4 = sub_140a6e140(rsi_2, rdx_6, 0, 0, -1, 0)
            r14_1->__offset(0x80).q = rax_37
            sub_1405fc0f0(r14_1, zmm1_4, arg5, arg6)
            int16_t* rcx_18 = var_b8
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**var_110)(var_110)
                    int32_t rax_40 = *(var_110 + 0xc)
                    *(var_110 + 0xc) -= 1
                    
                    if (rax_40 == 1)
                        (*(*var_110 + 8))(var_110, 1)
    else if (arg2 == 3)
        void*** rax_16 = j_sub_140a82f30(zx.q(arg2 + 0x6d))
        void*** rsi_1 = rax_16
        
        if (rax_16 == 0)
            rsi_1 = nullptr
        else
            int64_t* var_e8 = nullptr
            *rsi_1 = &data_142d5ec70
            rsi_1[2] = var_88_1
            rsi_1[4] = var_78
            var_78 = nullptr
            int64_t var_148_1 = 0
            *(rsi_1 + 0x30) = var_68
            int64_t var_f0_1 = 0
            *(rsi_1 + 0x40) = var_58
            void (* rax_19)(uint64_t* arg1) = var_88_1
            
            if (rsi_1[2] != 0)
                rax_19 = nullptr
            
            var_88_1 = rax_19
            void*** rax_20 = var_140
            var_140 = nullptr
            rsi_1[0xa] = r14
            rsi_1[0xb] = rax_20
            sub_1405aeff0(&var_140, &var_e8)
            int64_t* rcx_6 = var_e8
            
            if (rcx_6 != 0)
                rcx_6[1].d -= 1
                
                if (rcx_6[1].d == 1)
                    int64_t* rbx_2 = var_e8
                    (**rbx_2)(rbx_2)
                    int32_t rax_23 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_23 == 1)
                        int64_t* rcx_8 = var_e8
                        (*(*rcx_8 + 8))(rcx_8, zx.q(arg2 - 2))
            
            rsi_1[0xc].b = 0
        
        int64_t* rcx_9 = data_143db7ac8
        (*(*rcx_9 + 0x10))(rcx_9, rsi_1)

void** result = arg1
void*** rcx_31 = var_140
*result = var_c0
result[1] = rax_11

if (rcx_31 != 0)
    rcx_31[1].d -= 1
    
    if (rcx_31[1].d == 1)
        void*** rbx_7 = var_140
        (**rbx_7)(rbx_7)
        int32_t rdi_1 = *(rbx_7 + 0xc)
        *(rbx_7 + 0xc) -= 1
        
        if (rdi_1 == 1)
            void*** rcx_33 = var_140
            (*rcx_33)[1](rcx_33, zx.q(rdi_1))
        
        result = arg1

if (var_88_1 != 0)
    void*** rcx_34 = &var_68
    
    if (var_78 != 0)
        rcx_34 = var_78
    
    (*rcx_34)[2](rcx_34)

if (*r13 != 0)
    void* rdx_10 = r13[2]
    void* rcx_35 = &r13[4]
    
    if (rdx_10 != 0)
        rcx_35 = rdx_10
    
    int64_t rdx_11 = *rcx_35
    (*(rdx_11 + 0x10))(rcx_35, rdx_11)

__security_check_cookie(rax_1 ^ &var_178)
return result
