// 函数: sub_1404e3920
// 地址: 0x1404e3920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 0x31
void* rax = &data_143f1efc0
int64_t i

do
    __builtin_memset(rax - 0x30, 0, 0x20)
    void* rdx_1 = rax - 0x10
    *rax = 0
    *(rax + 8) = 0
    *(rax + 0xc) = 0x80
    void* rcx_1 = *rax
    rax += 0x60
    
    if (rcx_1 != 0)
        rdx_1 = rcx_1
    
    *rdx_1 = 0
    *(rdx_1 + 8) = 0
    *(rax - 0x50) = 0xffffffff
    *(rax - 0x4c) = 0
    *(rax - 0x40) = 0
    *(rax - 0x38) = 0
    i = i_1
    i_1 -= 1
while (i != 1)
data_143f201f0 = 0
return atexit(sub_142cf3000) __tailcall
