// 函数: sub_140a53400
// 地址: 0x140a53400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result
double zmm0
result, zmm0 = sub_140a3f800(arg1, arg3)

if (result != 0)
    _wtof(arg2)
    arg1[8].d = fconvert.s(zmm0)
    result = sub_140a3f800(arg1, arg3)
    
    if (result != 0)
        sub_140a3aaf0(arg1[7], &arg1[8], (arg1[3].d).b, arg3)
        return sub_140a4c3d0(arg1, zx.q(arg3))

return result
