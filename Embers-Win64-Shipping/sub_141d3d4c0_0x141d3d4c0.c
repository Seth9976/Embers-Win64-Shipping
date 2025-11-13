// 函数: sub_141d3d4c0
// 地址: 0x141d3d4c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140b3db50()
void arg_8
void* result = sub_140b3dbe0(*sub_140b58170(&arg_8, "ChaosSolvers", 1))

if (result == 0 || *(result + 0x18) == 0)
    return result

int64_t* rcx_2 = *(result + 0x30)
int64_t var_38_1 = 0
int32_t zmm0_1 = *data_143f37488
void** const var_28_1 = &data_142f12de8
void (* var_48)(int32_t* arg1, int64_t* arg2) = sub_141d35b90
int32_t var_20_1 = zmm0_1
return (*(*rcx_2 + 0x10))(rcx_2, &var_48)
