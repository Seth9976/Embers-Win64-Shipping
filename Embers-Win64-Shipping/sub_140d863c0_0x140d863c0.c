// 函数: sub_140d863c0
// 地址: 0x140d863c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t j_2
int64_t j_3 = j_2
float zmm6[0x4]
float var_38[0x4] = zmm6
void var_198
int64_t rax_1 = __security_cookie ^ &var_198
*(arg1 + 9) = 0
int32_t i = 0
char var_168[0x8]
char (* r15)[0x8] = &var_168
void* rsi = arg1 + 0x10a
void var_118
void* rbx = &var_118

do
    char rax_2 = *rsi
    *r15 = rax_2
    
    if (rax_2 != 0 || *(arg1 + 8) != rax_2)
        *rbx = 0
        *(rbx + 8) = 0
        int32_t rax_3 = Ordinal_XINPUT1_3_2(zx.q(i), rbx)
        *rsi = rax_3 == 0
        
        if (rax_3 == 0)
            *(arg1 + 9) = 1
    
    i += 1
    rbx += 0x10
    rsi += 0x100
    r15 = &(*r15)[1]
while (i s< 4)

int32_t i_1 = 0
int64_t r14 = 0
int64_t var_150 = 0
int32_t i_2 = 0
float zmm7[0x4]
float var_48[0x4] = zmm7
int64_t result

do
    int32_t rbx_1 = data_143e20698
    int64_t rsi_1 = data_143e20690
    int64_t var_160 = 0
    int32_t var_158_1 = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_160, rbx_1, 0)
        memcpy(var_160, rsi_1, rbx_1 * 2)
    else
        int32_t var_154_1 = rbx_1
    
    int64_t var_138_1 = data_143e20688
    void* var_140 = arg1
    int32_t i_3 = i_1
    int64_t var_128
    sub_140596d10(&var_128, &var_160)
    uint32_t rax_5
    
    if (data_143de5480 != 0)
        rax_5.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143de5480 == 0 || rax_5.b != 0)
        int64_t rbx_2 = sx.q(data_143e20570)
        int32_t rax_6 = (rbx_2 + 1).d
        bool cond:0_1 = rax_6 s<= data_143e20574
        data_143e20570 = rax_6
        
        if (not(cond:0_1))
            sub_1405a4d70(&data_143e20568)
        
        *(data_143e20568 + (rbx_2 << 3)) = &var_140
    
    int64_t rcx_5 = var_160
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    char rcx_6 = var_168[r14]
    int64_t rbx_4 = r14 << 8
    void* r12_2 = arg1 + 0x28 + rbx_4
    char rax_8 = *(rbx_4 + arg1 + 0x10a)
    
    if (rax_8 != 0 || rcx_6 != 0)
        int64_t rdx_7 = r14 << 4
        int32_t rdx_8
        int32_t r15_1
        
        if (rcx_6 != 0)
            if (rax_8 == 0)
                i_1.b = 0
                rdx_8 = data_14399fb40
                int32_t rcx_15 = data_14399fb4c + 1
                int32_t r13_1 = *(rbx_4 + arg1 + 0x10c)
                data_14399fb4c = rcx_15
                int64_t r14_3 = sx.q(rdx_8 - 1)
                
                if (rdx_8 - 1 s>= 0)
                    int64_t rsi_6 = r14_3 << 4
                    int64_t temp2_1
                    
                    do
                        int64_t rcx_16 = data_14399fb38
                        
                        if (*(rsi_6 + rcx_16 + 8) == 0)
                            i_1.b = 1
                        else
                            int64_t* rcx_17 = *(rsi_6 + rcx_16)
                            
                            if (rcx_17 == 0)
                                i_1.b = 1
                            else if ((*(*rcx_17 + 0x50))(rcx_17, 0, 0xffffffff, zx.q(r13_1), rdx_7)
                                    == 0)
                                i_1.b = 1
                        
                        rsi_6 -= 0x10
                        temp2_1 = r14_3
                        r14_3 -= 1
                    while (temp2_1 - 1 s>= 0)
                    rcx_15 = data_14399fb4c
                    rdx_8 = data_14399fb40
                
                data_14399fb4c = rcx_15 - 1
                
                if (i_1.b != 0 && rcx_15 - 1 s<= 0)
                    int32_t r14_4 = 0
                    r15_1 = rdx_8
                    
                    if (rdx_8 s> 0)
                        int64_t* rsi_7 = nullptr
                        
                        do
                            int64_t rcx_19 = data_14399fb38
                            
                            if (*(rsi_7 + rcx_19 + 8) == 0)
                                sub_1405a4880(&data_14399fb38, r14_4, 1, 1)
                            else
                                int64_t* rcx_20 = *(rsi_7 + rcx_19)
                                
                                if (rcx_20 == 0)
                                    sub_1405a4880(&data_14399fb38, r14_4, 1, 1)
                                else if ((*(*rcx_20 + 0x20))(rcx_20) != 0)
                                    sub_1405a4880(&data_14399fb38, r14_4, 1, 1)
                                else
                                    r14_4 += 1
                                    rsi_7 = &rsi_7[2]
                            
                            rdx_8 = data_14399fb40
                        while (r14_4 s< rdx_8)
                    
                label_140d867dd:
                    int32_t rax_19 = rdx_8 * 2
                    
                    if (rax_19 s<= 2)
                        rax_19 = 2
                    
                    data_14399fb48 = rax_19
                    
                    if (r15_1 s> rax_19 && data_14399fb44 != rdx_8)
                        sub_1405a5410(&data_14399fb38, rdx_8)
        else if (rax_8 != 0)
            i_1.b = 0
            rdx_8 = data_14399fb40
            int32_t rcx_8 = data_14399fb4c + 1
            int32_t r13 = *(rbx_4 + arg1 + 0x10c)
            data_14399fb4c = rcx_8
            int64_t r14_1 = sx.q(rdx_8 - 1)
            
            if (rdx_8 - 1 s>= 0)
                int64_t rsi_3 = r14_1 << 4
                int64_t temp3_1
                
                do
                    int64_t rcx_9 = data_14399fb38
                    
                    if (*(rsi_3 + rcx_9 + 8) == 0)
                        i_1.b = 1
                    else
                        int64_t* rcx_10 = *(rsi_3 + rcx_9)
                        
                        if (rcx_10 == 0)
                            i_1.b = 1
                        else
                            rdx_8.b = 1
                            char rax_11
                            rax_11, rdx_8 =
                                (*(*rcx_10 + 0x50))(rcx_10, rdx_8, 0xffffffff, zx.q(r13), rdx_7)
                            
                            if (rax_11 == 0)
                                i_1.b = 1
                    
                    rsi_3 -= 0x10
                    temp3_1 = r14_1
                    r14_1 -= 1
                while (temp3_1 - 1 s>= 0)
                rcx_8 = data_14399fb4c
                rdx_8 = data_14399fb40
            
            data_14399fb4c = rcx_8 - 1
            
            if (i_1.b != 0 && rcx_8 - 1 s<= 0)
                int32_t r14_2 = 0
                r15_1 = rdx_8
                
                if (rdx_8 s> 0)
                    int64_t* rsi_4 = nullptr
                    
                    do
                        int64_t rcx_12 = data_14399fb38
                        
                        if (*(rsi_4 + rcx_12 + 8) == 0)
                            sub_1405a4880(&data_14399fb38, r14_2, 1, 1)
                        else
                            int64_t* rcx_13 = *(rsi_4 + rcx_12)
                            
                            if (rcx_13 == 0)
                                sub_1405a4880(&data_14399fb38, r14_2, 1, 1)
                            else if ((*(*rcx_13 + 0x20))(rcx_13) != 0)
                                sub_1405a4880(&data_14399fb38, r14_2, 1, 1)
                            else
                                r14_2 += 1
                                rsi_4 = &rsi_4[2]
                        
                        rdx_8 = data_14399fb40
                    while (r14_2 s< rdx_8)
                
                goto label_140d867dd
        int64_t r8_4 = rdx_7
        int64_t var_d8
        __builtin_memset(&var_d8, 0, 0x18)
        void var_114
        uint16_t rdx_11 = *(&var_114 + r8_4)
        uint16_t rcx_21
        rcx_21.b = (rdx_11 u>> 0xc).b & 1
        *(&var_d8 + zx.q(*(arg1 + 0xa))) = rcx_21.b
        uint16_t rcx_22
        rcx_22.b = (rdx_11 u>> 0xd).b & 1
        *(&var_d8 + zx.q(*(arg1 + 0xb))) = rcx_22.b
        uint16_t rcx_23
        rcx_23.b = (rdx_11 u>> 0xe).b & 1
        *(&var_d8 + zx.q(*(arg1 + 0xc))) = rcx_23.b
        *(&var_d8 + zx.q(*(arg1 + 0xd))) = (rdx_11 u>> 0xf).b
        uint16_t rcx_25
        rcx_25.b = (rdx_11 u>> 8).b & 1
        *(&var_d8 + zx.q(*(arg1 + 0xe))) = rcx_25.b
        uint16_t rcx_26
        rcx_26.b = (rdx_11 u>> 9).b & 1
        *(&var_d8 + zx.q(*(arg1 + 0xf))) = rcx_26.b
        *(&var_d8 + zx.q(*(arg1 + 0x10))) = rdx_11.b u>> 5 & 1
        *(&var_d8 + zx.q(*(arg1 + 0x11))) = rdx_11.b u>> 4 & 1
        *(&var_d8 + zx.q(*(arg1 + 0x12))) = rdx_11.b u>> 6 & 1
        void var_112
        bool cond:1_1 = *(&var_112 + r8_4) u> 0x1e
        *(&var_d8 + zx.q(*(arg1 + 0x13))) = rdx_11.b u>> 7 & 1
        void var_111
        bool cond:2_1 = *(&var_111 + r8_4) u> 0x1e
        *(&var_d8 + zx.q(*(arg1 + 0x14))) = cond:1_1
        *(&var_d8 + zx.q(*(arg1 + 0x15))) = cond:2_1
        *(&var_d8 + zx.q(*(arg1 + 0x16))) = rdx_11.b & 1
        *(&var_d8 + zx.q(*(arg1 + 0x17))) = rdx_11.b u>> 1 & 1
        uint8_t rcx_33 = rdx_11.b u>> 2 & 1
        rdx_11.b u>>= 3
        rdx_11.b &= 1
        *(&var_d8 + zx.q(*(arg1 + 0x18))) = rcx_33
        *(&var_d8 + zx.q(*(arg1 + 0x19))) = rdx_11.b
        void var_10e
        int16_t rdx_12 = *(&var_10e + r8_4)
        void var_110
        int16_t rsi_8 = *(&var_110 + r8_4)
        int16_t rdx_13 = *(&var_110 + r8_4)
        *(&var_d8 + zx.q(*(arg1 + 0x1a))) = rdx_12 s> 0x1ea9
        *(&var_d8 + zx.q(*(arg1 + 0x1b))) = rdx_12 s< 0xe157
        void var_10a
        int16_t rdx_14 = *(&var_10a + r8_4)
        *(&var_d8 + zx.q(*(arg1 + 0x1c))) = rdx_13 s< 0xe157
        *(&var_d8 + zx.q(*(arg1 + 0x1d))) = rdx_13 s> 0x1ea9
        void var_10c
        int16_t rdx_15 = *(&var_10c + r8_4)
        *(&var_d8 + zx.q(*(arg1 + 0x1e))) = rdx_14 s> 0x21f1
        *(&var_d8 + zx.q(*(arg1 + 0x1f))) = rdx_14 s< 0xde0f
        *(&var_d8 + zx.q(*(arg1 + 0x20))) = rdx_15 s< 0xde0f
        *(&var_d8 + zx.q(*(arg1 + 0x21))) = rdx_15 s> 0x21f1
        float zmm0_1[0x4]
        
        zmm0_1 = rsi_8 s> 0 ? 0x38000100 : 0x38000000
        
        int32_t rax_44 = sx.d(rsi_8)
        uint128_t zmm3
        zmm3.d = _mm_cvtepi32_ps(zx.o(rax_44)).d f* zmm0_1[0]
        int32_t temp0_2
        int32_t temp1_1
        
        if (*(rbx_4 + arg1 + 0x100) == rsi_8)
            temp0_2:temp1_1 = sx.q(rax_44)
        
        if (*(rbx_4 + arg1 + 0x100) != rsi_8 || (temp1_1 ^ temp0_2) - temp0_2 s> 0x1ea9)
            int64_t* rcx_34 = *(arg1 + 0x4f0)
            (*(*rcx_34 + 0x88))(rcx_34, data_143e20468, zx.q(*(rbx_4 + arg1 + 0x10c)), zmm3, rdx_7)
            r8_4 = rdx_7
        
        *(rbx_4 + arg1 + 0x100) = rsi_8
        int16_t rsi_9 = *(&var_10e + r8_4)
        
        zmm0_1 = rsi_9 s> 0 ? 0x38000100 : 0x38000000
        
        int32_t rax_49 = sx.d(rsi_9)
        zmm3.d = _mm_cvtepi32_ps(zx.o(rax_49)).d f* zmm0_1[0]
        int32_t temp4_1
        int32_t temp5_1
        
        if (*(rbx_4 + arg1 + 0x102) == rsi_9)
            temp4_1:temp5_1 = sx.q(rax_49)
        
        if (*(rbx_4 + arg1 + 0x102) != rsi_9 || (temp5_1 ^ temp4_1) - temp4_1 s> 0x1ea9)
            int64_t* rcx_35 = *(arg1 + 0x4f0)
            (*(*rcx_35 + 0x88))(rcx_35, data_143e20470, zx.q(*(rbx_4 + arg1 + 0x10c)), zmm3, rdx_7)
            r8_4 = rdx_7
        
        *(rbx_4 + arg1 + 0x102) = rsi_9
        int16_t rsi_10 = *(&var_10c + r8_4)
        
        zmm0_1 = rsi_10 s> 0 ? 0x38000100 : 0x38000000
        
        int32_t rax_54 = sx.d(rsi_10)
        zmm3.d = _mm_cvtepi32_ps(zx.o(rax_54)).d f* zmm0_1[0]
        int32_t temp6_1
        int32_t temp7_1
        
        if (*(rbx_4 + arg1 + 0x104) == rsi_10)
            temp6_1:temp7_1 = sx.q(rax_54)
        
        if (*(rbx_4 + arg1 + 0x104) != rsi_10 || (temp7_1 ^ temp6_1) - temp6_1 s> 0x21f1)
            int64_t* rcx_36 = *(arg1 + 0x4f0)
            (*(*rcx_36 + 0x88))(rcx_36, data_143e20478, zx.q(*(rbx_4 + arg1 + 0x10c)), zmm3, rdx_7)
            r8_4 = rdx_7
        
        *(rbx_4 + arg1 + 0x104) = rsi_10
        int16_t rsi_11 = *(&var_10a + r8_4)
        
        zmm0_1 = rsi_11 s> 0 ? 0x38000100 : 0x38000000
        
        int32_t rax_59 = sx.d(rsi_11)
        zmm3.d = _mm_cvtepi32_ps(zx.o(rax_59)).d f* zmm0_1[0]
        int32_t temp8_1
        int32_t temp9_1
        
        if (*(rbx_4 + arg1 + 0x106) == rsi_11)
            temp8_1:temp9_1 = sx.q(rax_59)
        
        if (*(rbx_4 + arg1 + 0x106) != rsi_11 || (temp9_1 ^ temp8_1) - temp8_1 s> 0x21f1)
            int64_t* rcx_37 = *(arg1 + 0x4f0)
            (*(*rcx_37 + 0x88))(rcx_37, data_143e20480, zx.q(*(rbx_4 + arg1 + 0x10c)), zmm3, rdx_7)
            r8_4 = rdx_7
        
        *(rbx_4 + arg1 + 0x106) = rsi_11
        uint32_t rsi_12 = zx.d(*(&var_112 + r8_4))
        zmm3.d = _mm_cvtepi32_ps(zx.o(rsi_12)).d f* 0.00392156886f
        
        if (*(rbx_4 + arg1 + 0x108) != rsi_12.b || rsi_12 u> 0x1e)
            int64_t* rcx_38 = *(arg1 + 0x4f0)
            (*(*rcx_38 + 0x88))(rcx_38, data_143e20488, zx.q(*(rbx_4 + arg1 + 0x10c)), zmm3, rdx_7)
            r8_4 = rdx_7
        
        *(rbx_4 + arg1 + 0x108) = rsi_12.b
        uint32_t rsi_13 = zx.d(*(&var_111 + r8_4))
        zmm3.d = _mm_cvtepi32_ps(zx.o(rsi_13)).d f* 0.00392156886f
        
        if (*(rbx_4 + arg1 + 0x109) != rsi_13.b || rsi_13 u> 0x1e)
            int64_t* rcx_39 = *(arg1 + 0x4f0)
            (*(*rcx_39 + 0x88))(rcx_39, data_143e20490, zx.q(*(rbx_4 + arg1 + 0x10c)), zmm3, rdx_7)
        
        *(rbx_4 + arg1 + 0x109) = rsi_13.b
        int64_t performanceCount
        QueryPerformanceCounter(&performanceCount)
        zmm6 = zx.o(0)
        zmm6[0].q = float.d(performanceCount)
        int64_t r14_5 = 0
        int64_t* rsi_15 = arg1 + 0x40 + rbx_4
        char* rax_66 = &var_d8 - r12_2
        char* var_178_2 = rax_66
        zmm6[0].q = zmm6[0].q f* data_143d796f8
        j_2 = 0x18
        zmm6[0].q = zmm6[0].q f+ 0x4170000000000000
        int64_t j
        
        do
            char r15_2 = *(rax_66 + r12_2)
            
            if (r15_2 != *r12_2)
                int64_t* rcx_41 = *(arg1 + 0x4f0)
                uint64_t r8_10 = zx.q(*(rbx_4 + arg1 + 0x10c))
                int64_t rdx_26 = *(r14_5 + arg1 + 0x430)
                int64_t rax_67 = *rcx_41
                
                if (r15_2 == 0)
                    (*(rax_67 + 0x98))(rcx_41, rdx_26, r8_10, 0, var_178_2)
                    rax_66 = var_178_2
                else
                    (*(rax_67 + 0x90))(rcx_41, rdx_26, r8_10, 0, var_178_2)
                    zmm0_1 = *(arg1 + 0x428)
                label_140d86cbb:
                    zmm0_1 = _mm_cvtps_pd(zmm0_1[0].q)
                    zmm0_1[0].q = zmm0_1[0].q f+ zmm6[0].q
                    *rsi_15 = zmm0_1.q
                    rax_66 = var_178_2
            else if (r15_2 != 0 && not(zmm6[0].q f< *rsi_15))
                int64_t* rcx_42 = *(arg1 + 0x4f0)
                int64_t r9_4
                r9_4.b = 1
                (*(*rcx_42 + 0x90))(rcx_42, *(arg1 + r14_5 + 0x430), zx.q(*(rbx_4 + arg1 + 0x10c)), 
                    r9_4, var_178_2)
                zmm0_1 = *(arg1 + 0x42c)
                goto label_140d86cbb
            
            *r12_2 = r15_2
            r14_5 += 8
            r12_2 += 1
            rsi_15 = &rsi_15[1]
            j = j_2
            j_2 -= 1
        while (j != 1)
        float temp0_9[0x4] =
            __maxss_xmmss_memss((*(rbx_4 + arg1 + 0x118))[0], *(rbx_4 + arg1 + 0x110))
        float temp0_10[0x4] =
            __maxss_xmmss_memss((*(rbx_4 + arg1 + 0x11c))[0], *(rbx_4 + arg1 + 0x114))
        temp0_9[0] = temp0_9[0] f- *(rbx_4 + arg1 + 0x120)
        
        if (_mm_and_ps(temp0_9, 0x7fffffff)[0] > 9.99999994e-09f)
        label_140d86d34:
            uint64_t rcx_43 = zx.q(*(rbx_4 + arg1 + 0x10c))
            float zmm1 = temp0_10[0]
            temp0_9[0] = temp0_9[0] * 65535f
            int16_t var_170 = (int.d(temp0_9[0])).w
            int16_t var_16e_1 = (int.d(zmm1 * 65535f)).w
            Ordinal_XINPUT1_3_3(rcx_43, &var_170)
            *(rbx_4 + arg1 + 0x120) = temp0_9[0]
            *(rbx_4 + arg1 + 0x124) = temp0_10[0]
        else
            temp0_10[0] = temp0_10[0] f- *(rbx_4 + arg1 + 0x124)
            
            if (not(_mm_and_ps(temp0_10, 0x7fffffff)[0] <= 9.99999994e-09f))
                goto label_140d86d34
    
    if (data_143de5480 != 0)
        result.b = GetCurrentThreadId().d == data_143de5470
    
    if (data_143de5480 == 0 || result.b != 0)
        result = sx.q(data_143e20570)
        
        if (result.d != 0)
            int64_t* rcx_44 = data_143e20568
            int32_t r12_3 = 0
            int32_t rsi_16 = 0
            int64_t j_1 = 0
            int64_t result_1 = result
            j_2.b = *rcx_44 != &var_140
            
            do
                int64_t r9_5 = sx.q(rsi_16)
                j_1 += 1
                rsi_16 += 1
                
                for (; j_1 s< result_1; j_1 += 1)
                    result.b = rcx_44[j_1] != &var_140
                    
                    if (zx.d(j_2.b) != result.d)
                        break
                    
                    rsi_16 += 1
                
                int32_t r15_4 = rsi_16 - r9_5.d
                
                if (j_2.b != 0)
                    if (r12_3 != r9_5.d)
                        result = memmove(&rcx_44[sx.q(r12_3)], &rcx_44[r9_5], r15_4 << 3)
                        rcx_44 = data_143e20568
                    
                    r12_3 += r15_4
                
                j_2.b ^= 1
            while (j_1 s< result_1)
            
            data_143e20570 = r12_3
    
    int64_t rcx_46 = var_128
    
    if (rcx_46 != 0)
        result = sub_140a74f90(rcx_46)
    
    i_1 = i_2 + 1
    r14 = var_150 + 1
    i_2 = i_1
    var_150 = r14
while (i_1 s< 4)

*(arg1 + 8) = 0
__security_check_cookie(rax_1 ^ &var_198)
return result
