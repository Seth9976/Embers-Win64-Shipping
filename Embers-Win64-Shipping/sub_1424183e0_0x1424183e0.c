// 函数: sub_1424183e0
// 地址: 0x1424183e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_140b3da70(arg1 + 0x58)

if (result == 1)
    return result

*(arg1 + 0x40) = arg2
int64_t* rcx_1

if (*(arg1 + 0x28) == 0)
    rcx_1 = nullptr
else
    rcx_1 = *(arg1 + 0x20)

(*(*rcx_1 + 0x48))(rcx_1, arg2, arg1 + 0x48)
char rax_1 = sub_140b48380(arg1 + 0x58, arg1 + 0x18)
*(arg1 + 0x40) = 0
int32_t rcx_3 = *(arg1 + 0x54)
int64_t* rbx_1 = *(arg1 + 0x48)
int32_t i_2 = *(arg1 + 0x50)

if (rcx_3 s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1 = &rbx_1[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rcx_3 = *(arg1 + 0x54)
    
    *(arg1 + 0x50) = 0
    
    if (rcx_3 != 0)
        sub_14061cd70(arg1 + 0x48, 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_4 = *rbx_1
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx_1 = &rbx_1[2]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x50) = 0

return zx.q(rax_1)
