// 函数: sub_140a5ed50
// 地址: 0x140a5ed50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3a8
int64_t rax_2 = __security_cookie ^ &var_3a8
uint64_t rbp
uint64_t arg_20 = rbp
int64_t var_348 = arg1
int64_t r9
int64_t var_368_1 = r9
char var_388_1 = arg3
int64_t var_340_1 = (sx.q(arg2) << 4) + arg1 - 0x10
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* rcx_2 = &var_348
int64_t* var_380_1 = &var_348

while (true)
    uint128_t zmm2 = *rcx_2
    uint128_t* r8 = zmm2.q
    uint32_t r13_1 = (rcx_2[2]).d
    uint128_t zmm1 = _mm_bsrli_si128(zmm2, 8)
    void* rdx = zmm1.q
    uint128_t* var_378_1 = r8
    void* var_370_1 = rdx
    uint64_t rax_10 = zx.q(((rdx - r8) s>> 4).d + 1)
    
    if (r13_1 == 0)
    label_140a5f1aa:
        sub_140a5e210(var_378_1, rax_10.d, zmm1)
    label_140a5f1af:
        rcx_2 = var_380_1
    else
        while (true)
            if (rax_10.d s<= 8)
                if (rdx u<= r8)
                    break
                
                void* rdi_3 = var_370_1
                int64_t** r13_2 = &r8[1]
                
                do
                    uint64_t r12_2 = r8
                    int64_t** r15_2 = r13_2
                    
                    if (r13_2 u<= rdi_3)
                        do
                            int64_t* rsi_3 = r15_2[1]
                            int64_t* rdx_7 = *r15_2
                            
                            if (rsi_3 != 0)
                                rsi_3[1].d += 1
                            
                            int64_t* r14_3 = *(r12_2 + 8)
                            int64_t* rcx_33 = *r12_2
                            
                            if (r14_3 != 0)
                                r14_3[1].d += 1
                            
                            bool cond:3_1
                            
                            if (rcx_33 != 0)
                                cond:3_1 = rdx_7 != 0
                            label_140a5f2c6:
                                rbp.b = cond:3_1
                                rax_10.b = rcx_33 != 0
                                
                                if (rax_10.b == rbp.b)
                                    rbp = zx.q(sub_140a65900(rcx_33, rdx_7, zmm1))
                                    
                                    if (r14_3 != 0)
                                        r14_3[1].d -= 1
                                        
                                        if (r14_3[1].d == 1)
                                            int64_t rdx_8 = *r14_3
                                            (*rdx_8)(r14_3, rdx_8)
                                            int32_t temp25_1 = *(r14_3 + 0xc)
                                            *(r14_3 + 0xc) -= 1
                                            
                                            if (temp25_1 == 1 && r14_3 != 0)
                                                (*(*r14_3 + 8))(r14_3, 1)
                                else if (r14_3 != 0)
                                    r14_3[1].d -= 1
                                    
                                    if (r14_3[1].d == 1)
                                        (**r14_3)(r14_3)
                                        int32_t temp26_1 = *(r14_3 + 0xc)
                                        *(r14_3 + 0xc) -= 1
                                        
                                        if (temp26_1 == 1)
                                            (*(*r14_3 + 8))(r14_3, 1)
                                
                                if (rsi_3 != 0)
                                    rsi_3[1].d -= 1
                                    
                                    if (rsi_3[1].d == 1)
                                        (**rsi_3)(rsi_3)
                                        int32_t temp33_1 = *(rsi_3 + 0xc)
                                        *(rsi_3 + 0xc) -= 1
                                        
                                        if (temp33_1 == 1)
                                            (*(*rsi_3 + 8))(rsi_3, 1)
                            else
                                cond:3_1 = rdx_7 != 0
                                
                                if (rdx_7 != 0)
                                    goto label_140a5f2c6
                                
                                if (r14_3 != 0)
                                    r14_3[1].d -= 1
                                    
                                    if (r14_3[1].d == 1)
                                        (**r14_3)(r14_3)
                                        int32_t temp15_1 = *(r14_3 + 0xc)
                                        *(r14_3 + 0xc) -= 1
                                        
                                        if (temp15_1 == 1)
                                            (*(*r14_3 + 8))(r14_3, 1)
                                
                                if (rsi_3 != 0)
                                    rsi_3[1].d -= 1
                                    
                                    if (rsi_3[1].d == 1)
                                        (**rsi_3)(rsi_3)
                                        int32_t temp27_1 = *(rsi_3 + 0xc)
                                        *(rsi_3 + 0xc) -= 1
                                        
                                        if (temp27_1 == 1)
                                            (*(*rsi_3 + 8))(rsi_3, 1)
                                
                                rbp.b = 0
                            rax_10 = r15_2
                            
                            if (rbp.b == 0)
                                rax_10 = r12_2
                            
                            r15_2 = &r15_2[2]
                            r12_2 = rax_10
                        while (r15_2 u<= rdi_3)
                        
                        r8 = var_378_1
                    
                    if (r12_2 != rdi_3)
                        zmm1 = *r12_2
                        *r12_2 = *rdi_3
                        *rdi_3 = zmm1
                    
                    rdi_3 -= 0x10
                while (rdi_3 u> r8)
                
                goto label_140a5f1af
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10.d)
            void* rcx_5 = &r8[sx.q((temp1_1 - temp0_3) s>> 1)]
            
            if (rcx_5 != r8)
                zmm1 = *rcx_5
                *rcx_5 = *r8
                *r8 = zmm1
            
            int64_t** rbx_2 = var_378_1
            uint128_t* r15_1 = rbx_2
            int64_t** r12_1 = var_370_1 + 0x10
            
            while (true)
                r15_1 = &r15_1[1]
                int32_t rax_13
                
                if (r15_1 u<= var_370_1)
                    int64_t* rsi_1 = *(r15_1 + 8)
                    int64_t* rdx_2 = *r15_1
                    
                    if (rsi_1 != 0)
                        rsi_1[1].d += 1
                    
                    int64_t* r14_1 = rbx_2[1]
                    int64_t* rcx_6 = *rbx_2
                    
                    if (r14_1 != 0)
                        r14_1[1].d += 1
                    
                    bool cond:4_1
                    
                    if (rcx_6 != 0)
                        cond:4_1 = rdx_2 != 0
                    else
                        cond:4_1 = rdx_2 != 0
                        
                        if (rdx_2 == 0)
                            if (r14_1 != 0)
                                r14_1[1].d -= 1
                                
                                if (r14_1[1].d == 1)
                                    (**r14_1)(r14_1)
                                    int32_t temp11_1 = *(r14_1 + 0xc)
                                    *(r14_1 + 0xc) -= 1
                                    
                                    if (temp11_1 == 1)
                                        (*(*r14_1 + 8))(r14_1, 1)
                            
                            if (rsi_1 == 0)
                                continue
                            else
                                rsi_1[1].d -= 1
                                
                                if (rsi_1[1].d != 1)
                                    continue
                                else
                                    (**rsi_1)(rsi_1)
                                    int32_t temp23_1 = *(rsi_1 + 0xc)
                                    *(rsi_1 + 0xc) -= 1
                                    
                                    if (temp23_1 != 1)
                                        continue
                                    else
                                        (*(*rsi_1 + 8))(rsi_1, 1)
                                        continue
                    
                    rbp.b = cond:4_1
                    rax_13.b = rcx_6 != 0
                    
                    if (rax_13.b == rbp.b)
                        rbp = zx.q(sub_140a65900(rcx_6, rdx_2, zmm1).b)
                        
                        if (r14_1 != 0)
                            r14_1[1].d -= 1
                            
                            if (r14_1[1].d == 1)
                                int64_t rdx_3 = *r14_1
                                (*rdx_3)(r14_1, rdx_3)
                                int32_t temp21_1 = *(r14_1 + 0xc)
                                *(r14_1 + 0xc) -= 1
                                
                                if (temp21_1 == 1 && r14_1 != 0)
                                    (*(*r14_1 + 8))(r14_1, 1)
                    else if (r14_1 != 0)
                        r14_1[1].d -= 1
                        
                        if (r14_1[1].d == 1)
                            (**r14_1)(r14_1)
                            int32_t temp22_1 = *(r14_1 + 0xc)
                            *(r14_1 + 0xc) -= 1
                            
                            if (temp22_1 == 1)
                                (*(*r14_1 + 8))(r14_1, 1)
                    
                    if (rsi_1 != 0)
                        rsi_1[1].d -= 1
                        
                        if (rsi_1[1].d == 1)
                            (**rsi_1)(rsi_1)
                            int32_t temp32_1 = *(rsi_1 + 0xc)
                            *(rsi_1 + 0xc) -= 1
                            
                            if (temp32_1 == 1)
                                (*(*rsi_1 + 8))(rsi_1, 1)
                    
                    if (rbp.b == 0)
                        continue
                
                while (true)
                    r12_1 -= 0x10
                    
                    if (r12_1 u<= rbx_2)
                        break
                    
                    int64_t* rsi_2 = rbx_2[1]
                    int64_t* rdx_4 = *rbx_2
                    
                    if (rsi_2 != 0)
                        rsi_2[1].d += 1
                    
                    int64_t* r14_2 = r12_1[1]
                    int64_t* rcx_16 = *r12_1
                    
                    if (r14_2 != 0)
                        r14_2[1].d += 1
                    
                    bool cond:5_1
                    
                    if (rcx_16 != 0)
                        cond:5_1 = rdx_4 != 0
                    else
                        cond:5_1 = rdx_4 != 0
                        
                        if (rdx_4 == 0)
                            if (r14_2 != 0)
                                r14_2[1].d -= 1
                                
                                if (r14_2[1].d == 1)
                                    (**r14_2)(r14_2)
                                    int32_t temp19_1 = *(r14_2 + 0xc)
                                    *(r14_2 + 0xc) -= 1
                                    
                                    if (temp19_1 == 1)
                                        (*(*r14_2 + 8))(r14_2, 1)
                            
                            if (rsi_2 == 0)
                                continue
                            else
                                rsi_2[1].d -= 1
                                
                                if (rsi_2[1].d != 1)
                                    continue
                                else
                                    (**rsi_2)(rsi_2)
                                    int32_t temp31_1 = *(rsi_2 + 0xc)
                                    *(rsi_2 + 0xc) -= 1
                                    
                                    if (temp31_1 != 1)
                                        continue
                                    else
                                        (*(*rsi_2 + 8))(rsi_2, 1)
                                        continue
                    
                    rbp.b = cond:5_1
                    rax_13.b = rcx_16 != 0
                    
                    if (rax_13.b == rbp.b)
                        rbp = zx.q(sub_140a65900(rcx_16, rdx_4, zmm1).b)
                        
                        if (r14_2 != 0)
                            r14_2[1].d -= 1
                            
                            if (r14_2[1].d == 1)
                                int64_t rdx_5 = *r14_2
                                (*rdx_5)(r14_2, rdx_5)
                                int32_t temp29_1 = *(r14_2 + 0xc)
                                *(r14_2 + 0xc) -= 1
                                
                                if (temp29_1 == 1 && r14_2 != 0)
                                    (*(*r14_2 + 8))(r14_2, 1)
                    else if (r14_2 != 0)
                        r14_2[1].d -= 1
                        
                        if (r14_2[1].d == 1)
                            (**r14_2)(r14_2)
                            int32_t temp30_1 = *(r14_2 + 0xc)
                            *(r14_2 + 0xc) -= 1
                            
                            if (temp30_1 == 1)
                                (*(*r14_2 + 8))(r14_2, 1)
                    
                    if (rsi_2 != 0)
                        rsi_2[1].d -= 1
                        
                        if (rsi_2[1].d == 1)
                            (**rsi_2)(rsi_2)
                            int32_t temp34_1 = *(rsi_2 + 0xc)
                            *(rsi_2 + 0xc) -= 1
                            
                            if (temp34_1 == 1)
                                (*(*rsi_2 + 8))(rsi_2, 1)
                    
                    if (rbp.b != 0)
                        break
                
                if (r15_1 u> r12_1)
                    break
                
                if (r15_1 != r12_1)
                    zmm1 = *r15_1
                    *r15_1 = *r12_1
                    *r12_1 = zmm1
            
            r8 = var_378_1
            
            if (rbx_2 != r12_1)
                zmm1 = *r8
                *r8 = *r12_1
                *r12_1 = zmm1
            
            rdx = var_370_1
            r13_1 -= 1
            rcx_2 = var_380_1
            
            if (((r12_1 - r8 - 0x10) & 0xfffffffffffffff0) s< ((rdx - r15_1) & 0xfffffffffffffff0))
                if (rdx u> r15_1)
                    *rcx_2 = r15_1
                    rcx_2[1] = rdx
                    rcx_2[2].d = r13_1
                    rcx_2 = &rcx_2[3]
                    var_380_1 = rcx_2
                
                if (&r8[1] u>= r12_1)
                    break
                
                rdx = &r12_1[-2]
                var_370_1 = rdx
            else
                if (&r8[1] u< r12_1)
                    *rcx_2 = r8
                    rcx_2[1] = &r12_1[-2]
                    rcx_2[2].d = r13_1
                    rcx_2 = &rcx_2[3]
                    var_380_1 = rcx_2
                
                if (rdx u<= r15_1)
                    break
                
                r8 = r15_1
                var_378_1 = r15_1
            
            rcx_2 = var_380_1
            rax_10 = zx.q(((rdx - r8) s>> 4).d + 1)
            
            if (r13_1 == 0)
                goto label_140a5f1aa
    
    rcx_2 -= 0x18
    var_380_1 = rcx_2
    
    if (rcx_2 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_3a8)
