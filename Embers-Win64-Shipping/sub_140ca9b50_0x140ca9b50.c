// 函数: sub_140ca9b50
// 地址: 0x140ca9b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140cacde0(*arg1 + 0x10, *arg3, *arg4, *arg5, *arg6, arg7)
void* rcx_2 = *arg1
int32_t r8_1 = arg1[2].d
int64_t* rdx_1 = arg1[1]
void* rax_3 = *(rcx_2 + 0x30)
*arg2 = rax_3

if (rax_3 != 0)
    *(rax_3 + 0x48) += 1

sub_140ccf340(rcx_2, rdx_1, r8_1, 1)
return arg2
