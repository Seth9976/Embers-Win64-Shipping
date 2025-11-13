// 函数: sub_141a63710
// 地址: 0x141a63710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = *(arg1 + 0xc)
int64_t* rbx = *arg1
int32_t i_2 = arg1[1].d

if (result s>= 0)
    if (i_2 != 0)
        int32_t i
        
        do
            result = zx.d(rbx[0x10].b)
            
            if ((result.b & 1) != 0)
                int64_t* rcx = rbx
                
                if ((result.b & 2) == 0)
                    rcx = *rbx
                
                result.b &= 0xfe
                rbx[0x10].b = result.b
                result = (**rcx)(rcx, 0)
                
                if ((rbx[0x10].b & 2) == 0)
                    result = sub_140a74f90(*rbx)
            
            rbx = &rbx[0x11]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    arg1[1].d = 0
    return result

if (i_2 != 0)
    int32_t i_1
    
    do
        char rax_1 = rbx[0x10].b
        
        if ((rax_1 & 1) != 0)
            int64_t* rcx_2 = rbx
            
            if ((rax_1 & 2) == 0)
                rcx_2 = *rbx
            
            rbx[0x10].b = rax_1 & 0xfe
            (**rcx_2)(rcx_2, 0)
            
            if ((rbx[0x10].b & 2) == 0)
                sub_140a74f90(*rbx)
        
        rbx = &rbx[0x11]
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    result = *(arg1 + 0xc)

arg1[1].d = 0

if (result == 0)
    return result

return sub_1405a5390(arg1, 0)
