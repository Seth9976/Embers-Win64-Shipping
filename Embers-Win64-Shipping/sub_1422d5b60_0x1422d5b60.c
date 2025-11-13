// 函数: sub_1422d5b60
// 地址: 0x1422d5b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3f8
int64_t rax_2 = __security_cookie ^ &var_3f8
int64_t var_348 = arg1
int64_t r9
int64_t var_3a8_1 = r9
char var_3d8_1 = arg3
int64_t var_340_1 = (sx.q(arg2) << 4) + arg1 - 0x10
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r9_1 = &var_348
int64_t* var_3d0_1 = &var_348

while (true)
    uint128_t zmm2 = *r9_1
    uint128_t* rbp_1 = zmm2.q
    uint32_t var_390_1 = (r9_1[2]).d
    void* rdx = _mm_bsrli_si128(zmm2, 8).q
    uint128_t* var_3b0_1 = rbp_1
    void* var_3c8_1 = rdx
    uint32_t var_3c0_1 = var_390_1
    int32_t rax_10 = ((rdx - rbp_1) s>> 4).d + 1
    
    if (var_390_1 == 0)
    label_1422d5f51:
        sub_1422d5680(rbp_1, rax_10)
    label_1422d5f56:
        r9_1 = var_3d0_1
    else
        while (true)
            uint128_t zmm1
            
            if (rax_10 s<= 8)
                if (rdx u<= rbp_1)
                    break
                
                void* rdi_3 = var_3c8_1
                void* rcx_25 = &rbp_1[1]
                
                do
                    void* rax_49 = rbp_1
                    void* r13_2 = rcx_25
                    void* var_3c8_2 = rax_49
                    
                    if (rcx_25 u<= rdi_3)
                        do
                            int64_t* r14_3 = *(r13_2 + 8)
                            int64_t* rdx_5 = *r13_2
                            
                            if (r14_3 != 0)
                                r14_3[1].d += 1
                            
                            int64_t* r15_3 = *(rax_49 + 8)
                            int64_t* rcx_26 = *rax_49
                            
                            if (r15_3 != 0)
                                r15_3[1].d += 1
                            
                            int32_t rax_51 = (*(*rdx_5 + 0x58))(rdx_5)
                            int64_t rdx_6 = *rcx_26
                            int32_t rsi_3
                            rsi_3.b = (*(rdx_6 + 0x58))(rcx_26, rdx_6) s> rax_51
                            
                            if (r15_3 != 0)
                                r15_3[1].d -= 1
                                
                                if (r15_3[1].d == 1)
                                    (**r15_3)(r15_3)
                                    int32_t rax_56 = *(r15_3 + 0xc)
                                    *(r15_3 + 0xc) -= 1
                                    
                                    if (rax_56 == 1)
                                        (*(*r15_3 + 8))(r15_3, 1)
                            
                            if (r14_3 != 0)
                                r14_3[1].d -= 1
                                
                                if (r14_3[1].d == 1)
                                    (**r14_3)(r14_3)
                                    int32_t rax_60 = *(r14_3 + 0xc)
                                    *(r14_3 + 0xc) -= 1
                                    
                                    if (rax_60 == 1)
                                        (*(*r14_3 + 8))(r14_3, 1)
                            
                            rax_49 = r13_2
                            
                            if (rsi_3.b == 0)
                                rax_49 = var_3c8_2
                            
                            r13_2 += 0x10
                            var_3c8_2 = rax_49
                        while (r13_2 u<= rdi_3)
                        
                        rcx_25 = &rbp_1[1]
                    
                    if (rax_49 != rdi_3)
                        zmm1 = *rax_49
                        uint128_t var_358_1 = zmm1
                        *rax_49 = *rdi_3
                        *rdi_3 = zmm1
                    
                    rdi_3 -= 0x10
                while (rdi_3 u> rbp_1)
                
                goto label_1422d5f56
            
            int32_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_10)
            void* rcx_5 = &rbp_1[sx.q((temp2_1 - temp1_1) s>> 1)]
            
            if (rcx_5 != rbp_1)
                zmm1 = *rcx_5
                uint128_t var_388_1 = zmm1
                *rcx_5 = *rbp_1
                *rbp_1 = zmm1
            
            uint128_t* r12_1 = var_3b0_1
            uint128_t* r13_1 = var_3c8_1 + 0x10
            
            while (true)
                r12_1 = &r12_1[1]
                
                if (r12_1 u<= var_3c8_1)
                    int64_t* r14_1 = *(r12_1 + 8)
                    int64_t* rax_14 = *r12_1
                    
                    if (r14_1 != 0)
                        r14_1[1].d += 1
                    
                    int64_t* r15_1 = *(var_3b0_1 + 8)
                    int64_t* rcx_6 = *var_3b0_1
                    
                    if (r15_1 != 0)
                        r15_1[1].d += 1
                    
                    int32_t rax_16 = (*(*rcx_6 + 0x58))(rcx_6)
                    int64_t rdx_2 = *rax_14
                    int32_t rsi_1
                    rsi_1.b = rax_16 s> (*(rdx_2 + 0x58))(rax_14, rdx_2)
                    
                    if (r15_1 != 0)
                        r15_1[1].d -= 1
                        
                        if (r15_1[1].d == 1)
                            (**r15_1)(r15_1)
                            int32_t rax_21 = *(r15_1 + 0xc)
                            *(r15_1 + 0xc) -= 1
                            
                            if (rax_21 == 1)
                                (*(*r15_1 + 8))(r15_1, 1)
                    
                    if (r14_1 != 0)
                        r14_1[1].d -= 1
                        
                        if (r14_1[1].d == 1)
                            (**r14_1)(r14_1)
                            int32_t rax_25 = *(r14_1 + 0xc)
                            *(r14_1 + 0xc) -= 1
                            
                            if (rax_25 == 1)
                                (*(*r14_1 + 8))(r14_1, 1)
                    
                    if (rsi_1.b == 0)
                        continue
                
                int32_t rsi_2
                
                do
                    r13_1 -= 0x10
                    
                    if (r13_1 u<= var_3b0_1)
                        break
                    
                    int64_t* r14_2 = *(var_3b0_1 + 8)
                    int64_t* rax_27 = *var_3b0_1
                    
                    if (r14_2 != 0)
                        r14_2[1].d += 1
                    
                    int64_t* r15_2 = *(r13_1 + 8)
                    int64_t* rcx_12 = *r13_1
                    
                    if (r15_2 != 0)
                        r15_2[1].d += 1
                    
                    int32_t rax_29 = (*(*rcx_12 + 0x58))(rcx_12)
                    int64_t rdx_3 = *rax_27
                    rsi_2.b = rax_29 s> (*(rdx_3 + 0x58))(rax_27, rdx_3)
                    
                    if (r15_2 != 0)
                        r15_2[1].d -= 1
                        
                        if (r15_2[1].d == 1)
                            (**r15_2)(r15_2)
                            int32_t rax_34 = *(r15_2 + 0xc)
                            *(r15_2 + 0xc) -= 1
                            
                            if (rax_34 == 1)
                                (*(*r15_2 + 8))(r15_2, 1)
                    
                    if (r14_2 != 0)
                        r14_2[1].d -= 1
                        
                        if (r14_2[1].d == 1)
                            (**r14_2)(r14_2)
                            int32_t rax_38 = *(r14_2 + 0xc)
                            *(r14_2 + 0xc) -= 1
                            
                            if (rax_38 == 1)
                                (*(*r14_2 + 8))(r14_2, 1)
                while (rsi_2.b == 0)
                
                if (r12_1 u> r13_1)
                    break
                
                if (r12_1 != r13_1)
                    zmm1 = *r12_1
                    uint128_t var_378_1 = zmm1
                    *r12_1 = *r13_1
                    *r13_1 = zmm1
            
            rbp_1 = var_3b0_1
            
            if (var_3b0_1 != r13_1)
                zmm1 = *rbp_1
                uint128_t var_368_1 = zmm1
                *rbp_1 = *r13_1
                *r13_1 = zmm1
            
            rdx = var_3c8_1
            r9_1 = var_3d0_1
            uint32_t r8_1 = var_3c0_1 - 1
            var_3c0_1 = r8_1
            
            if (((r13_1 - rbp_1 - 0x10) & 0xfffffffffffffff0)
                    s< ((rdx - r12_1) & 0xfffffffffffffff0))
                if (rdx u> r12_1)
                    *r9_1 = r12_1
                    r9_1[1] = rdx
                    r9_1[2].d = r8_1
                    r9_1 = &r9_1[3]
                    var_3d0_1 = r9_1
                
                if (&rbp_1[1] u>= r13_1)
                    break
                
                rdx = &r13_1[-1]
                var_3c8_1 = rdx
            else
                if (&rbp_1[1] u< r13_1)
                    *r9_1 = rbp_1
                    r9_1[1] = &r13_1[-1]
                    r9_1[2].d = r8_1
                    r9_1 = &r9_1[3]
                    var_3d0_1 = r9_1
                
                if (rdx u<= r12_1)
                    break
                
                rbp_1 = r12_1
                var_3b0_1 = r12_1
            
            r9_1 = var_3d0_1
            rax_10 = ((rdx - rbp_1) s>> 4).d + 1
            
            if (r8_1 == 0)
                goto label_1422d5f51
    
    r9_1 -= 0x18
    var_3d0_1 = r9_1
    
    if (r9_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_3f8)
