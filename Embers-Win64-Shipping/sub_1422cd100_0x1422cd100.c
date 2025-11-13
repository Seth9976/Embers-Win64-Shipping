// 函数: sub_1422cd100
// 地址: 0x1422cd100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg5 + 0x29) & 1) == 0)
    int64_t rax_1 = arg5[0x15]
    
    if (rax_1 s< arg5[0x14])
        arg5[0x15] = rax_1 + 1
    else
        sub_140b55370(arg5)

*arg6 = 0
int64_t var_28
int512_t zmm1 = sub_140d21e10(*(arg1 + 0x60), &var_28, 0)
void* var_38
sub_142168720(*(arg2 + 0x68), &var_38, &var_28)
void* r8_1 = &arg3[4]

if (arg3 == 0)
    r8_1 = nullptr

int64_t rdx_3

if (arg7 == 0 || arg3 == 0)
    rdx_3 = 0
else
    rdx_3 = *arg3

char rax_4 = sub_1422cd260(arg1, arg3, var_38, arg5, zmm1, 0, *(arg1 + 0x40) - 1, rdx_3, arg4.d, 
    arg4, r8_1, arg6, arg8)
int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp1_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

int64_t rcx_8 = var_28

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return zx.q(rax_4)
