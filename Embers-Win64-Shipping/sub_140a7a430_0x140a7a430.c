// 函数: sub_140a7a430
// 地址: 0x140a7a430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
sub_140ab1680(&var_18, arg2)
int32_t var_10
int64_t rbx_1
int64_t* rdi

if (var_10 s<= 1)
    rbx_1 = var_18
    rdi.b = 0
else if (arg3 == &var_18)
    rbx_1 = var_18
    rdi.b = 1
else
    int64_t rbx = *arg3
    
    if (rbx != 0)
        int64_t* rcx_1 = data_143ddb3f0
        
        if (rcx_1 == 0)
            sub_140a750a0()
            rcx_1 = data_143ddb3f0
        
        (*(*rcx_1 + 0x30))(rcx_1, rbx)
    
    rbx_1 = 0
    *arg3 = var_18
    arg3[1].d = var_10
    int32_t var_c
    *(arg3 + 0xc) = var_c
    rdi.b = 1
    var_18 = 0
    var_10.q = 0

if (rbx_1 != 0)
    int64_t* rcx_2 = data_143ddb3f0
    
    if (rcx_2 == 0)
        sub_140a750a0()
        int64_t* rcx_3 = data_143ddb3f0
        int64_t r8 = *rcx_3
        (*(r8 + 0x30))(rcx_3, rbx_1, r8)
        return zx.q(rdi.b)
    
    (*(*rcx_2 + 0x30))(rcx_2, rbx_1)

return zx.q(rdi.b)
