// 函数: sub_140f8bb00
// 地址: 0x140f8bb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0xb3].b != 0)
    int64_t rbx
    
    if (arg1[0xb5].d == 0)
        rbx.b = 0
    else
        int64_t* rcx = arg1[0xb4]
        
        if (rcx == 0)
            rbx.b = 0
        else if ((*(*rcx + 0x28))(rcx).b == 0)
            rbx.b = 0
        else
            rbx.b = 1
    
    uint64_t result
    
    if (arg2[0xc].d == 0)
        result.b = 0
    else
        int64_t* rcx_1 = arg2[0xb]
        
        if (rcx_1 == 0)
            result.b = 0
        else if ((*(*rcx_1 + 0x28))(rcx_1).b == 0)
            result.b = 0
        else
            result.b = 1
    
    if (rbx.b == result.b)
        if (rbx.b != 0)
            int64_t rbx_1 = 0
            int64_t rdi_1 = 0
            
            if (arg2[0xc].d != 0)
                int64_t* rcx_2 = arg2[0xb]
                
                if (rcx_2 != 0)
                    void arg_8
                    result = (*(*rcx_2 + 0x30))(rcx_2, &arg_8)
                    rdi_1 = *result
            
            if (arg1[0xb5].d != 0)
                int64_t* rcx_3 = arg1[0xb4]
                
                if (rcx_3 != 0)
                    void arg_18
                    result = (*(*rcx_3 + 0x30))(rcx_3, &arg_18)
                    rbx_1 = *result
            
            if (rbx_1 == rdi_1)
                return result
        else if (arg1[0xb3].b == arg2[0xa].b)
            result = sub_140f07570(&arg1[0xa9], arg2)
            
            if (result.b != 0)
                return result

sub_140d962e0(&arg1[0xa9], arg2)
arg1[0xb3].b = arg2[0xa].b
sub_140692f90(&arg1[0xb4], &arg2[0xb])

if (*(arg1 + 0x794) != 0 && arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

return sub_140e19ef0(arg1, 5)
