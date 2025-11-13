// 函数: sub_14100f140
// 地址: 0x14100f140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1 + 0x78

for (int64_t i = 4; i != 0; )
    i -= 1
    rbx = &rbx[-2]
    
    while (*rbx != 0)
        int64_t* rcx = *rbx
        *rbx = *rcx
        j_sub_140a74f90(rcx)

return DeleteCriticalSection(arg1 + 8) __tailcall
