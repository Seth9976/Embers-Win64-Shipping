// 函数: sub_141ffbe60
// 地址: 0x141ffbe60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141dbb100(arg1)
int32_t rbx = *(arg1 + 0xec)
char rax = sub_140b5b8a0(arg1[0x1d].d, 0)
char rax_1
int32_t rcx_1

if ((rbx == 0 & rax) == 0)
    int32_t rbx_1 = *(arg1 + 0xec)
    rax_1 = sub_140b5b8a0(arg1[0x1d].d, 0x11a)
    rcx_1.b = rbx_1 == 0

if ((rbx == 0 & rax) != 0 || (rcx_1.b & rax_1) != 0)
    if (sub_141dcdc50(arg1) == 3)
    label_141ffbede:
        void* result = sub_141dc9ff0(arg1)
        *(result + 0x22a) = 1
        return result
else if (sub_141dcdc50(arg1) == 3)
    goto label_141ffbede

return sub_141dd7200(arg1, 0) __tailcall
