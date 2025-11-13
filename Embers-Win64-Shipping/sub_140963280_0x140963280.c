// 函数: sub_140963280
// 地址: 0x140963280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_20
sub_1409633d0(&var_20, arg2, 0)
int64_t* rdi = var_20
char rax_3

if (rdi != 0)
    int32_t var_24_1 = 0
    void var_38
    rax_3 = (*(*rdi + 0x2d0))(rdi, arg3, arg4, (*sub_140b5e500(&var_38, 0x121)).q)

if (rdi == 0 || rax_3 == 0)
    rdi.b = 0
else
    rdi.b = 1

int64_t* var_18

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        int64_t rdx_2 = *var_18
        (*rdx_2)(var_18, rdx_2)
        int32_t rsi_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8_1 = *var_18
            (*(r8_1 + 8))(var_18, zx.q(rsi_1), r8_1)

return zx.q(rdi.b)
