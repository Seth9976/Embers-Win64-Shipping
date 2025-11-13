// 函数: sub_1404f1a30
// 地址: 0x1404f1a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 0xd8
    *(rax + 0xc) = 8
    *rbx = &data_14304b498

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"AnimNode_ResetRoot", 1), rbx)
