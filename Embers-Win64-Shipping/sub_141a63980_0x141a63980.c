// 函数: sub_141a63980
// 地址: 0x141a63980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x1c)
*(arg1 + 0x18) = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(arg1 + 0x10, 0)

int32_t result = *(arg1 + 0x2c)
void* rdi = *(arg1 + 0x20)
int32_t i_2 = *(arg1 + 0x28)

if (result s< 0)
    if (i_2 != 0)
        void* rdi_2 = rdi + 0x18
        int32_t i
        
        do
            int64_t rcx_2 = *rdi_2
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rdi_2 += 0x30
            i = i_2
            i_2 -= 1
        while (i != 1)
        result = *(arg1 + 0x2c)
    
    *(arg1 + 0x28) = 0
    
    if (result != 0)
        result = sub_1405a5220(arg1 + 0x20, 0)
else
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 0x18
        int32_t i_1
        
        do
            int64_t rcx_1 = *rdi_1
            
            if (rcx_1 != 0)
                result = sub_140a74f90(rcx_1)
            
            rdi_1 = &rdi_1[6]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x28) = 0

if (arg1 == -0x60)
    return result

return sub_141f98dc0(arg1 + 0x60)
