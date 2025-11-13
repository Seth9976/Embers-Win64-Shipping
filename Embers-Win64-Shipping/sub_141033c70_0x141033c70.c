// 函数: sub_141033c70
// 地址: 0x141033c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void*** rbx = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        int32_t i
        
        do
            void* rcx_2 = rbx[1]
            *rbx = &data_142efcd90
            
            if (rcx_2 != 0)
                int32_t rax = *(rcx_2 + 0x14)
                *(rcx_2 + 0x14) -= 1
                
                if (rax == 1)
                    int64_t* rcx_3 = rbx[1]
                    
                    if (rcx_3 != 0)
                        sub_141011360(rcx_3, rax.b)
            
            rbx = &rbx[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_1405a5410(arg1, arg2)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            void* rcx = rbx[1]
            *rbx = &data_142efcd90
            
            if (rcx != 0)
                result = *(rcx + 0x14)
                *(rcx + 0x14) -= 1
                
                if (result == 1)
                    int64_t* rcx_1 = rbx[1]
                    
                    if (rcx_1 != 0)
                        result = sub_141011360(rcx_1, result.b)
            
            rbx = &rbx[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
