// 函数: sub_141ec5940
// 地址: 0x141ec5940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_328
int64_t rax_1 = __security_cookie ^ &var_328
bool cond:0 = *(arg1 + 0x3c) == 0
int64_t* r14 = arg2
*(arg1 + 0x38) = 0

if (not(cond:0))
    sub_140638cc0(arg1 + 0x30, 0)

int128_t zmm14 = zx.o(0)
uint128_t i_2
uint128_t i_7 = i_2
uint128_t i_3
uint128_t i_6 = i_3
float i_4[0x4]
float i_5[0x4] = i_4
uint128_t i_16
uint128_t i_24 = i_16
*(arg1 + 0x5c) = data_143dbb1f8.q
int32_t* result = zx.q(data_143dbb200)
uint128_t i_17
uint128_t i_23 = i_17
uint128_t i_18
uint128_t i_22 = i_18
*(arg1 + 0x64) = result.d
*(arg1 + 0x50) = *(arg1 + 0x5c)
uint128_t i_19
uint128_t i_21 = i_19
*(arg1 + 0x58) = result.d
*(arg1 + 0x68) = 0
float i_11[0x4]
float i_15[0x4] = i_11
int128_t zmm15
int128_t var_d8 = zmm15
float i_1 = 0f

if (r14[1].d s<= 0)
labelid_1:
    result.b = 0
else
    i_19 = 0x80000000
    int64_t r12_1 = 0
    int32_t* r15_1 = nullptr
    int64_t var_2c0_1 = 0
    int32_t* var_2b8_1 = nullptr
    uint128_t i_8
    uint128_t i_9
    uint128_t i_10
    uint128_t zmm3_1
    uint128_t zmm4_1
    float zmm5_1[0x4]
    float i
    
    do
        void var_248
        sub_142287aa0(&var_248)
        int64_t rax_2 = *r14
        uint64_t var_23c = *(r15_1 + rax_2)
        int32_t var_234_1 = *(r15_1 + rax_2 + 8)
        int32_t var_300
        int32_t i_14
        i_4 = sub_140ad6430(&var_23c, &var_300, &i_14)
        int64_t rax_4 = *r14
        int32_t result_1
        int64_t result_4 = sx.q(result_1)
        i_3 = *(r15_1 + rax_4 + 0xc)
        i_17.d = i_3.d f* *(r15_1 + rax_4)
        i_16.d = i_3.d f* *(r15_1 + rax_4 + 4)
        i_3.d = i_3.d f* *(r15_1 + rax_4 + 8)
        int32_t rax_5 = (result_4 + 1).d
        void var_218
        int32_t var_14c
        
        if (rax_5 s> var_14c)
            sub_141eca250(&var_218, result_4.d)
        
        void* rdx_2 = &var_218
        void* var_158
        
        if (var_158 != 0)
            rdx_2 = var_158
        
        void* rax_6 = rdx_2 + result_4 * 0xc
        int32_t var_2fc
        int32_t var_2f8
        int32_t var_2ec
        int32_t var_2e8
        
        if (rax_6 != 0)
            zmm5_1 = var_2e8
            i_9.d = var_300.d f* i_4[0]
            i_8.d = i_14.d f* i_4[0]
            i_9.d = i_9.d f+ i_17.d
            i_10.d = var_2fc.d f* i_4[0]
            zmm3_1.d = var_2f8.d f* i_4[0]
            zmm4_1.d = var_2ec.d f* i_4[0]
            i_9.d = i_9.d f+ i_8.d
            zmm5_1[0] = zmm5_1[0] * i_4[0]
            i_8.d = i_3.d f+ zmm3_1.d
            *rax_6 = i_9.d
            i_9.d = i_16.d f+ i_10.d
            i_8.d = i_8.d f+ zmm5_1[0]
            i_9.d = i_9.d f+ zmm4_1.d
            *(rax_6 + 8) = i_8.d
            *(rax_6 + 4) = i_9.d
        
        int64_t rbx_1 = sx.q(rax_5)
        int32_t rax_7 = (rbx_1 + 1).d
        
        if (rax_7 s> var_14c)
            sub_141eca250(&var_218, rbx_1.d)
        
        void* rdx_4 = &var_218
        
        if (var_158 != 0)
            rdx_4 = var_158
        
        void* rax_8 = rdx_4 + rbx_1 * 0xc
        
        if (rax_8 != 0)
            zmm5_1 = var_2ec
            i_8.d = var_300.d f* i_4[0]
            i_9.d = i_14.d f* i_4[0]
            i_10.d = i_17.d f- i_8.d
            zmm3_1.d = var_2fc.d f* i_4[0]
            zmm4_1.d = var_2f8.d f* i_4[0]
            i_8.d = i_16.d f- zmm3_1.d
            zmm5_1[0] = zmm5_1[0] * i_4[0]
            i_10.d = i_10.d f+ i_9.d
            i_2.d = var_2e8.d f* i_4[0]
            i_9.d = i_3.d f- zmm4_1.d
            i_8.d = i_8.d f+ zmm5_1[0]
            *rax_8 = i_10.d
            i_9.d = i_9.d f+ i_2.d
            *(rax_8 + 4) = i_8.d
            *(rax_8 + 8) = i_9.d
        
        int64_t rbx_2 = sx.q(rax_7)
        int32_t rax_9 = (rbx_2 + 1).d
        
        if (rax_9 s> var_14c)
            sub_141eca250(&var_218, rbx_2.d)
        
        void* rdx_6 = &var_218
        
        if (var_158 != 0)
            rdx_6 = var_158
        
        void* rax_10 = rdx_6 + rbx_2 * 0xc
        
        if (rax_10 != 0)
            zmm5_1 = var_2ec
            i_8.d = var_300.d f* i_4[0]
            i_9.d = i_14.d f* i_4[0]
            i_10.d = i_17.d f- i_8.d
            zmm3_1.d = var_2fc.d f* i_4[0]
            zmm4_1.d = var_2f8.d f* i_4[0]
            i_8.d = i_16.d f- zmm3_1.d
            zmm5_1[0] = zmm5_1[0] * i_4[0]
            i_10.d = i_10.d f- i_9.d
            i_2.d = var_2e8.d f* i_4[0]
            i_9.d = i_3.d f- zmm4_1.d
            i_8.d = i_8.d f- zmm5_1[0]
            *rax_10 = i_10.d
            i_9.d = i_9.d f- i_2.d
            *(rax_10 + 4) = i_8.d
            *(rax_10 + 8) = i_9.d
        
        int64_t rbx_3 = sx.q(rax_9)
        int32_t result_2 = (rbx_3 + 1).d
        result_1 = result_2
        
        if (result_2 s> var_14c)
            sub_141eca250(&var_218, rbx_3.d)
        
        void* rdx_8 = &var_218
        
        if (var_158 != 0)
            rdx_8 = var_158
        
        void* rax_11 = rdx_8 + rbx_3 * 0xc
        
        if (rax_11 != 0)
            zmm5_1 = var_2e8
            i_8 = i_14
            i_9.d = var_300.d f* i_4[0]
            i_10.d = var_2fc.d f* i_4[0]
            zmm3_1.d = var_2f8.d f* i_4[0]
            i_9.d = i_9.d f+ i_17.d
            i_16.d = i_16.d f+ i_10.d
            zmm4_1.d = var_2ec.d f* i_4[0]
            i_3.d = i_3.d f+ zmm3_1.d
            zmm5_1[0] = zmm5_1[0] * i_4[0]
            i_8.d = i_8.d f* i_4[0]
            i_16.d = i_16.d f- zmm4_1.d
            i_3.d = i_3.d f- zmm5_1[0]
            i_9.d = i_9.d f- i_8.d
            *(rax_11 + 4) = i_16.d
            *(rax_11 + 8) = i_3.d
            *rax_11 = i_9.d
        
        int32_t rsi_1 = 0
        int64_t rdi_1 = 0
        
        if (r14[1].d s<= 0)
            goto label_141ec5e70
        
        int64_t rbx_4 = 0
        
        while (true)
            if (r12_1 != rdi_1)
                int32_t* rcx_15 = *r14
                zmm3_1 = *(rcx_15 + rbx_4 + 0xc)
                zmm4_1 = zx.o(*(rcx_15 + rbx_4))
                i_8.d = zmm3_1.d f* *(rcx_15 + rbx_4)
                int32_t rax_12 = *(rcx_15 + rbx_4 + 8)
                i_9.d = zmm3_1.d f* *(rcx_15 + rbx_4 + 4)
                i_10.d = zmm3_1.d f* *(rcx_15 + rbx_4 + 8)
                int32_t var_298 = i_8.d
                int32_t var_294_1 = i_9.d
                int32_t var_2b0 = (zmm4_1 ^ i_19).d
                zmm3_1.d = zmm3_1.d f* zmm3_1.d
                int32_t var_2a8_1 = (rax_12 ^ i_19).d
                int32_t var_290_1 = i_10.d
                int32_t var_28c_1 = zmm3_1.d
                int32_t var_2ac_1 = (_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55) ^ i_19).d
                result, i_19 = sub_1422ad8b0(&var_248, &var_2b0, &var_298)
                
                if (result.d == 0)
                    break
            
            rsi_1 += 1
            rdi_1 += 1
            rbx_4 += 0x10
            
            if (rsi_1 s>= r14[1].d)
                goto label_141ec5e70
        
        result_1 = 0
        
        if (var_14c != 0)
            sub_141eca490(&var_218, 0)
        label_141ec5e70:
            result = zx.q(result_1)
            
            if (result.d s> 0)
                int32_t* rdi_2 = nullptr
                int32_t var_280_1 = result.d
                int32_t* var_2c8_1 = nullptr
                int32_t* var_288 = nullptr
                int32_t var_27c_1 = 0
                
                if (result.d s> 0)
                    sub_1405a4cf0(&var_288)
                    rdi_2 = var_288
                    var_2c8_1 = rdi_2
                
                int64_t zmm0
                zmm0, i_18, i_19, i_11, zmm14 = sub_1422903d0(&var_248)
                int32_t result_3 = result_1
                zmm14.d = zmm14.d f+ zmm0.d
                int32_t r12_2 = 0
                
                if (result_3 s> 0)
                    int64_t rbx_5 = 0
                    int32_t* r15_2 = rdi_2
                    
                    do
                        int32_t r10_1 = arg3[1].d
                        uint32_t rdi_3 = 0
                        int64_t r8_2 = 0
                        int64_t r9_1 = -1
                        i_3 = i_11
                        float zmm1_1
                        uint128_t zmm4_2
                        uint128_t zmm5_2
                        
                        if (r10_1 s>= 4)
                            int64_t rsi_2 = *arg3
                            void* rax_13 = &var_218
                            
                            if (var_158 != 0)
                                rax_13 = var_158
                            
                            i_16 = *(rax_13 + rbx_5)
                            i_17 = *(rax_13 + rbx_5 + 4)
                            i_18 = *(rax_13 + rbx_5 + 8)
                            uint64_t rax_16 = zx.q(((r10_1 - 4) u>> 2) + 1)
                            uint64_t j_4 = zx.q(rax_16.d)
                            rdi_3 = (rax_16 << 2).d
                            uint64_t j
                            
                            do
                                int64_t rax_17 = r8_2 * 3
                                i_2.d = i_16.d f- *(rsi_2 + (rax_17 << 2))
                                int64_t rdx_11 = r8_2 + 2
                                zmm0.d = i_17.q.d f- *(rsi_2 + (rax_17 << 2) + 4)
                                zmm1_1 = i_18.d f- *(rsi_2 + (rax_17 << 2) + 8)
                                i_2.d = i_2.d f* i_2.d
                                int64_t rcx_20 = r8_2
                                zmm0.d = zmm0.d f* zmm0.d
                                zmm3_1.d = i_16.d f- *(rsi_2 + (rax_17 << 2) + 0xc)
                                i_2.d = i_2.d f+ zmm0.d
                                zmm0.d = i_17.q.d f- *(rsi_2 + (rax_17 << 2) + 0x10)
                                zmm3_1.d = zmm3_1.d f* zmm3_1.d
                                i_2.d = i_2.d f+ zmm1_1 * zmm1_1
                                zmm1_1 = i_18.d f- *(rsi_2 + (rax_17 << 2) + 0x14)
                                zmm0.d = zmm0.d f* zmm0.d
                                int64_t rax_18 = rdx_11 * 3
                                zmm5_2.d = i_16.d f- *(rsi_2 + (rax_18 << 2))
                                zmm3_1.d = zmm3_1.d f+ zmm0.d
                                zmm5_2.d = zmm5_2.d f* zmm5_2.d
                                
                                if (i_3.d f<= i_2.d)
                                    rcx_20 = r9_1
                                
                                r9_1 = r8_2 + 3
                                zmm0.d = i_17.q.d f- *(rsi_2 + (rax_18 << 2) + 4)
                                zmm3_1.d = zmm3_1.d f+ zmm1_1 * zmm1_1
                                zmm4_2 = _mm_min_ss(i_2.d, i_3.d)
                                zmm1_1 = i_18.d f- *(rsi_2 + (rax_18 << 2) + 8)
                                int64_t rax_19 = r8_2 + 1
                                zmm0.d = zmm0.d f* zmm0.d
                                zmm5_2.d = zmm5_2.d f+ zmm0.d
                                i_10 = _mm_min_ss(zmm4_2.d, zmm3_1.d)
                                
                                if (zmm4_2.d f<= zmm3_1.d)
                                    rax_19 = rcx_20
                                
                                zmm5_2.d = zmm5_2.d f+ zmm1_1 * zmm1_1
                                bool cond:6_1 = i_10.d f<= zmm5_2.d
                                zmm5_2 = _mm_min_ss(zmm5_2.d, i_10.d)
                                
                                if (cond:6_1)
                                    rdx_11 = rax_19
                                
                                int64_t rax_20 = r9_1 * 3
                                i_10.d = i_16.d f- *(rsi_2 + (rax_20 << 2))
                                zmm0.d = i_17.q.d f- *(rsi_2 + (rax_20 << 2) + 4)
                                zmm1_1 = i_18.d f- *(rsi_2 + (rax_20 << 2) + 8)
                                i_10.d = i_10.d f* i_10.d
                                zmm0.d = zmm0.d f* zmm0.d
                                i_10.d = i_10.d f+ zmm0.d
                                i_10.d = i_10.d f+ zmm1_1 * zmm1_1
                                i_3 = _mm_min_ss(zmm5_2.d, i_10.d)
                                
                                if (zmm5_2.d f<= i_10.d)
                                    r9_1 = rdx_11
                                
                                r8_2 += 4
                                j = j_4
                                j_4 -= 1
                            while (j != 1)
                            i_18 = 0x322bcc77
                        
                        if (rdi_3 s< r10_1)
                            int64_t rcx_21 = *arg3
                            void* rax_21 = &var_218
                            
                            if (var_158 != 0)
                                rax_21 = var_158
                            
                            uint64_t j_3 = zx.q(r10_1 - rdi_3)
                            zmm3_1 = *(rax_21 + rbx_5)
                            zmm4_2 = *(rax_21 + rbx_5 + 4)
                            zmm5_2 = *(rax_21 + rbx_5 + 8)
                            uint64_t j_1
                            
                            do
                                int64_t rax_22 = r8_2 * 3
                                i_10.d = zmm3_1.d f- *(rcx_21 + (rax_22 << 2))
                                zmm0.d = zmm4_2.q.d f- *(rcx_21 + (rax_22 << 2) + 4)
                                zmm1_1 = zmm5_2.d f- *(rcx_21 + (rax_22 << 2) + 8)
                                int64_t rax_23 = r8_2
                                i_10.d = i_10.d f* i_10.d
                                zmm0.d = zmm0.d f* zmm0.d
                                i_10.d = i_10.d f+ zmm0.d
                                i_10.d = i_10.d f+ zmm1_1 * zmm1_1
                                bool cond:9_1 = i_3.d f<= i_10.d
                                i_10 = _mm_min_ss(i_10.d, i_3.d)
                                
                                if (cond:9_1)
                                    rax_23 = r9_1
                                
                                r8_2 += 1
                                r9_1 = rax_23
                                i_3 = i_10
                                j_1 = j_3
                                j_3 -= 1
                            while (j_1 != 1)
                        
                        int32_t* rdx_12
                        
                        if (r9_1 == -1 || i_3.d f>= i_18.d)
                            void* rax_26 = &var_218
                            int64_t var_2d8
                            rdx_12 = &var_2d8
                            
                            if (var_158 != 0)
                                rax_26 = var_158
                            
                            int32_t rax_27 = *(rax_26 + rbx_5 + 8)
                            var_2d8 = *(rax_26 + rbx_5)
                            int32_t var_2d0_1 = rax_27
                        else
                            int64_t rax_24 = *arg3
                            int64_t rcx_22 = r9_1 * 3
                            int64_t var_260
                            rdx_12 = &var_260
                            int32_t rax_25 = *(rax_24 + (rcx_22 << 2) + 8)
                            var_260 = *(rax_24 + (rcx_22 << 2))
                            int32_t var_258_1 = rax_25
                        
                        *r15_2 = sub_141eb9250(arg1 + 0x30, rdx_12)
                        r12_2 += 1
                        result_3 = result_1
                        r15_2 = &r15_2[1]
                        rbx_5 += 0xc
                    while (r12_2 s< result_3)
                
                int64_t j_5 = sx.q(result_3 - 2)
                int32_t r15_3 = *var_2c8_1
                
                if (result_3 - 2 s> 0)
                    void* rdi_4 = &var_2c8_1[2]
                    int64_t j_2
                    
                    do
                        int64_t rsi_3 = sx.q(*(arg1 + 0x48))
                        int32_t rax_30 = (rsi_3 + 1).d
                        *(arg1 + 0x48) = rax_30
                        
                        if (rax_30 s> *(arg1 + 0x4c))
                            sub_1405a4cf0(arg1 + 0x40)
                        
                        *(*(arg1 + 0x40) + (rsi_3 << 2)) = r15_3
                        int64_t rsi_4 = sx.q(*(arg1 + 0x48))
                        int32_t rax_32 = (rsi_4 + 1).d
                        *(arg1 + 0x48) = rax_32
                        
                        if (rax_32 s> *(arg1 + 0x4c))
                            sub_1405a4cf0(arg1 + 0x40)
                        
                        *(*(arg1 + 0x40) + (rsi_4 << 2)) = *(rdi_4 - 4)
                        int64_t rsi_5 = sx.q(*(arg1 + 0x48))
                        int32_t rax_34 = (rsi_5 + 1).d
                        *(arg1 + 0x48) = rax_34
                        
                        if (rax_34 s> *(arg1 + 0x4c))
                            sub_1405a4cf0(arg1 + 0x40)
                        
                        int32_t rax_35 = *rdi_4
                        rdi_4 += 4
                        *(*(arg1 + 0x40) + (rsi_5 << 2)) = rax_35
                        j_2 = j_5
                        j_5 -= 1
                    while (j_2 != 1)
                
                sub_140a74f90(var_2c8_1)
                r14 = arg2
                r15_1 = var_2b8_1
                r12_1 = var_2c0_1
        
        if (var_158 != 0)
            sub_140a74f90(var_158)
        
        r12_1 += 1
        i = i_1 i+ 1
        var_2c0_1 = r12_1
        r15_1 = &r15_1[4]
        i_1 = i
        var_2b8_1 = r15_1
    while (i s< r14[1].d)
    
    if (zmm14.d f< 0.00100000005f)
    labelid_1:
        result.b = 0
    else
        int64_t r11_2 = sx.q(*(arg1 + 0x38))
        
        if (r11_2.d s< 4)
        labelid_1:
            result.b = 0
        else
            int64_t* rcx_32 = *(arg1 + 0x30)
            result.b = 0
            zmm5_1 = 0x322bcc77
            i_11 = *(rcx_32 + 0x14)
            i_16 = *rcx_32
            i_17 = *(rcx_32 + 4)
            i_18.d = (*(rcx_32 + 0xc)).d f- i_16.d
            zmm14 = rcx_32[1].d
            i_19.d = rcx_32[2].d.d f- i_17.d
            i_11[0] = i_11[0] f- zmm14.d
            i_8.d = i_18.d f* i_18.d
            i_10.d = i_19.d f* i_19.d
            i_9.d = i_11.d f* i_11[0]
            i_10.d = i_10.d f+ i_8.d
            i_10.d = i_10.d f+ i_9.d
            
            if (not(i_10.d f<= 9.99999994e-09f))
                float i_20[0x4] = _mm_rsqrt_ss(i_10[0], i_10.d)
                zmm3_1.d = i_10.d f* 0.5f
                i_8.d = i_20.d f* i_20[0]
                i_9.d = zmm3_1.d f* i_8.d
                i_10.d = 0.5f f- i_9.d
                i_8.d = i_20.d f* i_10.d
                i_20[0] = i_20[0] f+ i_8.d
                i_9.d = i_20.d f* i_20[0]
                zmm3_1.d = zmm3_1.d f* i_9.d
                zmm4_1.d = 0.5f f- zmm3_1.d
                i_8.d = i_20.d f* zmm4_1.d
                i_20[0] = i_20[0] f+ i_8.d
                i_1 = i_20[0]
                i_8.d = i_20.d f* i_18.d
                i_20[0] = i_20[0] * i_11[0]
                i_9.d = i_20.d f* i_19.d
                i_18 = i_8
                i_11 = i_20
                zmm5_1 = 0x322bcc77
                i_19 = i_9
            
            if (r11_2.d s<= 2)
            label_141ec6602:
                result.b = 0
            else
                i_3 = i_1
                void* rdx_16 = &rcx_32[4]
                i_2 = i_1
                int64_t r8_3 = 2
                i_4 = i_1
                int64_t r9_2 = 2
                
                do
                    if (result.b != 0)
                        goto label_141ec64a6
                    
                    i_3.d = (*(rdx_16 - 8)).d f- i_16.d
                    i_4 = *rdx_16
                    i_2.d = (*(rdx_16 - 4)).d f- i_17.d
                    i_4[0] = i_4[0] f- zmm14.d
                    i_8.d = i_3.d f* i_3.d
                    i_10.d = i_2.d f* i_2.d
                    i_9.d = i_4.d f* i_4[0]
                    i_10.d = i_10.d f+ i_8.d
                    i_10.d = i_10.d f+ i_9.d
                    
                    if (not(i_10.d f<= zmm5_1[0]))
                        zmm4_1.d = 0x3f000000
                        float i_12[0x4] = _mm_rsqrt_ss(i_10[0], i_10.d)
                        zmm3_1.d = i_10.d f* 0.5f
                        i_8.d = i_12.d f* i_12[0]
                        i_9.d = zmm3_1.d f* i_8.d
                        i_10.d = zmm4_1.d f- i_9.d
                        i_8.d = i_12.d f* i_10.d
                        i_12[0] = i_12[0] f+ i_8.d
                        i_9.d = i_12.d f* i_12[0]
                        zmm3_1.d = zmm3_1.d f* i_9.d
                        zmm4_1.d = 0.5f f- zmm3_1.d
                        i_8.d = i_12.d f* zmm4_1.d
                        i_12[0] = i_12[0] f+ i_8.d
                        i_12[0] = i_12[0] * i_4[0]
                        i_8.d = i_12.d f* i_3.d
                        i_9.d = i_12.d f* i_2.d
                        i_4 = i_12
                        zmm5_1 = 0x322bcc77
                        i_3 = i_8
                        i_2 = i_9
                    
                    result = zx.q(result.b)
                    i_10.d = i_2.d f* i_19.d
                    i_8.d = i_3.d f* i_18.d
                    i_9.d = i_4.d f* i_11[0]
                    i_10.d = i_10.d f+ i_8.d
                    i_10.d = i_10.d f+ i_9.d
                    
                    if (i_10.d f< 1f)
                        result = 1
                    
                    r9_2 += 1
                    rdx_16 += 0xc
                while (r9_2 s< r11_2)
                
                if (result.b == 0)
                label_141ec6602_1:
                    result.b = 0
                else
                label_141ec64a6:
                    i_8.d = i_2.d f* i_11[0]
                    i_16.d = i_4.d f* i_19.d
                    i_17.d = i_3.d f* i_11[0]
                    i_16.d = i_16.d f- i_8.d
                    i_2.d = i_2.d f* i_18.d
                    i_4[0] = i_4[0] f* i_18.d
                    i_3.d = i_3.d f* i_19.d
                    i_17.d = i_17.d f- i_4[0]
                    i_8.d = i_16.d f* i_16.d
                    i_2.d = i_2.d f- i_3.d
                    i_10.d = i_17.d f* i_17.d
                    i_9.d = i_2.d f* i_2.d
                    i_10.d = i_10.d f+ i_8.d
                    i_10.d = i_10.d f+ i_9.d
                    
                    if (not(i_10.d f<= zmm5_1[0]))
                        zmm4_1.d = 0x3f000000
                        zmm3_1.d = i_10.d
                        float i_13[0x4] = _mm_rsqrt_ss(zmm3_1[0], zmm3_1.d)
                        zmm3_1.d = zmm3_1.d f* 0.5f
                        i_8.d = i_13.d f* i_13[0]
                        i_9.d = zmm3_1.d f* i_8.d
                        i_10.d = zmm4_1.d f- i_9.d
                        i_8.d = i_13.d f* i_10.d
                        i_13[0] = i_13[0] f+ i_8.d
                        i_9.d = i_13.d f* i_13[0]
                        zmm3_1.d = zmm3_1.d f* i_9.d
                        zmm4_1.d = 0.5f f- zmm3_1.d
                        i_8.d = i_13.d f* zmm4_1.d
                        i_13[0] = i_13[0] f+ i_8.d
                        i_13[0] = i_13[0] f* i_2.d
                        i_8.d = i_13.d f* i_16.d
                        i_9.d = i_13.d f* i_17.d
                        i_2 = i_13
                        zmm5_1 = 0x322bcc77
                        i_16 = i_8
                        i_17 = i_9
                    
                    i_10 = zx.o(*rcx_32)
                    result = zx.q(rcx_32[1].d)
                    i_9.d = i_17.d f* _mm_shuffle_ps(i_10, i_10, 0x55).d
                    zmm3_1.d = i_16.d f* i_10.d
                    i_8.d = i_2.d f* result.d
                    zmm3_1.d = zmm3_1.d f+ i_9.d
                    zmm3_1.d = zmm3_1.d f+ i_8.d
                    
                    if (r11_2.d s<= 2)
                    label_141ec6602_2:
                        result.b = 0
                    else
                        result = 0x18
                        
                        while (true)
                            i_10.d = i_17.d f* *(result + rcx_32 + 4)
                            i_8.d = i_16.d f* *(result + rcx_32)
                            i_9.d = i_2.d f* *(result + rcx_32 + 8)
                            i_10.d = i_10.d f+ i_8.d
                            i_10.d = i_10.d f+ i_9.d
                            i_10.d = i_10.d f- zmm3_1.d
                            
                            if (_mm_and_ps(i_10, 0x7fffffff).d f> zmm5_1[0])
                                sub_141ece930(arg1)
                                result = 1
                                break
                            
                            r8_3 += 1
                            result = &result[3]
                            
                            if (r8_3 s>= r11_2)
                                goto label_141ec6602_2

__security_check_cookie(rax_1 ^ &var_328)
return result
