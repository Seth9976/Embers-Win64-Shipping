// 函数: sub_140ab2150
// 地址: 0x140ab2150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
int64_t* rax_1 = (*(*rcx + 0x28))(rcx)
int64_t r9 = *rax_1

if ((*(r9 + 8))(rax_1, arg4, arg5, r9) != 0xb)
    return 0

int64_t* rcx_2 = *arg1
void* rcx_3 = (*(*rcx_2 + 0x28))(rcx_2)[2]

if (rcx_3 != 0)
    sub_140ab20f0(rcx_3, arg2, arg3)

int64_t* result
result.b = 1
return result
