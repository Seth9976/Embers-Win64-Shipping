// 函数: sub_1426aedd0
// 地址: 0x1426aedd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm0 = zx.o(*arg4)
int32_t rax = arg4[1].d
uint64_t var_28 = zmm0.q
float zmm4[0x2] = var_28.d
int32_t arg_10 = 0
float zmm2[0x2] = rax
uint64_t var_18
uint64_t* rcx_3
int32_t rdi

if (zmm4[0] f!= data_143b57f70 || _mm_shuffle_ps(zmm0, zmm0, 0x55).d f!= data_143b57f74
        || zmm2[0] f!= data_143b57f78)
    uint64_t var_38_1 = (_mm_cvtps_pd(zmm2)).q
    sub_140a2e390(&var_18, u"P=%f Y=%f R=%f", _mm_cvtps_pd(zmm4))
    rcx_3 = &var_18
    rdi = 1
else
    var_28 = 0
    int32_t var_20
    var_20.q = 0
    sub_1405947f0(&var_28, 0xa)
    int32_t var_20_1 = var_20 + 0xa
    int32_t var_1c
    
    if (var_20 + 0xa s> var_1c)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"(invalid)", 0x14)
    rcx_3 = &var_28
    rdi = 2

*arg2 = *rcx_3
*rcx_3 = 0
arg2[1].d = rcx_3[1].d
*(arg2 + 0xc) = *(rcx_3 + 0xc)
rcx_3[1] = 0

if ((rdi.b & 2) != 0)
    uint64_t rcx_5 = var_28
    rdi &= 0xfffffffd
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

if ((rdi.b & 1) != 0)
    uint64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

return arg2
