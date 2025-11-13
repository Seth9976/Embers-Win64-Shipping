// 函数: sub_140820ac0
// 地址: 0x140820ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_10 = arg2
uint64_t arg_8
int32_t* result = sub_1408297c0(arg1 + 0x50, &arg_8, arg2)

if (*result == 0xffffffff)
    arg_8 = arg1
    int64_t var_48
    __builtin_memset(&var_48, 0, 0x30)
    result = sub_140820c30(&var_48, arg2, arg1, arg3)
    
    if (result.b != 0)
        sub_1405a7050(&arg2[0x14], &arg_8)
        uint32_t r8_3 = (arg_10 u>> 4).d
        int32_t r9_3 = (0x9e3779b9 - r8_3) ^ r8_3 << 8
        int32_t rdx_5 = neg.d(r9_3 + r8_3) ^ r9_3 u>> 0xd
        int32_t r8_6 = (r8_3 - r9_3 - rdx_5) ^ rdx_5 u>> 0xc
        int32_t r9_6 = (r9_3 - r8_6 - rdx_5) ^ r8_6 << 0x10
        int32_t rdx_8 = (rdx_5 - r9_6 - r8_6) ^ r9_6 u>> 5
        int32_t r8_9 = (r8_6 - r9_6 - rdx_8) ^ rdx_8 u>> 3
        int32_t r9_9 = (r9_6 - r8_9 - rdx_8) ^ r8_9 << 0xa
        result = sub_140a4bff0(
            sub_140817a30(arg1 + 0x50, (rdx_8 - r9_9 - r8_9) ^ r9_9 u>> 0xf, &arg_10), &var_48, 
            0x30)
    
    int64_t var_28
    
    if (var_28 != 0)
        result = sub_140a74f90(var_28)
    
    int64_t var_38
    
    if (var_38 != 0)
        result = sub_140a74f90(var_38)
    
    int64_t rcx_7 = var_48
    
    if (rcx_7 != 0)
        return sub_140a74f90(rcx_7)

return result
