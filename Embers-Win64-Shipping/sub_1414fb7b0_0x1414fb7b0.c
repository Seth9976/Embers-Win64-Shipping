// 函数: sub_1414fb7b0
// 地址: 0x1414fb7b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x38
    int32_t i
    
    do
        int32_t j_1 = rbx_1[1].d
        int64_t* rcx_1 = *rbx_1
        
        if (j_1 != 0)
            int32_t j
            
            do
                void* rax = *rcx_1
                
                if (rax != 0)
                    *(rax + 0x1bc) -= 1
                
                rcx_1 = &rcx_1[1]
                j = j_1
                j_1 -= 1
            while (j != 1)
            rcx_1 = *rbx_1
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        rbx_1 = &rbx_1[0xc]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
