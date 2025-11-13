// 函数: sub_1406879a0
// 地址: 0x1406879a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 1
*arg1 = &data_142d8bdc8
arg1[4] = 0
arg1[5] = 0xf
arg1[2].b = 0
__ExceptionPtrCreate(&arg1[6])
_Mtx_init_in_situ(&arg1[8], 2)
_Cnd_init_in_situ(&arg1[0x12])
arg1[0x1b].b = 0
*arg1 = &data_142d8bf00
*(arg1 + 0xdc) = 0
arg1[0x1c].w = 0
*(arg1 + 0xe2) = 0
arg1[0x1d] = 0
int64_t* rcx_3 = *(arg2 + 0x38)
int64_t* var_20 = nullptr
void var_58

if (rcx_3 != 0)
    var_20 = (**rcx_3)(rcx_3, &var_58)

int64_t rax_3 = *(arg2 + 0x40)
arg1[0x25] = 0
void*** rax_4 = j_sub_140a82f30(0x50)
*rax_4 = &data_142d8c618
rax_4[8] = 0

if (var_20 != 0)
    rax_4[8] = (**var_20)(var_20, &rax_4[1])

rax_4[9] = rax_3
arg1[0x25] = rax_4

if (var_20 != 0)
    void* rdx_2
    rdx_2.b = var_20 != &var_58
    (*(*var_20 + 0x20))(var_20, rdx_2)

return arg1
