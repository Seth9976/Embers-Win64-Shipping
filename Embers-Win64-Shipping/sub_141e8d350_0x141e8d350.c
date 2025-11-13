// 函数: sub_141e8d350
// 地址: 0x141e8d350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x18)

if (*(rcx + 0x31) != 0 && data_143a2d44c != 0 && (*(arg1 + 0x182) & 8) == 0 && rcx != 0)
    char rax = sub_14236bbe0(rcx, arg5)
    
    if (rax != 0 && *(arg1 + 0x185) == 0 && (*(arg1 + 0x183) & 0x10) == 0)
        if (arg3 != 0)
            rax = sub_141e808a0(arg1, arg2)
        
        if (arg3 == 0 || rax == 0)
            *(arg4 + 0x10) = sub_141dbe4e0(arg1, arg2)
            sub_141e76210(arg4)
            return 1

return 0
