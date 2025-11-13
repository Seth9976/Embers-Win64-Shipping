// 函数: sub_140b0bd30
// 地址: 0x140b0bd30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(arg1 + 0x330)
DeleteCriticalSection(arg1 + 0x308)
DeleteCriticalSection(arg1 + 0x2e0)
int64_t rcx_3 = *(arg1 + 0x2c0)

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *(arg1 + 0x2b0)

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int32_t i_1 = *(arg1 + 0x2a8)
int64_t* rbx = *(arg1 + 0x2a0)

if (i_1 != 0)
    int32_t i
    
    do
        if (*(rbx + 0x21) == 0)
            sub_140a74f90(*rbx)
        
        rbx = &rbx[5]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = *(arg1 + 0x2a0)

if (rbx != 0)
    sub_140a74f90(rbx)

return sub_140b0b470(arg1 + 0x10) __tailcall
