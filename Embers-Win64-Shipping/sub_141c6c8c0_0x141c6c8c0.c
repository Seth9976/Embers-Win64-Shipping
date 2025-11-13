// 函数: sub_141c6c8c0
// 地址: 0x141c6c8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0xc)
void* rbx = *arg1
int32_t i_2 = arg1[1].d

if (arg2 s> result)
    if (i_2 != 0)
        void* rbx_2 = rbx + 0x2b8
        int32_t i
        
        do
            int64_t* rcx_6 = *(rbx_2 + 0x30)
            
            if (rcx_6 != 0)
                (**rcx_6)(rcx_6, 1)
            
            int64_t rcx_7 = *(rbx_2 + 0x10)
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            *(rbx_2 + 8) = 0
            int64_t rcx_8 = *rbx_2
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            sub_141c50460(rbx_2 - 0x40)
            int64_t rcx_10 = *(rbx_2 - 0x58)
            
            if (rcx_10 != 0)
                sub_140a74f90(rcx_10)
            
            int64_t rcx_11 = *(rbx_2 - 0x288)
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            rbx_2 += 0x2f0
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0xc)
    
    arg1[1].d = 0
    
    if (result != arg2)
        return sub_141c6d330(arg1, arg2)
else
    if (i_2 != 0)
        void* rbx_1 = rbx + 0x2b8
        int32_t i_1
        
        do
            int64_t* rcx = *(rbx_1 + 0x30)
            
            if (rcx != 0)
                (**rcx)(rcx, 1)
            
            int64_t rcx_1 = *(rbx_1 + 0x10)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            *(rbx_1 + 8) = 0
            int64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            result = sub_141c50460(rbx_1 - 0x40)
            int64_t rcx_4 = *(rbx_1 - 0x58)
            
            if (rcx_4 != 0)
                result = sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *(rbx_1 - 0x288)
            
            if (rcx_5 != 0)
                result = sub_140a74f90(rcx_5)
            
            rbx_1 += 0x2f0
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[1].d = 0

return result
