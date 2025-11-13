// 函数: sub_14266f780
// 地址: 0x14266f780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s< 2)
    return 

void var_3a8
int64_t rax_2 = __security_cookie ^ &var_3a8
void* rsi
void* var_18_1 = rsi
int64_t var_348 = arg1
int64_t r9
int64_t var_368_1 = r9
int64_t var_340_1 = (sx.q(arg2) << 5) + arg1 - 0x20
float zmm0_1 = logf(_mm_cvtepi32_ps(zx.o(arg2)).d)
int32_t var_338_1 = (int.q(zmm0_1 + zmm0_1)).d
void var_330
memset(&var_330, 0, 0x2e8)
int64_t* r8 = &var_348
int64_t* var_388_1 = &var_348

while (true)
    uint128_t zmm2 = *r8
    uint128_t* r15_1 = zmm2.q
    uint32_t var_350_1 = (r8[2]).d
    void* rbp_1 = _mm_bsrli_si128(zmm2, 8).q
    int64_t* var_378_1 = r15_1
    void* var_380_1 = rbp_1
    uint32_t var_370_1 = var_350_1
    int32_t rax_10 = ((rbp_1 - r15_1) s>> 5).d + 1
    
    if (var_350_1 == 0)
    label_14266fbbd:
        sub_14266ef50(r15_1, rax_10)
    label_14266fbc2:
        r8 = var_388_1
    else
        while (true)
            uint128_t zmm0_2
            uint128_t zmm1
            int128_t zmm3
            
            if (rax_10 s<= 8)
                if (rbp_1 u<= r15_1)
                    break
                
                void* rax_35 = &r15_1[2]
                
                do
                    void* r12_2 = r15_1
                    rsi = rax_35
                    
                    if (rax_35 u<= rbp_1)
                        do
                            int32_t rax_36 = *(r12_2 + 8)
                            
                            if (rax_36 == 0 || *(rsi + 8) == 0)
                                rbp_1.b = rax_36 s<= *(rsi + 8)
                            else
                                void* rax_37 = *r12_2
                                void* r13_3 = *rsi
                                void* rax_38 = sub_140d3c6e0(rax_37 + 0x14)
                                rbp_1 = rax_38
                                
                                if (rax_38 == 0)
                                    rbp_1 = nullptr
                                else
                                    void* rax_39 = sub_1425492f0()
                                    
                                    if (rax_39 == 0)
                                        rbp_1 = nullptr
                                    else
                                        int64_t rax_40 = sx.q(*(rax_39 + 0x38))
                                        
                                        if (rax_40.d s> *(rbp_1 + 0x38)
                                                || *(*(rbp_1 + 0x30) + (rax_40 << 3))
                                                != rax_39 + 0x30)
                                            rbp_1 = nullptr
                                
                                rbp_1.b = rbp_1 != 0
                                int64_t rax_42 = sub_140d3c6e0(r13_3 + 0x14)
                                void* const r14_2 = rax_42
                                
                                if (rax_42 == 0)
                                    r14_2 = nullptr
                                else
                                    rax_42 = sub_1425492f0()
                                    
                                    if (rax_42 == 0)
                                        r14_2 = nullptr
                                    else
                                        int64_t rdx_9 = rax_42 + 0x30
                                        rax_42 = sx.q(*(rax_42 + 0x38))
                                        
                                        if (rax_42.d s> *(r14_2 + 0x38))
                                            r14_2 = nullptr
                                        else if (*(*(r14_2 + 0x30) + (rax_42 << 3)) != rdx_9)
                                            r14_2 = nullptr
                                
                                rax_42.b = r14_2 != 0
                                
                                if (rbp_1.b == rax_42.b)
                                    zmm1 = *(r13_3 + 4)
                                    zmm0_2 = *(rax_37 + 4)
                                    
                                    if (zmm0_2.d f== zmm1.d)
                                        zmm0_2 = *(rax_37 + 8)
                                        float temp2_1 = *(r13_3 + 8)
                                        zmm0_2.d f- temp2_1
                                        rbp_1.b = zmm0_2.d f< temp2_1
                                    else
                                        rbp_1.b = zmm1.d f> zmm0_2.d
                            
                            bool cond:2_1 = rbp_1.b == 0
                            void* rax_44 = rsi
                            rbp_1 = var_380_1
                            
                            if (cond:2_1)
                                rax_44 = r12_2
                            
                            rsi += 0x20
                            r12_2 = rax_44
                        while (rsi u<= rbp_1)
                        
                        rax_35 = &r15_1[2]
                    
                    if (r12_2 != rbp_1)
                        zmm2 = *r12_2
                        zmm3 = *(r12_2 + 0x10)
                        *r12_2 = *rbp_1
                        *(r12_2 + 0x10) = *(rbp_1 + 0x10)
                        *rbp_1 = zmm2
                        *(rbp_1 + 0x10) = zmm3
                    
                    rbp_1 -= 0x20
                    var_380_1 = rbp_1
                while (rbp_1 u> r15_1)
                
                goto label_14266fbc2
            
            int32_t temp0_3
            int32_t temp1_1
            temp0_3:temp1_1 = sx.q(rax_10)
            void* rcx_5 = &r15_1[sx.q((temp1_1 - temp0_3) s>> 1) * 2]
            
            if (rcx_5 != r15_1)
                zmm2 = *rcx_5
                zmm3 = *(rcx_5 + 0x10)
                *rcx_5 = *r15_1
                *(rcx_5 + 0x10) = r15_1[1]
                *r15_1 = zmm2
                r15_1[1] = zmm3
            
            uint128_t* r12_1 = rbp_1 + 0x20
            int64_t* r14_1 = var_378_1
            
            while (true)
                r14_1 = &r14_1[4]
                
                if (r14_1 u<= rbp_1)
                    int32_t rax_14 = var_378_1[1].d
                    
                    if (rax_14 == 0 || r14_1[1].d == 0)
                        rsi.b = rax_14 s<= r14_1[1].d
                    else
                        void* r13_1 = *var_378_1
                        void* r15_2 = *r14_1
                        void* rax_15 = sub_140d3c6e0(r13_1 + 0x14)
                        rsi = rax_15
                        
                        if (rax_15 == 0)
                            rsi = nullptr
                        else
                            void* rax_16 = sub_1425492f0()
                            
                            if (rax_16 == 0)
                                rsi = nullptr
                            else
                                int64_t rax_17 = sx.q(*(rax_16 + 0x38))
                                
                                if (rax_17.d s> *(rsi + 0x38)
                                        || *(*(rsi + 0x30) + (rax_17 << 3)) != rax_16 + 0x30)
                                    rsi = nullptr
                        
                        rsi.b = rsi != 0
                        int64_t rax_19 = sub_140d3c6e0(r15_2 + 0x14)
                        int64_t rbp_2 = rax_19
                        
                        if (rax_19 == 0)
                            rbp_2 = nullptr
                        else
                            rax_19 = sub_1425492f0()
                            
                            if (rax_19 == 0)
                                rbp_2 = nullptr
                            else
                                int64_t rdx_2 = rax_19 + 0x30
                                rax_19 = sx.q(*(rax_19 + 0x38))
                                
                                if (rax_19.d s> *(rbp_2 + 0x38))
                                    rbp_2 = nullptr
                                else if (*(*(rbp_2 + 0x30) + (rax_19 << 3)) != rdx_2)
                                    rbp_2 = nullptr
                        
                        rbp_1 = var_380_1
                        rax_19.b = rbp_2 != 0
                        
                        if (rsi.b == rax_19.b)
                            zmm0_2 = *(r13_1 + 4)
                            zmm1 = *(r15_2 + 4)
                            
                            if (zmm0_2.d f== zmm1.d)
                                zmm0_2 = *(r13_1 + 8)
                                float temp3_1 = *(r15_2 + 8)
                                zmm0_2.d f- temp3_1
                                rsi.b = zmm0_2.d f< temp3_1
                            else
                                rsi.b = zmm1.d f> zmm0_2.d
                    
                    if (rsi.b == 0)
                        continue
                
                do
                    r12_1 -= 0x20
                    
                    if (r12_1 u<= var_378_1)
                        break
                    
                    int32_t rax_20 = *(r12_1 + 8)
                    
                    if (rax_20 == 0 || var_378_1[1].d == 0)
                        rsi.b = rax_20 s<= var_378_1[1].d
                    else
                        void* r13_2 = *r12_1
                        void* r15_3 = *var_378_1
                        void* rax_21 = sub_140d3c6e0(r13_2 + 0x14)
                        rsi = rax_21
                        
                        if (rax_21 == 0)
                            rsi = nullptr
                        else
                            void* rax_22 = sub_1425492f0()
                            
                            if (rax_22 == 0)
                                rsi = nullptr
                            else
                                int64_t rax_23 = sx.q(*(rax_22 + 0x38))
                                
                                if (rax_23.d s> *(rsi + 0x38)
                                        || *(*(rsi + 0x30) + (rax_23 << 3)) != rax_22 + 0x30)
                                    rsi = nullptr
                        
                        rsi.b = rsi != 0
                        int64_t rax_25 = sub_140d3c6e0(r15_3 + 0x14)
                        void* const rbp_3 = rax_25
                        
                        if (rax_25 == 0)
                            rbp_3 = nullptr
                        else
                            rax_25 = sub_1425492f0()
                            
                            if (rax_25 == 0)
                                rbp_3 = nullptr
                            else
                                int64_t rdx_4 = rax_25 + 0x30
                                rax_25 = sx.q(*(rax_25 + 0x38))
                                
                                if (rax_25.d s> *(rbp_3 + 0x38))
                                    rbp_3 = nullptr
                                else if (*(*(rbp_3 + 0x30) + (rax_25 << 3)) != rdx_4)
                                    rbp_3 = nullptr
                        
                        rax_25.b = rbp_3 != 0
                        
                        if (rsi.b == rax_25.b)
                            zmm0_2 = *(r13_2 + 4)
                            zmm1 = *(r15_3 + 4)
                            
                            if (zmm0_2.d f== zmm1.d)
                                zmm0_2 = *(r13_2 + 8)
                                float temp4_1 = *(r15_3 + 8)
                                zmm0_2.d f- temp4_1
                                rsi.b = zmm0_2.d f< temp4_1
                            else
                                rsi.b = zmm1.d f> zmm0_2.d
                while (rsi.b == 0)
                
                if (r14_1 u> r12_1)
                    break
                
                rbp_1 = var_380_1
                
                if (r14_1 != r12_1)
                    zmm2 = *r14_1
                    zmm3 = *(r14_1 + 0x10)
                    *r14_1 = *r12_1
                    *(r14_1 + 0x10) = r12_1[1]
                    *r12_1 = zmm2
                    r12_1[1] = zmm3
            
            r15_1 = var_378_1
            
            if (var_378_1 != r12_1)
                zmm2 = *r15_1
                zmm3 = r15_1[1]
                *r15_1 = *r12_1
                r15_1[1] = r12_1[1]
                *r12_1 = zmm2
                r12_1[1] = zmm3
            
            rbp_1 = var_380_1
            r8 = var_388_1
            uint32_t rdx_6 = var_370_1 - 1
            var_370_1 = rdx_6
            
            if (((r12_1 - r15_1 - 0x20) & 0xffffffffffffffe0)
                    s< ((rbp_1 - r14_1) & 0xffffffffffffffe0))
                if (rbp_1 u> r14_1)
                    *r8 = r14_1
                    r8[1] = rbp_1
                    r8[2].d = rdx_6
                    r8 = &r8[3]
                    var_388_1 = r8
                
                if (&r15_1[2] u>= r12_1)
                    break
                
                rbp_1 = &r12_1[-2]
                var_380_1 = rbp_1
            else
                if (&r15_1[2] u< r12_1)
                    *r8 = r15_1
                    r8[1] = &r12_1[-2]
                    r8[2].d = rdx_6
                    r8 = &r8[3]
                    var_388_1 = r8
                
                if (rbp_1 u<= r14_1)
                    break
                
                r15_1 = r14_1
                var_378_1 = r14_1
            
            r8 = var_388_1
            rax_10 = ((rbp_1 - r15_1) s>> 5).d + 1
            
            if (rdx_6 == 0)
                goto label_14266fbbd
    
    r8 -= 0x18
    var_388_1 = r8
    
    if (r8 u< &var_348)
        break

__security_check_cookie(rax_2 ^ &var_3a8)
