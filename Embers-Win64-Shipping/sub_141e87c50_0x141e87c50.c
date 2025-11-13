// 函数: sub_141e87c50
// 地址: 0x141e87c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax

if (arg3 != 0)
    rax = sub_14243ade0(arg3)

float zmm0

if (arg3 != 0 && rax == 0)
    if ((*(arg1 + 0x370) & 4) != 0 && arg5 != 0)
        goto label_141e87c9a
    
    zmm0 = 1f
else if (arg5 != 0)
label_141e87c9a:
    
    if ((*(arg5 + 0xb0) & 1) == 0)
        return 1
    
    void* const rdx = 0x100
    
    if (sub_140a80ea0() != 0)
        rdx = 0xe0
    
    zmm0 = sub_142364870(arg5, rdx + arg1, arg7.d)
    
    if (not(zmm0 >= 9.99999975e-05f))
        zmm0 = 9.99999975e-05f
else
    zmm0 = 1f

int128_t zmm2
zmm2.d = arg6.d f/ zmm0
return sub_141e81570(arg1, arg4, zmm2) __tailcall
