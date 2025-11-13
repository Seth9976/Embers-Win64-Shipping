// 函数: sub_141b4b3f0
// 地址: 0x141b4b3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *arg1
int64_t* rdi = arg1[1]
void* r8 = *(rbx + 0x40)

if (*(r8 + 0x28) == 0xffffffff)
    (*(*(r8 + 0x20) + 0x28))(r8 + 0x20)
    r8 = *(rbx + 0x40)

int64_t* rcx_1 = data_143f0f180
void arg_8
memcpy((*(*rcx_1 + 0x510))(rcx_1, &data_143f02b98, *(r8 + 8), 0, 1, &arg_8, 0, 1), *rdi, 
    rdi[3].d * *(rdi + 0x14) * rdi[2].d)
int64_t* rcx_3 = data_143f0f180
void* var_20
var_20.b = 1
(*(*rcx_3 + 0x518))(rcx_3, &data_143f02b98, *(*(rbx + 0x40) + 8), 0, 0, var_20)
int64_t rcx_4 = *rdi

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return j_sub_140a74f90(rdi)
