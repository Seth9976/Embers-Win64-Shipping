// 函数: sub_141a62e60
// 地址: 0x141a62e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = *(arg1 + 0xc)
int64_t rbx = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        int64_t* rbx_2 = rbx + 0x80
        int32_t i
        
        do
            char rax_1 = rbx_2[8].b
            
            if ((rax_1 & 1) != 0)
                int64_t* rcx_3 = rbx_2
                
                if ((rax_1 & 2) == 0)
                    rcx_3 = *rbx_2
                
                rbx_2[8].b = rax_1 & 0xfe
                (**rcx_3)(rcx_3, 0)
                
                if ((rbx_2[8].b & 2) == 0)
                    sub_140a74f90(*rbx_2)
            
            int64_t rcx_5 = rbx_2[-4]
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_2 = &rbx_2[0x19]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_141a641d0(arg1, arg2)
else
    if (i_2 != 0)
        int64_t* rbx_1 = rbx + 0x80
        int32_t i_1
        
        do
            result = zx.d(rbx_1[8].b)
            
            if ((result.b & 1) != 0)
                int64_t* rcx = rbx_1
                
                if ((result.b & 2) == 0)
                    rcx = *rbx_1
                
                result.b &= 0xfe
                rbx_1[8].b = result.b
                result = (**rcx)(rcx, 0)
                
                if ((rbx_1[8].b & 2) == 0)
                    result = sub_140a74f90(*rbx_1)
            
            int64_t rcx_2 = rbx_1[-4]
            
            if (rcx_2 != 0)
                result = sub_140a74f90(rcx_2)
            
            rbx_1 = &rbx_1[0x19]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
