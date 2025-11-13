// 函数: sub_142522e30
// 地址: 0x142522e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_20
sub_140a96170(&var_20)

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_20, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_20)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rcx_2
rcx_2.b = rax_2 != 0
int64_t rax_3 = var_20
*(arg2 + 0x20) = rcx_2 + rax_2
int64_t* var_18

if (var_18 != 0)
    var_18[1].d += 1

if (var_18 != 0)
    var_18[1].d += 1

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        (**var_18)(var_18)
        int32_t rax_6 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rax_6 == 1)
            (*(*var_18 + 8))(var_18, 1)

int64_t rcx_6 = *arg3
*arg3 = rax_3
int64_t* rbx_2 = arg3[1]
arg3[1] = var_18
int32_t result_1
int32_t result = result_1
arg3[2].d = result
int64_t var_38_1 = rcx_6
int64_t* var_30_1 = rbx_2

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        (**rbx_2)(rbx_2)
        result = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (result == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

if (var_18 != 0)
    result = var_18[1].d
    var_18[1].d -= 1
    
    if (result == 1)
        result = (**var_18)(var_18)
        int32_t rdi_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*var_18 + 8))(var_18, zx.q(rdi_1))

return result
