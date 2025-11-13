// 函数: sub_140fc5a80
// 地址: 0x140fc5a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r8 = &data_142d40450
int16_t* const r9

if (arg1[6].d == 0)
    r9 = &data_142d40450
else
    r9 = arg1[5]

if (arg1[4].d != 0)
    r8 = arg1[3]

int64_t* rcx = arg1[2]
void var_58
int64_t* rax_3 = (*(*rcx + 0x40))(rcx, &var_58, r8, r9, arg1[7].w, *(arg1 + 0x3c), *(arg1 + 0x44))
void* rdx_1 = arg1[0xc]
void* rcx_1 = &arg1[0xe]

if (rdx_1 != 0)
    rcx_1 = rdx_1

int64_t rdx_2 = *rcx_1
arg1[0xa]((*(rdx_2 + 8))(rcx_1, rdx_2), rax_3)
int64_t result = sub_14094ab00(&rax_3[7])
int64_t rcx_4 = rax_3[4]

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

int64_t rcx_5 = rax_3[2]

if (rcx_5 != 0)
    result = sub_140a74f90(rcx_5)

int64_t rcx_6 = *rax_3

if (rcx_6 != 0)
    result = sub_140a74f90(rcx_6)

if (arg1 == 0)
    return result

return (*(*arg1 + 0x10))(arg1, 1)
