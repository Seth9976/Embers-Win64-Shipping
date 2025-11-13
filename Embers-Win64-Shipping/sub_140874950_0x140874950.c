// 函数: sub_140874950
// 地址: 0x140874950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = data_143ce4d58
int64_t var_28 = 0
int64_t var_20 = 0
int64_t rax = sub_140d1fd20(arg1, rdx)
void* result

if (rax == 0)
    result = sub_140d21c30(arg1, sub_1408727e0())
    
    if (result != 0)
        int64_t r9_1 = *result
        result = (*r9_1)(result, arg2, arg3, r9_1)
else
    if (&var_28 != arg2)
        int32_t r8 = var_20:4.d
        int32_t rdi_1 = arg2[1].d
        int64_t rbx_1 = *arg2
        var_20.d = rdi_1
        
        if (rdi_1 != 0 || r8 != 0)
            sub_1405c4b20(&var_28, rdi_1, r8)
            memcpy(var_28, rbx_1, rdi_1 * 0x1c)
    
    int64_t var_18_1 = arg3
    result = (*(*arg1 + 0x210))(arg1, rax, &var_28)

int64_t rcx_5 = var_28

if (rcx_5 == 0)
    return result

return sub_140a74f90(rcx_5)
