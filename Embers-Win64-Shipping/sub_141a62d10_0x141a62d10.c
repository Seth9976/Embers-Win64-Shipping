// 函数: sub_141a62d10
// 地址: 0x141a62d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = *(arg1 + 0xc)
void* rbx = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rbx_2 = rbx + 0x28
        int32_t i
        
        do
            char rax_3 = *(rbx_2 + 0x28)
            
            if ((rax_3 & 1) != 0)
                void* rcx_4 = rbx_2 + 8
                
                if ((rax_3 & 2) == 0)
                    rcx_4 = *(rbx_2 + 8)
                
                *(rbx_2 + 0x28) = rax_3 & 0xfe
                (**rcx_4)(rcx_4, 0)
                
                if ((*(rbx_2 + 0x28) & 2) == 0)
                    sub_140a74f90(*(rbx_2 + 8))
            
            char rax_5 = *rbx_2
            
            if ((rax_5 & 1) != 0)
                void* rcx_6 = rbx_2 - 0x20
                
                if ((rax_5 & 2) == 0)
                    rcx_6 = *(rbx_2 - 0x20)
                
                *rbx_2 = rax_5 & 0xfe
                (**rcx_6)(rcx_6, 0)
                
                if ((*rbx_2 & 2) == 0)
                    sub_140a74f90(*(rbx_2 - 0x20))
            
            rbx_2 += 0x58
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_140775cf0(arg1, arg2)
else
    if (i_2 != 0)
        char* rbx_1 = rbx + 0x28
        int32_t i_1
        
        do
            char rax = rbx_1[0x28]
            
            if ((rax & 1) != 0)
                void* rcx = &rbx_1[8]
                
                if ((rax & 2) == 0)
                    rcx = *(rbx_1 + 8)
                
                rbx_1[0x28] = rax & 0xfe
                (**rcx)(rcx, 0)
                
                if ((rbx_1[0x28] & 2) == 0)
                    sub_140a74f90(*(rbx_1 + 8))
            
            result = zx.d(*rbx_1)
            
            if ((result.b & 1) != 0)
                void* rcx_2 = &rbx_1[-0x20]
                
                if ((result.b & 2) == 0)
                    rcx_2 = *(rbx_1 - 0x20)
                
                result.b &= 0xfe
                *rbx_1 = result.b
                result = (**rcx_2)(rcx_2, 0)
                
                if ((*rbx_1 & 2) == 0)
                    result = sub_140a74f90(*(rbx_1 - 0x20))
            
            rbx_1 = &rbx_1[0x58]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
