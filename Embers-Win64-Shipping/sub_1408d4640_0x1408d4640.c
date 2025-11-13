// 函数: sub_1408d4640
// 地址: 0x1408d4640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x30
    int32_t i
    
    do
        uint64_t rax = zx.q(*(rbx_1 + 8))
        int64_t* rcx_1
        int64_t* r8_1
        
        if (rax.d == 0)
            r8_1 = *rbx_1
            rcx_1 = nullptr
        else
            rcx_1 = *rbx_1
            r8_1 = rcx_1
        
        int64_t rax_1
        
        if (rcx_1 != 0)
            rax_1 = *rcx_1
        label_1408d46a0:
            (*(rax_1 + 0x38))(rcx_1, 0)
            int64_t rcx_2 = *rbx_1
            
            if (rcx_2 != 0)
                *rbx_1 = sub_140a84c80(rcx_2, 0, 0)
            
            *(rbx_1 + 8) = 0
        else if (rax.d != 0 && r8_1 != 0)
            rax_1 = *r8_1
            rcx_1 = r8_1
            goto label_1408d46a0
        int64_t rcx_3 = *rbx_1
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rbx_1 - 0x10)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
