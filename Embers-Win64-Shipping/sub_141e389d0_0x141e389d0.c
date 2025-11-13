// 函数: sub_141e389d0
// 地址: 0x141e389d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rdi_1 = rcx + 8
    int32_t i
    
    do
        int64_t* rbx_1 = *rdi_1
        
        if (rbx_1 != 0)
            int64_t* rcx_1 = rbx_1[0xa]
            
            if (rcx_1 != 0)
                (**rcx_1)(rcx_1, 1)
            
            int64_t rcx_2 = rbx_1[8]
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            sub_141ddf810(&rbx_1[4])
            int64_t rcx_4 = rbx_1[2]
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            j_sub_140a74f90(rbx_1)
            *rdi_1 = 0
        
        sub_140bc0410(&rdi_1[1])
        rdi_1 = &rdi_1[6]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
