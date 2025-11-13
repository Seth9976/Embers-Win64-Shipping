// 函数: sub_14066a470
// 地址: 0x14066a470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
sub_140597df0(&arg1[2], &arg2[2])

if (&arg1[6] != &arg2[6])
    int32_t i_2 = arg1[8]
    
    if (i_2 != 0)
        int64_t* rdi_2 = *(arg1 + 0x18) + 8
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
            
            rdi_2 = &rdi_2[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    int32_t i_3 = arg2[8]
    int64_t* rbx_2 = *(arg2 + 0x18)
    int32_t r8_1 = arg1[9]
    arg1[8] = i_3
    
    if (i_3 != 0 || r8_1 != 0)
        sub_14061cb30(&arg1[6], i_3, r8_1)
        int64_t* rcx_4 = *(arg1 + 0x18)
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                *rcx_4 = *rbx_2
                void* rax_4 = rbx_2[1]
                rcx_4[1] = rax_4
                
                if (rax_4 != 0)
                    *(rax_4 + 8) += 1
                
                rcx_4 = &rcx_4[2]
                rbx_2 = &rbx_2[2]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
    else
        arg1[9] = i_3

int64_t* rbx_3 = *(arg2 + 0x30)
int64_t var_38 = *(arg2 + 0x28)

if (rbx_3 != 0)
    rbx_3[1].d += 1

if (&var_38 != &arg1[0xa])
    arg3 = var_38.o
    var_38.o = *(arg1 + 0x28)
    *(arg1 + 0x28) = arg3

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        int64_t r8_2 = *rbx_3
        (*r8_2)(rbx_3, arg3, r8_2)
        int32_t temp3_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_3 = *rbx_3
            (*(r8_3 + 8))(rbx_3, 1, r8_3)

return arg1
