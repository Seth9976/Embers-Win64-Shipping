// 函数: sub_140d74b90
// 地址: 0x140d74b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 8) == 0)
    return 

int64_t* rcx_1 = *(rcx + 0x10)

if ((*(*rcx_1 + 0x10))(rcx_1).b == 0)
    return 

void* rax_2 = *arg1
void* rdx_1 = *(rax_2 + 0x18)
int64_t* rcx_2 = *(rax_2 + 0x10)
int64_t* var_38 = rcx_2
void* var_30_1 = rdx_1

if (rdx_1 != 0)
    *(rdx_1 + 8) += 1

int64_t* rax_4 = (*(*rcx_2 + 0xa0))()
int64_t rdx_2 = *rax_4
int32_t rdx_3
rdx_3.b = (*(rdx_2 + 0x10))(rax_4, rdx_2) != 0
void var_28
int512_t zmm1 = sub_140d6ed90(&var_28, rdx_3, arg2)
sub_140597060(&var_38)
**arg1[2] = sub_140d6fdb0(&var_28, zmm1)
int64_t var_20

if (var_20 != 0)
    sub_140a74f90(var_20)

*arg1[1] = 0
