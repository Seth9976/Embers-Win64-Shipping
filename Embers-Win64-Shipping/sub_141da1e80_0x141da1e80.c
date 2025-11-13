// 函数: sub_141da1e80
// 地址: 0x141da1e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_38
int64_t var_28
(*(*arg1 + 0x1d8))(arg1, &var_38, sub_141d9ef80(arg1, &var_28, arg2))
int64_t rcx_1 = var_28

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rdx_2 = var_38
int64_t* rdi

if (rdx_2 == 0)
    rdi.b = 0
else
    var_28.d = 6
    int64_t var_20_1 = 0
    int64_t var_18_1 = 0
    rdi = zx.q(sub_141da1270(arg1, rdx_2, arg3, &var_28, arg4))
    
    if (var_20_1 != 0)
        sub_140a74f90(var_20_1)

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        int64_t rdx_3 = *var_30
        (*rdx_3)(var_30, rdx_3)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_3 = *var_30
            (*(r8_3 + 8))(var_30, 1, r8_3)

return zx.q(rdi.b)
