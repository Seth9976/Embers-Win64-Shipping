// 函数: sub_141bdbc20
// 地址: 0x141bdbc20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(sub_141ba8260(arg1, arg2))

if (rdi.d == 0xffffffff)
    int32_t rax
    rax.b = 0
    return rax

if (*(*(arg1 + 0xda8) + rdi * 0x10) == *(arg1 + 0xde8))
    sub_141b98740(arg1)

int64_t r9_1
r9_1.b = 1
sub_140dbae50(arg1 + 0xda8, rdi.d, 1, r9_1.b)
void* rcx_2 = *(arg1 + 0xdb8)

if (rcx_2 != 0)
    int64_t* rcx_3 = *(rcx_2 + 0x450)
    (*(*rcx_3 + 0x240))(rcx_3)

int64_t rax_1
rax_1.b = 1
return rax_1
