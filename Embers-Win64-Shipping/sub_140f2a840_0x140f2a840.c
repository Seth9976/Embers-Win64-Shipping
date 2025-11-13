// 函数: sub_140f2a840
// 地址: 0x140f2a840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x80)
void*** rdi = rax

if (rax == 0)
    rdi = rax
else
    sub_140ddb700(rax)
    __builtin_memset(&rdi[4], 0, 0x19)
    rdi[8] = 0
    rdi[9].d = 0
    *rdi = &data_142ee4fc0
    rdi[0xa] = 0
    rdi[0xb] = 0
    rdi[0xc].d = arg2
    *(rdi + 0x64) = 1
    rdi[0xd].d = arg3
    *(rdi + 0x6c) = 1
    rdi[0xe].d = arg4
    *(rdi + 0x74) = data_143dbb1f0.d
    rdi[0xf].d = data_143dbb1f0:4.d

return sub_140f49aa0(arg1, rdi) __tailcall
