// 函数: sub_140d85e80
// 地址: 0x140d85e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x40)

if (rcx != 0)
    if (arg3 == 0)
        return 0x80070057
    
    int32_t rdx = *(arg1 + 0x38)
    
    if (rdx == 0)
        int32_t r8_1 = arg2 & 0xfffffffe
        *(arg1 + 0x38) = r8_1
        *arg3 = (*(*rcx + 0x40))(rcx, zx.q(r8_1))
        
        while (*(arg1 + 0x3c) != 0)
            int64_t* rcx_1 = *(arg1 + 0x40)
            *(arg1 + 0x38) = 6
            *(arg1 + 0x3c) = 0
            (*(*rcx_1 + 0x40))(rcx_1, 6)
        
        *(arg1 + 0x38) = 0
        return 0
    
    if (((rdx u>> 1).b & 1) == 0)
        char rdx_2 = rdx.b & 6
        
        if (rdx_2 == 6)
            rcx.b = (arg2.b & 6) != rdx_2
            
            if (((arg2.b & 1) == 0 & rcx.b) != 0)
                *arg3 = 0x40300
                *(arg1 + 0x3c) = 1
                return 0
    
    *arg3 = 0x80040208

return 0x80004005
