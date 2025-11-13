// 函数: sub_140b75d30
// 地址: 0x140b75d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_18
sub_140b75db0(arg1, &var_18, arg2)
int64_t* rcx = var_18
char rax_2

if (rcx != 0)
    rax_2 = (*(*rcx + 0x60))(rcx, arg3)

int64_t rdi

if (rcx == 0 || rax_2 == 0)
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
