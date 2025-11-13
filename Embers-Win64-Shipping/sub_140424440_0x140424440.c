// 函数: sub_140424440
// 地址: 0x140424440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x20, 0)
var_18 = rax
int32_t var_10 = 2

if (rax != 0)
    *rax = &data_142d43dd8
    rax[1] = sub_14076e4c0
    rax[3] = sub_140a387b0()
    *rax = &data_142d43e30

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t* rax_3 = (*(*rcx + 0x38))(rcx, fx.EnableNiagaraCRHandler", &data_143cdf974, If > 0 Niagara "
"will push some state into the crash reporter. This is not free so should not be used unless "
"actively tracking a crash in the wild. Even then it should only be e", 0)
data_143cdfd60 = rax_3
data_143cdfd58 = &data_142d3ff10
int64_t r8 = *rax_3
(*(r8 + 0xa8))(rax_3, &var_18, r8)
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_140424540:
    
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
        goto label_140424540
return atexit(sub_142cb1dd0) __tailcall
