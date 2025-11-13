// 函数: sub_140e44af0
// 地址: 0x140e44af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = png_get_io_ptr(arg1)
int64_t rdi = *(rax + 0x28)
int64_t rax_1 = rdi + arg3
*(rax + 0x28) = rax_1

if (rax_1 s> *(rax + 0x30))
    sub_140a4f990(rax + 0x20)

return memcpy(*(rax + 0x20) + rdi, arg2, arg3.d) __tailcall
