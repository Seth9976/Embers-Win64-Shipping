// 函数: sub_141d33f80
// 地址: 0x141d33f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x1b]

if (rcx != 0)
    rcx[9].d -= 1
    
    if (rcx[9].d == 1)
        sub_140a2f6e0(rcx)

DeleteCriticalSection(&arg1[0x14])
arg1[0x13].d = 0
int64_t rcx_2 = arg1[0x12]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140597460(&arg1[0xa])
int64_t rcx_4 = arg1[8]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

*arg1 = &IModuleInterface::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
