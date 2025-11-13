// 函数: sub_140a30c70
// 地址: 0x140a30c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
int64_t* rbx = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_1 = *rbx
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rbx = &rbx[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_14061cd70(arg1, arg2)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx = *rbx
            
            if (rcx != 0)
                result = sub_140a74f90(rcx)
            
            rbx = &rbx[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
