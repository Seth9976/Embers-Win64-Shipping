// 函数: sub_140cbb420
// 地址: 0x140cbb420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(*(arg1 + 0x80) + 0x10) != sub_140bdf730()
void* rax_2 = *(arg1 + 0x80)
int64_t rbx
rbx.b = cond:0

if (*(rax_2 + 0x38) s<= 1)
    int64_t arg_8 = *(rax_2 + 0x18)
    int64_t var_18
    sub_140b63b70(&arg_8, &var_18)
    
    if (arg4 s>= 0 || rbx.b == 0)
        *arg2 = var_18
        int32_t var_10
        arg2[1].d = var_10
        int32_t var_c
        *(arg2 + 0xc) = var_c
    else
        void* var_28
        sub_140d32080(&var_28, &var_18, 0, &data_142e9fe88)
        *arg2 = var_28
        int32_t var_20
        arg2[1].d = var_20
        var_20.q = 0
        var_28 = nullptr
        int64_t rcx_3 = var_18
        int32_t var_1c
        *(arg2 + 0xc) = var_1c
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
else
    sub_140596d10(arg2, rax_2 + 0x30)

return arg2
