// 函数: sub_14042a9d0
// 地址: 0x14042a9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x20, 0)
var_18 = rax
int32_t var_10 = 2

if (rax != 0)
    *rax = &data_142d43dd8
    rax[1] = sub_140834b90
    rax[3] = sub_140a387b0()
    *rax = &data_142d43e30

int64_t* rcx = data_143db18d0
wchar16 const (* rbx_1)[0x18] = data_14396f050

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t* rax_3 =
    (*(*rcx + 0x38))(rcx, rbx_1, &data_14396f034, The quality level for Niagara Effects. \n", 0x40)
data_143ce3b30 = rax_3
data_143ce3b28 = &data_142d3ff10
int64_t r8 = *rax_3
(*(r8 + 0xa8))(rax_3, &var_18, r8)
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_14042aad3:
    
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
        goto label_14042aad3
return atexit(sub_142cb4b10) __tailcall
