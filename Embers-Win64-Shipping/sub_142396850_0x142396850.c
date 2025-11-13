// 函数: sub_142396850
// 地址: 0x142396850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rbx = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_2 = *(rbx + 8)
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            int64_t* rcx_3 = *rbx
            
            if (rcx_3 != 0)
                rcx_3[1].d -= 1
                
                if (rcx_3[1].d == 1)
                    (**rcx_3)(rcx_3, 1)
            
            rbx += 0x20
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_1405a51b0(arg1, arg2)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx = *(rbx + 8)
            
            if (rcx != 0)
                result = sub_140a74f90(rcx)
            
            int64_t* rcx_1 = *rbx
            
            if (rcx_1 != 0)
                rcx_1[1].d -= 1
                
                if (rcx_1[1].d == 1)
                    result = (**rcx_1)(rcx_1, 1)
            
            rbx += 0x20
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
