// 函数: sub_140f51d70
// 地址: 0x140f51d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x308)

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0x910)
    
    if ((*(*rcx_1 + 0x68))(rcx_1) != 2 && *(arg1 + 0x320) != 0)
        int64_t* rcx_2 = *(arg1 + 0x318)
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            if (*(arg1 + 0x320) == 0)
                (*(*nullptr + 0x48))(0)
                sub_140e194c0(arg2)
                return arg2
            
            int64_t* rcx_3 = *(arg1 + 0x318)
            (*(*rcx_3 + 0x48))(rcx_3)
            sub_140e194c0(arg2)
            return arg2

*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
