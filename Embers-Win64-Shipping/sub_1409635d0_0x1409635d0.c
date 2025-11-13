// 函数: sub_1409635d0
// 地址: 0x1409635d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = 0
int64_t rdi
rdi.b = 0
int64_t* var_20
sub_1409633d0(&var_20, arg2, 0)
int64_t* rcx_1 = var_20

if (rcx_1 != 0)
    void* rax_2 = (*(*rcx_1 + 0x2d8))(rcx_1, arg3)
    
    if (rax_2 != 0)
        *arg4 = arg3
        rdi.b = 1
        arg4[1].b = *(rax_2 + 0x10)
        *(arg4 + 9) = *(rax_2 + 0x15)
        *(arg4 + 0xa) = *(rax_2 + 0x17)
        *(arg4 + 0xb) = *(rax_2 + 0x18)

int64_t* var_18

if (var_18 != 0)
    var_18[1].d -= 1
    
    if (var_18[1].d == 1)
        int64_t rdx_1 = *var_18
        (*rdx_1)(var_18, rdx_1)
        int32_t rsi_1 = *(var_18 + 0xc)
        *(var_18 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t r8 = *var_18
            (*(r8 + 8))(var_18, zx.q(rsi_1), r8)

return zx.q(rdi.b)
