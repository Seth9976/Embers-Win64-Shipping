// 函数: sub_1426aef10
// 地址: 0x1426aef10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t zmm5 = *arg4
int128_t zmm1 = data_143b57f80.d
int32_t rax = arg4[1].d
int32_t arg_10 = 0
int64_t var_28 = zmm5
int64_t var_18
int64_t* rcx_1
int32_t rdi

if ((zmm1 ^ 0x80000000).d f>= zmm5.d || zmm5.d f>= zmm1.d)
label_1426aefd4:
    var_28 = 0
    int32_t var_20
    var_20.q = 0
    sub_1405947f0(&var_28, 0xa)
    int32_t var_20_1 = var_20 + 0xa
    int32_t var_1c
    
    if (var_20 + 0xa s> var_1c)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"(invalid)", 0x14)
    rcx_1 = &var_28
    rdi = 2
else
    int128_t zmm2 = data_143b57f80:4.d
    zmm1 = var_28:4.d
    
    if ((zmm2 ^ 0x80000000).d f>= zmm1.d || zmm1.d f>= zmm2.d)
        goto label_1426aefd4
    
    int128_t zmm3 = data_143b57f88
    zmm2 = rax
    
    if ((zmm3 ^ 0x80000000).d f>= zmm2.d || zmm2.d f>= zmm3.d)
        goto label_1426aefd4
    
    int128_t zmm0 = _mm_cvtps_pd(zmm2.q)
    _mm_cvtps_pd(zmm1.q)
    zmm2.q = fconvert.d(zmm5.d)
    int64_t var_38_1 = zmm0.q
    sub_140a2e390(&var_18, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm2.q)
    rcx_1 = &var_18
    rdi = 1

*arg2 = *rcx_1
*rcx_1 = 0
arg2[1].d = rcx_1[1].d
*(arg2 + 0xc) = *(rcx_1 + 0xc)
rcx_1[1] = 0

if ((rdi.b & 2) != 0)
    int64_t rcx_5 = var_28
    rdi &= 0xfffffffd
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if ((rdi.b & 1) != 0)
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

return arg2
