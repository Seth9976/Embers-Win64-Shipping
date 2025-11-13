// 函数: sub_14093c020
// 地址: 0x14093c020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int32_t arg_8
sub_14093f560(arg1 + 8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_3

if (rax.d == 0xffffffff)
    rax_3 = nullptr
else
    rax_3 = rax * 0x30 + *(arg1 + 8)

char rdi_1 = *arg3
int32_t* rbx = rax_3 + 8

if (rax_3 == 0)
    rbx = nullptr

if (rbx != 0)
    int32_t rax_4 = *rbx
    
    if (rax_4 == 6 || rax_4 == 8 || rax_4 == 0xa)
        j_sub_140a74f90(*(rbx + 8))
    
    *(rbx + 8) = 0
    *(rbx + 0x10) = 0
    *rbx = 9
    rbx[2].b = rdi_1
    rbx[6] = arg4
    return 0

int32_t result_1 = 9
int64_t var_30 = 0
int64_t var_28 = 0
var_30.b = rdi_1
int64_t* var_48 = &arg_10
int32_t var_20 = arg4
int32_t* var_40 = &result_1
int32_t var_1c = 0xffffffff
sub_14093ba30(arg1 + 8, &arg_8, &var_48, nullptr)
int32_t result = result_1

if (result != 6 && result != 8 && result != 0xa)
    return result

return j_sub_140a74f90(var_30)
