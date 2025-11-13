// 函数: sub_140f8cda0
// 地址: 0x140f8cda0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xb7].b != 0)
    int64_t rbx
    
    if (arg1[0xb9].d == 0)
        rbx.b = 0
    else
        int64_t* rcx = arg1[0xb8]
        
        if (rcx == 0)
            rbx.b = 0
        else if ((*(*rcx + 0x28))(rcx).b == 0)
            rbx.b = 0
        else
            rbx.b = 1
    
    int64_t* result
    
    if (arg2[3].d == 0)
        result.b = 0
    else
        int64_t* rcx_1 = arg2[2]
        
        if (rcx_1 == 0)
            result.b = 0
        else if ((*(*rcx_1 + 0x28))(rcx_1).b == 0)
            result.b = 0
        else
            result.b = 1
    
    if (rbx.b == result.b)
        bool cond:1_1
        
        if (rbx.b != 0)
            int64_t rbx_1 = 0
            int64_t rdi_1 = 0
            
            if (arg2[3].d != 0)
                int64_t* rcx_2 = arg2[2]
                
                if (rcx_2 != 0)
                    void arg_8
                    result = (*(*rcx_2 + 0x30))(rcx_2, &arg_8)
                    rdi_1 = *result
            
            if (arg1[0xb9].d != 0)
                int64_t* rcx_3 = arg1[0xb8]
                
                if (rcx_3 != 0)
                    void arg_18
                    result = (*(*rcx_3 + 0x30))(rcx_3, &arg_18)
                    rbx_1 = *result
            
            cond:1_1 = rbx_1 == rdi_1
            goto label_140f8ce72
        
        if (arg1[0xb7].b == arg2[1].b)
            result = *arg2
            cond:1_1 = arg1[0xb6] == result
        label_140f8ce72:
            
            if (cond:1_1)
                return result

arg1[0xb6] = *arg2
arg1[0xb7].b = arg2[1].b
sub_140692f90(&arg1[0xb8], &arg2[2])

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5) __tailcall
