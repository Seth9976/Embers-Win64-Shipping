// 函数: sub_140ecbc80
// 地址: 0x140ecbc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x3f9) = 0
char rax = data_1439ae51c
arg1[0x35].b = rax
*(arg1 + 0x1a9) = 1
char var_28 = rax
char var_27 = 1
int64_t var_20 = 0
int32_t var_18 = 0
sub_1407473e0(&arg1[0x36], &var_20)
sub_140745b20(&var_20)
int64_t* rbx = arg1[0x73]
int64_t* r14 = nullptr
int64_t* rdi = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
        rdi = nullptr

if (rdi != 0)
    r14 = arg1[0x72]

if (rbx != 0)
    rbx[1].d += 1

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

if (r14 != 0)
    (*(*r14 + 0x288))(r14)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if ((*(*arg1 + 0x280))(arg1) == 0)
    *(arg1 + 0x3f9) = 0
else
    *(arg1 + 0x3f9) = 1
    int64_t* rbx_1 = arg1[0x7a]
    
    if (rbx_1 != 0)
        int32_t rax_9 = rbx_1[1].d
        
        if (rax_9 != 0)
            rbx_1[1].d = rax_9 + 1
            rax_9.b = 1
        
        if (rax_9.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp5_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)

return sub_140ec4530(arg1) __tailcall
