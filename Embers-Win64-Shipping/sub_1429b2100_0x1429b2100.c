// 函数: sub_1429b2100
// 地址: 0x1429b2100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
*arg1 = &Imf_2_3::CompositeDeepScanLine::`vftable'
void* rax = j_sub_140a82f30(0xc0)
void* const rdi = rax
void* arg_8 = rax

if (rax == 0)
    rdi = nullptr
else
    __builtin_memset(rax, 0, 0x40)
    int64_t** arg_10 = rax + 0x30
    *(rax + 0x30) = sub_140e348a0()
    *(rdi + 0x40) = 0
    __builtin_memset(rdi + 0x48, 0, 0x30)
    *(rdi + 0x78) = 0x7fffffff
    *(rdi + 0x7c) = 0x7fffffff
    *(rdi + 0x80) = 0x80000000
    *(rdi + 0x84) = 0x80000000
    __builtin_memset(rdi + 0x88, 0, 0x38)

arg1[1] = rdi
return arg1
