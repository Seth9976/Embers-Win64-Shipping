// 函数: sub_141da6be0
// 地址: 0x141da6be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x2f8)

if (rcx != 0)
    int64_t* rcx_1 = *(rcx + 0x10)
    int64_t* rax_2 = (*(*rcx_1 + 0x90))(rcx_1)
    
    if (rax_2[1].d != 0)
        int64_t* rcx_2 = *rax_2
        
        if (rcx_2 != 0 && (*(*rcx_2 + 0x28))(rcx_2) != 0)
            int64_t* rcx_3 = *(*(arg1 + 0x2f8) + 0x10)
            int64_t* rax_7 = (*(*rcx_3 + 0x90))(rcx_3)
            
            if (rax_7[1].d != 0)
                int64_t* rcx_4 = *rax_7
                
                if (rcx_4 != 0)
                    int64_t r8_1 = *rcx_4
                    (*(r8_1 + 0x38))(rcx_4, 0, r8_1)
                    int64_t rcx_5 = *rax_7
                    
                    if (rcx_5 != 0)
                        *rax_7 = sub_140a84c80(rcx_5, 0, 0)
                    
                    rax_7[1].d = 0
    
    int64_t* rcx_6 = *(*(arg1 + 0x2f8) + 0x10)
    (*(*rcx_6 + 0xb0))(rcx_6)
    void var_28
    
    if (arg1 + 0x2f8 != &var_28)
        *(arg1 + 0x2f8) = 0
        int64_t* rbx_2 = *(arg1 + 0x300)
        
        if (rbx_2 != 0)
            *(arg1 + 0x300) = 0
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)

int32_t i_1 = *(arg1 + 0x2f0)

if (i_1 != 0)
    int64_t* rdi_2 = *(arg1 + 0x2e8) + 8
    int32_t i
    
    do
        int64_t* rbx_3 = *rdi_2
        
        if (rbx_3 != 0)
            rbx_3[1].d -= 1
            
            if (rbx_3[1].d == 1)
                (**rbx_3)(rbx_3)
                int32_t temp3_1 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (temp3_1 == 1)
                    (*(*rbx_3 + 8))(rbx_3, 1)
        
        rdi_2 = &rdi_2[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x2f0) = 0

if (*(arg1 + 0x2f4) != 0)
    sub_1405a5410(arg1 + 0x2e8, 0)

*(arg1 + 0x25c) = 0
*(arg1 + 0x258) = 0
