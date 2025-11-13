// 函数: sub_140d9d070
// 地址: 0x140d9d070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
sub_140da6800(arg1, &var_18, arg2, arg4)
int64_t* rcx = var_18
int32_t rax_1

if (rcx != 0)
    rax_1 = sub_142b91fc0(*rcx)

int64_t rdi

if (rcx == 0 || rax_1 == 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t rdx_2 = *var_10
        (*rdx_2)(var_10, rdx_2)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_10
            (*(r8_1 + 8))(var_10, 1, r8_1)

return zx.q(rdi.b)
