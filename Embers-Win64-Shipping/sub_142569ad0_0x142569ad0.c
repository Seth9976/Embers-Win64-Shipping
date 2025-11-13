// 函数: sub_142569ad0
// 地址: 0x142569ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_38 = 0
int64_t var_30 = 0
int64_t var_24 = 0
int64_t var_1c = 0

if (&var_38 != arg2)
    int32_t rbx_1 = arg2[1].d
    int64_t rdi_1 = *arg2
    var_30.d = rbx_1
    
    if (rbx_1 != 0)
        sub_1405a4c70(&var_38, rbx_1, 0)
        memcpy(var_38, rdi_1, rbx_1 * 2)

char r8
char var_28 = r8
char r9
char var_27 = r9
var_24.o = *arg3
int64_t result = (*(*arg1 + 0x210))(arg1, sub_140d1fd30(arg1, data_143f6b900), &var_38)
uint64_t rcx_4 = var_38

if (rcx_4 == 0)
    return result

return sub_140a74f90(rcx_4)
