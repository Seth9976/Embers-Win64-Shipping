// 函数: sub_1422abd10
// 地址: 0x1422abd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14228e850(arg1, arg3 + 8)
sub_14228e850(&arg1[4], arg3 + 8)
int64_t var_30 = *(arg3 + 8)
void* rax_1 = *(arg3 + 0x10)
void* var_28 = rax_1

if (rax_1 != 0)
    *(rax_1 + 8) += 1

int64_t rax_2 = *arg2
void** const var_38 = &data_142e259e0
int64_t var_20 = 0
int64_t var_18 = 0
(*(rax_2 + 0xb30))(arg2, &var_38)
int64_t* result = (*(*arg2 + 0xb40))(arg2, arg3)

if (result == 0)
    return result

sub_14228e850(&result[0x7f], arg2[0x45] + 0x258)
void* rdx_6 = arg2[0x45]
int64_t var_30_1 = *(rdx_6 + 0x258)
void* rax_4 = *(rdx_6 + 0x260)
void* var_28_1 = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

int64_t rax_5 = *result
var_38 = &data_142e259e0
int64_t var_20_1 = 0
int64_t var_18_1 = 0
return (*(rax_5 + 0xb30))(result, &var_38)
