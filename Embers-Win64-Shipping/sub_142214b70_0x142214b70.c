// 函数: sub_142214b70
// 地址: 0x142214b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x48]
uint64_t var_48
int32_t arg_8

if (rcx != 0)
    int64_t var_58_1 = arg5
    (*(*rcx + 0x620))(rcx)
else
    arg_8 = 0
    var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, (rcx + 0xf).d)
    int32_t rax = var_40_1 + 0xf
    var_40_1 = rax
    
    if (rax s> 0)
        sub_140594770(&var_48)
    
    UnDecorator::getReferenceType(var_48, u"NO PlayerState", 0x1e)
    sub_142409af0(arg2 + 0x98, &var_48, &arg_8)
    uint64_t rcx_5 = var_48
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int64_t var_58_2 = arg5
sub_141dbfad0(arg1, arg2, arg3, arg4)
var_48.o = data_142d3f670
(*(*(arg2 + 0x98) + 0x20))(arg2 + 0x98, &var_48)
int32_t arg_14 = 0
int32_t rcx_9 = *sub_140b5e500(&arg_8, 0x65)

for (int64_t* i = *arg3; i != &i[sx.q(arg3[1].d)]; i = &i[1])
    if (*i == rcx_9.q)
        float zmm2_1[0x2] = _mm_cvtps_pd(*(arg1 + 0x22c))
        arg_8 = 0
        sub_140a2e390(&var_48, u"BaseEyeHeight %f", zmm2_1)
        sub_142409af0(arg2 + 0x98, &var_48, &arg_8)
        uint64_t rcx_12 = var_48
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        break

int64_t* rcx_13 = arg1[0x4b]

if (rcx_13 != 0)
    return (*(*rcx_13 + 0x620))(rcx_13, arg2, arg3, arg4, arg5)

var_48.o = data_142d8c9b0
(*(*(arg2 + 0x98) + 0x20))(arg2 + 0x98, &var_48)
arg_8 = 0
var_48 = 0
int32_t var_40_2 = 0
sub_1405947f0(&var_48, 0xe)
int32_t rax_7 = var_40_2 + 0xe
var_40_2 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_48)

UnDecorator::getReferenceType(var_48, u"NO Controller", 0x1c)
uint64_t result = sub_142409af0(arg2 + 0x98, &var_48, &arg_8)
uint64_t rcx_19 = var_48

if (rcx_19 == 0)
    return result

return sub_140a74f90(rcx_19)
