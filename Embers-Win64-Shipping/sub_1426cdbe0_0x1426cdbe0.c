// 函数: sub_1426cdbe0
// 地址: 0x1426cdbe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg2 + 0xb8)

if (rdi == 0)
    int64_t result
    result.b = 0
    return result

int64_t zmm0 = data_143dbb1f8.q
int32_t rax = data_143dbb200
uint64_t rdx = zx.q(*(arg1 + 0x88))
int64_t var_108 = zmm0
int64_t var_118 = zmm0
int32_t var_100 = rax
int32_t var_110 = rax
char rax_1 = sub_1426b2560(rdi, rdx, &var_108)
char rax_2 = sub_1426b2560(rdi, zx.q(*(arg1 + 0xb0)), &var_118)
uint64_t rbp
rbp.b = 0
void* rax_3 = *(arg2 + 0xa8)

if (rax_3 != 0)
label_1426cdc95:
    int64_t* r15_1 = *(rax_3 + 0x120)
    
    if (r15_1 != 0)
        void* rax_4 = sub_14269bba0()
        void* rdx_2 = r15_1[2]
        int64_t rax_5 = sx.q(*(rax_4 + 0x38))
        
        if (rax_5.d s<= *(rdx_2 + 0x38) && *(*(rdx_2 + 0x30) + (rax_5 << 3)) == rax_4 + 0x30
                && rax_1 != 0 && rax_2 != 0)
            void* r14_1 = *(arg2 + 0xc0)
            
            if (r14_1 != 0)
                int64_t rsi_1 = *r15_1
                void var_b8
                int64_t rax_8 = (*(*(r14_1 + 0x220) + 0x18))(r14_1 + 0x220, &var_b8)
                int64_t rdx_4 = *(r14_1 + 0x220)
                void* rax_10 = (*(rsi_1 + 0x2b0))(r15_1, (*(rdx_4 + 0x10))(r14_1 + 0x220, rdx_4), 
                    rax_8, &data_143dbb1f8)
                
                if (rax_10 != 0)
                    uint128_t var_f8
                    sub_14265ad90(&var_f8, rax_10, r14_1, *(arg1 + 0xc0))
                    char rax_11 = *(arg1 + 0xbc)
                    
                    if (rax_11 != 0)
                        uint128_t zmm1_1 = var_f8
                        uint128_t var_c8 = zmm1_1
                        void* rax_17 = _mm_bsrli_si128(zmm1_1, 8).q
                        int32_t rbx_2
                        rbx_2.b = rax_11 == 1
                        int128_t var_d8 = zx.o(0)
                        
                        if (rax_17 != 0)
                            *(rax_17 + 8) += 1
                        
                        void var_a8
                        rbp = zx.q(sub_14266a200(r15_1, 
                            sub_142642800(&var_a8, r14_1, rax_10, &var_108, &var_118, &var_c8, 
                                &var_d8, 0x7f7fffff), 
                            rbx_2, 0))
                    else
                        void* rax_12 = sub_1426a09e0()
                        void* rdx_7 = *(rax_10 + 0x10)
                        int64_t rax_13 = sx.q(*(rax_12 + 0x38))
                        char rax_16
                        
                        if (rax_13.d s<= *(rdx_7 + 0x38)
                                && *(*(rdx_7 + 0x30) + (rax_13 << 3)) == rax_12 + 0x30)
                            uint128_t zmm0_1 = var_f8
                            uint128_t var_e8 = zmm0_1
                            void* rax_15 = _mm_bsrli_si128(zmm0_1, 8).q
                            
                            if (rax_15 != 0)
                                *(rax_15 + 8) += 1
                            
                            rax_16 = sub_14268a650(rax_10, &var_108, &var_118, &var_e8, 0)
                        
                        if (rax_13.d s> *(rdx_7 + 0x38)
                                || *(*(rdx_7 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30
                                || rax_16 == 0)
                            rbp.b = 0
                        else
                            rbp.b = 1
                    
                    int64_t* rbx_3 = var_f8:8.q
                    
                    if (rbx_3 != 0)
                        int32_t rdx_11 = rbx_3[1].d
                        rbx_3[1].d -= 1
                        
                        if (rdx_11 == 1)
                            (**rbx_3)(rbx_3, rdx_11)
                            int32_t rdi_3 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (rdi_3 == 1)
                                (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_3))
else
    rax_3 = sub_141ee69e0(arg2)
    
    if (rax_3 != 0)
        goto label_1426cdc95

return zx.q(rbp.b)
