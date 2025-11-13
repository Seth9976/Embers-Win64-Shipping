// 函数: sub_1420a69c0
// 地址: 0x1420a69c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_20 = 0xffffffff
void* var_28 = nullptr
int32_t var_1c = 0
int64_t var_18 = 0
int32_t var_10 = 0
sub_140cea340()

if (var_28 == 0)
label_1420a6a08:
    
    if (var_10 != 0)
        void* rax_2 = sub_140cd0630(&var_28, nullptr, 0)
        
        if (rax_2 != 0 && (data_143e1b828 & *(*(rax_2 + 8) + 0x10)) != 0)
            var_28 = rax_2
        else if (var_28 != 0)
            var_20 = 0xffffffff
            int32_t var_1c_1 = 0
            var_28 = nullptr
else if (sub_140d3e110(&var_20) == 0)
    goto label_1420a6a08

*(arg1 + 0x28) = var_28
*(arg1 + 0x30) = var_20.q
int64_t* result = sub_140780c40(arg1 + 0x38, &var_18)
int64_t rcx_4 = var_18

if (rcx_4 != 0)
    result = sub_140a74f90(rcx_4)

*(arg1 + 0x48) = 0
return result
