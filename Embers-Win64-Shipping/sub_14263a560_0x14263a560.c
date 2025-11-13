// 函数: sub_14263a560
// 地址: 0x14263a560
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg1 + 0x8c)
float zmm0 = *((*(*arg1 + 0x150))() + 0x520)
int16_t* rax_2 = arg1[0xc]
zmm6.d = arg1[0x11].d.d f- (zmm0 f- zmm6.d)
int16_t* var_28
int16_t* var_20

if (rax_2 != 0)
    int64_t arg_8 = *(rax_2 + 0x18)
    zmm6 = sub_140b63b70(&arg_8, &var_28)
else
    var_28 = rax_2
    sub_1405947f0(&var_28, 5)
    var_20.d = rax_2.d + 5
    
    if (rax_2.d + 5 s> var_20:4.d)
        sub_140594770(&var_28)
    
    UnDecorator::getReferenceType(var_28, u"None", 0xa)

int16_t* const r8 = &data_142d40450
_mm_cvtps_pd(arg1[0x11].d)

if (var_20.d != 0)
    r8 = var_28

int64_t var_38 = _mm_cvtps_pd(zmm6.q)
sub_140a2e390(arg2, u"TimeLimit for %s. Time: %.2f. TimeLeft: %.2f", r8)
int16_t* rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return arg2
