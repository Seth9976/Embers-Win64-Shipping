// 函数: sub_140a57790
// 地址: 0x140a57790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(arg1 + 0x28)
int32_t i_1 = *(arg1 + 0x18)
int64_t* rbx = *(arg1 + 0x10)

if (i_1 != 0)
    int32_t i
    
    do
        sub_140b0bbd0(rbx)
        rbx = &rbx[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x10)

if (rbx != 0)
    sub_140a74f90(rbx)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
