// 函数: sub_1425e67a0
// 地址: 0x1425e67a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg2
int32_t* result

if (rcx == *(arg1 + 0x60))
    result.b = 1
else
    void var_30
    
    if (rcx != 0)
        result = sub_140910250(arg1 + 0x70, &var_30, (*(*rcx + 0x18))(rcx))
    char var_48
    int64_t rbp
    
    if (rcx == 0 || *result != 0xffffffff)
        var_48 = 1
        *(arg1 + 0xd4) += 1
        rbp.b = 0
        int32_t rax_2 = *(arg1 + 0xc8)
        int32_t rcx_2 = *(arg1 + 0xd4)
        int64_t rbx_1 = sx.q(rax_2 - 1)
        
        if (rax_2 - 1 s>= 0)
            int64_t rdi_2 = rbx_1 << 4
            int64_t temp1_1
            
            do
                int64_t rax_4 = *(arg1 + 0xc0)
                
                if (*(rdi_2 + rax_4 + 8) == 0)
                    rbp.b = 1
                else
                    int64_t* rcx_3 = *(rdi_2 + rax_4)
                    
                    if (rcx_3 == 0)
                        rbp.b = 1
                    else if ((*(*rcx_3 + 0x50))(rcx_3, arg2, &var_48) == 0)
                        rbp.b = 1
                
                rdi_2 -= 0x10
                temp1_1 = rbx_1
                rbx_1 -= 1
            while (temp1_1 - 1 s>= 0)
            rcx_2 = *(arg1 + 0xd4)
        
        *(arg1 + 0xd4) = rcx_2 - 1
        
        if (rbp.b != 0)
            sub_140599630(arg1 + 0xc0, 0)
    
    if ((rcx == 0 || *result != 0xffffffff) && var_48 != 0)
        sub_14095cd40(arg1 + 0x50, 0)
        int64_t* rbx_2 = arg2[1]
        int64_t var_40 = *arg2
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        if (&var_40 != arg1 + 0x60)
            var_40.o = *(arg1 + 0x60)
            *(arg1 + 0x60) = var_40.o
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        rbp.b = 0
        *(arg1 + 0x12c) += 1
        int32_t rax_10 = *(arg1 + 0x120)
        int32_t rcx_8 = *(arg1 + 0x12c)
        int64_t rdi_3 = sx.q(rax_10 - 1)
        
        if (rax_10 - 1 s>= 0)
            int64_t rbx_4 = rdi_3 << 4
            int64_t temp5_1
            
            do
                int64_t rax_12 = *(arg1 + 0x118)
                
                if (*(rbx_4 + rax_12 + 8) == 0)
                    rbp.b = 1
                else
                    int64_t* rcx_9 = *(rbx_4 + rax_12)
                    
                    if (rcx_9 == 0)
                        rbp.b = 1
                    else if ((*(*rcx_9 + 0x50))(rcx_9, arg2) == 0)
                        rbp.b = 1
                
                rbx_4 -= 0x10
                temp5_1 = rdi_3
                rdi_3 -= 1
            while (temp5_1 - 1 s>= 0)
            rcx_8 = *(arg1 + 0x12c)
        
        *(arg1 + 0x12c) = rcx_8 - 1
        
        if (rbp.b != 0)
            sub_140599630(arg1 + 0x118, 0)
        
        result.b = 1
    else
        result.b = 0

return result
