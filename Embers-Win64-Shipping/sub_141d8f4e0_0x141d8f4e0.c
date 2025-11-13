// 函数: sub_141d8f4e0
// 地址: 0x141d8f4e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx != 0)
    *(arg1 + 0x20) = 0
    (**rcx)(rcx, 1)

sub_140a464c0()
uint64_t var_48[0x2]
uint64_t* rax_2 = sub_141d8fb90(&var_48, arg1 + 0x30, zx.q(*(arg1 + 0x40)))
uint64_t rdx_1

if (rax_2[1].d == 0)
    rdx_1 = &data_142d40450
else
    rdx_1 = *rax_2

int64_t* result = (*(data_14399ea08 + 0x20))(&data_14399ea08, rdx_1, 0)
uint64_t rcx_2 = var_48[0]
int64_t* result_1 = result

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

if (result_1 != 0)
    int64_t var_30 = 0
    void** const var_38 = &data_143238d00
    int32_t var_28_1 = 0
    int64_t var_20
    __builtin_memset(&var_20, 0, 0x18)
    sub_1405947f0(&var_30, 0xb)
    int32_t rax_4 = var_28_1 + 0xb
    var_28_1 = rax_4
    
    if (rax_4 s> 0)
        sub_140594770(&var_30)
    
    __builtin_wcscpy(var_30, u"checkpoint")
    int64_t* rcx_6 = *(arg1 + 0x18)
    int64_t var_68
    int512_t zmm1_1 = sub_140a2e390(&var_68, u"%ld", (*(*rcx_6 + 0x20))(rcx_6))
    int64_t rcx_8 = var_20
    
    if (rcx_8 != 0)
        zmm1_1 = sub_140a74f90(rcx_8)
    
    int64_t rax_7 = var_68
    int32_t var_60
    int64_t var_18
    var_18.d = var_60
    int32_t var_5c
    var_18:4.d = var_5c
    int64_t var_10
    var_10.d = arg2
    var_10:4.d = arg2
    int64_t var_58
    sub_140937030(&var_38, &var_58, 1)
    result = sub_140a1d9d0(result_1, &var_58, zmm1_1)
    int64_t rcx_11 = var_58
    
    if (rcx_11 != 0)
        result = sub_140a74f90(rcx_11)
    
    if (rax_7 != 0)
        result = sub_140a74f90(rax_7)
    
    int64_t rcx_13 = var_30
    
    if (rcx_13 != 0)
        result = sub_140a74f90(rcx_13)

*(arg1 + 0x40) += 1

if (result_1 == 0)
    return result

return (**result_1)(result_1, 1)
