// 函数: sub_141fd8980
// 地址: 0x141fd8980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = 0
int32_t arg_18 = 0
uint64_t result = sub_141fe0c50(0)
int64_t* rcx = data_143f3d6e0
int64_t rbx = 0
uint64_t result_1 = result
int64_t var_38 = 0
int32_t rdi = rcx[1].d
int64_t r14 = *rcx

if (rdi != 0)
    sub_1405a4c70(&var_38, rdi, 0)
    rbx = var_38
    result = memcpy(rbx, r14, rdi * 2)
else
    int32_t var_2c_1 = 0

int16_t* var_28

if (rdi == 0)
    rdi.b = 0
else
    result = zx.q(rdi - 1)
    
    if (result.d s<= 0)
        rdi.b = 0
    else
        arg_18.q = *(*(result_1 + 0x50) + 0x18)
        sub_140b63b70(&arg_18, &var_28)
        int16_t* const rdx_4 = &data_142d40450
        rsi = 1
        int32_t var_20
        
        if (var_20 != 0)
            rdx_4 = var_28
        
        result = sub_140a54510(rbx, rdx_4)
        
        if (result.d == 0)
            rdi.b = 0
        else
            rdi = 1

if ((rsi & 1) != 0)
    int16_t* rcx_6 = var_28
    
    if (rcx_6 != 0)
        result = sub_140a74f90(rcx_6)

if (rdi.b != 0)
    result = sub_141fed490(result_1, sub_141fe07d0(result_1, &var_38, 1))
    rbx = var_38

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
