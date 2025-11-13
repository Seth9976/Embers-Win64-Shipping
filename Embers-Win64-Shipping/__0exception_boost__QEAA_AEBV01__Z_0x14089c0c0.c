// 函数: ??0exception@boost@@QEAA@AEBV01@@Z
// 地址: 0x14089c0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142dfb0e0
int64_t* rcx = *(arg2 + 8)
arg1[1] = rcx

if (rcx != 0)
    (*(*rcx + 0x18))()

arg1[2] = *(arg2 + 0x10)
arg1[3] = *(arg2 + 0x18)
arg1[4].d = *(arg2 + 0x20)
return arg1
