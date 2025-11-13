// 函数: sub_140eeca20
// 地址: 0x140eeca20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = 0
int64_t* rbx = *(arg1 + 0x20)

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 != 0)
        rbx[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rbx = nullptr
    
    if (rbx != 0)
        rcx = *(arg1 + 0x18)

int64_t var_28 = rcx
int64_t* var_20 = rbx
void*** var_18
void**** rax_3 = sub_140ef7d30(&var_18, &var_28, arg1 + 0x28, arg1 + 0x88, arg1 + 0xa0, arg1 + 0x98)
*arg2 = *rax_3
void* rcx_4 = rax_3[1]
arg2[1] = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

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

return arg2
