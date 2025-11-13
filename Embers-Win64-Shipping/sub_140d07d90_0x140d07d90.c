// 函数: sub_140d07d90
// 地址: 0x140d07d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
int64_t* rsi = arg3
int128_t zmm0 = *(arg1 + 0x80)
int64_t* r8 = arg1[0xf]
void* result_1 = nullptr
int64_t (* var_c8)(int64_t* arg1, int64_t* arg2) = arg5
int32_t r14 = arg4
int64_t* var_98 = r8
int64_t** r13 = arg1
int64_t* var_90 = rsi
int128_t var_88 = zmm0
int32_t rax_4 = arg1[0x12].d
int32_t var_78 = rax_4
int32_t r15 = rsi[1].d
int64_t** var_d8 = arg1
int32_t i = r15 - *(rsi + 0x34)

if (r15 != *(rsi + 0x34))
    int32_t rdi_1 = 0
    
    if ((r8[8] & 0x1040000000) == 0)
        int64_t r12 = *rsi
        int32_t r14_1 = 1
        uint64_t r13_1 = zx.q(var_88:8.d)
        
        do
            if (rdi_1 s>= 0 && rdi_1 s< rsi[5].d)
                void* rax_5 = rsi[4]
                void* rcx = &rsi[2]
                
                if (rax_5 != 0)
                    rcx = rax_5
                
                int32_t rax_6 = rdi_1
                
                if (rdi_1 s< 0)
                    rax_6 = rdi_1 + 0x1f
                
                if ((*(rcx + (sx.q(rax_6 s>> 5) << 2)) & r14_1) != 0)
                    if ((not.b((r8[8] u>> 0x24).b) & 1) != 0)
                        (*(*r8 + 0xe8))(r8, sx.q(*(r8 + 0x4c)) + r12)
                        r8 = var_98
                        rsi = var_90
                    
                    i -= 1
            
            r12 += r13_1
            r14_1 = rol.d(r14_1, 1)
            rdi_1 += 1
        while (i != 0)
        
        rax_4 = var_78
        result_1 = nullptr
        r13 = var_d8
        r14 = arg4
    
    rsi[1].d = 0
    
    if (*(rsi + 0xc) != 0)
        sub_140ce4fc0(rsi, 0, rax_4)
    
    rsi[6].d = 0xffffffff
    *(rsi + 0x34) = 0
    rsi[5].d = 0
    
    if (*(rsi + 0x2c) != 0)
        *(rsi + 0x2c) = 0
        sub_140d0bc80(&rsi[2], 0)
    
    int64_t rcx_4 = sx.q(rsi[9].d)
    void* rdi_2 = &rsi[7]
    void* rax_12 = *(rdi_2 + 8)
    
    if (rcx_4 s> 0)
        if (rax_12 != 0)
            rdi_2 = rax_12
        
        __builtin_memset(rdi_2, 0xffffffff, rcx_4 << 2)

void* rbx_1 = &arg2[1]
void* result

if (*arg2 == 0x28)
    if (iswspace(*rbx_1) != 0)
        int32_t i_1
        
        do
            wint_t _C = *(rbx_1 + 2)
            rbx_1 += 2
            i_1 = iswspace(_C)
        while (i_1 != 0)
    
    if (*rbx_1 != 0x29)
        int64_t rax_16 = sub_140a82f30(sx.q(*(r13[0xf] + 0x3c)), 0)
        int64_t* rdi_3 = r13[0xf]
        int64_t var_e0 = rax_16
        
        if (not(test_bit(zx.q(rdi_3[8].d), 9)))
            (*(*rdi_3 + 0xf0))(rdi_3, rax_16)
        else
            memset(rax_16, 0, sx.q(*(rdi_3 + 0x3c) * rdi_3[7].d))
        
        int64_t r8_3 = var_e0
        int64_t* rcx_12 = r13[0xf]
        int32_t r14_2 = r14 | 2
        int64_t* var_b0_1 = &var_e0
        char var_e8
        char* var_a8_1 = &var_e8
        var_e8 = 0
        int64_t** var_a0_1 = &var_98
        int64_t* var_f0_1 = arg6
        int64_t (* var_f8_1)(int64_t* arg1, int64_t* arg2) = var_c8
        int128_t var_70 = r13.o
        char var_50_1 = 1
        int128_t var_60_1 = var_a8_1.o
        void* i_4
        int512_t zmm0_2
        i_4, zmm0_2 = sub_140941070(rcx_12, rbx_1, r8_3, r14_2, var_f8_1, var_f0_1)
        void* i_3 = i_4
        
        if (i_4 != 0)
            void* i_2
            
            do
                int64_t* r9_2 = var_90
                int64_t r15_1 = var_e0
                int32_t rsi_1 = r9_2[1].d
                int32_t rdi_4
                
                if (rsi_1 != 0)
                    int64_t* r14_3 = var_98
                    rdi_4 = 0
                    bool cond:2_1 = false
                    
                    while (true)
                        if (not(cond:2_1) && rdi_4 s< r9_2[5].d)
                            void* rax_20 = r9_2[4]
                            void* r8_4 = &r9_2[2]
                            
                            if (rax_20 != 0)
                                r8_4 = rax_20
                            
                            int32_t rax_21 = rdi_4
                            
                            if (rdi_4 s< 0)
                                rax_21 = rdi_4 + 0x1f
                            
                            if (test_bit(*(r8_4 + (sx.q(rax_21 s>> 5) << 2)), rdi_4 & 0x1f))
                                if ((*(*r14_3 + 0x80))(r14_3, r15_1, sx.q(var_78 * rdi_4) + *r9_2, 
                                        0, var_f8_1, var_f0_1) != 0)
                                    break
                                
                                r9_2 = var_90
                        
                        int32_t rax_28 = rdi_4 + 1
                        rdi_4 = 0
                        
                        if (rax_28 != rsi_1)
                            rdi_4 = rax_28
                        
                        cond:2_1 = rdi_4 s< 0
                        
                        if (rdi_4 == 0)
                            goto label_140d0809f
                
                if (rsi_1 == 0 || rdi_4 == 0xffffffff)
                label_140d0809f:
                    int32_t rax_29
                    rax_29, zmm0_2 = sub_140cf15e0(&var_98)
                    int64_t* r10_1 = r13[0xf]
                    int64_t rdi_5 = sx.q(*(r10_1 + 0x4c))
                    int64_t rdx_7 = var_e0 + rdi_5
                    int64_t r11_3 = sx.q(var_78 * rax_29) + *var_90 + rdi_5
                    
                    if (r11_3 != rdx_7)
                        if (not(test_bit(zx.q(r10_1[8].d), 0x1e)))
                            (*(*r10_1 + 0xb0))(r10_1, r11_3, rdx_7, zx.q(r10_1[7].d), var_f8_1, 
                                var_f0_1)
                        else
                            zmm0_2 = memcpy(r11_3, rdx_7, *(r10_1 + 0x3c) * r10_1[7].d)
                
                if (iswspace(*i_3) != 0)
                    int32_t j
                    
                    do
                        wint_t _C_1 = *(i_3 + 2)
                        i_3 += 2
                        j = iswspace(_C_1)
                    while (j != 0)
                
                int16_t rax_36 = *i_3
                void* result_2 = i_3 + 2
                
                if (rax_36 == 0x29)
                    var_d8 = &var_98
                    void** var_c0_1 = &var_d8
                    var_c8 = sub_140cf2f70
                    zmm0_2 = sub_140d0c0d0(var_90, &var_88, &var_c8)
                    var_e8 = 1
                    result_1 = result_2
                    break
                
                if (rax_36 != 0x2c)
                    break
                
                if (iswspace(*result_2) != 0)
                    int32_t j_1
                    
                    do
                        wint_t _C_2 = *(result_2 + 2)
                        result_2 += 2
                        j_1 = iswspace(_C_2)
                    while (j_1 != 0)
                
                var_f0_1 = arg6
                var_f8_1 = var_c8
                i_2, zmm0_2 = sub_140941070(r13[0xf], result_2, var_e0, r14_2, var_f8_1, var_f0_1)
                i_3 = i_2
            while (i_2 != 0)
        
        sub_140cf09f0(&var_70, zmm0_2)
        result = result_1
    else
        result = rbx_1 + 2
else
    result = nullptr

__security_check_cookie(rax_1 ^ &var_118)
return result
