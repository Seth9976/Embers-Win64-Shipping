// 函数: sub_141c6ca20
// 地址: 0x141c6ca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
int64_t* rbx = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        int32_t i
        
        do
            if (*rbx != 0)
                void* rax_2 = rbx[2]
                void* rcx_1 = &rbx[4]
                
                if (rax_2 != 0)
                    rcx_1 = rax_2
                
                (*(*rcx_1 + 0x10))(rcx_1)
            
            rbx = &rbx[8]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_1405a52a0(arg1, arg2)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            if (*rbx != 0)
                void* rax = rbx[2]
                void* rcx = &rbx[4]
                
                if (rax != 0)
                    rcx = rax
                
                result = (*(*rcx + 0x10))(rcx)
            
            rbx = &rbx[8]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
