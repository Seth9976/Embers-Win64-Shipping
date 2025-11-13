// 函数: sub_140f52a90
// 地址: 0x140f52a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* result = arg2

if (arg1[0x78].b == 0)
    *(arg1 + 0x4cc) &= 0xb7
    arg2.b = 5
    sub_140e19ef0(arg1, arg2.b)
    int64_t rax_1 = arg1[0x96]
    
    if (rax_1 != 0)
        int64_t var_28 = rax_1
        int64_t* rax_2 = arg1[0x97]
        
        if (rax_2 != 0)
            rax_2[1].d += 1
        
        sub_140e27040(arg1, &var_28)
        
        if (rax_2 != 0)
            rax_2[1].d -= 1
            
            if (rax_2[1].d == 1)
                (**rax_2)(rax_2)
                int32_t temp1_1 = *(rax_2 + 0xc)
                *(rax_2 + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rax_2 + 8))(rax_2, 1)
        
        if (&arg1[0x96] != &var_28)
            arg1[0x96] = 0
            int64_t* rdi_2 = arg1[0x97]
            
            if (rdi_2 != 0)
                arg1[0x97] = 0
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    (**rdi_2)(rdi_2)
                    int32_t temp5_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rdi_2 + 8))(rdi_2, 1)
    
    Dbg1::Reset(&arg1[0x7a])

if (*(arg4 + 0x5c) != 0)
    *result = 1
else
    int64_t* rdi_3 = *(arg4 + 0x48)
    
    if (rdi_3 != 0)
        rdi_3[1].d += 1
    
    void* rbp
    
    if (*(arg4 + 0x38) != data_143e1e020)
        rbp.b = 0
    else
        void* rcx_6 = *(arg1[0x75] + 0x4f8)
        
        if (0.999899983f f> *(rcx_6 + 0x2d4))
            if (*(arg1 + 0x4cc) s>= 0)
                rbp.b = 0
            else
                rbp.b = 1
        else if (*(rcx_6 + 0x2dc) == 0 || *(arg1 + 0x4cc) s>= 0)
            rbp.b = 0
        else
            rbp.b = 1
    
    if (rdi_3 != 0)
        rdi_3[1].d -= 1
        
        if (rdi_3[1].d == 1)
            (**rdi_3)(rdi_3)
            int32_t temp4_1 = *(rdi_3 + 0xc)
            *(rdi_3 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*rdi_3 + 8))(rdi_3, 1)
    
    if (rbp.b == 0)
        *result = 0
    else
        arg2.b = 1
        *(arg1 + 0x3c4) = 0
        sub_140e19ef0(arg1, arg2.b)
        *result = 1

*(result + 8) = 0
*(result + 0x10) = 0
result[0x20] = 0
__builtin_memset(&result[0x28], 0, 0x88)
*(result + 0xb4) &= 0xffffff00
*(result + 0xb0) = 0x20702
return result
