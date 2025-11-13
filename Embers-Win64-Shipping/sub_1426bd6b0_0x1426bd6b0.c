// 函数: sub_1426bd6b0
// 地址: 0x1426bd6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rbx = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rbx_2 = rbx + 0x30
        int32_t i
        
        do
            sub_140745b20(rbx_2 + 0x18)
            int64_t rcx_5 = *rbx_2
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            int64_t rcx_6 = *(rbx_2 - 0x10)
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            int64_t rcx_7 = *(rbx_2 - 0x20)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
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
        int64_t* rbx_1 = rbx + 0x30
        int32_t i_1
        
        do
            result = sub_140745b20(&rbx_1[3])
            int64_t rcx_1 = *rbx_1
            
            if (rcx_1 != 0)
                result = sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = rbx_1[-2]
            
            if (rcx_2 != 0)
                result = sub_140a74f90(rcx_2)
            
            int64_t rcx_3 = rbx_1[-4]
            
            if (rcx_3 != 0)
                result = sub_140a74f90(rcx_3)
            
            rbx_1 = &rbx_1[0xb]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
