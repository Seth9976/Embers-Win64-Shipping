// 函数: sub_1418695d0
// 地址: 0x1418695d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int64_t rax_1 = *arg2
int32_t var_38 = 1
int64_t var_30
(*(rax_1 + 0x10))(arg2, &var_30)
int32_t var_20 = var_38
int64_t var_18_1 = var_30
int32_t var_28
int32_t var_10_1 = var_28
int32_t var_24
int32_t var_c_1 = var_24
void* rax_6 = *arg1
var_30 = 0
var_28.q = 0
int64_t* rcx_1 = *(rax_6 + 0x58)
(*(*rcx_1 + 0x10))(rcx_1, &var_20)
int64_t rcx_2 = var_30

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t* rax_9 = (*(*arg2 + 0x10))(arg2, &var_38)
int32_t rax_10 = rax_9[1].d
int16_t* rdx_3

if (rax_10 == 0)
    rdx_3 = &data_142d40450
else
    rdx_3 = *rax_9

int32_t rcx_4 = rax_10 - 1

if (rax_10 == 0)
    rcx_4 = 0

*sub_14185c7c0(*arg1 + 0x180, sub_1405969c0(rcx_4, rdx_3), rax_9) = 0
int64_t rcx_6 = var_38.q

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)
