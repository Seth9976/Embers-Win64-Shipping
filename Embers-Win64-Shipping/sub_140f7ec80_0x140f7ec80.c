// 函数: sub_140f7ec80
// 地址: 0x140f7ec80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x2b0)
float zmm6[0x4] = zx.o(0)

if (not(arg2[0] < 0f))
    zmm6 = __minss_xmmss_memss(arg2[0], 0x3f800000)

float arg_8
int32_t* rax
int512_t zmm1
rax, zmm1 = sub_140f030e0(*(rdi + 0x48), &arg_8)
zmm1.o = arg2
zmm6[0] = zmm6[0] f* *rax
*(rdi + 0x768) = zmm6[0]
return sub_140f44620(arg1 + 0x3d0, zmm1) __tailcall
