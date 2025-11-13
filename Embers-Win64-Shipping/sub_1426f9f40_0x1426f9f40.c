// 函数: sub_1426f9f40
// 地址: 0x1426f9f40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void* rbx_1 = nullptr
void* rax_2 = (*(*arg2 + 8))(arg2)
void* rax_3 = sub_140d41340()
void* rcx_1 = *(rax_2 + 0x10)
int64_t rdx = sx.q(*(rax_3 + 0x38))

if (rdx.d s<= *(rcx_1 + 0x38) && *(*(rcx_1 + 0x30) + (rdx << 3)) == rax_3 + 0x30)
    rbx_1 = rax_2

int32_t arg_10
sub_140d3a3a0(&arg_10, rbx_1)
int32_t rax

if (*(arg1 + 0xf0) != arg_10 || *(arg1 + 0xf4) != arg3)
    if (sub_140d3e110(arg1 + 0xf0).b != 0)
        rax.b = 0
    else if (sub_140d3e110(&arg_10).b != 0)
        rax.b = 0
    else
        rax.b = 1
else
    rax.b = 1

if (rax.b == 0)
    return 

(*(*arg2 + 0x50))(arg2, arg1)
*(arg1 + 0xf0) = 0xffffffff
*(arg1 + 0xf4) = 0
