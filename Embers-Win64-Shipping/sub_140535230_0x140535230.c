// 函数: sub_140535230
// 地址: 0x140535230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x20, 0)
var_18 = rax
int32_t var_10 = 2

if (rax != 0)
    *rax = &data_142d43dd8
    rax[1] = sub_14239aef0
    rax[3] = sub_140a387b0()
    *rax = &data_142d43e30

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

data_143f59828 = (*(*rcx + 0x88))(rcx, r.TogglePreCulledIndexBuffers", 
    Toggles use of preculled index buffers from the command 'PreCullIndexBuffers'", &var_18, 0)
data_143f59820 = &data_142d3ff10
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_14053531f:
    
    if (rax_5 != 0)
        sub_140a74f90(rax_5)
else
    void*** rcx_1 = var_18
    
    if (rcx_1 != 0)
        (*rcx_1)[7](rcx_1, 0)
        rax_5 = var_18
        
        if (rax_5 != 0)
            rax_5 = sub_140a84c80(rax_5, 0, 0)
            var_18 = rax_5
        
        int32_t var_10_1 = 0
        goto label_14053531f
return atexit(sub_142d0e2c0) __tailcall
