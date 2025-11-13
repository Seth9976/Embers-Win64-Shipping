// 函数: sub_142033b60
// 地址: 0x142033b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int64_t var_18 = 0
int64_t var_10 = 0
void*** rax
int512_t zmm1
rax, zmm1 = sub_1420278a0()
int64_t* rax_1 = (*rax)[8](rax)

if (rax_1 == 0)
label_142033be1:
    int32_t rax_5 = var_10:4.d
    var_10.d = 0
    
    if (rax_5 s< 0 && rax_5 != 0)
        sub_1405c5510(&var_18, 0)
else
    int32_t rdx = arg1[1].d
    int32_t rcx_1 = rdx - 1
    
    if (rdx == 0)
        rcx_1 = 0
    
    if (rcx_1 s<= 0)
        goto label_142033be1
    
    int16_t* const r8_1
    
    if (rdx == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *arg1
    
    if ((*(*rax_1 + 0x20))(rax_1, 0, r8_1, zx.q(arg2), &var_18) == 0)
        goto label_142033be1
    
    result = sub_142033950(&var_18, zmm1)

int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return result
