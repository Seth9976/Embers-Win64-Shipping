// 函数: sub_142323920
// 地址: 0x142323920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3c8
int64_t rax_2 = __security_cookie ^ &var_3c8
int64_t var_348 = arg1
int64_t r9
int64_t var_370_1 = r9
char var_3a8_1 = arg3
int64_t var_340_1 = (sx.q(arg2) << 5) + arg1 - 0x20
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r8 = &var_348
int64_t* var_3a0_1 = &var_348

while (true)
    uint128_t zmm2 = *r8
    uint128_t* rbp_1 = zmm2.q
    uint32_t var_358_1 = (r8[2]).d
    void* r15_1 = _mm_bsrli_si128(zmm2, 8).q
    uint128_t* var_380_1 = rbp_1
    void* var_398_1 = r15_1
    uint32_t var_390_1 = var_358_1
    int32_t rax_10 = ((r15_1 - rbp_1) s>> 5).d + 1
    
    if (var_358_1 == 0)
    label_142323e4f:
        sub_142322cb0(rbp_1, rax_10)
    label_142323e54:
        r8 = var_3a0_1
    else
        while (true)
            int128_t zmm3
            
            if (rax_10 s<= 8)
                if (r15_1 u<= rbp_1)
                    break
                
                void* rax_65 = &rbp_1[2]
                
                do
                    void* rsi_2 = rbp_1
                    void* r11_3 = rax_65
                    
                    if (rax_65 u<= r15_1)
                        do
                            int32_t rax_66 = *(rsi_2 + 0x18)
                            uint64_t rcx_35 = zx.q(*(r11_3 + 0x18))
                            
                            if (rax_66 == rcx_35.d)
                                void* rcx_36 = *(rsi_2 + 0x10)
                                int32_t temp3_1
                                int32_t temp4_1
                                temp3_1:temp4_1 = sx.q(rax_66 + 0x1f)
                                void* r10_3 = rsi_2
                                void* r9_4 = r11_3
                                int32_t i_8 = (temp4_1 + (temp3_1 & 0x1f)) s>> 5
                                
                                if (rcx_36 != 0)
                                    r10_3 = rcx_36
                                
                                void* rcx_37 = *(r11_3 + 0x10)
                                
                                if (rcx_37 != 0)
                                    r9_4 = rcx_37
                                
                                int32_t r8_4 = 0
                                int32_t r14_3 = 0
                                
                                if (i_8 != 0)
                                    void* r12_3 = r9_4
                                    uint64_t i_5 = zx.q(i_8)
                                    uint64_t i
                                    
                                    do
                                        uint64_t rdx_24 = zx.q(*(r10_3 - r9_4 + r12_3))
                                        r12_3 += 4
                                        int64_t rdx_25 =
                                            rdx_24 - (zx.q(rdx_24.d) u>> 1 & 0x5555555555555555)
                                        int64_t rcx_41 = (rdx_25 u>> 2 & 0x3333333333333333)
                                            + (rdx_25 & 0x3333333333333333)
                                        uint64_t rdx_27 = zx.q(*(r12_3 - 4))
                                        r8_4 += (((((rcx_41 u>> 4) + rcx_41) & 0xf0f0f0f0f0f0f0f)
                                            * 0x101010101010101) u>> 0x38).d
                                        int64_t rdx_28 =
                                            rdx_27 - (zx.q(rdx_27.d) u>> 1 & 0x5555555555555555)
                                        rcx_35 = (rdx_28 u>> 2 & 0x3333333333333333)
                                            + (rdx_28 & 0x3333333333333333)
                                        r14_3 += (((((rcx_35 u>> 4) + rcx_35) & 0xf0f0f0f0f0f0f0f)
                                            * 0x101010101010101) u>> 0x38).d
                                        i = i_5
                                        i_5 -= 1
                                    while (i != 1)
                                    r15_1 = var_398_1
                                
                                if (i_8 == 0 || r8_4 == r14_3)
                                    rcx_35 = zx.q(i_8 - 1)
                                    
                                    if (rcx_35.d == 0xffffffff)
                                    label_142324021:
                                        rcx_35.b = 0
                                    else
                                        while (true)
                                            int32_t rdx_30 = *(r10_3 + (rcx_35 << 2))
                                            int32_t temp13_1 = *(r9_4 + (rcx_35 << 2))
                                            
                                            if (rdx_30 != temp13_1)
                                                rcx_35.b = rdx_30 u> temp13_1
                                                break
                                            
                                            rcx_35 = zx.q(rcx_35.d - 1)
                                            
                                            if (rcx_35.d == 0xffffffff)
                                                goto label_142324021
                                else
                                    rcx_35.b = r8_4 s> r14_3
                            else
                                rcx_35.b = rax_66 s> rcx_35.d
                            
                            void* rax_88 = r11_3
                            
                            if (rcx_35.b == 0)
                                rax_88 = rsi_2
                            
                            r11_3 += 0x20
                            rsi_2 = rax_88
                        while (r11_3 u<= r15_1)
                        
                        rbp_1 = var_380_1
                        rax_65 = &rbp_1[2]
                    
                    if (rsi_2 != r15_1)
                        zmm2 = *rsi_2
                        zmm3 = *(rsi_2 + 0x10)
                        *rsi_2 = *r15_1
                        *(rsi_2 + 0x10) = *(r15_1 + 0x10)
                        *r15_1 = zmm2
                        *(r15_1 + 0x10) = zmm3
                    
                    r15_1 -= 0x20
                    var_398_1 = r15_1
                while (r15_1 u> rbp_1)
                
                goto label_142323e54
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_5 = &rbp_1[sx.q((temp1_1 - temp0_3) s>> 1) * 2]
            
            if (rcx_5 != rbp_1)
                zmm2 = *rcx_5
                zmm3 = *(rcx_5 + 0x10)
                *rcx_5 = *rbp_1
                *(rcx_5 + 0x10) = rbp_1[1]
                *rbp_1 = zmm2
                rbp_1[1] = zmm3
            
            void* rdi_2 = var_398_1
            uint128_t* rsi_1 = rbp_1
            void* var_388_1 = rdi_2 + 0x20
            uint128_t* r11_2
            
            while (true)
            label_142323a80:
                rsi_1 = &rsi_1[2]
                uint128_t* var_378_1 = rsi_1
                
                if (rsi_1 u<= rdi_2)
                    uint32_t rax_14 = *(rbp_1 + 0x18)
                    int32_t temp2_1 = *(rsi_1 + 0x18)
                    
                    if (rax_14 == temp2_1)
                        uint128_t* rcx_6 = rbp_1[1].q
                        int32_t temp5_1
                        int32_t temp6_1
                        temp5_1:temp6_1 = sx.q(rax_14 + 0x1f)
                        uint128_t* r10_1 = rbp_1
                        uint128_t* r9_1 = rsi_1
                        int32_t i_6 = (temp6_1 + (temp5_1 & 0x1f)) s>> 5
                        
                        if (rcx_6 != 0)
                            r10_1 = rcx_6
                        
                        uint128_t* rcx_7 = rsi_1[1].q
                        
                        if (rcx_7 != 0)
                            r9_1 = rcx_7
                        
                        int32_t r8_1 = 0
                        int32_t r14_1 = 0
                        
                        if (i_6 != 0)
                            uint128_t* r12_1 = r9_1
                            uint64_t i_3 = zx.q(i_6)
                            uint64_t i_1
                            
                            do
                                uint64_t rdx_3 = zx.q(*(r10_1 - r9_1 + r12_1))
                                r12_1 += 4
                                int64_t rdx_4 = rdx_3 - (zx.q(rdx_3.d) u>> 1 & 0x5555555555555555)
                                int64_t rcx_11 = (rdx_4 u>> 2 & 0x3333333333333333)
                                    + (rdx_4 & 0x3333333333333333)
                                uint64_t rdx_6 = zx.q(*(r12_1 - 4))
                                r8_1 += (((((rcx_11 u>> 4) + rcx_11) & 0xf0f0f0f0f0f0f0f)
                                    * 0x101010101010101) u>> 0x38).d
                                int64_t rdx_7 = rdx_6 - (zx.q(rdx_6.d) u>> 1 & 0x5555555555555555)
                                int64_t rcx_15 = (rdx_7 u>> 2 & 0x3333333333333333)
                                    + (rdx_7 & 0x3333333333333333)
                                r14_1 += (((((rcx_15 u>> 4) + rcx_15) & 0xf0f0f0f0f0f0f0f)
                                    * 0x101010101010101) u>> 0x38).d
                                i_1 = i_3
                                i_3 -= 1
                            while (i_1 != 1)
                            rsi_1 = var_378_1
                            rbp_1 = var_380_1
                            rdi_2 = var_398_1
                        
                        if (i_6 == 0 || r8_1 == r14_1)
                            uint64_t rcx_16 = zx.q(i_6 - 1)
                            
                            if (rcx_16.d == 0xffffffff)
                                continue
                            else
                                while (true)
                                    int32_t rdx_9 = *(r10_1 + (rcx_16 << 2))
                                    int32_t temp11_1 = *(r9_1 + (rcx_16 << 2))
                                    
                                    if (rdx_9 != temp11_1)
                                        rax_14.b = rdx_9 u> temp11_1
                                        break
                                    
                                    rcx_16 = zx.q(rcx_16.d - 1)
                                    
                                    if (rcx_16.d == 0xffffffff)
                                        goto label_142323a80
                        else
                            rax_14.b = r8_1 s> r14_1
                    else
                        rax_14.b = rax_14 s> temp2_1
                    
                    if (rax_14.b == 0)
                        continue
                
                r11_2 = var_388_1
                
                while (true)
                label_142323bf0:
                    r11_2 = &r11_2[-2]
                    var_388_1 = r11_2
                    
                    if (r11_2 u<= rbp_1)
                        break
                    
                    uint32_t rax_35 = *(r11_2 + 0x18)
                    int32_t temp7_1 = *(rbp_1 + 0x18)
                    
                    if (rax_35 == temp7_1)
                        uint128_t* rcx_17 = r11_2[1].q
                        int32_t temp8_1
                        int32_t temp9_1
                        temp8_1:temp9_1 = sx.q(rax_35 + 0x1f)
                        uint128_t* r10_2 = r11_2
                        uint128_t* r9_2 = rbp_1
                        int32_t i_7 = (temp9_1 + (temp8_1 & 0x1f)) s>> 5
                        
                        if (rcx_17 != 0)
                            r10_2 = rcx_17
                        
                        uint128_t* rcx_18 = rbp_1[1].q
                        
                        if (rcx_18 != 0)
                            r9_2 = rcx_18
                        
                        int32_t r8_2 = 0
                        int32_t r14_2 = 0
                        
                        if (i_7 != 0)
                            uint128_t* r12_2 = r9_2
                            uint64_t i_4 = zx.q(i_7)
                            uint64_t i_2
                            
                            do
                                uint64_t rdx_12 = zx.q(*(r10_2 - r9_2 + r12_2))
                                r12_2 += 4
                                int64_t rdx_13 =
                                    rdx_12 - (zx.q(rdx_12.d) u>> 1 & 0x5555555555555555)
                                int64_t rcx_22 = (rdx_13 u>> 2 & 0x3333333333333333)
                                    + (rdx_13 & 0x3333333333333333)
                                uint64_t rdx_15 = zx.q(*(r12_2 - 4))
                                r8_2 += (((((rcx_22 u>> 4) + rcx_22) & 0xf0f0f0f0f0f0f0f)
                                    * 0x101010101010101) u>> 0x38).d
                                int64_t rdx_16 =
                                    rdx_15 - (zx.q(rdx_15.d) u>> 1 & 0x5555555555555555)
                                int64_t rcx_26 = (rdx_16 u>> 2 & 0x3333333333333333)
                                    + (rdx_16 & 0x3333333333333333)
                                r14_2 += (((((rcx_26 u>> 4) + rcx_26) & 0xf0f0f0f0f0f0f0f)
                                    * 0x101010101010101) u>> 0x38).d
                                i_2 = i_4
                                i_4 -= 1
                            while (i_2 != 1)
                            r11_2 = var_388_1
                            rbp_1 = var_380_1
                        
                        if (i_7 == 0 || r8_2 == r14_2)
                            uint64_t rcx_27 = zx.q(i_7 - 1)
                            
                            if (rcx_27.d == 0xffffffff)
                                continue
                            else
                                while (true)
                                    int32_t rdx_18 = *(r10_2 + (rcx_27 << 2))
                                    int32_t temp15_1 = *(r9_2 + (rcx_27 << 2))
                                    
                                    if (rdx_18 != temp15_1)
                                        rax_35.b = rdx_18 u> temp15_1
                                        break
                                    
                                    rcx_27 = zx.q(rcx_27.d - 1)
                                    
                                    if (rcx_27.d == 0xffffffff)
                                        goto label_142323bf0
                        else
                            rax_35.b = r8_2 s> r14_2
                    else
                        rax_35.b = rax_35 s> temp7_1
                    
                    if (rax_35.b != 0)
                        break
                
                rsi_1 = var_378_1
                rdi_2 = var_398_1
                
                if (rsi_1 u> r11_2)
                    break
                
                if (rsi_1 != r11_2)
                    zmm2 = *rsi_1
                    zmm3 = rsi_1[1]
                    *rsi_1 = *r11_2
                    rsi_1[1] = r11_2[1]
                    *r11_2 = zmm2
                    r11_2[1] = zmm3
            
            if (rbp_1 != r11_2)
                zmm2 = *rbp_1
                zmm3 = rbp_1[1]
                *rbp_1 = *r11_2
                rbp_1[1] = r11_2[1]
                *r11_2 = zmm2
                r11_2[1] = zmm3
            
            r15_1 = var_398_1
            r8 = var_3a0_1
            uint32_t rdx_20 = var_390_1 - 1
            var_390_1 = rdx_20
            
            if (((r11_2 - rbp_1 - 0x20) & 0xffffffffffffffe0)
                    s< ((r15_1 - rsi_1) & 0xffffffffffffffe0))
                if (r15_1 u> rsi_1)
                    *r8 = rsi_1
                    r8[1] = r15_1
                    r8[2].d = rdx_20
                    r8 = &r8[3]
                    var_3a0_1 = r8
                
                if (&rbp_1[2] u>= r11_2)
                    break
                
                r15_1 = &r11_2[-2]
                var_398_1 = r15_1
            else
                if (&rbp_1[2] u< r11_2)
                    *r8 = rbp_1
                    r8[1] = &r11_2[-2]
                    r8[2].d = rdx_20
                    r8 = &r8[3]
                    var_3a0_1 = r8
                
                if (r15_1 u<= rsi_1)
                    break
                
                rbp_1 = rsi_1
                var_380_1 = rsi_1
            
            r8 = var_3a0_1
            rax_10 = ((r15_1 - rbp_1) s>> 5).d + 1
            
            if (rdx_20 == 0)
                goto label_142323e4f
    
    r8 -= 0x18
    var_3a0_1 = r8
    
    if (r8 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_3c8)
