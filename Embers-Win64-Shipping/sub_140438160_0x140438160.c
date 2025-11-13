// 函数: sub_140438160
// 地址: 0x140438160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 8
    *(rax + 0xc) = 1
    *rbx = &data_142e13040

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"GeometryCacheVertexInfo", 1), rbx)
