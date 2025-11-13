// 函数: sub_140d963a0
// 地址: 0x140d963a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[8] != &arg2[8])
    void* rax_1 = *(arg1 + 0x128)
    void* rdi_1 = &arg1[8]
    int32_t i_2 = *(arg1 + 0x130)
    
    if (rax_1 != 0)
        rdi_1 = rax_1
    
    if (i_2 != 0)
        void* rdi_2 = rdi_1 + 0x40
        int32_t i
        
        do
            int64_t* rbx_1 = *rdi_2
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp6_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_2 += 0x48
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    if (*(arg2 + 0x128) == 0)
        memmove(&arg1[8], &arg2[8], 0x120)
    
    int64_t rcx_3 = *(arg1 + 0x128)
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)
    
    *(arg1 + 0x128) = *(arg2 + 0x128)
    *(arg2 + 0x128) = 0
    *(arg1 + 0x130) = *(arg2 + 0x130)
    *(arg1 + 0x134) = *(arg2 + 0x134)
    *(arg2 + 0x130) = 0
    *(arg2 + 0x134) = 4

arg1[0x138] = arg2[0x138]

if (&arg1[0x140] != &arg2[0x140])
    *(arg1 + 0x140) = *(arg2 + 0x140)
    *(arg2 + 0x140) = 0
    int64_t rax_9 = *(arg2 + 0x148)
    int64_t* rbx_2 = *(arg1 + 0x148)
    
    if (rax_9 != rbx_2)
        *(arg2 + 0x148) = 0
        *(arg1 + 0x148) = rax_9
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp1_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

if (&arg1[0x150] != &arg2[0x150])
    int32_t i_3 = *(arg1 + 0x158)
    void* rcx_7 = *(arg1 + 0x150)
    
    if (i_3 != 0)
        int64_t* rdi_3 = rcx_7 + 8
        int32_t i_1
        
        do
            int64_t* rbx_3 = *rdi_3
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp7_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            rdi_3 = &rdi_3[2]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rcx_7 = *(arg1 + 0x150)
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    *(arg1 + 0x150) = *(arg2 + 0x150)
    *(arg2 + 0x150) = 0
    *(arg1 + 0x158) = *(arg2 + 0x158)
    *(arg1 + 0x15c) = *(arg2 + 0x15c)
    *(arg2 + 0x158) = 0

return arg1
