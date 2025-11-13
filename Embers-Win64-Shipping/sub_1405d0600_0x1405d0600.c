// 函数: sub_1405d0600
// 地址: 0x1405d0600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_58 = 0
int32_t var_50 = 0
sub_1405947f0(&var_58, 0xf)
int32_t rax = var_50 + 0xf
var_50 = rax

if (rax s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, u"LensDistortion", 0x1e)
sub_140b7c510()
int64_t r9 = data_143e19eb0
void var_18
int64_t* rcx_3 = *(*(r9 + 0x38))(&data_143e19eb0, &var_18, &var_58, r9)
int64_t var_28
int64_t* rax_3 = (*(*rcx_3 + 0x18))(rcx_3, &var_28)
int16_t* const rax_4

if (rax_3[1].d == 0)
    rax_4 = &data_142d40450
else
    rax_4 = *rax_3

int16_t* const var_38 = rax_4
uint64_t var_48 = 0
wchar16 const* const var_30 = u"Shaders"
int64_t var_40 = 0
sub_140b0f5f0(&var_48, &var_38, 2)
int64_t rcx_5 = var_28

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

int64_t rcx_8 = var_58

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

var_58 = 0
int32_t var_50_1 = 0
sub_1405947f0(&var_58, 0x17)
int32_t rax_7 = var_50_1 + 0x17
var_50_1 = rax_7

if (rax_7 s> 0)
    sub_140594770(&var_58)

int64_t result = UnDecorator::getReferenceType(var_58, u"/Plugin/LensDistortion", 0x2e)
int64_t rcx_12 = var_58

if (rcx_12 != 0)
    result = sub_140a74f90(rcx_12)

uint64_t rcx_13 = var_48

if (rcx_13 == 0)
    return result

return sub_140a74f90(rcx_13)
