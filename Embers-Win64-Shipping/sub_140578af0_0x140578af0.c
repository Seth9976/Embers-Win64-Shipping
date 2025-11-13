// 函数: sub_140578af0
// 地址: 0x140578af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = j_sub_140a82f30(0x10)
void*** rbx = rax

if (rax == 0)
    rbx = nullptr
else
    rax[1].d = 0x18
    *(rax + 0xc) = 8
    *rbx = &data_14309f858

void arg_8
return sub_140bda860(*sub_140b58260(&arg_8, u"BehaviorTreeTemplateInfo", 1), rbx)
