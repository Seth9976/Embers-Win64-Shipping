// 函数: sub_140ed1540
// 地址: 0x140ed1540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = sub_140ed1300(arg1, TPI1::cbGpRec(*arg2), arg3)
int64_t r8_1 = *arg1
int64_t rcx_3 = 0
void var_18
void* rdx_2 = *(*(r8_1 + 0x258))(arg1, &var_18, r8_1)
int64_t* rbx_1 = *(rdx_2 + 0x3f0)

if (rbx_1 != 0)
    int32_t rax_3 = rbx_1[1].d
    
    if (rax_3 != 0)
        rbx_1[1].d = rax_3 + 1
        rax_3.b = 1
    
    if (rax_3.b == 0)
        rbx_1 = nullptr
    
    if (rbx_1 != 0)
        rcx_3 = *(rdx_2 + 0x3e8)

int64_t var_28 = rcx_3

if (rbx_1 != 0)
    rbx_1[1].d += 1

sub_140f168d0(*arg2, &var_28)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp5_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

sub_140ea2e80(arg1, arg2, rax_1)
(*(*arg1 + 0x288))(arg1)
return sub_140ed4670(arg1[0x7e]) __tailcall
