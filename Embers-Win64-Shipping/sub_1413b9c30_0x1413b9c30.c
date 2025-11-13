// 函数: sub_1413b9c30
// 地址: 0x1413b9c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg4 + 0x20)
int64_t* r15 = arg3
void* r10 = rbx[0x32]

if (*(r10 + 0x3c) == 0)
label_1413b9cb4:
    void var_198
    int64_t* rax_7 = sub_1413d2b10(&var_198, arg2, rbx[0x33])
    sub_1413c6730(rbx[0x32], rax_7)
    sub_1408081b0(&var_198)
    void var_188
    sub_1405ec8a0(&var_188)
    void var_190
    sub_1405d1550(&var_190)
    sub_1405d1550(&var_198)
    *(rbx[0x32] + 0x3c) = 1
    void* rcx_11 = rbx[0x33]
    
    if (rcx_11 != 0)
        *(rbx[0x32] + 0x2c) = *(rcx_11 + 0x48)
else
    void* rdx = rbx[0x33]
    
    if (rdx != 0)
        int32_t rcx_4 = (*(rdx + 0x54) ^ *(r10 + 0x38)) | (*(rdx + 0x50) ^ *(r10 + 0x34))
            | (*(rdx + 0x4c) ^ *(r10 + 0x30)) | (*(rdx + 0x48) ^ *(r10 + 0x2c))
        
        if (rcx_4 != 0)
            goto label_1413b9cb4

int64_t var_1a0 = 0
void var_1f8
(*(*rbx + 0x68))(rbx, &var_1f8)
int32_t rax_11 = data_1439b6b8c

if (rax_11 s< 0)
    rax_11 = *(rbx + 0x16c)

void* rcx_13 = *(arg4 + 0x20)
int32_t var_2a8 = rax_11
int32_t var_2a4 = data_1439b6b90
int128_t zmm0 = *(rcx_13 + 0xb8)
int64_t var_298 = (_mm_unpacklo_ps(*(rcx_13 + 0xb0), *(rcx_13 + 0xb4))).q
int32_t var_290 = zmm0.d
zmm0 = *(rcx_13 + 0x60)
int64_t var_288 = (_mm_unpacklo_ps(*(rcx_13 + 0x40), *(rcx_13 + 0x50))).q
int32_t var_280 = zmm0.d
zmm0 = *(rcx_13 + 0x64)
int64_t var_278 = (_mm_unpacklo_ps(*(rcx_13 + 0x44), *(rcx_13 + 0x54))).q
int32_t var_270 = zmm0.d
int32_t var_330_3 = (*(rcx_13 + 0x68)).d
int64_t var_268 = (_mm_unpacklo_ps(*(rcx_13 + 0x48), *(rcx_13 + 0x58))).q
int32_t var_260 = var_330_3
int32_t var_1e4
int64_t zmm2
zmm2.d = var_1e4.d f* 0.5f
int32_t var_1e0
zmm0.d = var_1e0.d f* 0.5f
int32_t var_254 = zmm2.d
int32_t var_250 = zmm0.d

if ((*(*rbx + 0x40))(rbx, 0x3f000000) != 0)
    zmm2 = 0x3f2aaaab
    float zmm1[0x4] = var_254
    float var_1e8
    zmm0.d = (var_1e8 * 0.5f).d f* 0.666666687f
    zmm1[0] = zmm1[0] * 0.666666687f
    int32_t var_258_1 = zmm0.d
    zmm0.d = var_250.d f* 0.666666687f
    float var_254_1 = zmm1[0]
    int32_t var_250_1 = zmm0.d

int32_t var_1bc
zmm0.d = var_1bc.d f* 2f
int64_t* rcx_15 = data_143f0f180
int32_t var_24c = zmm0.d
int32_t var_1ac
zmm0.d = var_1ac.d f* 2f
int64_t var_220 = var_1a0
int32_t var_318 = 0x7f7fffff
int32_t var_324 = 0x3030301
int32_t var_248 = zmm0.d
int64_t var_320 = 0
int64_t var_314 = 0
char var_30c = 0
int64_t var_308
(*(*rcx_15 + 0x28))(rcx_15, &var_308, zmm2)
int64_t var_218 = var_308
sub_1405d1550(&var_308)
float zmm0_1 = data_1439b6af0
int64_t var_210 = *(rbx[0x32] + 0x10)
void* rcx_18 = rbx[0x32]
int32_t var_238 = *(rcx_18 + 0x20)
int32_t var_234 = *(rcx_18 + 0x24)
int32_t var_230 = *(rcx_18 + 0x28)

if (zmm0_1 > 0.00999999978f)
    float var_22c_1 = zmm0_1
else
    int32_t var_22c = 0x3c23d70a

float zmm0_2 = cosf(rbx[0x31].d f* 0.0174532924f)
int64_t* rcx_19 = data_143f0f180
float var_228 = zmm0_2
float var_224 = *(rbx + 0x18c)
int64_t var_2f0
(*(*rcx_19 + 0xf8))(rcx_19, &var_2f0, &var_2a8, &data_143ec89f0, 0, 1)
int32_t i = 0
int64_t* r13 = arg6

if (r15[1].d s> 0)
    int64_t rdi_1 = 0
    
    do
        void* r12_1 = *r15
        int32_t rax_28 = *(rdi_1 + r12_1 + 0x15a0) - *(rdi_1 + r12_1 + 0x1598)
        int32_t rax_30 = *(rdi_1 + r12_1 + 0x15a4) - *(rdi_1 + r12_1 + 0x159c)
        void* var_208
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[sx.q(*(rdi_1 + r12_1 + 0x1548))]), 
            &var_208, &data_143ecc540, 0)
        int128_t var_158
        __builtin_memset(&var_158, 0, 0x120)
        sub_1413aab70(&data_143ec4c60, *(rdi_1 + r12_1 + 0x1548), 0xf, &var_158)
        int64_t* rcx_23 = data_143f0f180
        int32_t var_370_1 = 1
        int32_t var_378_1 = 0
        int64_t var_368
        int64_t var_360
        int64_t var_358
        int32_t var_350
        int32_t var_348
        int64_t* var_300
        (*(*rcx_23 + 0xf8))(rcx_23, &var_300, &var_158, &data_143ec50d0, 0, 1, var_368, var_360, 
            var_358, var_350, var_348)
        void* const r8_3 = nullptr
        void* r13_1 = var_208
        int64_t r11_1 = var_2f0
        int64_t rcx_24 = *(*r13 + 0x18)
        int64_t r10_1 = *(*arg5 + 0x18)
        int64_t* rax_37 = var_300
        int64_t rax_38 = *(rdi_1 + r12_1 + 0x10)
        
        if (r13_1 != 0)
            int64_t rdx_9 = sx.q(*(r13_1 + 0x10c))
            void* var_200
            int64_t* rbx_1 = *(var_200 + 0x10)
            int64_t rax_40 = rbx_1[3]
            
            if (*(rax_40 + (rdx_9 << 3)) == 0)
                sub_1419ccf30(rbx_1, rdx_9.d)
                rax_40 = rbx_1[3]
            
            r8_3 = *(rax_40 + (rdx_9 << 3))
            r15 = arg3
        
        var_348 = rax_30
        var_350 = rax_28
        var_358 = rcx_24
        var_360 = r10_1
        var_368 = r11_1
        var_370_1.q = rax_37
        var_378_1.q = rax_38
        sub_1413decc0(r13_1, arg2, r8_3, r12_1 + 0x51d8 + rdi_1, 0, var_370_1, var_368, var_360, 
            var_358, var_350, var_348)
        int64_t* rbx_2 = var_300
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                char rax_46
                
                if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                    rax_46 = sub_1405949a0()
                
                if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_46 != 0))
                    (**rbx_2)(rbx_2, 1)
                else
                    bool z_1
                    
                    if (0 == *(rbx_2 + 0xc))
                        *(rbx_2 + 0xc) = 1
                        z_1 = true
                    else
                        *(rbx_2 + 0xc)
                        z_1 = false
                    
                    if (z_1)
                        int32_t rax_48 = sub_140a20af0()
                        uint64_t rdx_11 = zx.q(rax_48)
                        void* const rax_49
                        
                        if (rax_48 != 0)
                            rax_49 = *((rdx_11 u>> 0xe << 3) + &data_143cf0bf8)
                                + (zx.q(rdx_11.d) & 0x3fff) * 0x18
                        else
                            rax_49 = nullptr
                        
                        *(rax_49 + 8) = rbx_2
                        sub_1405a42f0(&data_143f02390, rdx_11.d)
        
        r13 = arg6
        i += 1
        rdi_1 += 0x5240
    while (i s< r15[1].d)

void var_2c0
sub_140b58260(&var_2c0, u"RayTracingRectLight", 1)
int64_t* rcx_32 = data_143f0f180
int64_t var_2f8
(*(*rcx_32 + 0x98))(rcx_32, &var_2f8, &var_2c0)
int64_t r14 = var_2f8
int64_t* rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_33 = *(*arg5 + 0x18)
void* rax_57 = &rdi_4[1]

if (rax_57 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rdi_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_57 = &rdi_4[1]

*(arg2 + 0x30) = rax_57
*rdi_4 = rcx_33
void*** rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_58 = &rcx_37[6]

if (rax_58 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_37 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_58 = &rcx_37[6]

*(arg2 + 0x30) = rax_58
*(arg2 + 0x14) += 1
**(arg2 + 8) = rcx_37
*(arg2 + 8) = &rcx_37[1]
rcx_37[1] = 0
rcx_37[3] = rdi_4
rcx_37[2].d = 1
*(rcx_37 + 0x24) = 1
*rcx_37 = &data_142da7798
rcx_37[4].d = 2
rcx_37[5] = r14
int64_t* rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_41 = *(*r13 + 0x18)
void* rax_62 = &rdi_9[1]

if (rax_62 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rdi_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_62 = &rdi_9[1]

*(arg2 + 0x30) = rax_62
*rdi_9 = rcx_41
void*** rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_63 = &rcx_45[6]

if (rax_63 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_45 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_63 = &rcx_45[6]

*(arg2 + 0x30) = rax_63
void**** rax_64 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_64 = rcx_45
*(arg2 + 8) = &rcx_45[1]
*rcx_45 = &data_142da7798
rcx_45[2].d = 1
rcx_45[3] = rdi_9
rcx_45[4].d = 2
*(rcx_45 + 0x24) = 1
rcx_45[5] = 0
rcx_45[1] = 0
sub_1405d1550(&var_2f8)
return sub_1405d1550(&var_2f0)
