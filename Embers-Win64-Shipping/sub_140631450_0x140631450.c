// 函数: sub_140631450
// 地址: 0x140631450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int32_t var_20 = 0
sub_1405947f0(&var_28, 0x37)
int32_t rax = var_20 + 0x37
var_20 = rax

if (rax s> 0)
    sub_140594770(&var_28)

sub_1405a7220(var_28, 0x37, "AVictoryPC::HTTPOnResponseReceived>>> Connection Error", 0x37, 0x3f)

if (arg4 != 0)
    int64_t* rcx_3 = *arg3
    int64_t var_18
    int64_t* rax_2 = (*(*rcx_3 + 0x48))(rcx_3, &var_18)
    
    if (&var_28 != rax_2)
        int64_t rcx_4 = var_28
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        var_28 = *rax_2
        *rax_2 = 0
        var_20 = rax_2[1].d
        var_20 = *(rax_2 + 0xc)
        rax_2[1] = 0
    
    int64_t rcx_6 = var_18
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)

int32_t result = sub_14065df30(arg1, &var_28)
int64_t rcx_8 = var_28

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t* rbx_2 = *(arg2 + 8)

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp2_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp2_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rbx_3 = arg3[1]

if (rbx_3 != 0)
    result = rbx_3[1].d
    rbx_3[1].d -= 1
    
    if (result == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rdi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rdi_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, zx.q(rdi_1))

return result
