// 函数: sub_140fbf2e0
// 地址: 0x140fbf2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_140a73790(&arg1[1], &arg_8, arg2)
int64_t rax = sx.q(arg_8)
int64_t* rdi = nullptr
int64_t rcx_1

if (rax.d == 0xffffffff)
    rcx_1 = 0
else
    rcx_1 = arg1[1] + rax * 0x28

int64_t rax_2 = rcx_1 + 0x10

if (rcx_1 == 0)
    rax_2 = 0

if (rax_2 == 0)
    int64_t* var_38 = arg2
    int64_t* var_30_1 = arg3
    sub_140e90740(&arg1[1], &arg_8, &var_38, nullptr)
    int64_t arg_10 = *arg3
    int64_t* var_30_2 = arg2
    var_38 = &arg_10
    sub_140e90570(&arg1[0xb], &arg_8, &var_38, nullptr)
    int64_t* rcx_4 = *arg3
    (**rcx_4)(rcx_4)
    int64_t* rbx_1 = arg2[1]
    int64_t* r12_1 = *arg2
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    void* rbp_1 = *arg1
    
    if (rbx_1 != 0)
        rbx_1[1].d += 1
    
    if (*(rbp_1 + 0x5c8) != 0)
        int64_t* rcx_5 = *(rbp_1 + 0x5c0)
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
            if (*(rbp_1 + 0x5c8) != 0)
                rdi = *(rbp_1 + 0x5c0)
            
            var_38 = r12_1
            int64_t* var_30_3 = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
            
            (*(*rdi + 0x50))(rdi, &var_38, arg3)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp6_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp7_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

sub_140dba5f0(&arg1[0x18], arg2)
int64_t rdi_1 = sx.q(arg1[0x16].d)
int32_t rax_12 = (rdi_1 + 1).d
arg1[0x16].d = rax_12

if (rax_12 s> *(arg1 + 0xb4))
    sub_1405a4f90(&arg1[0x15])

int64_t* rcx_15 = (rdi_1 << 4) + arg1[0x15]
*rcx_15 = *arg2
void* result = arg2[1]
rcx_15[1] = result

if (result != 0)
    *(result + 8) += 1

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp2_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, 1)

int64_t* rbx_4 = arg3[1]

if (rbx_4 != 0)
    rbx_4[1].d -= 1
    
    if (rbx_4[1].d == 1)
        result = (**rbx_4)(rbx_4)
        int32_t temp4_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (temp4_1 == 1)
            jump(*(*rbx_4 + 8))

return result
