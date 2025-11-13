// 函数: sub_141d3d950
// 地址: 0x141d3d950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2

if (*(arg1 + 0x30) == 0 || sub_1417b0240(&arg_10) == 0)
    return 

int64_t* rbx_1 = *(arg1 + 0x40)
int64_t rdi_1 = 0
uint64_t r14_2 = sx.q(*(arg1 + 0x48)) << 3 u>> 3

if (rbx_1 u> &rbx_1[sx.q(*(arg1 + 0x48))])
    r14_2 = 0

if (r14_2 == 0)
    return 

do
    int64_t* rcx_1 = *(arg1 + 0x30)
    int64_t rdx = *rbx_1
    int64_t var_58_1 = 0
    int32_t var_40_1 = arg_10
    void** const var_48_1 = &data_142ffb030
    int64_t (* var_68)(int32_t* arg1, int64_t* arg2) = sub_141d35c20
    (*(*rcx_1 + 8))(rcx_1, rdx, &var_68)
    rdi_1 += 1
    rbx_1 = &rbx_1[1]
while (rdi_1 != r14_2)
