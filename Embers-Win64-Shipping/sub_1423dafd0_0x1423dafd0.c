// 函数: sub_1423dafd0
// 地址: 0x1423dafd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_143de5426 != 0)
    return 

char rax = *(arg1 + 0xa4e)

if (arg2 == rax)
    return 

if (arg2 == 0)
    int64_t* rbx
    int64_t* arg_18 = rbx
    int64_t* rcx = *(arg1 + 0xa50)
    
    if (rcx != *(arg1 + 0xa60))
        if ((*(*rcx + 0x38))(rcx) != 0)
            int64_t* rcx_1 = *(arg1 + 0xa50)
            (*(*rcx_1 + 0x30))(rcx_1, 0)
        
        rbx = *(arg1 + 0xa68)
        int64_t var_28 = *(arg1 + 0xa60)
        
        if (rbx != 0)
            rbx[1].d += 1
        
        if (&var_28 != arg1 + 0xa50)
            var_28.o = *(arg1 + 0xa50)
            *(arg1 + 0xa50) = var_28.o
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
    
    int64_t* rcx_4 = *(arg1 + 0xa50)
    
    if (rcx_4 != 0)
        if (*(arg1 + 0xa70) == 0)
            int32_t rdx = *data_143f5b408
            
            if (rdx == 2 || (rdx == 1 && *(arg1 + 0xa71) != 0))
                rbx.b = 1
            else
                rbx.b = 0
        else
            rbx.b = 0
        
        if (rbx.b != (*(*rcx_4 + 0x38))())
            int64_t* rcx_5 = *(arg1 + 0xa50)
            (*(*rcx_5 + 0x30))(rcx_5, zx.q(rbx.b))
    
    int64_t* rcx_6 = *(arg1 + 0xa50)
    (*(*rcx_6 + 0x40))(rcx_6, 0)
    *(arg1 + 0xa4e) = arg2
    return 

if (rax == 3 || (arg2 == 1 && rax == 2))
    return 

if (rax != arg2 - 1)
    sub_1423dafd0()

int64_t* rcx_7 = *(arg1 + 0xa50)
(*(*rcx_7 + 0x40))(rcx_7, zx.q(arg2))
*(arg1 + 0xa4e) = arg2
