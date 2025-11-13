// 函数: sub_141daf090
// 地址: 0x141daf090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x230) s<= 1)
    int64_t* rbx_1 = nullptr
    int64_t var_30_1 = 6
    int64_t var_28
    __builtin_memset(&var_28, 0, 0x1c)
    void** const var_38 = &data_1432388c8
    
    if (arg3[1].d != 0)
        rbx_1 = *arg3
    
    (*(*rbx_1 + 0x48))(rbx_1, &var_38)
    int32_t i_2
    int32_t i_1 = i_2
    int64_t* var_18
    int64_t* rbx_2 = var_18
    
    if (i_1 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx_2
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx_2 = &rbx_2[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
        rbx_2 = var_18
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
    
    return sub_141d8e6b0(&var_28)

int64_t* rax_1 = sub_141802500()
int64_t r8 = *rax_1
int64_t* var_48
(*(r8 + 0x40))(rax_1, &var_48, r8)
int16_t* const r8_1 = &data_142d40450
int64_t* r14_1 = var_48

if (arg2[1].d != 0)
    *arg2

if (*(arg1 + 0x230) != 0)
    r8_1 = *(arg1 + 0x228)

int64_t* var_58
sub_140a2e390(&var_58, u"%sevent?group=%s", r8_1)
(*(*r14_1 + 0x50))(r14_1, &var_58)
int64_t* rcx_7 = var_58

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

var_58 = nullptr
int32_t var_50_1 = 0
sub_1405947f0(&var_58, 4)
int32_t rax_3 = var_50_1 + 4
var_50_1 = rax_3

if (rax_3 s> 0)
    sub_140594770(&var_58)

UnDecorator::getReferenceType(var_58, &data_142d85f90, 8)
int64_t* rcx_11 = var_48
(*(*rcx_11 + 0x48))(rcx_11, &var_58)
int64_t* rcx_12 = var_58

if (rcx_12 != 0)
    sub_140a74f90(rcx_12)

var_58 = nullptr
var_50_1 = 0

if (arg3 != &var_58 && arg3[1].d != 0)
    int64_t* rcx_13 = *arg3
    
    if (rcx_13 != 0)
        (*(*rcx_13 + 0x40))(rcx_13, &var_58)

void*** rax_6 = sub_140a84c80(0, 0x30, 0)

if (rax_6 != 0)
    *rax_6 = &data_14323aa78
    rax_6[1] = 0
    rax_6[2].d = 0
    
    if (&var_58 != &rax_6[1] && var_50_1 != 0)
        int64_t* rcx_14 = var_58
        
        if (rcx_14 != 0)
            (*(*rcx_14 + 0x40))(rcx_14)
    
    rax_6[4] = sub_140a387b0()
    *rax_6 = &data_14323aad0

sub_140745b20(&var_58)
int64_t* r14_2 = var_48
var_58 = nullptr
var_50_1 = 0

if (rax_6 != 0)
    (*rax_6)[8](rax_6, &var_58)

sub_141da4650((*(*r14_2 + 0x90))(r14_2), arg1, sub_141dac120, &var_58)
uint128_t zmm0_1 = var_48.o
var_58.o = zmm0_1
void* rax_12 = _mm_bsrli_si128(zmm0_1, 8).q

if (rax_12 != 0)
    *(rax_12 + 8) += 1

void*** result = sub_141da6730(arg1, 8, &var_58, 0, 0)

if (rax_6 != 0)
    (*rax_6)[7](rax_6, 0)
    result = sub_140a84c80(rax_6, 0, 0)
    
    if (result != 0)
        result = sub_140a74f90(result)

int64_t* var_40

if (var_40 != 0)
    var_40[1].d -= 1
    
    if (var_40[1].d == 1)
        result = (**var_40)(var_40)
        int32_t temp2_1 = *(var_40 + 0xc)
        *(var_40 + 0xc) -= 1
        
        if (temp2_1 == 1)
            return (*(*var_40 + 8))(var_40, 1)

return result
