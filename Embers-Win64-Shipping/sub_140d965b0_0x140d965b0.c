// 函数: sub_140d965b0
// 地址: 0x140d965b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2

if (&arg1[8] != &arg2[8])
    void* rax_1 = *(arg1 + 0x128)
    void* rdi_1 = &arg1[8]
    int32_t i_3 = *(arg1 + 0x130)
    
    if (rax_1 != 0)
        rdi_1 = rax_1
    
    if (i_3 != 0)
        void* rdi_2 = rdi_1 + 0x40
        int32_t i
        
        do
            int64_t* rbx_1 = *rdi_2
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t temp4_1 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (temp4_1 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
            
            rdi_2 += 0x48
            i = i_3
            i_3 -= 1
        while (i != 1)
    
    void* rax_4 = *(arg2 + 0x128)
    void* rdx = &arg2[8]
    
    if (rax_4 != 0)
        rdx = rax_4
    
    sub_140d8b650(&arg1[8], rdx, *(arg2 + 0x130), *(arg1 + 0x134), 0)

arg1[0x138] = arg2[0x138]
int64_t* rbx_2 = *(arg2 + 0x148)
int64_t var_38 = *(arg2 + 0x140)

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (&var_38 != &arg1[0x140])
    var_38.o = *(arg1 + 0x140)
    *(arg1 + 0x140) = var_38.o

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

if (&arg1[0x150] != &arg2[0x150])
    int32_t i_4 = *(arg1 + 0x158)
    
    if (i_4 != 0)
        int64_t* rdi_4 = *(arg1 + 0x150) + 8
        int32_t i_1
        
        do
            int64_t* rbx_3 = *rdi_4
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t temp8_1 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (temp8_1 == 1)
                        (*(*rbx_3 + 8))(rbx_3, 1)
            
            rdi_4 = &rdi_4[2]
            i_1 = i_4
            i_4 -= 1
        while (i_1 != 1)
    
    int32_t i_5 = *(arg2 + 0x158)
    int64_t* rbx_4 = *(arg2 + 0x150)
    int32_t r8_2 = *(arg1 + 0x15c)
    *(arg1 + 0x158) = i_5
    
    if (i_5 != 0 || r8_2 != 0)
        sub_1405a4be0(&arg1[0x150], i_5, r8_2)
        int64_t* rcx_9 = *(arg1 + 0x150)
        
        if (i_5 != 0)
            int32_t i_2
            
            do
                *rcx_9 = *rbx_4
                void* rax_12 = rbx_4[1]
                rcx_9[1] = rax_12
                
                if (rax_12 != 0)
                    *(rax_12 + 8) += 1
                
                rcx_9 = &rcx_9[2]
                rbx_4 = &rbx_4[2]
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
    else
        *(arg1 + 0x15c) = i_5

return arg1
