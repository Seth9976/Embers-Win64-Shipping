// 函数: sub_140533ff0
// 地址: 0x140533ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x20, 0)
var_18 = rax
int32_t var_10 = 2

if (rax != 0)
    *rax = &data_142d43dd8
    rax[1] = sub_1423688c0
    rax[3] = sub_140a387b0()
    *rax = &data_142d43e30

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

int64_t* rax_3 = (*(*rcx + 0x38))(rcx, Slate.AllowPerUserHitTesting", &data_143a2ff1c, 
    Toggles between widgets mapping to a user id and requring a matching us", 0)
data_143f593b8 = rax_3
data_143f593b0 = &data_142d3ff10
int64_t r8 = *rax_3
(*(r8 + 0xa8))(rax_3, &var_18, r8)
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_1405340f0:
    
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
        goto label_1405340f0
return atexit(sub_142d0da70) __tailcall
