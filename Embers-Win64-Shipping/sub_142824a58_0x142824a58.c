// 函数: sub_142824a58
// 地址: 0x142824a58
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result_2 = j_sub_140a82f30(0x118)
int64_t* result_1 = result_2

if (result_2 != 0)
    result_2 = sub_142826f90(result_2, arg2)

int64_t* rdi_1 = *arg1
*arg1 = result_2

if (rdi_1 != 0)
    sub_1428271c8(rdi_1)
    j_sub_140a74f90(rdi_1)

int64_t* result = j_sub_140a82f30(0x20)
result_1 = result

if (result != 0)
    result = sub_142826854(result)

void* rdi_2 = arg1[1]
arg1[1] = result

if (rdi_2 == 0)
    return result

sub_1428242c8(rdi_2 + 0x10, rdi_2 + 0x10, *(*(rdi_2 + 0x10) + 8))
sub_14058ba50(*(rdi_2 + 0x10), 0x60)
return j_sub_140a74f90(rdi_2)
