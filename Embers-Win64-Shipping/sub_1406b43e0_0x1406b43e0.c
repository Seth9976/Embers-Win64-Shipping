// 函数: sub_1406b43e0
// 地址: 0x1406b43e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_988
int64_t rax_2 = __security_cookie ^ &var_988
int64_t var_348 = arg1
int64_t var_340_1 = arg1 + (sx.q(arg2) << 3) - 8
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r12_1 = &var_348

while (true)
    uint128_t zmm2 = *r12_1
    uint32_t r13_1 = (r12_1[2]).d
    int64_t* r15_1 = zmm2.q
    void* rbp_1 = _mm_bsrli_si128(zmm2, 8).q
    int32_t rax_8 = ((rbp_1 - r15_1) s>> 3).d + 1
    
    if (r13_1 == 0)
    label_1406b4840:
        sub_1406b3d80(r15_1, rax_8, zx.q(arg3), arg4)
    else
        while (true)
            uint128_t zmm1
            
            if (rax_8 s<= 8)
                while (rbp_1 u> r15_1)
                    int64_t* rsi_2 = r15_1
                    int64_t* r14_2 = &r15_1[1]
                    
                    if (&r15_1[1] u<= rbp_1)
                        do
                            uint128_t* rax_34 = *r14_2
                            zmm1 = rax_34[1]
                            uint128_t var_548 = *rax_34
                            uint128_t var_538_1 = zmm1
                            uint128_t var_528_1 = rax_34[2]
                            uint128_t var_518_1 = rax_34[3]
                            uint128_t var_508_1 = rax_34[4]
                            uint128_t var_4f8_1 = rax_34[5]
                            uint128_t var_4e8_1 = rax_34[6]
                            uint128_t var_4d8_1 = rax_34[7]
                            uint128_t var_4c8_1 = *(rax_34 + 0x80)
                            uint128_t var_4b8_1 = rax_34[9]
                            uint128_t var_4a8_1 = rax_34[0xa]
                            uint128_t var_498_1 = rax_34[0xb]
                            uint128_t var_488_1 = rax_34[0xc]
                            uint128_t var_478_1 = rax_34[0xd]
                            uint128_t var_468_1 = rax_34[0xe]
                            int64_t var_458_1 = rax_34[0xf].q
                            uint128_t* rax_37 = *rsi_2
                            zmm1 = rax_37[1]
                            uint128_t var_448 = *rax_37
                            uint128_t var_438_1 = zmm1
                            uint128_t var_428_1 = rax_37[2]
                            uint128_t var_418_1 = rax_37[3]
                            uint128_t var_408_1 = rax_37[4]
                            uint128_t var_3f8_1 = rax_37[5]
                            uint128_t var_3e8_1 = rax_37[6]
                            uint128_t var_3d8_1 = rax_37[7]
                            uint128_t var_3c8_1 = *(rax_37 + 0x80)
                            uint128_t var_3b8_1 = rax_37[9]
                            uint128_t var_3a8_1 = rax_37[0xa]
                            uint128_t var_398_1 = rax_37[0xb]
                            uint128_t var_388_1 = rax_37[0xc]
                            uint128_t var_378_1 = rax_37[0xd]
                            uint128_t var_368_1 = rax_37[0xe]
                            int64_t var_358_1 = rax_37[0xf].q
                            
                            if (sub_1406b7160(arg4, &var_448, &var_548) != 0)
                                rsi_2 = r14_2
                            
                            r14_2 = &r14_2[1]
                        while (r14_2 u<= rbp_1)
                    
                    int64_t rcx_16 = *rsi_2
                    void* rdx_5 = rbp_1
                    rbp_1 -= 8
                    *rsi_2 = *rdx_5
                    *rdx_5 = rcx_16
                
                break
            
            if (rax_8 s< 0)
                rax_8 += 1
            
            int64_t* r14_1 = rbp_1 + 8
            int64_t rdx = sx.q(rax_8 s>> 1)
            int64_t* rsi_1 = r15_1
            int64_t rcx_3 = r15_1[rdx]
            r15_1[rdx] = *r15_1
            *r15_1 = rcx_3
            int64_t rax_24
            
            while (true)
                rsi_1 = &rsi_1[1]
                
                if (rsi_1 u<= rbp_1)
                    uint128_t* rax_11 = *rsi_1
                    zmm1 = rax_11[1]
                    uint128_t var_948 = *rax_11
                    uint128_t var_938_1 = zmm1
                    uint128_t var_928_1 = rax_11[2]
                    uint128_t var_918_1 = rax_11[3]
                    uint128_t var_908_1 = rax_11[4]
                    uint128_t var_8f8_1 = rax_11[5]
                    uint128_t var_8e8_1 = rax_11[6]
                    uint128_t var_8d8_1 = rax_11[7]
                    uint128_t var_8c8_1 = *(rax_11 + 0x80)
                    uint128_t var_8b8_1 = rax_11[9]
                    uint128_t var_8a8_1 = rax_11[0xa]
                    uint128_t var_898_1 = rax_11[0xb]
                    uint128_t var_888_1 = rax_11[0xc]
                    uint128_t var_878_1 = rax_11[0xd]
                    uint128_t var_868_1 = rax_11[0xe]
                    int64_t var_858_1 = rax_11[0xf].q
                    uint128_t* rax_14 = *r15_1
                    zmm1 = rax_14[1]
                    uint128_t var_848 = *rax_14
                    uint128_t var_838_1 = zmm1
                    uint128_t var_828_1 = rax_14[2]
                    uint128_t var_818_1 = rax_14[3]
                    uint128_t var_808_1 = rax_14[4]
                    uint128_t var_7f8_1 = rax_14[5]
                    uint128_t var_7e8_1 = rax_14[6]
                    uint128_t var_7d8_1 = rax_14[7]
                    uint128_t var_7c8_1 = *(rax_14 + 0x80)
                    uint128_t var_7b8_1 = rax_14[9]
                    uint128_t var_7a8_1 = rax_14[0xa]
                    uint128_t var_798_1 = rax_14[0xb]
                    uint128_t var_788_1 = rax_14[0xc]
                    uint128_t var_778_1 = rax_14[0xd]
                    uint128_t var_768_1 = rax_14[0xe]
                    int64_t var_758_1 = rax_14[0xf].q
                    
                    if (sub_1406b7160(arg4, &var_848, &var_948) == 0)
                        continue
                
                char i
                
                do
                    r14_1 = &r14_1[-1]
                    
                    if (r14_1 u<= r15_1)
                        break
                    
                    uint128_t* rax_18 = *r15_1
                    zmm1 = rax_18[1]
                    uint128_t var_748 = *rax_18
                    uint128_t var_738_1 = zmm1
                    uint128_t var_728_1 = rax_18[2]
                    uint128_t var_718_1 = rax_18[3]
                    uint128_t var_708_1 = rax_18[4]
                    uint128_t var_6f8_1 = rax_18[5]
                    uint128_t var_6e8_1 = rax_18[6]
                    uint128_t var_6d8_1 = rax_18[7]
                    uint128_t var_6c8_1 = *(rax_18 + 0x80)
                    uint128_t var_6b8_1 = rax_18[9]
                    uint128_t var_6a8_1 = rax_18[0xa]
                    uint128_t var_698_1 = rax_18[0xb]
                    uint128_t var_688_1 = rax_18[0xc]
                    uint128_t var_678_1 = rax_18[0xd]
                    uint128_t var_668_1 = rax_18[0xe]
                    int64_t var_658_1 = rax_18[0xf].q
                    uint128_t* rax_21 = *r14_1
                    zmm1 = rax_21[1]
                    uint128_t var_648 = *rax_21
                    uint128_t var_638_1 = zmm1
                    uint128_t var_628_1 = rax_21[2]
                    uint128_t var_618_1 = rax_21[3]
                    uint128_t var_608_1 = rax_21[4]
                    uint128_t var_5f8_1 = rax_21[5]
                    uint128_t var_5e8_1 = rax_21[6]
                    uint128_t var_5d8_1 = rax_21[7]
                    uint128_t var_5c8_1 = *(rax_21 + 0x80)
                    uint128_t var_5b8_1 = rax_21[9]
                    uint128_t var_5a8_1 = rax_21[0xa]
                    uint128_t var_598_1 = rax_21[0xb]
                    uint128_t var_588_1 = rax_21[0xc]
                    uint128_t var_578_1 = rax_21[0xd]
                    uint128_t var_568_1 = rax_21[0xe]
                    int64_t var_558_1 = rax_21[0xf].q
                    i = sub_1406b7160(arg4, &var_648, &var_748)
                while (i == 0)
                rax_24 = *r14_1
                
                if (rsi_1 u> r14_1)
                    break
                
                int64_t rcx_6 = *rsi_1
                *rsi_1 = rax_24
                *r14_1 = rcx_6
            
            int64_t rcx_7 = *r15_1
            r13_1 -= 1
            *r15_1 = rax_24
            *r14_1 = rcx_7
            
            if (((r14_1 - r15_1 - 8) & 0xfffffffffffffff8)
                    s< ((rbp_1 - rsi_1) & 0xfffffffffffffff8))
                if (rbp_1 u> rsi_1)
                    *r12_1 = rsi_1
                    r12_1[1] = rbp_1
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (&r15_1[1] u>= r14_1)
                    break
                
                rbp_1 = &r14_1[-1]
            else
                if (&r15_1[1] u< r14_1)
                    *r12_1 = r15_1
                    r12_1[1] = &r14_1[-1]
                    r12_1[2].d = r13_1
                    r12_1 = &r12_1[3]
                
                if (rbp_1 u<= rsi_1)
                    break
                
                r15_1 = rsi_1
            
            rax_8 = ((rbp_1 - r15_1) s>> 3).d + 1
            
            if (r13_1 == 0)
                goto label_1406b4840
    
    r12_1 -= 0x18
    
    if (r12_1 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_988)
