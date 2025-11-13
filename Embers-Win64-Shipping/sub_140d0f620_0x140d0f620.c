// 函数: sub_140d0f620
// 地址: 0x140d0f620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *(*arg2 + 8)

if ((rdi[5].b & 2) != 0)
    sub_1408f4c10(arg3)

int64_t* result = sub_140cf0bc0(rdi, arg3, arg4)

if ((rdi[5].b & 1) == 0)
    return result

return sub_1408f4c10(arg3)
