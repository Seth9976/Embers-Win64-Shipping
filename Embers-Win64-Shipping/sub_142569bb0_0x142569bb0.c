// 函数: sub_142569bb0
// 地址: 0x142569bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_30
__builtin_memset(&var_30, 0, 0x20)
void** const var_38 = &data_142e259e0
sub_14094ded0(&var_38, arg2)
int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f6b908), &var_38)
var_38 = &data_142e259e0
int64_t var_20

if (var_20 != 0)
    result = sub_140a74f90(var_20)

int64_t* rbx_1 = var_30:8.q

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp1_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_1 + 8))(rbx_1, 1)

*arg2 = &data_142e259e0
int64_t rcx_6 = arg2[3]

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

int64_t* rbx_2 = arg2[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp3_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp3_1 == 1)
            return (*(*rbx_2 + 8))(rbx_2, 1)

return result
