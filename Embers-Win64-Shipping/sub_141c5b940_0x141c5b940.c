// 函数: sub_141c5b940
// 地址: 0x141c5b940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = &arg1[0xb2]
*arg1 = arg1[0xb6]
*(rbx + 8) = 0

if (*(rbx + 0xc) s<= 0xffffffff)
    sub_1405a5410(rbx, 0)

int32_t rdx = arg1[0xb6]
int32_t var_f8
float zmm0_2[0x4]
float zmm1_2[0x4]
double zmm2[0x2]

if ((*(arg2 + 0x3d0) & 1) == 0)
    rbx = sub_141c5d950(arg3, rdx)
else
    int128_t zmm6
    int128_t var_38_1 = zmm6
    uint32_t zmm7[0x4]
    uint32_t var_48_1[0x4] = zmm7
    uint32_t zmm8[0x4]
    uint32_t var_58_1[0x4] = zmm8
    int64_t var_f0
    
    if (rdx != 1)
        if (rdx == 2)
            zmm7 = *(arg2 + 0x390)
            *(arg2 + 0x394)
            zmm8 = *(arg2 + 0x398) ^ 0x80000000
            var_f8 = 0
            uint32_t zmm0_3[0x4]
            uint32_t zmm6_2[0x4]
            zmm0_3, zmm6_2 = sub_140a3f4a0(zmm7, zmm8)
            var_f0.d = zmm0_3[0]
            zmm7[0] = zmm7[0] f* zmm7[0]
            zmm8[0] = zmm8[0] f* zmm8[0]
            zmm7[0] = zmm7[0] f+ zmm8[0]
            uint32_t zmm0_4[0x4] = sub_140a3f4a0(_mm_sqrt_ss(0, zmm7[0]), zmm6_2)
            float zmm2_1 = *(arg2 + 0x390)
            uint32_t zmm1_4[0x4] = *(arg2 + 0x398)
            int64_t rsi_1 = sx.q(*(rbx + 8))
            uint32_t var_f4_2 = zmm0_4[0]
            zmm0_4 = *(arg2 + 0x394)
            zmm0_4[0] = zmm0_4[0] f* zmm0_4[0]
            int32_t rax_1 = (rsi_1 + 1).d
            *(rbx + 8) = rax_1
            zmm1_4[0] = zmm1_4[0] f* zmm1_4[0]
            var_f0:4.d = _mm_sqrt_ss(0, zmm2_1 * zmm2_1 f+ zmm0_4[0] f+ zmm1_4[0])[0]
            
            if (rax_1 s> *(rbx + 0xc))
                sub_1405a4f90(rbx)
            
            zmm0_4 = var_f8.o
            int64_t rax_2 = *rbx
            var_f8 = 0
            *(rax_2 + rsi_1 * 0x10) = zmm0_4
            zmm7 = *(arg2 + 0x39c)
            zmm8 = *(arg2 + 0x3a4) ^ 0x80000000
            *(arg2 + 0x3a0)
            uint32_t zmm0_5[0x4]
            uint32_t zmm6_4[0x4]
            zmm0_5, zmm6_4 = sub_140a3f4a0(zmm7, zmm8)
            var_f0.d = zmm0_5[0]
            zmm7[0] = zmm7[0] f* zmm7[0]
            zmm8[0] = zmm8[0] f* zmm8[0]
            zmm7[0] = zmm7[0] f+ zmm8[0]
            zmm0_2 = sub_140a3f4a0(_mm_sqrt_ss(0, zmm7[0]), zmm6_4)
            zmm2 = *(arg2 + 0x39c)
            zmm1_2 = *(arg2 + 0x3a4)
            float var_f4_3 = zmm0_2[0]
            zmm0_2 = *(arg2 + 0x3a0)
            goto label_141c5bba1
        
        rbx = sub_141c5d950(arg3, rdx)
    else
        zmm7 = *(arg2 + 0x350)
        *(arg2 + 0x354)
        zmm8 = *(arg2 + 0x358) ^ data_142d3f780
        data_142d3f780
        var_f8 = 2
        float zmm0_1[0x4]
        uint32_t zmm6_1[0x4]
        zmm0_1, zmm6_1 = sub_140a3f4a0(zmm7, zmm8)
        var_f0.d = zmm0_1[0]
        zmm7[0] = zmm7[0] f* zmm7[0]
        zmm8[0] = zmm8[0] f* zmm8[0]
        zmm7[0] = zmm7[0] f+ zmm8[0]
        zmm0_2 = sub_140a3f4a0(_mm_sqrt_ss(0, zmm7[0]), zmm6_1)
        zmm2 = *(arg2 + 0x350)
        zmm1_2 = *(arg2 + 0x358)
        float var_f4_1 = zmm0_2[0]
        zmm0_2 = *(arg2 + 0x354)
    label_141c5bba1:
        int64_t rdi_1 = sx.q(*(rbx + 8))
        zmm0_2[0] = zmm0_2[0] * zmm0_2[0]
        zmm2[0].d = zmm2[0].d f* zmm2[0].d
        int32_t rax_3 = (rdi_1 + 1).d
        zmm1_2[0] = zmm1_2[0] * zmm1_2[0]
        *(rbx + 8) = rax_3
        zmm2[0].d = zmm2[0].d f+ zmm0_2[0]
        zmm2[0].d = zmm2[0].d f+ zmm1_2[0]
        var_f0:4.d = _mm_sqrt_ss(0, zmm2[0].d)[0]
        
        if (rax_3 s> *(rbx + 0xc))
            sub_1405a4f90(rbx)
        
        *(*rbx + rdi_1 * 0x10) = var_f8.o

*(arg1 + 8) = rbx
void* r15 = &arg1[0x9e]
int32_t rbx_1 = *(r15 + 0x28)
void* r13 = r15 + 0x10
int32_t var_f4_4 = 1
int32_t rcx_9 = 0
var_f8 = 0
int32_t r8 = 0
void* var_f0_1 = r13
int32_t var_e8 = 0xffffffff
int64_t var_e4 = 0

if (rbx_1 != 0)
    void* rax_7 = *(r13 + 0x10)
    void* r9_1 = r13
    
    if (rax_7 != 0)
        r9_1 = rax_7
    
    int32_t temp0_6
    int32_t temp1_1
    temp0_6:temp1_1 = sx.q(rbx_1 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_141c5bcbb:
        int32_t rax_14 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_7
        temp0_7, rflags_1 = _bit_scan_reverse(rax_14)
        int32_t var_f4_5 = rax_14
        int32_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0x20
        else
            rax_15 = 0x1f - temp0_7
        
        var_e4.d = r8 - rax_15 + 0x1f
        
        if (r8 - rax_15 + 0x1f s> rbx_1)
            var_e4.d = rbx_1
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_9)
            r8 += 0x20
            rcx_9 += 1
            var_e4:4.d = r8
            var_f8 = rcx_9
            
            if (rdx_6.d s>= (temp1_1 + (temp0_6 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            var_e8 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_141c5bcbb
        
        var_e4.d = rbx_1

int32_t rdx_7 = *(r15 + 0x28)
zmm2 = var_e8.o
void* var_d8 = r15
double var_c0[0x2] = zmm2
int32_t rsi_2 = 0xffffffff << (rdx_7.b & 0x1f)
float var_d0[0x4] = var_f8.o
int32_t r8_3 = rdx_7 s>> 5
int32_t r9_3 = rdx_7 & 0xffffffe0
int64_t var_78 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int32_t var_e8_1 = rsi_2
var_e4.d = rdx_7
zmm1_2 = var_d0
float var_98[0x4] = var_d8.o

if (rdx_7 != rbx_1)
    void* rax_17 = *(r13 + 0x10)
    void* r10_1 = r13
    
    if (rax_17 != 0)
        r10_1 = rax_17
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_1 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & rsi_2
    
    if (rdx_11 != 0)
    label_141c5bd93:
        int32_t rax_24 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_9
        temp0_9, rflags_2 = _bit_scan_reverse(rax_24)
        int32_t r11_1
        
        if (rax_24 == 0)
            r11_1 = 0x20
        else
            r11_1 = 0x1f - temp0_9
        
        var_e4.d = r9_3 - r11_1 + 0x1f
        
        if (r9_3 - r11_1 + 0x1f s> rbx_1)
            var_e4.d = rbx_1
    else
        while (true)
            int64_t rcx_14 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_14.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_14 << 2) + 4)
            var_e8_1 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_141c5bd93
        
        var_e4.d = rbx_1

uint32_t r12_1 = (var_e8_1.q u>> 0x20).d

while (true)
    int64_t result = sx.q(zmm1_2[3])
    int64_t* rsi_3 = var_98[0].q
    
    if (result.d == r12_1 && zmm1_2[0].q == r13 && rsi_3 == r15)
        return result
    
    int64_t rsi_4 = *rsi_3
    int64_t rdi_3 = result << 6
    int64_t* rcx_16 = *(rdi_3 + rsi_4 + 0x28)
    (*(*rcx_16 + 0x18))(rcx_16)
    int64_t* r15_1 = *(rdi_3 + rsi_4 + 0x18)
    
    if (r15_1 == 0)
        int64_t* rcx_21 = *(rdi_3 + rsi_4 + 0x10)
        
        if (rcx_21 != 0)
            var_f8.q = *(arg1 + 0x40)
            var_f0_1.d = arg1[0xb6]
            var_e8_1.q = *(rdi_3 + rsi_4 + 0x20)
            var_e4 = arg1
            (*(*rcx_21 + 8))(rcx_21, &var_f8, *(rdi_3 + rsi_4 + 0x28))
        else if (*(rdi_3 + rsi_4 + 0x30) != 0)
            void* rdi_5 = *(rdi_3 + rsi_4 + 0x28)
            int64_t* rax_38 = *(arg1 + 0x40)
            
            if (rdi_5 + 8 != rax_38)
                int64_t rsi_6 = sx.q(rax_38[1].d)
                int64_t r15_2 = *rax_38
                int32_t r8_5 = *(rdi_5 + 0x14)
                *(rdi_5 + 0x10) = rsi_6.d
                
                if (rsi_6.d != 0 || r8_5 != 0)
                    sub_141c457d0(rdi_5 + 8, rsi_6.d, r8_5)
                    memcpy(*(rdi_5 + 8), r15_2, (rsi_6 << 2).d)
                else
                    *(rdi_5 + 0x14) = rsi_6.d
            
            zmm0_2 = *(rdi_5 + 0x20)
            *(rdi_5 + 0x18) = arg1[0xb6]
            *(rdi_5 + 0x30) = zmm0_2
            *(rdi_5 + 0x20) = *(arg1 + 0x20)
    else
        zmm0_2 = data_14399f720
        int64_t* rcx_17 = *(arg1 + 0x40)
        var_d8 = &data_143208358
        __builtin_memset(&var_d0, 0, 0x14)
        var_c0 = zmm0_2
        float var_a8_1[0x4] = zmm0_2
        
        if (&var_d0 != rcx_17)
            var_d0[0].q = *rcx_17
            *rcx_17 = 0
            var_d0[2] = rcx_17[1].d
            var_d0[3] = *(rcx_17 + 0xc)
            rcx_17[1] = 0
            r15_1 = *(rdi_3 + rsi_4 + 0x18)
            zmm0_2 = var_c0
        
        int64_t rbx_2 = *(rdi_3 + rsi_4 + 0x20)
        int64_t rdi_4 = *(rdi_3 + rsi_4 + 0x28)
        float var_a8_2[0x4] = zmm0_2
        var_c0[0].d = arg1[0xb6]
        var_c0 = *(arg1 + 0x20)
        int64_t rsi_5 = *r15_1
        sub_141c4bff0()
        (*(rsi_5 + 8))(r15_1, &var_d8, &data_143a13038, rdi_4, rbx_2)
        int64_t* rbx_3 = *(arg1 + 0x40)
        
        if (rbx_3 != &var_d0)
            int64_t rcx_19 = *rbx_3
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            *rbx_3 = var_d0[0].q
            var_d0[0].q = 0
            rbx_3[1].d = var_d0[2]
            *(rbx_3 + 0xc) = var_d0[3]
            var_d0[2].q = 0
        
        int64_t rcx_20 = var_d0[0].q
        
        if (rcx_20 != 0)
            sub_140a74f90(rcx_20)
    
    zmm1_2[2] &= not.d(var_98[3])
    sub_14059bdd0(&var_98[2])
    r15 = &arg1[0x9e]
