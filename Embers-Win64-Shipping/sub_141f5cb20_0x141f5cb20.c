// 函数: sub_141f5cb20
// 地址: 0x141f5cb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140a2e390(&var_38, u"PaintedVertices(%d)=", zx.q(*(arg1 + 0x28)))
int32_t var_30
int32_t r8_2

if (var_30 == 0)
    r8_2 = 0
else
    r8_2 = var_30 - 1

sub_140a20ba0(arg2, var_38, r8_2)
int64_t rcx_2 = var_38

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t rcx_3 = arg2[1].d
int32_t r8_3 = *(arg1 + 0x28)
int32_t rax = r8_3 * 0x7d
int32_t rdx_2 = rcx_3 - 1 + rax

if (rcx_3 == 0)
    rdx_2 = rax

if (rdx_2 + 1 s> *(arg2 + 0xc))
    sub_1405947f0(arg2, rdx_2 + 1)
    r8_3 = *(arg1 + 0x28)

int32_t rbp = 0

if (r8_3 s> 0)
    int64_t* rbx_1 = nullptr
    int32_t rax_2
    
    do
        int64_t rdi_1 = *(arg1 + 0x20)
        float zmm2[0x2] = *(rbx_1 + rdi_1)
        float zmm0_1[0x2] = *(rbx_1 + rdi_1 + 8)
        _mm_cvtps_pd(*(rbx_1 + rdi_1 + 4))
        zmm2 = _mm_cvtps_pd(zmm2)
        float var_48_1[0x2] = _mm_cvtps_pd(zmm0_1)
        sub_140a2e390(&var_38, u"((Position=(X=%.6f,Y=%.6f,Z=%.6f),", zmm2)
        int32_t r8_6
        
        if (var_30 == 0)
            r8_6 = 0
        else
            r8_6 = var_30 - 1
        
        sub_140a20ba0(arg2, var_38, r8_6)
        int64_t rcx_7 = var_38
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        float zmm3[0x2] = *(rbx_1 + rdi_1 + 0x14)
        zmm2 = *(rbx_1 + rdi_1 + 0x10)
        float zmm1_1[0x2] = *(rbx_1 + rdi_1 + 0x18)
        float zmm0_2[0x2] = _mm_cvtps_pd(*(rbx_1 + rdi_1 + 0x1c))
        _mm_cvtps_pd(zmm3)
        zmm2 = _mm_cvtps_pd(zmm2)
        zmm1_1 = _mm_cvtps_pd(zmm1_1)
        int64_t var_28
        sub_140a2e390(&var_28, u"(Normal=(X=%d,Y=%d,Z=%d,W=%d),", zmm2)
        int32_t var_20
        int32_t r8_9
        
        if (var_20 == 0)
            r8_9 = 0
        else
            r8_9 = var_20 - 1
        
        sub_140a20ba0(arg2, var_28, r8_9)
        int64_t rcx_10 = var_28
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        uint32_t rcx_11 = zx.d(*(rbx_1 + rdi_1 + 0xe))
        *(rbx_1 + rdi_1 + 0xd)
        uint64_t r8_10 = zx.q(*(rbx_1 + rdi_1 + 0xc))
        zmm0_2[0] = zx.d(*(rbx_1 + rdi_1 + 0xf))
        zmm1_1[0] = rcx_11
        int64_t var_18
        sub_140a2e390(&var_18, u"(Color=(B=%d,G=%d,R=%d,A=%d))", r8_10)
        int32_t var_10
        int32_t r8_12
        
        if (var_10 == 0)
            r8_12 = 0
        else
            r8_12 = var_10 - 1
        
        sub_140a20ba0(arg2, var_18, r8_12)
        int64_t rcx_14 = var_18
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        rax_2 = *(arg1 + 0x28)
        rbp += 1
        
        if (rbp != rax_2)
            sub_140a20ba0(arg2, &data_142d7fa60, 1)
            rax_2 = *(arg1 + 0x28)
        
        rbx_1 = &rbx_1[4]
    while (rbp s< rax_2)

return sub_140a20ba0(arg2, &data_142d404d4, 1) __tailcall
