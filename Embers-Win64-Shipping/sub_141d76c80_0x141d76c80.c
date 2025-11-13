// 函数: sub_141d76c80
// 地址: 0x141d76c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const rbp = &data_142d40450
void* rsi = arg1[0x16]
int64_t var_18
int64_t* rax_1 = (*(*arg1 + 0x2d0))(arg3, &var_18, arg2, &data_142d40450, 0)

if (rsi + 0x28 != rax_1)
    int64_t rcx = *(rsi + 0x28)
    
    if (rcx != 0)
        sub_140a74f90(rcx)
    
    *(rsi + 0x28) = *rax_1
    *rax_1 = 0
    *(rsi + 0x30) = rax_1[1].d
    *(rsi + 0x34) = *(rax_1 + 0xc)
    rax_1[1] = 0

int64_t* rbx_1 = *(rsi + 0x58)
*(rsi + 0x20) = 1
int16_t* var_28
sub_140a2e390(&var_28, u"%d", 1)
int16_t* const rdx_1 = &data_142d40450
int32_t var_20

if (var_20 != 0)
    rdx_1 = var_28

(*(*rbx_1 + 0x80))(rbx_1, rdx_1, 0x8000000)
int16_t* rcx_4 = var_28

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t* rcx_5 = *(rsi + 0x60)
wchar32 const* const rdx_2 = &(*U"RGBXYZF10|")[8]

if (*(rsi + 0x38) != 0)
    rdx_2 = &(*U"RGBXYZF10|")[7]

(*(*rcx_5 + 0x80))(rcx_5, rdx_2, 0x8000000)
int64_t* rbx_2 = *(rsi + 0x68)
sub_140a2e390(&var_28, u"%d", zx.q(*(rsi + 0x3c)))

if (var_20 != 0)
    rbp = var_28

int64_t result = (*(*rbx_2 + 0x80))(rbx_2, rbp, 0x8000000)
int16_t* rcx_8 = var_28

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_18

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
