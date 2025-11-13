// 函数: sub_140902300
// 地址: 0x140902300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r8 = *(arg1 + 8)
int128_t var_28
__builtin_memset(&var_28, 0, 0x18)
int64_t var_38
sub_140903d10(&var_38, arg2, r8, &var_28, arg3)
int64_t rdi
rdi.b = var_38 != 0
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_1 = *var_30
            (*(r8_1 + 8))(var_30, 1, r8_1)

int64_t rcx_3 = var_28.q

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return zx.q(rdi.b)
