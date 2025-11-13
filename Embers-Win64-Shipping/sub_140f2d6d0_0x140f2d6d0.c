// 函数: sub_140f2d6d0
// 地址: 0x140f2d6d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439b3a00 != 0)
    if (data_143e2a328 == 0)
    label_140f2d726:
        void* rcx_2 = *(arg1 + 0x308)
        
        if (rcx_2 != 0)
            sub_140e21770(rcx_2)
    else
        int64_t* rcx = data_143e2a320
        
        if (rcx == 0)
            goto label_140f2d726
        
        if ((*(*rcx + 0x28))(rcx) == 0)
            goto label_140f2d726
        
        int64_t* rcx_1 = nullptr
        
        if (data_143e2a328 != 0)
            rcx_1 = data_143e2a320
        
        (*(*rcx_1 + 0x48))(rcx_1)

*arg2 = 1
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
return arg2
