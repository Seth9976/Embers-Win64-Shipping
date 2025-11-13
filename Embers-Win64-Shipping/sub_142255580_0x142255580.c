// 函数: sub_142255580
// 地址: 0x142255580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x148)

if (rcx == 0)
    return 

char rax_1 = (*(arg1 + 0xc0)).b
int32_t var_18
int32_t zmm1

if ((rax_1 & 4) != 0)
    zmm1 = *(arg1 + 0xc4)
    var_18 = *(arg1 + 0xc8)
    int32_t var_14_1 = zmm1
    int32_t var_10_1 = 0x7f7fffff
    int32_t var_c_1 = 1
    (*(*rcx + 0x140))(rcx, 0, &var_18)
    int64_t* rcx_1 = *(arg1 + 0x148)
    zmm1 = *(arg1 + 0xc4)
    var_18 = *(arg1 + 0xc8)
    int32_t var_14_2 = zmm1
    int32_t var_10_2 = 0x7f7fffff
    int32_t var_c_2 = 1
    (*(*rcx_1 + 0x140))(rcx_1, 1, &var_18)
    int64_t* rcx_2 = *(arg1 + 0x148)
    zmm1 = *(arg1 + 0xc4)
    var_18 = *(arg1 + 0xc8)
    int32_t var_14_3 = zmm1
    int32_t var_10_3 = 0x7f7fffff
    int32_t var_c_3 = 1
    (*(*rcx_2 + 0x140))(rcx_2, 2, &var_18)
    rax_1 = (*(arg1 + 0xc0)).b

if ((rax_1 & 3) != 3)
    return 

int64_t* rcx_3 = *(arg1 + 0x148)
zmm1 = *(arg1 + 0xcc)
var_18 = *(arg1 + 0xd0)
int32_t var_14_4 = zmm1
int32_t var_10_4 = 0x7f7fffff
int32_t var_c_4 = 1
(*(*rcx_3 + 0x140))(rcx_3, 5, &var_18)
