// 函数: sub_1423ec890
// 地址: 0x1423ec890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm7 = data_143f5b278
void* r14 = *(data_143f5b298 + 0x50)
int128_t zmm0 = sub_142218a30()
float zmm0_1 = sub_142218a10()
int32_t* rax_1

if (zmm7.d f<= zmm0.d)
    rax_1 = &data_14399f63c
    
    if (zmm7.d f> zmm0_1)
        rax_1 = &data_14399f644
else
    rax_1 = &data_14399f638

int32_t arg_8 = *rax_1
float zmm0_2 = sub_142005cc0(r14) * 1.10000002f
int16_t* const rsi = &data_142d40450
int64_t* rcx_1 = *(arg1 + 0x7d0)
int32_t r15 = int.d(zmm0_2)
int16_t* var_68
int32_t var_60
void var_58
int32_t rbx_2

if (rcx_1 == 0)
    rbx_2 = arg6
else
    int32_t rax_4 = (*(*rcx_1 + 0x278))(rcx_1)
    int16_t* var_78 = *(*(arg1 + 0x7d0) + 0x18)
    sub_140b63b70(&var_78, &var_68)
    int16_t* const rdx_2 = &data_142d40450
    
    if (var_60 != 0)
        rdx_2 = var_68
    
    int32_t r13_2 = arg5 - sub_142006f60(r14, rdx_2)
    wchar16 const* const rdx_3
    
    if (rax_4 == 0)
        sub_140acc920(&var_58, &data_14399f638)
        rdx_3 = u"%s : Closed"
    label_1423ec9f5:
        int16_t* const r8 = &data_142d40450
        
        if (var_60 != 0)
            r8 = var_68
        
        sub_140a2e390(&var_78, rdx_3, r8)
        int16_t* r9 = &data_142d40450
        int32_t var_70
        
        if (var_70 != 0)
            r9 = var_78
        
        uint128_t zmm2_1 = _mm_cvtepi32_ps(zx.o(arg6))
        sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(r13_2)), zmm2_1, r9, r14, &var_58, &data_14399f5e0)
        int16_t* rcx_10 = var_78
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
    else
        if (rax_4 == 1)
            sub_140acc920(&var_58, &data_14399f638)
            rdx_3 = u"%s : Error"
            goto label_1423ec9f5
        
        if (rax_4 == 2)
            sub_140acc920(&var_58, &data_14399f63c)
            rdx_3 = u"%s : Synchronized"
            goto label_1423ec9f5
        
        if (rax_4 == 3)
            sub_140acc920(&var_58, &data_14399f644)
            rdx_3 = u"%s : Synchronizing"
            goto label_1423ec9f5
    int16_t* rcx_12 = var_68
    rbx_2 = arg6 + r15
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

sub_140acc920(&var_58, &arg_8)
sub_140a2e390(&var_68, u"%5.2f FPS", _mm_cvtps_pd(data_143f5b274.q).q)
int16_t* r9_1 = &data_142d40450

if (var_60 != 0)
    r9_1 = var_68

int128_t zmm6_2 = sub_142409910(arg4, _mm_cvtepi32_ps(zx.o(arg5)), _mm_cvtepi32_ps(zx.o(rbx_2)), 
    r9_1, r14, &var_58, &data_14399f5e0)
int16_t* rcx_16 = var_68

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int32_t rbx_3 = rbx_2 + r15
sub_140acc920(&var_58, &arg_8)
sub_140a2e390(&var_68, u"%5.2f ms", _mm_cvtps_pd(data_143f5b278.q).q)
int16_t* r9_2 = &data_142d40450

if (var_60 != 0)
    r9_2 = var_68

int128_t zmm6_3 =
    sub_142409910(arg4, zmm6_2, _mm_cvtepi32_ps(zx.o(rbx_3)), r9_2, r14, &var_58, &data_14399f5e0)
int16_t* rcx_20 = var_68

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int32_t rbx_4 = rbx_3 + r15

if (data_143f5b27c f<= (zx.o(0)).d)
    return zx.q(rbx_4)

sub_140acc920(&var_58, &arg_8)
sub_140a2e390(&var_68, u"%5.2f MRays/fr", _mm_cvtps_pd(data_143f5b27c.q).q)
int16_t* r9_3 = &data_142d40450

if (var_60 != 0)
    r9_3 = var_68

int128_t zmm6_4 =
    sub_142409910(arg4, zmm6_3, _mm_cvtepi32_ps(zx.o(rbx_4)), r9_3, r14, &var_58, &data_14399f5e0)
int16_t* rcx_24 = var_68

if (rcx_24 != 0)
    sub_140a74f90(rcx_24)

int32_t rbx_5 = rbx_4 + r15
sub_140acc920(&var_58, &arg_8)
float zmm0_4[0x2] = data_143f5b27c
zmm0_4[0] = zmm0_4[0] f* data_143f5b274
sub_140a2e390(&var_68, u"%5.2f MRays/s", _mm_cvtps_pd(zmm0_4).q)

if (var_60 != 0)
    rsi = var_68

sub_142409910(arg4, zmm6_4, _mm_cvtepi32_ps(zx.o(rbx_5)), rsi, r14, &var_58, &data_14399f5e0)
int16_t* rcx_28 = var_68

if (rcx_28 != 0)
    sub_140a74f90(rcx_28)

return zx.q(r15 + rbx_5)
