// 函数: sub_141e30220
// 地址: 0x141e30220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rbx = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rbx_2 = rbx + 0x58
        int32_t i
        
        do
            int64_t rcx_4 = *(rbx_2 + 0x20)
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            sub_141a90330(rbx_2)
            int64_t rcx_6 = *(rbx_2 - 0x10)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *(rbx_2 - 0x48)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rbx_2 += 0xc8
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_141a641d0(arg1, arg2)
else
    if (i_2 != 0)
        void* rbx_1 = rbx + 0x58
        int32_t i_1
        
        do
            int64_t rcx = *(rbx_1 + 0x20)
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            result = sub_141a90330(rbx_1)
            int64_t rcx_2 = *(rbx_1 - 0x10)
            
            if (rcx_2 != 0)
                result = sub_140a74f90(rcx_2)
            
            int64_t rcx_3 = *(rbx_1 - 0x48)
            
            if (rcx_3 != 0)
                result = sub_140a74f90(rcx_3)
            
            rbx_1 += 0xc8
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
