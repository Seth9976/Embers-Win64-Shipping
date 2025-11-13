// 函数: sub_142498670
// 地址: 0x142498670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = data_143f627e8
int64_t var_28 = 0
int64_t var_20 = 0
int64_t rax = sub_140d1fd20(arg1, rdx)
int64_t* result

if (rax == 0)
    result = sub_140d21c30(arg1, sub_1424972f0())
    
    if (result != 0)
        int64_t r8_8 = *result
        result = (*r8_8)(result, arg2, r8_8)
else
    if (&var_28 != arg2)
        int64_t rsi_1 = sx.q(arg2[1].d)
        int32_t r8_1 = var_20:4.d
        int64_t r14_1 = *arg2
        var_20.d = rsi_1.d
        
        if (rsi_1.d != 0 || r8_1 != 0)
            sub_1407c3650(&var_28, rsi_1.d, r8_1)
            memcpy(var_28, r14_1, (rsi_1 * 0xc).d)
    
    (*(*arg1 + 0x210))(arg1, rax, &var_28)
    result = &var_28
    
    if (arg2 != &var_28)
        int64_t rdi_1 = sx.q(var_20.d)
        int64_t rsi_2 = var_28
        int32_t r8_5 = *(arg2 + 0xc)
        arg2[1].d = rdi_1.d
        
        if (rdi_1.d != 0 || r8_5 != 0)
            sub_1407c3650(arg2, rdi_1.d, r8_5)
            result = memcpy(*arg2, rsi_2, (rdi_1 * 0xc).d)
        else
            *(arg2 + 0xc) = 0

int64_t rcx_7 = var_28

if (rcx_7 == 0)
    return result

return sub_140a74f90(rcx_7)
