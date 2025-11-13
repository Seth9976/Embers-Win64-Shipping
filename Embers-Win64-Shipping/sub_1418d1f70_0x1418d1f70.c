// 函数: sub_1418d1f70
// 地址: 0x1418d1f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x20
    int32_t i
    
    do
        int64_t* rdi_1 = *(rbx_1 + 0x28)
        
        if (rdi_1 != 0)
            int64_t rcx_1 = *rdi_1
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            j_sub_140a74f90(rdi_1)
        
        sub_14100dda0(rbx_1)
        rbx_1 += 0x58
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
