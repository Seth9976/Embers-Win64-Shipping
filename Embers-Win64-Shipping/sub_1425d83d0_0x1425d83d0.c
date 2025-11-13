// 函数: sub_1425d83d0
// 地址: 0x1425d83d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_338
int64_t rax_1 = __security_cookie ^ &var_338
int64_t* var_2e8 = arg3
int64_t* rsi = arg3
int64_t* r15 = arg2
void* r13 = arg1
void* rax_2
int64_t rax_3
void* r8

if (arg3 != 0)
    rax_2 = sub_1425d4f70()
    r8 = rsi[2]
    rax_3 = sx.q(*(rax_2 + 0x38))

if (arg3 == 0 || rax_3.d s> *(r8 + 0x38) || *(*(r8 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
    rsi = nullptr
    var_2e8 = nullptr

int64_t result = r15[0x15]

if (result != 0)
label_1425d8462:
    
    if (*(result + 0x1f8) != 0 && (*(result + 0x11c) & 4) != 0)
        int32_t rax_5 = r15[0xab].d
        int32_t r8_2 = rsi[0x1a].d - 1
        int64_t var_288 = 0
        
        if (rax_5 s<= r8_2)
            r8_2 = rax_5
        
        int32_t var_280_1 = 0
        int128_t zmm6_1
        float zmm7_1[0x4]
        zmm6_1, zmm7_1 = sub_141f3bf70(r15, &var_288, r8_2)
        int64_t rbx_1 = sx.q(*(r13 + 0x28))
        void* r12_1 = r13 + 0x20
        int32_t rax_6 = (rbx_1 + 1).d
        *(r12_1 + 8) = rax_6
        
        if (rax_6 s> *(r12_1 + 0xc))
            sub_141acb7b0(r12_1)
        
        sub_1425d66d0(rbx_1 * 0x1f0 + *r12_1)
        void** r14_3 = *r12_1 - 0x1f0 + sx.q(*(r12_1 + 8)) * 0x1f0
        void** var_218_1 = r14_3
        int32_t var_2e0_1 = 0
        *(r14_3 + 0x12c) = arg4
        
        if (rsi[0x1a].d s> 0)
            float var_58_1[0x4] = zmm7_1
            void* r12_2 = &r14_3[0x26]
            int64_t rdi_1 = 0
            int64_t var_2d8_1 = 0
            int512_t zmm6_2
            bool cond:1_1
            
            do
                int64_t rbx_2 = sx.q(*(r12_2 + 8))
                int32_t rax_9 = (rbx_2 + 1).d
                int64_t* rdi_3 = rdi_1 * 0x158 + rsi[0x19]
                *(r12_2 + 8) = rax_9
                
                if (rax_9 s> *(r12_2 + 0xc))
                    sub_1405c4fe0(r12_2)
                
                int64_t var_298 = 0
                void* r14_4 = nullptr
                int64_t rax_12 = (rbx_2 << 6) + *r12_2
                int64_t var_290_1 = 0
                void* var_2d0 = nullptr
                int32_t var_2c4_1 = 0
                __builtin_memset(rax_12 + 0x10, 0, 0x30)
                int64_t r15_1 = sx.q(*(r12_2 + 8))
                int64_t r13_1 = *r12_2
                int64_t var_2f8 = 0
                int32_t var_2f0_1 = 0
                int64_t var_2a8 = 0
                int32_t var_2a0_1 = 0
                int64_t rsi_1 = sx.q(rdi_3[0x11].d)
                int64_t rbx_3 = rdi_3[0x10]
                int64_t r15_2 = r15_1 << 6
                uint64_t var_2b8 = 0
                int32_t var_2b0_1 = rsi_1.d
                
                if (rsi_1.d != 0)
                    sub_140638750(&var_2b8, rsi_1.d, 0)
                    memcpy(var_2b8, rbx_3, (rsi_1 << 2).d)
                    rsi_1 = zx.q(var_2b0_1)
                else
                    int32_t var_2ac_1 = 0
                
                int64_t r12_3 = sx.q(rdi_3[1].d)
                int32_t temp0_1
                int32_t temp1_1
                temp0_1:temp1_1 = muls.dp.d(0x55555556, rdi_3[5].d)
                int32_t var_2c0_1 = r12_3.d
                int32_t i_13 = (temp0_1 u>> 0x1f) + temp0_1
                
                if (&var_298 != rdi_3)
                    int64_t r14_5 = *rdi_3
                    var_290_1.d = r12_3.d
                    
                    if (r12_3.d != 0)
                        sub_1407c3650(&var_298, r12_3.d, 0)
                        memcpy(var_298, r14_5, (r12_3 * 0xc).d)
                    
                    r14_4 = var_2d0
                
                void var_98
                sub_141f5e7d0(arg2, &var_98, var_2e8[0x21].d, &data_143dbb0c0)
                int32_t var_300_1 = 0
                char var_308
                var_308.q = &var_2a8
                char var_310
                var_310.q = &var_2f8
                int64_t* var_318
                var_318.d = var_280_1
                int32_t i_1 = sub_1425cf960(&rsi[0x1f], rdi_3, &var_98, var_288, var_318, var_310)
                
                if (i_13 s> 0)
                    sub_14083a7e0(&var_2d0)
                    r14_4 = var_2d0
                    int64_t rdx_12 = 0
                    uint64_t i_11 = zx.q(i_13)
                    void* r8_9 = r14_4 + 8
                    uint64_t i
                    
                    do
                        r8_9 += 0xc
                        rdx_12 += 0xc
                        *(r8_9 - 0x14) = *(rdx_12 + rdi_3[4] - 0xc)
                        *(r8_9 - 0x10) = *(rdx_12 + rdi_3[4] - 8)
                        *(r8_9 - 0xc) = *(rdx_12 + rdi_3[4] - 4)
                        i = i_11
                        i_11 -= 1
                    while (i != 1)
                
                uint64_t r8_10 = var_2b8
                int64_t var_1d0_1 = var_2f8
                uint64_t rcx_18 = r8_10
                int32_t var_1c8_1 = var_2f0_1
                int32_t var_1c0_1 = 0
                int64_t var_1b8_1 = 0
                int32_t var_1b0_1 = 0
                int64_t rdx_13 = r8_10 + (sx.q(rsi_1.d) << 2)
                int32_t var_1a8_1 = 0
                int64_t var_1a0_1 = 0
                int32_t var_198_1 = 0
                int32_t var_178_1 = 0
                int64_t var_170_1 = 0
                int32_t var_168_1 = 0
                int32_t var_160_1 = 0
                int32_t var_1d8 = 0xc
                void* var_188_1 = r14_4
                int32_t i_14 = i_13
                int32_t var_190_1 = 0xc
                
                if (r8_10 == rdx_13)
                label_1425d87f2:
                    int64_t var_1a0_2 = 0
                    int32_t var_198_2 = 0
                    int32_t var_1a8_2 = 0
                else
                    while (not(i_1 f< *rcx_18))
                        rcx_18 += 4
                        
                        if (rcx_18 == rdx_13)
                            goto label_1425d87f2
                    
                    uint64_t var_1a0_3 = r8_10
                    int32_t var_198_3 = rsi_1.d
                    int32_t var_1a8_3 = 4
                
                j_sub_140b3db50()
                void var_158
                int64_t rbx_6 = *sub_140b58170(&var_158, "ClothingSystemRuntimeNv", 1)
                j_sub_140b3db50()
                int64_t* rbx_7 = *(j_sub_140b407e0(&data_143de7d78, rbx_6) + 0x18)
                (*(*rbx_7 + 8))(rbx_7, &var_1d8)
                int32_t var_240_1 = 0xc4754000
                int64_t var_278 = 0
                int64_t var_270_1 = 0
                int64_t var_248 = 0
                void var_150
                int64_t rax_25 = (*(*rbx_7 + 0x10))(rbx_7, &var_150)
                var_318.b = 1
                int64_t rax_26 =
                    NvClothCookFabricFromMesh(*(arg1 + 0x10), rax_25, &var_248, &var_278, var_318)
                void* rbx_8 = r15_2 + r13_1
                int32_t rdx_18 = 0
                *(rbx_8 - 0x28) = 0
                
                if (*(rbx_8 - 0x24) != 0)
                    sub_1405a5410(rbx_8 - 0x30, 0)
                    rdx_18 = *(r15_2 + r13_1 - 0x28)
                
                int32_t rax_27 = rdx_18 + r12_3.d
                *(rbx_8 - 0x28) = rax_27
                
                if (rax_27 s> *(rbx_8 - 0x24))
                    sub_1405a4f90(rbx_8 - 0x30)
                
                int64_t i_2 = 0
                int128_t zmm0_1
                int32_t zmm2_1
                int32_t zmm3_1
                
                if (r12_3 s>= 4)
                    void* rax_28 = *(rbx_8 - 0x30)
                    int64_t rcx_25 = 0
                    void* r10_1 = rax_28 + 8
                    void* r8_12 = rax_28 + 0x18
                    
                    do
                        int64_t rax_29 = var_2f8
                        r8_12 += 0x40
                        rcx_25 += 0x30
                        r10_1 += 0x40
                        zmm2_1 = *(rax_29 + rcx_25 - 0x2c)
                        zmm3_1 = *(rax_29 + rcx_25 - 0x28)
                        zmm0_1 = *(rdi_3[0x10] + (i_2 << 2))
                        *(r10_1 - 0x48) = *(rax_29 + rcx_25 - 0x30)
                        *(r10_1 - 0x44) = zmm2_1
                        *(r10_1 - 0x40) = zmm3_1
                        *(r10_1 - 0x3c) = zmm0_1.d
                        int64_t rax_31 = var_2f8
                        zmm2_1 = *(rax_31 + rcx_25 - 0x20)
                        zmm3_1 = *(rax_31 + rcx_25 - 0x1c)
                        zmm0_1 = *(rdi_3[0x10] + (i_2 << 2) + 4)
                        *(r10_1 - 0x38) = *(rax_31 + rcx_25 - 0x24)
                        *(r8_12 - 0x44) = zmm2_1
                        *(r8_12 - 0x40) = zmm3_1
                        *(r8_12 - 0x3c) = zmm0_1.d
                        int64_t rax_33 = var_2f8
                        zmm2_1 = *(rax_33 + rcx_25 - 0x14)
                        zmm3_1 = *(rax_33 + rcx_25 - 0x10)
                        zmm0_1 = *(rdi_3[0x10] + (i_2 << 2) + 8)
                        *(r10_1 - 0x28) = *(rax_33 + rcx_25 - 0x18)
                        *(r8_12 - 0x34) = zmm2_1
                        *(r8_12 - 0x30) = zmm3_1
                        *(r8_12 - 0x2c) = zmm0_1.d
                        int64_t rax_35 = var_2f8
                        zmm2_1 = *(rax_35 + rcx_25 - 8)
                        zmm3_1 = *(rax_35 + rcx_25 - 4)
                        zmm0_1 = *(rdi_3[0x10] + (i_2 << 2) + 0xc)
                        i_2 += 4
                        *(r10_1 - 0x18) = *(rax_35 + rcx_25 - 0xc)
                        *(r8_12 - 0x24) = zmm2_1
                        *(r8_12 - 0x20) = zmm3_1
                        *(r8_12 - 0x1c) = zmm0_1.d
                    while (i_2 s< r12_3 - 3)
                
                if (i_2 s< r12_3)
                    int64_t r8_14 = i_2 * 0xc
                    void* rcx_28 = (i_2 << 4) + *(rbx_8 - 0x30)
                    
                    do
                        int64_t rax_37 = var_2f8
                        r8_14 += 0xc
                        rcx_28 += 0x10
                        zmm2_1 = *(rax_37 + r8_14 - 8)
                        zmm3_1 = *(rax_37 + r8_14 - 4)
                        zmm0_1 = *(rdi_3[0x10] + (i_2 << 2))
                        i_2 += 1
                        *(rcx_28 - 0x10) = *(rax_37 + r8_14 - 0xc)
                        *(rcx_28 - 0xc) = zmm2_1
                        *(rcx_28 - 8) = zmm3_1
                        *(rcx_28 - 4) = zmm0_1.d
                    while (i_2 s< r12_3)
                
                int64_t rcx_29 = *(rbx_8 - 0x30)
                int64_t* rcx_30 = *(arg1 + 0x10)
                int64_t var_1f0_1 = (sx.q(*(rbx_8 - 0x28)) << 4) + rcx_29
                int128_t var_208 = rcx_29.o
                int64_t* rax_43 = (*(*rcx_30 + 0x18))(rcx_30, &var_208, rax_26)
                *(r15_2 + r13_1 - 0x40) = rax_26
                *(r15_2 + r13_1 - 0x38) = rax_43
                int64_t rdx_20 = *rax_26
                int32_t rax_44 = (*(rdx_20 + 0x10))(rax_26, rdx_20)
                int64_t rbx_9 = sx.q(*(r15_2 + r13_1 - 0x18))
                void* r14_7 = r15_2 + r13_1
                int64_t rsi_3 = sx.q(rax_44)
                int32_t rcx_32 = (rbx_9 + rsi_3).d
                *(r14_7 - 0x18) = rcx_32
                
                if (rcx_32 s> *(r14_7 - 0x14))
                    sub_1405c4d20(r14_7 - 0x20)
                
                int32_t i_9 = rsi_3.d
                int32_t* rdx_22 = *(r14_7 - 0x20) + rbx_9 * 0x14
                
                if (rsi_3.d != 0)
                    int32_t i_3
                    
                    do
                        *rdx_22 = 0x3f800000
                        rdx_22[1] = 0x3f800000
                        rdx_22[2] = 0x3f800000
                        rdx_22[3] = 0x3f800000
                        rdx_22[4] = 0xffffffff
                        rdx_22 = &rdx_22[5]
                        i_3 = i_9
                        i_9 -= 1
                    while (i_3 != 1)
                
                void* rbx_10 = r15_2 + r13_1
                int64_t r15_3 = sx.q(*(r15_2 + r13_1 - 8))
                int32_t rax_46 = (r15_3 + rsi_3).d
                *(rbx_10 - 8) = rax_46
                
                if (rax_46 s> *(rbx_10 - 4))
                    sub_1405a4cf0(rbx_10 - 0x10)
                
                memset(*(rbx_10 - 0x10) + (r15_3 << 2), 0, rsi_3 << 2)
                int32_t i_4 = 0
                
                if (rsi_3.d s> 0)
                    do
                        int64_t i_10 = sx.q(i_4)
                        *(*(rbx_10 - 0x10) + (i_10 << 2)) = *(var_278 + (zx.q(i_4) << 2))
                        *(*(r14_7 - 0x20) + i_10 * 0x14 + 0x10) = i_4.w
                        i_4 += 1
                    while (i_4 s< rsi_3.d)
                
                int64_t rcx_40 = rdi_3[0x15]
                int64_t rax_51 = *rax_43
                int64_t var_1e0_1 = rcx_40 + (sx.q(rdi_3[0x16].d) << 2)
                var_208 = rcx_40.o
                (*(rax_51 + 0x2e8))(rax_43, &var_208)
                int64_t var_258
                (*(*rax_43 + 0x210))(rax_43, &var_258)
                int64_t r10_2 = sx.q((*(*rax_43 + 0x220))(rax_43))
                int32_t* r9_4
                
                if (rdi_3[7].d == *(rdi_3 + 0x64))
                label_1425d8c2c:
                    r9_4 = nullptr
                else
                    void* rcx_46 = rdi_3[0xe]
                    void* r8_18 = &rdi_3[0xd]
                    
                    if (rcx_46 != 0)
                        r8_18 = rcx_46
                    
                    int32_t rax_55 = *(r8_18 + ((zx.q(rdi_3[0xf].d - 1) & 1) << 2))
                    
                    if (rax_55 == 0xffffffff)
                    label_1425d8c2c_1:
                        r9_4 = nullptr
                    else
                        while (true)
                            r9_4 = (sx.q(rax_55) << 5) + rdi_3[6]
                            
                            if (*r9_4 == 1)
                                break
                            
                            rax_55 = r9_4[6]
                            
                            if (rax_55 == 0xffffffff)
                                goto label_1425d8c2c_2
                        
                        if (rax_55 == 0xffffffff)
                        label_1425d8c2c_2:
                            r9_4 = nullptr
                
                int64_t r11_2 = 0
                int32_t zmm1_1
                
                if (r10_2 s>= 4)
                    void* rdi_5 = *(r9_4 + 8) + 8
                    int64_t i_8 = ((r10_2 - 4) u>> 2) + 1
                    int64_t r8_19 = 0
                    int64_t rdx_31 = 0
                    r11_2 = i_8 << 2
                    int64_t i_5
                    
                    do
                        int64_t rax_56 = var_2f8
                        rdx_31 += 0x40
                        zmm3_1 = *(rdi_5 - 8)
                        r8_19 += 0x30
                        int64_t rcx_47 = var_258
                        rdi_5 += 0x10
                        zmm1_1 = *(rax_56 + r8_19 - 0x2c)
                        zmm2_1 = *(rax_56 + r8_19 - 0x28)
                        *(rcx_47 + rdx_31 - 0x40) = (*(rax_56 + r8_19 - 0x30)).d
                        *(rcx_47 + rdx_31 - 0x3c) = zmm1_1
                        *(rcx_47 + rdx_31 - 0x38) = zmm2_1
                        *(rcx_47 + rdx_31 - 0x34) = zmm3_1
                        int64_t rax_57 = var_2f8
                        zmm3_1 = *(rdi_5 - 0x14)
                        int64_t rcx_48 = var_258
                        zmm1_1 = *(rax_57 + r8_19 - 0x20)
                        zmm2_1 = *(rax_57 + r8_19 - 0x1c)
                        *(rcx_48 + rdx_31 - 0x30) = (*(rax_57 + r8_19 - 0x24)).d
                        *(rcx_48 + rdx_31 - 0x2c) = zmm1_1
                        *(rcx_48 + rdx_31 - 0x28) = zmm2_1
                        *(rcx_48 + rdx_31 - 0x24) = zmm3_1
                        int64_t rax_58 = var_2f8
                        zmm3_1 = *(rdi_5 - 0x10)
                        int64_t rcx_49 = var_258
                        zmm1_1 = *(rax_58 + r8_19 - 0x14)
                        zmm2_1 = *(rax_58 + r8_19 - 0x10)
                        *(rcx_49 + rdx_31 - 0x20) = (*(rax_58 + r8_19 - 0x18)).d
                        *(rcx_49 + rdx_31 - 0x1c) = zmm1_1
                        *(rcx_49 + rdx_31 - 0x18) = zmm2_1
                        *(rcx_49 + rdx_31 - 0x14) = zmm3_1
                        int64_t rax_59 = var_2f8
                        zmm3_1 = *(rdi_5 - 0xc)
                        int64_t rcx_50 = var_258
                        zmm1_1 = *(rax_59 + r8_19 - 8)
                        zmm2_1 = *(rax_59 + r8_19 - 4)
                        *(rcx_50 + rdx_31 - 0x10) = (*(rax_59 + r8_19 - 0xc)).d
                        *(rcx_50 + rdx_31 - 0xc) = zmm1_1
                        *(rcx_50 + rdx_31 - 8) = zmm2_1
                        *(rcx_50 + rdx_31 - 4) = zmm3_1
                        i_5 = i_8
                        i_8 -= 1
                    while (i_5 != 1)
                
                if (r11_2 s< r10_2)
                    int64_t r8_21 = r11_2 * 0xc
                    int64_t rdx_33 = r11_2 << 4
                    int64_t i_12 = r10_2 - r11_2
                    int32_t* r9_5 = *(r9_4 + 8) + (r11_2 << 2)
                    int64_t i_6
                    
                    do
                        int64_t rax_61 = var_2f8
                        rdx_33 += 0x10
                        zmm3_1 = *r9_5
                        r8_21 += 0xc
                        int64_t rcx_51 = var_258
                        r9_5 = &r9_5[1]
                        zmm1_1 = *(rax_61 + r8_21 - 8)
                        zmm2_1 = *(rax_61 + r8_21 - 4)
                        *(rcx_51 + rdx_33 - 0x10) = (*(rax_61 + r8_21 - 0xc)).d
                        *(rcx_51 + rdx_33 - 0xc) = zmm1_1
                        *(rcx_51 + rdx_33 - 8) = zmm2_1
                        *(rcx_51 + rdx_33 - 4) = zmm3_1
                        i_6 = i_12
                        i_12 -= 1
                    while (i_6 != 1)
                
                rsi = var_2e8
                r15 = arg2
                float var_c8[0x4]
                float zmm7_2[0x4]
                zmm6_2, zmm7_2 = sub_141f5e780(r15, &var_c8, rsi[0x21].d)
                int64_t rax_62 = *rax_43
                float var_b8[0x4]
                float zmm0_3[0x4] = _mm_shuffle_ps(var_b8, var_b8, 0x55)
                float var_23c = var_b8[0]
                float var_234_1 = _mm_shuffle_ps(var_b8, var_b8, 0xaa)[0]
                float var_238_1 = zmm0_3[0]
                (*(rax_62 + 0x60))(rax_43, &var_23c)
                float zmm2_2[0x4] = var_c8
                int64_t rax_63 = *rax_43
                zmm0_3 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
                float zmm1_2[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
                float var_230 = zmm2_2[0]
                float var_224_1 = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xff)[0]
                float var_22c_1 = zmm0_3[0]
                float var_228_1 = zmm1_2[0]
                (*(rax_63 + 0x68))(rax_43, &var_230)
                (*(*rax_43 + 0x80))(rax_43)
                (*(*rax_43 + 0x2b8))(rax_43, zmm7_2)
                r14_3 = var_218_1
                int64_t rdi_6 = var_2d8_1
                *r14_3 = rsi
                
                if (rdi_6 == 0)
                    int32_t rax_67 = var_2c0_1 + r14_3[0x31].d
                    r14_3[0x31].d = rax_67
                    
                    if (rax_67 s> *(r14_3 + 0x18c))
                        sub_140638a00(&r14_3[0x30])
                    
                    int64_t rbx_13
                    
                    if (&r14_3[0x2a] == &var_2f8)
                        rbx_13 = zx.q(var_2f0_1)
                    else
                        rbx_13 = sx.q(var_2f0_1)
                        int64_t rsi_4 = var_2f8
                        int32_t r8_23 = *(r14_3 + 0x15c)
                        r14_3[0x2b].d = rbx_13.d
                        
                        if (rbx_13.d != 0 || r8_23 != 0)
                            sub_1407c3650(&r14_3[0x2a], rbx_13.d, r8_23)
                            memcpy(r14_3[0x2a], rsi_4, (rbx_13 * 0xc).d)
                            rbx_13 = zx.q(var_2f0_1)
                        else
                            *(r14_3 + 0x15c) = 0
                    
                    if (&r14_3[0x2c] != &var_2f8)
                        int64_t rsi_5 = var_2f8
                        int32_t r8_26 = *(r14_3 + 0x16c)
                        r14_3[0x2d].d = rbx_13.d
                        
                        if (rbx_13.d != 0 || r8_26 != 0)
                            sub_1407c3650(&r14_3[0x2c], rbx_13.d, r8_26)
                            memcpy(r14_3[0x2c], rsi_5, rbx_13.d * 0xc)
                        else
                            *(r14_3 + 0x16c) = 0
                    
                    if (&r14_3[0x2e] != &var_2a8)
                        int64_t rdi_9 = sx.q(var_2a0_1)
                        int64_t rsi_6 = var_2a8
                        int32_t r8_29 = *(r14_3 + 0x17c)
                        r14_3[0x2f].d = rdi_9.d
                        
                        if (rdi_9.d != 0 || r8_29 != 0)
                            sub_1407c3650(&r14_3[0x2e], rdi_9.d, r8_29)
                            memcpy(r14_3[0x2e], rsi_6, (rdi_9 * 0xc).d)
                        else
                            *(r14_3 + 0x17c) = 0
                    
                    rsi = var_2e8
                    rdi_6 = var_2d8_1
                
                int32_t rax_69 = var_270_1:4.d
                
                if ((rax_69 & 0x7fffffff) != 0 && rax_69 s>= 0)
                    int64_t rbx_15 = var_278
                    
                    if (rbx_15 != 0)
                        int64_t rax_70 = GetNvClothAllocator()
                        int64_t r8_32 = *rax_70
                        (*(r8_32 + 0x10))(rax_70, rbx_15, r8_32)
                
                uint64_t rax_71 = var_2b8
                
                if (rax_71 != 0)
                    sub_140a74f90(rax_71)
                
                void* rcx_66 = var_2d0
                
                if (rcx_66 != 0)
                    sub_140a74f90(rcx_66)
                
                int64_t rcx_67 = var_2a8
                
                if (rcx_67 != 0)
                    sub_140a74f90(rcx_67)
                
                int64_t rcx_68 = var_2f8
                
                if (rcx_68 != 0)
                    sub_140a74f90(rcx_68)
                
                int64_t rax_72 = var_298
                
                if (rax_72 != 0)
                    sub_140a74f90(rax_72)
                
                r12_2 = &r14_3[0x26]
                rdi_1 = rdi_6 + 1
                cond:1_1 = var_2e0_1 + 1 s< rsi[0x1a].d
                var_2e0_1 += 1
                var_2d8_1 = rdi_1
            while (cond:1_1)
            r13 = arg1
            zmm6_2.o = zmm6_1
        
        void* rax_73 = sub_1425d65e0(rsi)
        
        if (rax_73 != 0)
            sub_1425d72e0(r13, rax_73, r14_3)
        
        sub_1425da290(r13, rsi, r14_3)
        r14_3[0xc].d = 0xffffffff
        int64_t* rax_75
        
        if (sub_140d3e110(&r15[0x87]) == 0)
            rax_75 = r15
        else
            rax_75 = sub_140d3c6e0(&r15[0x87])
        
        sub_1425de700(r13, r15[0xab].d, &r15[0x38], &rax_75[(sx.q(*(rax_75 + 0x494)) + 0x45) * 2], 
            &var_288, 1, 1)
        void* i_7 = *r12_1
        result = sx.q(*(r12_1 + 8))
        
        for (void* rdi_11 = result * 0x1f0 + i_7; i_7 != rdi_11; i_7 += 0x1f0)
            if (*(i_7 + 0x60) != 0xffffffff)
                result = sub_1425d8070()
        
        int64_t rcx_79 = var_288
        
        if (rcx_79 != 0)
            result = sub_140a74f90(rcx_79)
else
    result = sub_141ee69e0(r15)
    
    if (result != 0)
        goto label_1425d8462

__security_check_cookie(rax_1 ^ &var_338)
return result
