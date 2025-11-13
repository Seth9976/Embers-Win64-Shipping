// 函数: sub_1420f71e0
// 地址: 0x1420f71e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14
r14.b = 1
int16_t* var_98 = nullptr
int32_t var_90 = 0
sub_1420f9750()
int32_t r10 = data_143f487f8
int32_t rcx = 0
int32_t var_b8 = 0
int32_t var_b4 = 1
int32_t r8 = 0
int32_t var_a8 = 0xffffffff
int64_t* r9 = &data_143f487e0
int64_t* var_b0 = &data_143f487e0
int64_t var_a4 = 0

if (r10 != 0)
    int64_t* rax_1 = data_143f487f0
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_1420f7288:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_b4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_a4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_a4.d = r10
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_a4:4.d = r8
            var_b8 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_a8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1420f7288
        
        var_a4.d = r10

double zmm2[0x2] = var_a8.o
int16_t* const rsi = &data_142d40450
double var_28[0x2] = zmm2
double var_38[0x2] = var_b8.o
double var_88[0x2] = (&data_143f487d0).o
uint32_t rax_12 = (zmm2[0] u>> 0x20).d
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (rax_12 s< r10)
    int32_t i = var_38[1]:4.d
    
    do
        double rbx_1 = var_88[0]
        int64_t rdi_1 = sx.q(i) * 0x2c
        int64_t rax_14 = *rbx_1
        double zmm1[0x2] = *(rdi_1 + rax_14 + 0x1c)
        float zmm4_1[0x2] = *(rdi_1 + rax_14 + 0x18)
        float zmm3[0x2] = *(rdi_1 + rax_14 + 0xc)
        zmm2 = *(rdi_1 + rax_14 + 8)
        float zmm5_1[0x2] = *(rdi_1 + rax_14 + 0x10)
        int64_t var_c0_1 = (_mm_cvtps_pd((*(rdi_1 + rax_14 + 0x20))[0])).q
        int64_t var_c8_1 = (_mm_cvtps_pd(zmm1[0])).q
        float temp0_6[0x2] = _mm_cvtps_pd(zmm4_1)
        _mm_cvtps_pd(zmm3)
        double temp0_8[0x2] = _mm_cvtps_pd(zmm2[0])
        float var_d0_1[0x2] = temp0_6
        float var_d8_1[0x2] = _mm_cvtps_pd(zmm5_1)
        int16_t* var_50
        sub_140a2e390(&var_50, u"%f %f %f %f %f %f", temp0_8[0])
        int16_t* const r15_1 = &data_142d40450
        int32_t var_48
        
        if (var_48 != 0)
            r15_1 = var_50
        
        int64_t* rax_15 = sub_140b63b70(*rbx_1 + rdi_1, &var_b8)
        
        if (rax_15[1].d != 0)
            *rax_15
        
        int16_t* const var_d8_2 = r15_1
        void* const r8_3 = &data_142db0644
        
        if (r14.b != 0)
            r8_3 = &data_142d40450
        
        int64_t var_60
        sub_140a2e390(&var_60, u"%s%s %s", r8_3)
        int32_t var_58
        int32_t r8_5
        
        if (var_58 == 0)
            r8_5 = 0
        else
            r8_5 = var_58 - 1
        
        sub_140a20ba0(&var_98, var_60, r8_5)
        int64_t rcx_7 = var_60
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = var_b8.q
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int16_t* rcx_9 = var_50
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        r14.b = 0
        var_38[1].d &= not.d(var_88[1]:4.d)
        sub_14059bdd0(&var_88[1])
        i = var_38[1]:4.d
    while (i s< *(var_38[0] i+ 0x18))

if (var_90 != 0)
    rsi = var_98

int64_t result = sub_140d77020(rsi)
int16_t* rcx_12 = var_98

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
