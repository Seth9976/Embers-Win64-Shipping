// 函数: sub_141b2fdc0
// 地址: 0x141b2fdc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x14)
*(arg1 + 0x10) = 0

if (rax s< 0 && rax != 0)
    sub_1405dadb0(arg1 + 8, 0)

int32_t rax_1 = *(arg1 + 0x24)
void* rdi = *(arg1 + 0x18)
int32_t i_2 = *(arg1 + 0x20)

if (rax_1 s< 0)
    if (i_2 != 0)
        void* rdi_2 = rdi + 0x18
        int32_t i
        
        do
            int64_t rcx_2 = *rdi_2
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rdi_2 += 0x28
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax_1 = *(arg1 + 0x24)
    
    *(arg1 + 0x20) = 0
    
    if (rax_1 != 0)
        sub_1405c5660(arg1 + 0x18, 0)
else
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 0x18
        int32_t i_1
        
        do
            int64_t rcx_1 = *rdi_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rdi_1 = &rdi_1[5]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x20) = 0

return sub_141f98dc0(arg1 + 0x28) __tailcall
