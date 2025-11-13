// 函数: sub_140a6f430
// 地址: 0x140a6f430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1)
int64_t* rbx = arg2[1]
int64_t var_18 = 0
int64_t* rax = rbx
int64_t* var_10 = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
        int64_t var_10_1 = 0
        rax = nullptr
    else
        rbx[1].d = rax_1 + 1
        rax = rbx

if (rax != 0)
    int64_t rax_3 = *arg2
    var_18 = rax_3
    
    if (rax_3 != 0)
        sub_140a87520(&arg1[1], &var_18)

int64_t* result = &var_18

if (arg2 != &var_18)
    *arg2 = 0
    int64_t* rcx_1 = arg2[1]
    arg2[1] = 0
    
    if (rcx_1 != 0)
        int32_t temp1_1 = *(rcx_1 + 0xc)
        *(rcx_1 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rcx_1 + 8))(rcx_1, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

if (arg1 == 0)
    return result

return LeaveCriticalSection(arg1)
