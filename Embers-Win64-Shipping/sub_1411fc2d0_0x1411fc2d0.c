// 函数: sub_1411fc2d0
// 地址: 0x1411fc2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
int64_t rbx = 0
int64_t* r14 = arg1
int32_t rax = arg1[1].d
uint128_t zmm6 = arg3
uint64_t rsi = 0
int64_t var_198 = 0
int32_t rdx_1 = rax * data_1439b6284
int64_t var_190 = 0

if (rdx_1 != 0)
    zmm6 = sub_1411ecad0(&var_198, rdx_1)
    rax = r14[1].d
    rsi = zx.q(var_190.d)
    rbx = var_198

if (rax s> 0)
    int128_t* rdi_1 = nullptr
    uint128_t zmm7 = 0x3f800000
    uint128_t zmm8 = arg2.d
    uint128_t zmm9 = arg2:4.d
    uint128_t zmm0
    zmm0.d = zmm8.d f* zmm6.d
    int64_t var_180_1 = 0
    uint128_t zmm1
    zmm1.d = zmm9.d f* zmm6.d
    int32_t var_184_1 = zmm9.d
    int128_t zmm10 = zmm8.d.o
    int32_t var_154_1 = zmm1.d
    int32_t var_158_1 = zmm0.d
    
    do
        void* r14_1 = *r14
        int32_t r15_1 = (rsi + 1).d
        int32_t rax_1 = 1
        var_190.d = r15_1
        zmm1 = *(rdi_1 + r14_1)
        
        if (*(rdi_1 + r14_1 + 0x78) s> 1)
            rax_1 = -1
        
        uint128_t var_168 = zmm1
        zmm1.d = zmm1.d f* _mm_cvtepi32_ps(zx.o(rax_1)).d
        var_168.d = zmm1.d
        
        if (r15_1 s> var_190:4.d)
            sub_1411ec960(&var_198, rsi.d)
            r15_1 = var_190.d
            rbx = var_198
        
        int32_t rsi_1 = r15_1 + 1
        var_190.d = rsi_1
        *(rbx + sx.q(rsi.d) * 0x10) = var_168
        
        if (rsi_1 s> var_190:4.d)
            sub_1411ec960(&var_198, r15_1)
            rsi_1 = var_190.d
            rbx = var_198
        
        int32_t r15_2 = rsi_1 + 1
        var_190.d = r15_2
        *(rbx + sx.q(r15_1) * 0x10) = *(rdi_1 + r14_1 + 0x10)
        zmm0.d = zmm9.d f* *(rdi_1 + r14_1 + 0x64)
        zmm1.d = zmm8.d f* *(rdi_1 + r14_1 + 0x60)
        int32_t var_14c_1 = zmm0.d
        int32_t var_150_1 = zmm1.d
        
        if (r15_2 s> var_190:4.d)
            sub_1411ec960(&var_198, rsi_1)
            r15_2 = var_190.d
            rbx = var_198
        
        int32_t r13_1 = r15_2 + 1
        var_190.d = r13_1
        *(rbx + sx.q(rsi_1) * 0x10) = var_158_1.o
        int32_t rax_11 = *(rdi_1 + r14_1 + 0x74) - *(rdi_1 + r14_1 + 0x6c)
        zmm1 = _mm_cvtepi32_ps(zx.o(*(rdi_1 + r14_1 + 0x70) - *(rdi_1 + r14_1 + 0x68)))
        zmm0.d = zmm7.d f/ zmm1.d
        arg3 = _mm_cvtepi32_ps(zx.o(rax_11))
        int32_t var_188_2 = zmm1.d
        zmm1.d = zmm7.d f/ arg3.d
        int32_t var_184_2 = arg3.d
        var_180_1:4.d = zmm1.d
        var_180_1.d = zmm0.d
        
        if (r13_1 s> var_190:4.d)
            sub_1411ec960(&var_198, r15_2)
            r13_1 = var_190.d
            rbx = var_198
        
        int32_t rsi_2 = r13_1 + 1
        var_190.d = rsi_2
        *(rbx + sx.q(r15_2) * 0x10) = var_188_2.o
        
        if (rsi_2 s> var_190:4.d)
            sub_1411ec960(&var_198, r13_1)
            rsi_2 = var_190.d
            rbx = var_198
        
        int128_t* rcx_7 = r14_1 + 0x20 + rdi_1
        *(rbx + sx.q(r13_1) * 0x10) = zmm10
        int32_t var_108_1 = (*rcx_7).d
        int32_t var_104_1 = rcx_7[1].d.d
        int32_t var_100_1 = rcx_7[2].d.d
        int32_t var_fc_1 = rcx_7[3].d.d
        int32_t var_f8_1 = (*(rcx_7 + 4)).d
        int32_t var_f4_1 = (*(rcx_7 + 0x14)).d
        int32_t var_f0_1 = (*(rcx_7 + 0x24)).d
        int32_t var_ec_1 = (*(rcx_7 + 0x34)).d
        int32_t var_e8_1 = (*(rcx_7 + 8)).d
        int32_t var_e4_1 = (*(rcx_7 + 0x18)).d
        int32_t var_e0_1 = (*(rcx_7 + 0x28)).d
        int32_t var_dc_1 = (*(rcx_7 + 0x38)).d
        uint32_t var_c8[0x4][0x4]
        uint32_t (* rax_16)[0x4]
        rax_16, zmm7, zmm8, zmm9, zmm10 = sub_140631b10(rcx_7, &var_c8)
        int32_t r15_3 = rsi_2 + 1
        var_190.d = r15_3
        int32_t var_148_1 = (*rax_16).d
        int32_t var_144_1 = rax_16[1][0].d
        int32_t var_140_1 = rax_16[2][0].d
        int32_t var_13c_1 = rax_16[3][0].d
        int32_t var_138_1 = (*rax_16)[1].d
        int32_t var_134_1 = (*rax_16)[5].d
        int32_t var_130_1 = (*rax_16)[9].d
        int32_t var_12c_1 = (*rax_16)[0xd].d
        int32_t var_128_1 = (*rax_16)[2].d
        int32_t var_124_1 = (*rax_16)[6].d
        int32_t var_120_1 = (*rax_16)[0xa].d
        int32_t var_11c_1 = (*rax_16)[0xe].d
        
        if (r15_3 s> var_190:4.d)
            sub_1411ec960(&var_198, rsi_2)
            r15_3 = var_190.d
            rbx = var_198
        
        int32_t rsi_3 = r15_3 + 1
        var_190.d = rsi_3
        *(rbx + sx.q(rsi_2) * 0x10) = var_148_1.o
        
        if (rsi_3 s> var_190:4.d)
            sub_1411ec960(&var_198, r15_3)
            rsi_3 = var_190.d
            rbx = var_198
        
        int32_t r15_4 = rsi_3 + 1
        var_190.d = r15_4
        *(rbx + sx.q(r15_3) * 0x10) = var_138_1.o
        
        if (r15_4 s> var_190:4.d)
            sub_1411ec960(&var_198, rsi_3)
            r15_4 = var_190.d
            rbx = var_198
        
        int32_t rsi_4 = r15_4 + 1
        var_190.d = rsi_4
        *(rbx + sx.q(rsi_3) * 0x10) = var_128_1.o
        
        if (rsi_4 s> var_190:4.d)
            sub_1411ec960(&var_198, r15_4)
            rsi_4 = var_190.d
            rbx = var_198
        
        int32_t r13_2 = rsi_4 + 1
        var_190.d = r13_2
        *(rbx + sx.q(r15_4) * 0x10) = var_108_1.o
        
        if (r13_2 s> var_190:4.d)
            sub_1411ec960(&var_198, rsi_4)
            r13_2 = var_190.d
            rbx = var_198
        
        int32_t r15_5 = r13_2 + 1
        var_190.d = r15_5
        *(rbx + sx.q(rsi_4) * 0x10) = var_f8_1.o
        
        if (r15_5 s> var_190:4.d)
            sub_1411ec960(&var_198, r13_2)
            r15_5 = var_190.d
            rbx = var_198
        
        uint128_t zmm6_1 = zx.o(0)
        var_168 = zmm6_1
        *(rbx + sx.q(r13_2) * 0x10) = var_e8_1.o
        int64_t rax_29 = sx.q(*(rdi_1 + r14_1 + 0x90))
        
        if (rax_29.d u<= 3)
            *(&var_168 + (rax_29 << 2)) = 0x3f800000
            zmm6_1 = var_168
        
        rsi = zx.q(r15_5 + 1)
        var_190.d = rsi.d
        
        if (rsi.d s> var_190:4.d)
            zmm6_1 = sub_1411ec960(&var_198, r15_5)
            rsi = zx.q(var_190.d)
            rbx = var_198
        
        r14 = arg1
        i += 1
        rdi_1 = &rdi_1[0xa]
        *(rbx + sx.q(r15_5) * 0x10) = zmm6_1
    while (i s< r14[1].d)

if (rsi.d s> data_1439b6288)
    int32_t temp0_4
    int32_t temp1_1
    temp0_4:temp1_1 = sx.q((rsi * 5).d)
    data_1439b6288 = (temp1_1 + (temp0_4 & 3)) s>> 2
    sub_1411e8c70(&data_1439b6280)
    sub_141131d40(&data_1439b6280)

int64_t* rcx_15 = data_143f0f180
void* r8 = data_1439b6290
memcpy((*(*rcx_15 + 0x130))(rcx_15, &data_143f02b98, r8, 0, *(r8 + 0x18), 1), rbx, rsi.d << 4)
data_1439b6290
jump(*(*data_143f0f180 + 0x138))
