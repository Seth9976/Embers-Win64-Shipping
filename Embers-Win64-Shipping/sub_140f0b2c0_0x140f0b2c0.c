// 函数: sub_140f0b2c0
// 地址: 0x140f0b2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rbx

if (*(arg1 + 0x420) == 0)
    rbx = *(arg1 + 0x390) + 0x4d8
else
    rbx = arg1 + 0x410
    
    if (rbx[2].d != 0)
        int64_t* rcx = *(rbx + 0x18)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (rbx[2].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(rbx + 0x18)
            
            int128_t var_18
            (*(*rcx_1 + 0x48))(rcx_1, &var_18)
            *rbx = var_18

*arg2 = *rbx
return arg2
