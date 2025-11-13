// 函数: sub_140ead380
// 地址: 0x140ead380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_18
sub_140ebeb20(*(arg1 + 0x3f0), &var_18)
void* rcx_1 = var_18
char rax_1

if (rcx_1 != 0)
    rax_1 = sub_140eec340(rcx_1, arg2)

int64_t rdi

if (rcx_1 == 0 || rax_1 == 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t* var_10

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        int64_t rdx_1 = *var_10
        (*rdx_1)(var_10, rdx_1)
        int32_t temp1_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_10
            (*(r8_1 + 8))(var_10, 1, r8_1)

return zx.q(rdi.b)
