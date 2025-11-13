// 函数: sub_141fc4590
// 地址: 0x141fc4590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
void* rsi = *(arg1 + 0x20)
void* rdi = arg1
void* var_180 = rsi
uint32_t i = zx.d(sub_1422c6670(rsi))

if (i != 0)
    void* r8 = *(rdi + 0x50)
    void* rdx = *(rdi + 0x48)
    char rcx_1 = *(r8 + 0x1508)
    int64_t r9_1 = *(*(rdi + 0x30) + 8)
    int64_t rax_4
    
    if (rcx_1 != 0)
        rax_4 = 0x4a0
        
        if (rcx_1 != 1)
            rax_4 = 0x4b0
    else
        rax_4 = 0x490
    
    int64_t r14_1 = rax_4 + r9_1
    int64_t var_198_1 = r14_1
    sub_1422cc120(rsi, rdx, r8, *(rdi + 0x10))
    void var_48
    sub_1422ba2a0(&var_48, arg3)
    int64_t* rax_5 = sub_141f8a780(*(rdi + 0x58), rdx)
    void var_108
    sub_140bd5b60(&var_108, *(*(rdi + 0x50) + 0x68), 0x400)
    int16_t r13_1 = 0
    uint32_t rbx_2
    rbx_2.b = (*(*(rdi + 0x50) + 0xa4) u>> 1).b & 1
    uint32_t var_188_1 = rbx_2
    
    if (i u> 0)
        do
            int32_t rax_6 = sub_1422c61b0(rsi, r13_1)
            
            if (test_bit(*(&var_48 + (zx.q(rax_6) u>> 6 << 3)), zx.q(rax_6.b) & 0x3f))
                int64_t rax_10 = sub_1422c6180(rsi, r13_1)
                int64_t var_158 = rax_10
                uint128_t var_168 = zx.o(0)
                int64_t r12_1 = rax_10
                sub_140b527a0(&var_108)
                void* rdx_8 = *(rdi + 0x50)
                uint64_t r14_2 = zx.q(r13_1)
                int64_t* r15_3 = (zx.q(r14_2.d) << 4) + *r14_1
                char rcx_12 = *(rdx_8 + 0x1508)
                int64_t* var_150
                uint128_t zmm0_1
                
                if (rcx_12 == 0)
                    int64_t* j_1 = nullptr
                    
                    if (rbx_2.b == 0)
                        int32_t r12_2 = *(rdx_8 + 0x1304)
                        int64_t* j_2 = (r14_2 << 5) + *(r9_1 + 0x430)
                        j_1 = j_2
                        int64_t* j = *j_2
                        
                        if (j != 0)
                            do
                                if (r12_2 s< *(j + 0x1c))
                                    j_1 = j
                                else
                                    j_1 = j_2
                                    *j_2 = *j
                                    int64_t* rbx_5 = j[2]
                                    
                                    if (rbx_5 != 0)
                                        rbx_5[1].d -= 1
                                        
                                        if (rbx_5[1].d == 1)
                                            (**rbx_5)(rbx_5)
                                            int32_t temp7_1 = *(rbx_5 + 0xc)
                                            *(rbx_5 + 0xc) -= 1
                                            
                                            if (temp7_1 == 1)
                                                (*(*rbx_5 + 8))(rbx_5, 1)
                                    
                                    j_sub_140a74f90(j)
                                
                                j = *j_1
                            while (j != 0)
                            
                            rbx_2 = var_188_1
                        
                        rdi = arg1
                        r12_1 = var_158
                    
                    int64_t* rbx_6
                    
                    if (sub_141fc7370(rdi, rdx, r13_1, &var_108, &var_168, r15_3) != 0)
                        if (rbx_2.b == 0)
                            void* rax_27 = j_sub_140a82f30(0x20)
                            
                            if (rax_27 != 0)
                                __builtin_memset(rax_27, 0, 0x18)
                                *(rax_27 + 0x18) = -1
                            
                            *j_1 = rax_27
                            int64_t* rbx_7 = r15_3[1]
                            int64_t var_130 = *r15_3
                            
                            if (rbx_7 != 0)
                                rbx_7[1].d += 1
                            
                            if (&var_130 != rax_27 + 8)
                                var_130.o = *(rax_27 + 8)
                                *(rax_27 + 8) = var_130.o
                            
                            if (rbx_7 != 0)
                                rbx_7[1].d -= 1
                                
                                if (rbx_7[1].d == 1)
                                    (**rbx_7)(rbx_7)
                                    int32_t temp13_1 = *(rbx_7 + 0xc)
                                    *(rbx_7 + 0xc) -= 1
                                    
                                    if (temp13_1 == 1)
                                        (*(*rbx_7 + 8))(rbx_7, 1)
                        
                        uint128_t zmm1_2 = var_168
                        var_158.o = zmm1_2
                        void* rax_31 = _mm_bsrli_si128(zmm1_2, 8).q
                        
                        if (rax_31 != 0)
                            *(rax_31 + 8) += 1
                        
                        if (&var_158 != r15_3)
                            zmm0_1 = *r15_3
                            *r15_3 = zmm1_2
                            var_158.o = zmm0_1
                        
                        if (var_150 != 0)
                            var_150[1].d -= 1
                            
                            if (var_150[1].d == 1)
                                (**var_150)(var_150)
                                int32_t temp10_1 = *(var_150 + 0xc)
                                *(var_150 + 0xc) -= 1
                                
                                if (temp10_1 == 1)
                                    (*(*var_150 + 8))(var_150, 1)
                        
                        sub_141fd11f0(rdi, rdx, r12_1, rax_5, arg2, &var_108)
                        rbx_6 = var_168:8.q
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d -= 1
                            
                            if (rbx_6[1].d == 1)
                                (**rbx_6)(rbx_6)
                                int32_t temp12_1 = *(rbx_6 + 0xc)
                                *(rbx_6 + 0xc) -= 1
                                
                                if (temp12_1 == 1)
                                    (*(*rbx_6 + 8))(rbx_6, 1)
                    else
                        rbx_6 = var_168:8.q
                        
                        if (rbx_6 != 0)
                            rbx_6[1].d -= 1
                            
                            if (rbx_6[1].d == 1)
                                (**rbx_6)(rbx_6)
                                int32_t temp2_1 = *(rbx_6 + 0xc)
                                *(rbx_6 + 0xc) -= 1
                                
                                if (temp2_1 == 1)
                                    (*(*rbx_6 + 8))(rbx_6, 1)
                    rsi = var_180
                else
                    void* r9_3 = &var_108
                    int128_t* var_198_2 = &var_168
                    
                    if (rcx_12 != 2)
                        if (sub_141fc7370(rdi, rdx, r13_1, r9_3, var_198_2, r15_3) != 0)
                            sub_141fd11f0(rdi, rdx, r12_1, rax_5, arg2, &var_108)
                    else if (sub_141fc7370(rdi, rdx, r13_1, r9_3, var_198_2, r15_3) != 0)
                        uint128_t zmm1_1 = var_168
                        var_158.o = zmm1_1
                        void* rax_15 = _mm_bsrli_si128(zmm1_1, 8).q
                        
                        if (rax_15 != 0)
                            *(rax_15 + 8) += 1
                        
                        if (&var_158 != r15_3)
                            zmm0_1 = *r15_3
                            *r15_3 = zmm1_1
                            var_158.o = zmm0_1
                        
                        if (var_150 != 0)
                            var_150[1].d -= 1
                            
                            if (var_150[1].d == 1)
                                (**var_150)(var_150)
                                int32_t temp8_1 = *(var_150 + 0xc)
                                *(var_150 + 0xc) -= 1
                                
                                if (temp8_1 == 1)
                                    (*(*var_150 + 8))(var_150, 1)
                        
                        sub_141fd11f0(rdi, rdx, r12_1, rax_5, arg2, &var_108)
                    
                    int64_t* rbx_3 = var_168:8.q
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp3_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp3_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                rbx_2 = var_188_1
            
            r13_1 += 1
        while (zx.d(r13_1) u< i)
    
    int64_t var_78
    
    if (var_78 != 0)
        sub_140a74f90(var_78)
    
    i = sub_140b4cb40(&var_108)
    *(rdi + 0x10)
    *(rdi + 0x50)
    int64_t var_198_6 = r14_1

__security_check_cookie(rax_1 ^ &var_1b8)
return i
