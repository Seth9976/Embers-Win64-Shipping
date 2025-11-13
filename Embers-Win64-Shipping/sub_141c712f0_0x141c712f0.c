// 函数: sub_141c712f0
// 地址: 0x141c712f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_28
int64_t* rax = sub_141c5eea0(arg1, &var_28, arg2)
void* var_48 = nullptr
int64_t* var_40
sub_141c4d620(&var_40, &rax[1])

if (var_40 != 0)
    var_48 = *rax
    *rax = 0

int64_t* var_20

if (var_20 != 0)
    int32_t rax_1 = *(var_20 + 0xc)
    *(var_20 + 0xc) -= 1
    
    if (rax_1 == 1 && var_20 != 0)
        (*(*var_20 + 8))(var_20, 1)

void* result

if (var_48 == 0)
    int64_t* rcx_4 = *(arg1 + 0x7e0)
    void* rax_4 = *rcx_4
    int64_t* rax_5 = rcx_4[1]
    int64_t* var_30 = rax_5
    
    if (rax_5 != 0)
        *(rax_5 + 0xc) += 1
    
    int64_t* var_50
    sub_141c4d620(&var_50, &var_30)
    void* const rax_6 = nullptr
    int64_t* rbx_1 = var_50
    int64_t* rcx_6 = var_30
    
    if (rbx_1 != 0)
        rax_6 = rax_4
    
    if (rcx_6 != 0)
        int32_t rax_7 = *(rcx_6 + 0xc)
        *(rcx_6 + 0xc) -= 1
        
        if (rax_7 == 1)
            int64_t* rcx_7 = var_30
            (*(*rcx_7 + 8))(rcx_7, 1)
        
        rbx_1 = var_50
    
    result = sub_141c672d0(rax_6, arg3, arg4)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            int64_t* rbx_2 = var_50
            (**rbx_2)(rbx_2)
            int32_t rax_12 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (rax_12 == 1)
                int64_t* rcx_10 = var_50
                (*(*rcx_10 + 8))(rcx_10, 1)
else
    result = sub_141c672d0(var_48, arg3, arg4)

int64_t* rcx_11 = var_40

if (rcx_11 != 0)
    rcx_11[1].d -= 1
    
    if (rcx_11[1].d == 1)
        int64_t* rbx_3 = var_40
        (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            int64_t* rcx_13 = var_40
            (*(*rcx_13 + 8))(rcx_13, zx.q(rdi_1))

return result
