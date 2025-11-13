// 函数: sub_140ebe880
// 地址: 0x140ebe880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = nullptr
int64_t* rbx = *(arg1 + 0x3a0)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
        
        if (rbx != 0)
            rcx = *(arg1 + 0x398)

void var_18
int64_t r14 = *sub_140f47ce0(rcx, &var_18)
int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp2_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp3_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rax_8

if (r14 == 0)
    rax_8 = sub_140d44910(arg3)
else
    rax_8 = sub_1405d9400()

*arg2 = *rax_8
void* rcx_7 = rax_8[1]
arg2[1] = rcx_7

if (rcx_7 != 0)
    *(rcx_7 + 8) += 1

arg2[2].d = rax_8[2].d
sub_1406601b0(arg3)
return arg2
