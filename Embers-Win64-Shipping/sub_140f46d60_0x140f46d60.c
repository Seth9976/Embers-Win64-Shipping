// 函数: sub_140f46d60
// 地址: 0x140f46d60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg1 + 0x18)

if (rbx[4] != 0)
    int64_t* rcx = *(rbx + 8)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (rbx[4] == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(rbx + 8)
        
        *rbx = (*(*rcx_1 + 0x48))(rcx_1)

int64_t* rcx_2 = *(arg1 + 0x10)
void var_18
int64_t* rax_6 = (*(*rcx_2 + 0x10))(rcx_2, &var_18, zx.q(*rbx))
*arg2 = *rax_6
void* rcx_4 = rax_6[1]
arg2[1] = rcx_4

if (rcx_4 != 0)
    *(rcx_4 + 8) += 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

return arg2
