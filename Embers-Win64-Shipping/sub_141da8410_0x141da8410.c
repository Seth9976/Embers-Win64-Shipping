// 函数: sub_141da8410
// 地址: 0x141da8410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x230) s<= 1)
    int64_t* rbx_1 = nullptr
    int64_t var_40_1 = 6
    int64_t var_38
    __builtin_memset(&var_38, 0, 0x1c)
    void** const var_48 = &data_1432388c8
    int64_t* var_28
    
    if (arg4[1].d != 0)
        int64_t* rcx = *arg4
        
        if (rcx != 0)
            if ((*(*rcx + 0x28))(rcx) != 0)
                if (arg4[1].d != 0)
                    rbx_1 = *arg4
                
                (*(*rbx_1 + 0x50))(rbx_1, &var_48)
            
            rbx_1 = var_28
    
    int32_t i_2
    int32_t i_1 = i_2
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx_1 = &rbx_1[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_1 = var_28
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    return sub_141d8e6b0(&var_38)

int64_t* rax_4 = sub_141802500()
int64_t r8 = *rax_4
int64_t* var_68
(*(r8 + 0x40))(rax_4, &var_68, r8)
int64_t* r15_1 = var_68
int64_t var_58
int64_t* rax_5 = sub_141da9ca0(&var_58, arg3)
int16_t* const r8_1 = &data_142d40450
int16_t* const rax_6

if (rax_5[1].d == 0)
    rax_6 = &data_142d40450
else
    rax_6 = *rax_5

if (arg2[1].d != 0)
    *arg2

if (*(arg1 + 0x230) != 0)
    r8_1 = *(arg1 + 0x228)

int16_t* const var_88_1 = rax_6
int32_t var_90_1 = *(arg2 + 0x14)
int32_t var_98_1 = arg2[2].d
int64_t var_78
sub_140a2e390(&var_78, u"%sreplay?app=%s&version=%u&cl=%u&recent=%s", r8_1)
(*(*r15_1 + 0x50))(r15_1, &var_78)
int64_t rcx_9 = var_78

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

int64_t rcx_10 = var_58

if (rcx_10 != 0)
    sub_140a74f90(rcx_10)

var_78 = 0
int32_t var_70_1 = 0
sub_1405947f0(&var_78, 4)
int32_t rax_10 = var_70_1 + 4
var_70_1 = rax_10

if (rax_10 s> 0)
    sub_140594770(&var_78)

UnDecorator::getReferenceType(var_78, &data_142d85f90, 8)
int64_t* rcx_14 = var_68
(*(*rcx_14 + 0x48))(rcx_14, &var_78)
int64_t rcx_15 = var_78

if (rcx_15 != 0)
    sub_140a74f90(rcx_15)

int64_t* r14_1 = var_68
var_78 = 0
var_70_1 = 0

if (arg4 != &var_78 && arg4[1].d != 0)
    int64_t* rcx_16 = *arg4
    
    if (rcx_16 != 0)
        (*(*rcx_16 + 0x40))(rcx_16, &var_78)

sub_141da4650((*(*r14_1 + 0x90))(r14_1), arg1, sub_141dac120, &var_78)
uint128_t zmm0_1 = var_68.o
var_58.o = zmm0_1
void* rax_15 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_15 != 0)
    *(rax_15 + 8) += 1

void*** result = sub_141da6730(arg1, 8, &var_58, 0, 0)
int64_t* var_60

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        result = (**var_60)(var_60)
        int32_t temp2_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_60 + 8))(var_60, 1)

return result
