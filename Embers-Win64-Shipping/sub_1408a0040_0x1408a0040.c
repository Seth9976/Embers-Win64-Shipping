// 函数: sub_1408a0040
// 地址: 0x1408a0040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t exceptionObject = 0
int64_t* arg_20 = nullptr
int64_t* arg_18 = nullptr
exceptionObject = 1
int64_t* rcx = *(arg1 + 0x48)
(*(*rcx + 0x18))(rcx, &arg_20)
int64_t* rdi = arg_20
int64_t* rcx_1 = arg_18

if (rcx_1 != 0)
    arg_18 = nullptr
    (*(*rcx_1 + 0x10))(rcx_1)

(*(*rdi + 0x140))(rdi, &arg_18)
int64_t* rcx_3 = arg_20

if (rcx_3 != 0)
    arg_20 = nullptr
    (*(*rcx_3 + 0x10))(rcx_3)

int64_t* rcx_4 = arg_18
int64_t var_28
int32_t exceptionObject_1 = (*(*rcx_4 + 0x70))(rcx_4, *(arg1 + 0x48), 0, 1, arg2, &var_28)
int64_t* rcx_5 = arg_18

if (rcx_5 != 0)
    arg_18 = nullptr
    int64_t rdx_3 = *rcx_5
    (*(rdx_3 + 0x10))(rcx_5, rdx_3)

if (exceptionObject_1 == 0x887a000a)
    int32_t rax_5
    rax_5.b = 0
    return rax_5

if (exceptionObject_1 != 0)
    exceptionObject = exceptionObject_1
    _CxxThrowException(&exceptionObject, &data_143948c48)
    noreturn

int32_t var_20
*(arg1 + 0x60) = zx.q(var_20)
*(arg1 + 0x68) = var_28
sub_1405910e0(arg1)
int64_t rax_8
rax_8.b = 1
return rax_8
