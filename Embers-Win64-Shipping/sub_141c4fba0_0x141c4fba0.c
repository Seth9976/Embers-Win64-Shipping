// 函数: sub_141c4fba0
// 地址: 0x141c4fba0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1
int32_t i_1 = arg1[1].d

if (i_1 != 0)
    void* rbx_1 = rcx + 0x2e0
    int32_t i
    
    do
        int64_t rcx_1 = *(rbx_1 + 0xe0)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_1405ae200(rbx_1)
        sub_141c31b70(rbx_1 - 0x40)
        int64_t rcx_4 = *(rbx_1 - 0x50)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        int64_t rcx_5 = *(rbx_1 - 0x128)
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        sub_140596e10(rbx_1 - 0x138)
        int64_t rcx_7 = *(rbx_1 - 0x170)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *(rbx_1 - 0x1b0)
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t j = 2
        void* rsi_1 = rbx_1 - 0x1f8
        
        do
            int64_t rcx_9 = *(rsi_1 - 0x10)
            rsi_1 -= 0x10
            j -= 1
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
        while (j != 0)
        
        sub_141c4f940(rbx_1 - 0x238)
        int64_t rcx_11 = *(rbx_1 - 0x260)
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = *(rbx_1 - 0x270)
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = *(rbx_1 - 0x280)
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = *(rbx_1 - 0x290)
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t rcx_15 = *(rbx_1 - 0x2a0)
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        int64_t rcx_16 = *(rbx_1 - 0x2b0)
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        int64_t* rdi_1 = *(rbx_1 - 0x2c0)
        int32_t rax
        
        if (rdi_1 != 0)
            rdi_1[1].d -= 1
            
            if (rdi_1[1].d == 1)
                (**rdi_1)(rdi_1)
                rax = *(rdi_1 + 0xc)
                *(rdi_1 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rdi_1 + 8))(rdi_1, 1)
        
        int64_t* rdi_2 = *(rbx_1 - 0x2d8)
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                rax = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (rax == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
        
        rbx_1 += 0x3f0
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *arg1

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
