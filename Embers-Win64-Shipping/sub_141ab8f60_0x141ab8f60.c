// 函数: sub_141ab8f60
// 地址: 0x141ab8f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r12 = &data_142d40450
int16_t* const rdi

if (arg2[4].d == 0)
    rdi = &data_142d40450
else
    rdi = arg2[3]

int64_t arg_8 = *(sub_141ae7e70() + 0x18)
int16_t* var_78
sub_140b63b70(&arg_8, &var_78)
float zmm0[0x2] = *arg2
zmm0[0] = zmm0[0] * 100f
int16_t* const r8 = &data_142d40450
int16_t* const var_88 = rdi
int32_t var_70

if (var_70 != 0)
    r8 = var_78

_mm_cvtps_pd(zmm0)
int64_t var_68
sub_140a2e390(&var_68, u"%s<W:%.1f%%> %s", r8)
int16_t* rcx_3 = var_78

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

arg2[4].d = 0

if (*(arg2 + 0x24) != 0)
    sub_1405947f0(&arg2[3], 0)

int64_t var_48
int64_t* rax_1 = sub_140b63b70(arg1 + 0x20, &var_48)
int16_t* const r8_1

if (rax_1[1].d == 0)
    r8_1 = &data_142d40450
else
    r8_1 = *rax_1

float zmm0_1[0x2] = *(arg1 + 0x30)
zmm0_1[0] = zmm0_1[0] * 100f
_mm_cvtps_pd(zmm0_1)
sub_140a2e390(&var_78, u"(Slot Name: '%s' Weight:%.1f%%)", r8_1)
int32_t r8_3

if (var_70 == 0)
    r8_3 = 0
else
    r8_3 = var_70 - 1

sub_140a20ba0(&var_68, var_78, r8_3)
int16_t* rcx_8 = var_78

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = var_48

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

bool cond:2 = 9.99999975e-06f f>= *(arg1 + 0x2c)
var_78 = nullptr
int64_t rdi_1 = var_68
int32_t var_60
int32_t var_70_1 = var_60
int64_t r14
r14.b = cond:2

if (var_60 != 0)
    sub_1405a4c70(&var_78, var_60, 0)
    memcpy(var_78, rdi_1, var_60 * 2)
else
    int32_t var_6c_1 = 0

sub_141e14220(arg2, &var_78, r14.b)
int128_t zmm1 = *(arg1 + 0x2c)
var_78 = nullptr
var_70_1.q = 0
sub_141e21d10(arg1 + 0x10, UnDecorator::getTemplateArgumentList(arg2, zmm1, &var_78))
void* rax_3 = arg2[8]
int64_t** i = *(rax_3 + 0x78)
int64_t result = sx.q(*(rax_3 + 0x80))

for (void* r14_1 = &i[result]; i != r14_1; i = &i[1])
    int64_t* rdi_2 = *i
    void* rcx_15 = *rdi_2
    
    if (rcx_15 != 0)
        result = sub_141e2af70(rcx_15, *(arg1 + 0x20))
        
        if (result.b != 0)
            result = sub_141e21f60(*rdi_2, *(arg1 + 0x20))
            
            if (result != 0)
                result = sub_141dec9d0(result, rdi_2[0x25].d[0])
                
                if (result != 0)
                    result = sub_141de9c80(result, rdi_2[0x25].d, &arg_8)
                    
                    if (result != 0)
                        int64_t arg_10 = *(result + 0x18)
                        int16_t* var_58
                        sub_140b63b70(&arg_10, &var_58)
                        int64_t arg_18 = *(*rdi_2 + 0x18)
                        sub_140b63b70(&arg_18, &var_78)
                        float zmm0_2[0x2] = *(arg1 + 0x30)
                        zmm0_2[0] = zmm0_2[0] * 100f
                        float zmm2_1[0x2] = arg_8.d
                        
                        if (var_70_1 != 0)
                            r12 = var_78
                        
                        int64_t var_80_1 = _mm_cvtps_pd(zmm0_2)
                        float var_88_1[0x2] = _mm_cvtps_pd(zmm2_1)
                        sub_140a2e390(&var_48, u"Montage('%s') Anim('%s') P(%.2f) W(%.0f%%)", r12)
                        int16_t* rcx_23 = var_78
                        
                        if (rcx_23 != 0)
                            sub_140a74f90(rcx_23)
                        
                        int16_t* rcx_24 = var_58
                        
                        if (rcx_24 != 0)
                            sub_140a74f90(rcx_24)
                        
                        int64_t rdi_3 = var_48
                        var_78 = nullptr
                        int32_t var_40
                        int32_t var_70_2 = var_40
                        
                        if (var_40 != 0)
                            sub_1405a4c70(&var_78, var_40, 0)
                            memcpy(var_78, rdi_3, var_40 * 2)
                        else
                            int32_t var_6c_2 = 0
                        
                        var_58 = nullptr
                        int32_t var_50
                        var_50.q = 0
                        result = sub_141e14220(
                            UnDecorator::getTemplateArgumentList(arg2, 0x3f800000, &var_58), 
                            &var_78, 1)
                        int64_t rcx_29 = var_48
                        
                        if (rcx_29 != 0)
                            result = sub_140a74f90(rcx_29)
                        
                        break

int64_t rcx_30 = var_68

if (rcx_30 == 0)
    return result

return sub_140a74f90(rcx_30)
