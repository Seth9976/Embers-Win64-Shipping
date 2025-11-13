// 函数: sub_140e78030
// 地址: 0x140e78030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140da2300(&var_38, arg1 + 0x68, arg2)
int64_t r9 = var_38
int64_t* var_30
uint64_t rdi

if (r9 != 0)
    int32_t rdx_1 = 0
    uint32_t rcx_1 = zx.d(arg3)
    
    if (arg3 != 0)
        if (rcx_1 == 1)
            rdx_1 = 1
        else if (rcx_1 == 2)
            rdx_1 = rcx_1
    
    if (var_30 != 0)
        var_30[1].d += 1
    
    int32_t var_28 = rdx_1
    int64_t var_20_1 = r9
    
    if (var_30 != 0)
        int32_t rax_1 = var_30[1].d
        var_30[1].d = rax_1
        
        if (rax_1 == 0)
            (**var_30)(var_30)
            int32_t temp4_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    rdi = zx.q(sub_140e7eee0(arg1 - 0x118, &var_28))
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            int64_t rdx_3 = *var_30
            (*rdx_3)(var_30, rdx_3)
            int32_t temp5_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_30 + 8))(var_30, 1)
else
    rdi.b = 0

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp2_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

return zx.q(rdi.b)
