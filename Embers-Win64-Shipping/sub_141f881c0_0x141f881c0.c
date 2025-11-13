// 函数: sub_141f881c0
// 地址: 0x141f881c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
int64_t r14
r14.b = 1
int32_t arg_8
sub_1405ba560(arg1 + 0xa8, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rcx_3

if (rax.d == 0xffffffff)
    rcx_3 = nullptr
else
    rcx_3 = (rax << 5) + *(arg1 + 0xa8)

int64_t* rbx = rcx_3 + 8

if (rcx_3 == 0)
    rbx = nullptr

if (rbx != 0)
    arg_8.q = *(*rbx + 0xd8)
    
    if (sub_140d3e110(&arg_8).b == 0)
        rbx = nullptr
        sub_140dba910(arg1 + 0xa8, arg2)
        r14.b = 0

if (arg3 != 0)
    rax.b = rbx == 0
    *arg3 = rax.b

if (rbx != 0)
    return rbx

int128_t var_58 = zx.o(0)
int64_t* rbx_2

if (r14.b == 0)
    rbx_2 = nullptr
else
    void* rbx_1 = *(arg1 + 0x28)
    sub_1405ba560(rbx_1 + 0x1468, &arg_8, arg2)
    int64_t rax_2 = sx.q(arg_8)
    
    if (rax_2.d == 0xffffffff)
        rbx_2 = nullptr
    else
        void* rcx_10 = (rax_2 << 5) + *(rbx_1 + 0x1468)
        rbx_2 = rcx_10 + 8
        
        if (rcx_10 == 0)
            rbx_2 = nullptr

char rax_4

if (rbx_2 != 0)
    arg_8.q = *(*rbx_2 + 0xd8)
    rax_4 = sub_140d3e110(&arg_8)

int64_t* rbx_3

if (rbx_2 == 0 || rax_4 == 0)
    int64_t* rcx_13 = *(arg1 + 0x28)
    void var_48
    int64_t* rax_7 = (*(*rcx_13 + 0x328))(rcx_13, &var_48, arg2)
    
    if (&var_58 == rax_7)
        rbx_3 = var_58:8.q
    else
        int64_t rcx_14 = *rax_7
        *rax_7 = 0
        rbx_3 = rax_7[1]
        var_58.q = rcx_14
        
        if (rbx_3 == 0)
            rbx_3 = var_58:8.q
        else
            rax_7[1] = 0
            var_58:8.q = rbx_3
    
    int64_t* var_40
    
    if (var_40 != 0)
        var_40[1].d -= 1
        
        if (var_40[1].d == 1)
            (**var_40)(var_40)
            int32_t temp1_1 = *(var_40 + 0xc)
            *(var_40 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_40 + 8))(var_40, 1)
else
    rbx_3 = rbx_2[1]
    
    if (rbx_3 != 0)
        rbx_3[1].d += 1
    
    var_58.q = *rbx_2
    
    if (rbx_3 == 0)
        rbx_3 = var_58:8.q
    else
        var_58:8.q = rbx_3

var_58 = var_58

if (rbx_3 != 0)
    rbx_3[1].d += 1

int64_t* rax_10 = sub_141f77860(arg1 + 0xa8, &arg_10, &var_58)
int64_t* rdi_2 = var_58:8.q

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        int64_t rdx_5 = *rdi_2
        (*rdx_5)(rdi_2, rdx_5)
        int32_t temp4_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

sub_140dba910(*(arg1 + 0x28) + 0x1468, arg_10)
sub_141fc9de0(*rax_10, arg1)

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp5_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return rax_10
