// 函数: sub_14077f400
// 地址: 0x14077f400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14077f7e0(arg1)
*arg1 = &data_142db0eb8
__builtin_memcpy(&arg1[0x1a], 
    "\x03\x00\x00\x00\x03\x00\x00\x00\x03\x00\x00\x00\x00\x00\x80\x3f\x00", 0x11)
*(arg1 + 0xe4) = 0x42c80000
arg1[0x1d].d = 0x42c80000
*(arg1 + 0xec) = 0x42c80000
void*** rax = j_sub_140a82f30(0xc8)
void*** rdi = rax

if (rax == 0)
    rdi = nullptr
else
    memset(rax, 0, 0xc8)
    sub_140744780(rdi)
    *rdi = &data_142db0b28

int64_t* rcx_2 = arg1[5]

if (rcx_2 != rdi)
    arg1[5] = rdi
    
    if (rcx_2 != 0)
        (**rcx_2)(rcx_2, 1)

return arg1
