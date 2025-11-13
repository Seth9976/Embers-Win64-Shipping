// 函数: sub_140a73ec0
// 地址: 0x140a73ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_218
int64_t rax_1 = __security_cookie ^ &var_218
EnterCriticalSection(&arg1[0x45])
int32_t var_1e4
sub_140926e00(&arg1[0x3b], &var_1e4, arg3)
int64_t rax_2 = sx.q(var_1e4)
void* const r8_1

if (rax_2.d == 0xffffffff)
    r8_1 = nullptr
else
    r8_1 = arg1[0x3b] + rax_2 * 0x28

int64_t* rcx_2 = r8_1 + 0x10

if (r8_1 == 0)
    rcx_2 = nullptr

if (rcx_2 == 0)
    if (arg1 != -0x228)
        LeaveCriticalSection(&arg1[0x45])
    
    void* rcx_6 = *arg1
    uint128_t var_1f8 = zx.o(0)
    int64_t var_1d8
    sub_140a78b00(rcx_6, &var_1d8, arg3)
    int64_t* var_1d0
    void var_188
    
    if (var_1d8 == 0)
        if (*sub_14062d5f0(&arg1[7], &var_188, arg3) == 0xffffffff)
            int32_t var_1e8 = 0
            int16_t* rdx_8
            
            if (arg3[1].d == 0)
                rdx_8 = &data_142d40450
            else
                rdx_8 = *arg3
            
            void var_e8
            sub_1408f2b40(&var_e8, rdx_8)
            char* var_60
            char** rax_22 = sub_142a641c0(nullptr, var_60, &var_1e8)
            int64_t var_68
            
            if (var_68 != 0)
                int64_t* rcx_23 = data_143ddb3f0
                
                if (rcx_23 != 0)
                    (*(*rcx_23 + 0x30))(rcx_23, var_68)
                else
                    sub_140a750a0()
                    int64_t* rcx_24 = data_143ddb3f0
                    int64_t r8_5 = *rcx_24
                    (*(r8_5 + 0x30))(rcx_24, var_68, r8_5)
            
            if (rax_22 != 0)
                if (var_1e8 != 0xffffff81 || arg4 == 1)
                    void*** rax_24 = j_sub_140a82f30(0x2c8)
                    
                    if (rax_24 != 0)
                        rax_24 = sub_140a60630(rax_24, arg3)
                    
                    void*** var_1c0 = rax_24
                    int64_t* var_128
                    int64_t** rax_25 = sub_140a6dd50(&var_128, &var_1c0)
                    int64_t* rcx_27 = rax_25[1]
                    int64_t* rdx_14 = *rax_25
                    int64_t* var_1a0 = rcx_27
                    
                    if (rcx_27 != 0)
                        rcx_27[1].d += 1
                    
                    var_1f8.q = rdx_14
                    int64_t var_1a8_1 = 0
                    sub_1405aeff0(&var_1f8:8, &var_1a0)
                    int64_t* rcx_29 = var_1a0
                    
                    if (rcx_29 != 0)
                        rcx_29[1].d -= 1
                        
                        if (rcx_29[1].d == 1)
                            int64_t* rdi_5 = var_1a0
                            (**rdi_5)(rdi_5)
                            int32_t rax_28 = *(rdi_5 + 0xc)
                            *(rdi_5 + 0xc) -= 1
                            
                            if (rax_28 == 1)
                                int64_t* rcx_31 = var_1a0
                                (*(*rcx_31 + 8))(rcx_31, 1)
                    
                    int64_t* var_120
                    
                    if (var_120 != 0)
                        var_120[1].d -= 1
                        
                        if (var_120[1].d == 1)
                            (**var_120)(var_120)
                            int32_t rax_32 = *(var_120 + 0xc)
                            *(var_120 + 0xc) -= 1
                            
                            if (rax_32 == 1)
                                (*(*var_120 + 8))(var_120, 1)
                    
                    void*** rcx_34 = var_1c0
                    
                    if (rcx_34 != 0)
                        (**rcx_34)(rcx_34, 1)
                
                sub_142a5f860(rax_22)
        else
            void*** rax_10 = j_sub_140a82f30(0x2c8)
            void*** rax_11
            
            if (rax_10 == 0)
                rax_11 = nullptr
            else
                rax_11 = sub_140a60630(rax_10, arg3)
            
            void*** var_1c8 = rax_11
            int64_t* var_138
            int64_t** rax_12 = sub_140a6dd50(&var_138, &var_1c8)
            int64_t* rcx_14 = rax_12[1]
            int64_t* rdx_6 = *rax_12
            int64_t* var_1b0 = rcx_14
            
            if (rcx_14 != 0)
                rcx_14[1].d += 1
            
            var_1f8.q = rdx_6
            int64_t var_1b8_1 = 0
            sub_1405aeff0(&var_1f8:8, &var_1b0)
            int64_t* rcx_16 = var_1b0
            
            if (rcx_16 != 0)
                rcx_16[1].d -= 1
                
                if (rcx_16[1].d == 1)
                    int64_t* rdi_2 = var_1b0
                    (**rdi_2)(rdi_2)
                    int32_t rax_15 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (rax_15 == 1)
                        int64_t* rcx_18 = var_1b0
                        (*(*rcx_18 + 8))(rcx_18, 1)
            
            int64_t* var_130
            
            if (var_130 != 0)
                var_130[1].d -= 1
                
                if (var_130[1].d == 1)
                    (**var_130)(var_130)
                    int32_t rax_19 = *(var_130 + 0xc)
                    *(var_130 + 0xc) -= 1
                    
                    if (rax_19 == 1)
                        (*(*var_130 + 8))(var_130, 1)
            
            void*** rcx_21 = var_1c8
            
            if (rcx_21 != 0)
                (**rcx_21)(rcx_21, 1)
    else
        uint128_t zmm1 = var_1d8.o
        int64_t* rcx_7 = _mm_bsrli_si128(zmm1, 8).q
        var_1d0 = rcx_7
        
        if (rcx_7 != 0)
            rcx_7[1].d += 1
        
        uint128_t zmm0_1 = var_1f8
        uint128_t var_f8_1 = zmm1
        void* rcx_8 = _mm_bsrli_si128(zmm0_1, 8).q
        var_1f8 = zmm1
        
        if (rcx_8 != 0)
            int32_t rax_5 = *(rcx_8 + 8)
            *(rcx_8 + 8) -= 1
            
            if (rax_5 == 1)
                int64_t* rdi_1 = zmm0_1:8.q
                (**rdi_1)(rdi_1)
                int32_t rax_7 = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax_7 == 1)
                    int64_t* rcx_10 = zmm0_1:8.q
                    (*(*rcx_10 + 8))(rcx_10, 1)
    
    if (var_1d0 != 0)
        var_1d0[1].d -= 1
        
        if (var_1d0[1].d == 1)
            (**var_1d0)(var_1d0)
            int32_t rax_37 = *(var_1d0 + 0xc)
            *(var_1d0 + 0xc) -= 1
            
            if (rax_37 == 1)
                (*(*var_1d0 + 8))(var_1d0, 1)
    
    int64_t* r15_1 = var_1f8.q
    void* r14_2
    
    if (r15_1 == 0)
        r14_2 = var_1f8:8.q
    else
        int64_t* rcx_39 = *r15_1
        int64_t var_118
        sub_140597da0(&r15_1[1], (*(*rcx_39 + 8))(rcx_39, &var_118))
        int64_t rdi_8 = var_118
        
        if (rdi_8 != 0)
            int64_t* rcx_41 = data_143ddb3f0
            
            if (rcx_41 == 0)
                sub_140a750a0()
                rcx_41 = data_143ddb3f0
            
            (*(*rcx_41 + 0x30))(rcx_41, rdi_8)
        
        int32_t var_160_1 = arg1[0x51].d
        int128_t var_108 = arg1[0x50].o
        sub_140a69950(&var_108, &r15_1[1])
        EnterCriticalSection(&arg1[0x45])
        uint128_t zmm0_3 = var_1f8
        uint128_t var_148 = zmm0_3
        r14_2 = _mm_bsrli_si128(zmm0_3, 8).q
        
        if (r14_2 != 0)
            *(r14_2 + 8) += 1
            r14_2 = var_1f8:8.q
            r15_1 = var_1f8.q
        
        uint128_t* var_150_1 = &var_148
        int64_t* var_158 = arg3
        void var_184
        sub_140a5c5f0(&arg1[0x3b], &var_184, &var_158, nullptr)
        int64_t* rdi_9 = var_148:8.q
        
        if (rdi_9 != 0)
            rdi_9[1].d -= 1
            
            if (rdi_9[1].d == 1)
                (**rdi_9)(rdi_9)
                int32_t rsi_1 = *(rdi_9 + 0xc)
                *(rdi_9 + 0xc) -= 1
                
                if (rsi_1 == 1)
                    (*(*rdi_9 + 8))(rdi_9, zx.q(rsi_1))
            
            r15_1 = var_1f8.q
            r14_2 = var_1f8:8.q
        
        if (arg1 != -0x228)
            LeaveCriticalSection(&arg1[0x45])
    
    *arg2 = r15_1
    arg2[1] = r14_2
else
    *arg2 = *rcx_2
    void* rcx_3 = rcx_2[1]
    arg2[1] = rcx_3
    
    if (rcx_3 != 0)
        *(rcx_3 + 8) += 1
    
    if (arg1 != -0x228)
        LeaveCriticalSection(&arg1[0x45])

__security_check_cookie(rax_1 ^ &var_218)
return arg2
