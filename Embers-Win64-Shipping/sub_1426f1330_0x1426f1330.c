// 函数: sub_1426f1330
// 地址: 0x1426f1330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_388
int64_t rax_2 = __security_cookie ^ &var_388
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(arg2))
int64_t var_340_1 = arg1 - 0x4c + sx.q(arg2) * 0x4c
int128_t zmm6
int128_t var_38_1 = zmm6
int64_t var_348 = arg1
float zmm0_1 = logf(zmm0.d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r14_1 = &var_348

while (true)
    uint128_t zmm2 = *r14_1
    uint32_t rbp_1 = (r14_1[2]).d
    uint128_t* r11_1 = zmm2.q
    void* i = _mm_bsrli_si128(zmm2, 8).q
    int32_t rdx_3 = ((i - r11_1) s/ 0x4c).d + 1
    
    if (rbp_1 == 0)
    label_1426f1685:
        sub_1426f1000(r11_1, rdx_3)
    else
        while (true)
            uint128_t zmm3
            int128_t zmm4_1
            int128_t zmm5_1
            
            if (rdx_3 s<= 8)
                for (; i u> r11_1; i -= 0x4c)
                    uint128_t* rdx_14 = r11_1
                    void* rax_29 = r11_1 + 0x4c
                    
                    if (r11_1 + 0x4c u<= i)
                        do
                            if ((*rdx_14).d f< *rax_29)
                                rdx_14 = rax_29
                            
                            rax_29 += 0x4c
                        while (rax_29 u<= i)
                    
                    if (rdx_14 != i)
                        int32_t rcx_17 = *(rdx_14 + 0x48)
                        zmm3 = *rdx_14
                        zmm4_1 = rdx_14[1]
                        zmm5_1 = rdx_14[2]
                        zmm6 = rdx_14[3]
                        zmm2 = zx.o(rdx_14[4].q)
                        *rdx_14 = *i
                        rdx_14[1] = *(i + 0x10)
                        rdx_14[2] = *(i + 0x20)
                        rdx_14[3] = *(i + 0x30)
                        rdx_14[4].q = *(i + 0x40)
                        *(rdx_14 + 0x48) = *(i + 0x48)
                        *i = zmm3
                        *(i + 0x10) = zmm4_1
                        *(i + 0x20) = zmm5_1
                        *(i + 0x30) = zmm6
                        *(i + 0x40) = zmm2.q
                        *(i + 0x48) = rcx_17
                
                break
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rdx_3)
            void* rdx_6 = sx.q((temp1_1 - temp0_3) s>> 1) * 0x4c + r11_1
            
            if (rdx_6 != r11_1)
                int32_t rcx_4 = *(rdx_6 + 0x48)
                zmm3 = *rdx_6
                zmm4_1 = *(rdx_6 + 0x10)
                zmm5_1 = *(rdx_6 + 0x20)
                zmm6 = *(rdx_6 + 0x30)
                zmm2 = zx.o(*(rdx_6 + 0x40))
                *rdx_6 = *r11_1
                *(rdx_6 + 0x10) = r11_1[1]
                *(rdx_6 + 0x20) = r11_1[2]
                *(rdx_6 + 0x30) = r11_1[3]
                *(rdx_6 + 0x40) = r11_1[4].q
                *(rdx_6 + 0x48) = *(r11_1 + 0x48)
                *r11_1 = zmm3
                r11_1[1] = zmm4_1
                r11_1[2] = zmm5_1
                r11_1[3] = zmm6
                r11_1[4].q = zmm2.q
                *(r11_1 + 0x48) = rcx_4
            
            uint128_t* r10_1 = i + 0x4c
            uint128_t* r9_1 = r11_1
            
            while (true)
                r9_1 += 0x4c
                
                if (r9_1 u<= i && (*r9_1).d f<= *r11_1)
                    continue
                
                do
                    r10_1 -= 0x4c
                    
                    if (r10_1 u<= r11_1)
                        break
                while ((*r11_1).d f<= *r10_1)
                
                if (r9_1 u> r10_1)
                    break
                
                if (r9_1 != r10_1)
                    int32_t rcx_5 = *(r9_1 + 0x48)
                    zmm3 = *r9_1
                    zmm4_1 = r9_1[1]
                    zmm5_1 = r9_1[2]
                    zmm6 = r9_1[3]
                    zmm2 = zx.o(r9_1[4].q)
                    *r9_1 = *r10_1
                    r9_1[1] = r10_1[1]
                    r9_1[2] = r10_1[2]
                    r9_1[3] = r10_1[3]
                    r9_1[4].q = r10_1[4].q
                    *(r9_1 + 0x48) = *(r10_1 + 0x48)
                    *r10_1 = zmm3
                    r10_1[1] = zmm4_1
                    r10_1[2] = zmm5_1
                    r10_1[3] = zmm6
                    r10_1[4].q = zmm2.q
                    *(r10_1 + 0x48) = rcx_5
            
            if (r11_1 != r10_1)
                int32_t rcx_6 = *(r11_1 + 0x48)
                zmm3 = *r11_1
                zmm4_1 = r11_1[1]
                zmm5_1 = r11_1[2]
                zmm6 = r11_1[3]
                zmm2 = zx.o(r11_1[4].q)
                *r11_1 = *r10_1
                r11_1[1] = r10_1[1]
                r11_1[2] = r10_1[2]
                r11_1[3] = r10_1[3]
                r11_1[4].q = r10_1[4].q
                *(r11_1 + 0x48) = *(r10_1 + 0x48)
                *r10_1 = zmm3
                r10_1[1] = zmm4_1
                r10_1[2] = zmm5_1
                r10_1[3] = zmm6
                r10_1[4].q = zmm2.q
                *(r10_1 + 0x48) = rcx_6
            
            rbp_1 -= 1
            
            if ((r10_1 - r11_1 - 0x4c) s/ 0x4c s< (i - r9_1) s/ 0x4c)
                if (i u> r9_1)
                    *r14_1 = r9_1
                    r14_1[1] = i
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (r11_1 + 0x4c u>= r10_1)
                    break
                
                i = r10_1 - 0x4c
            else
                if (r11_1 + 0x4c u< r10_1)
                    *r14_1 = r11_1
                    r14_1[1] = r10_1 - 0x4c
                    r14_1[2].d = rbp_1
                    r14_1 = &r14_1[3]
                
                if (i u<= r9_1)
                    break
                
                r11_1 = r9_1
            
            rdx_3 = ((i - r11_1) s/ 0x4c).d + 1
            
            if (rbp_1 == 0)
                goto label_1426f1685
    
    r14_1 -= 0x18
    
    if (r14_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_388)
