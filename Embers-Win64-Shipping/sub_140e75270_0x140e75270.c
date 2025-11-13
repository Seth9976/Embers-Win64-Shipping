// 函数: sub_140e75270
// 地址: 0x140e75270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = nullptr
int32_t rsi = 0
int64_t* var_30
int64_t* rbx
int64_t r15

if (*(arg1 + 0x3a8) == 0)
    rbx = 0.q
    r15.b = 0
else
    int64_t* rcx = *(arg1 + 0x3a0)
    
    if (rcx == 0)
        rbx = 0.q
        r15.b = 0
    else if ((*(*rcx + 0x28))(rcx) == 0)
        rbx = 0.q
        r15.b = 0
    else
        rbx = *(arg1 + 0x10)
        int64_t rcx_1 = 0
        
        if (rbx != 0)
            int32_t rax_2 = rbx[1].d
            
            if (rax_2 != 0)
                rbx[1].d = rax_2 + 1
                rax_2.b = 1
            
            if (rax_2.b == 0)
                rbx = nullptr
            
            if (rbx != 0)
                rcx_1 = *(arg1 + 8)
        
        int64_t var_38 = rcx_1
        var_30 = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
        
        rsi = 3
        
        if (sub_140d9c250(arg2, &var_38) == 0)
            r15.b = 0
        else
            r15.b = 1

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp2_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

if ((rsi.b & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (r15.b == 0)
    return 

if (*(arg1 + 0x3a8) != 0)
    r14 = *(arg1 + 0x3a0)

(*(*r14 + 0x48))(r14, arg3)
