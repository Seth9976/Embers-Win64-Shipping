// 函数: sub_141d43680
// 地址: 0x141d43680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0xc)
arg1[1].d = 0

if (rax s< 0 && rax != 0)
    sub_1405c55e0(arg1, 0)

int32_t rax_1 = *(arg1 + 0x1c)
arg1[3].d = 0

if (rax_1 s< 0 && rax_1 != 0)
    sub_1405c5570(&arg1[2], 0)

int32_t rax_2 = *(arg1 + 0x2c)
void* rbx = arg1[4]
int32_t i_2 = arg1[5].d

if (rax_2 s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_3 = *(rbx + 0x10)
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            int64_t rcx_4 = *rbx
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rbx += 0x28
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax_2 = *(arg1 + 0x2c)
    
    arg1[5].d = 0
    
    if (rax_2 != 0)
        sub_1405c5660(&arg1[4], 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_1 = *(rbx + 0x10)
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            int64_t rcx_2 = *rbx
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx += 0x28
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[5].d = 0

int32_t result = *(arg1 + 0x3c)
arg1[7].d = 0

if (result s< 0 && result != 0)
    return sub_1405a5220(&arg1[6], 0)

return result
