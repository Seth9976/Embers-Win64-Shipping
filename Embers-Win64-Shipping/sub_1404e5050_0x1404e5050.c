// 函数: sub_1404e5050
// 地址: 0x1404e5050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x20, 0)
var_18 = rax
int32_t var_10 = 2

if (rax != 0)
    *rax = &data_142d40dc0
    rax[1] = sub_1419ef220
    rax[3] = sub_140a387b0()
    *rax = &data_142d40e18

int64_t* rcx = data_143db18d0
data_143f22630 = &data_142d3ff08
void**** r8 = &var_18
data_143f22638 = &var_18
data_143f22640 = 0

if (rcx == 0)
    sub_140a53c40()
    r8 = data_143f22638
    rcx = data_143db18d0

void arg_8
data_143f22640 = *(*(*rcx + 0x58))(rcx, &arg_8, r8)
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_1404e5147:
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
else
    void*** rcx_2 = var_18
    
    if (rcx_2 != 0)
        (*rcx_2)[7](rcx_2, 0)
        rax_5 = var_18
        
        if (rax_5 != 0)
            rax_5 = sub_140a84c80(rax_5, 0, 0)
            var_18 = rax_5
        
        int32_t var_10_1 = 0
        goto label_1404e5147
return atexit(sub_142cf3870) __tailcall
