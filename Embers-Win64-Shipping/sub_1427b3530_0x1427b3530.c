// 函数: sub_1427b3530
// 地址: 0x1427b3530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x34)
void* rdi = arg1[5]
int32_t i_2 = arg1[6].d

if (rax s< 0)
    if (i_2 != 0)
        void* rdi_2 = rdi + 0x10
        int32_t i
        
        do
            int64_t rcx_1 = *rdi_2
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            rdi_2 += 0x20
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax = *(arg1 + 0x34)
    
    arg1[6].d = 0
    
    if (rax != 0)
        sub_1405a51b0(&arg1[5], 0)
else
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 0x10
        int32_t i_1
        
        do
            int64_t rcx = *rdi_1
            
            if (rcx != 0)
                sub_140a74f90(rcx)
            
            rdi_1 = &rdi_1[4]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    arg1[6].d = 0

jump(*(*arg1 + 0x2a8))
