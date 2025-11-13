// 函数: sub_1404cf960
// 地址: 0x1404cf960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_38 = nullptr
void*** rax = sub_140a84c80(0, 0x20, 0)
var_38 = rax
int32_t var_30 = 2

if (rax != 0)
    *rax = &data_142ead5c0
    rax[1] = sub_1417f1570
    rax[3] = sub_140a387b0()
    *rax = &data_142ead618

void var_28
int64_t* rax_3 = sub_140ac6680(
    _vfprintf_p_l(&var_28, 
        Reset the rotation of the head mounted display.\nPass in an optional yaw", 
    HeadMountedDisplay"))
int16_t* const rbx_1

if (rax_3[1].d == 0)
    rbx_1 = &data_142d40450
else
    rbx_1 = *rax_3

int64_t* rcx_2 = data_143db18d0

if (rcx_2 == 0)
    sub_140a53c40()
    rcx_2 = data_143db18d0

data_143ef95f8 = (*(*rcx_2 + 0x78))(rcx_2, u"vr.HeadTracking.ResetOrientation", rbx_1, &var_38, 0)
data_143ef95f0 = &data_142d3ff10
int64_t* var_20

if (var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rdi_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rdi_1 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rdi_1))

void*** rax_10

if (var_30 == 0)
    rax_10 = var_38
label_1404cfacb:
    
    if (rax_10 != 0)
        sub_140a74f90(rax_10)
else
    void*** rcx_5 = var_38
    
    if (rcx_5 != 0)
        (*rcx_5)[7](rcx_5, 0)
        rax_10 = var_38
        
        if (rax_10 != 0)
            rax_10 = sub_140a84c80(rax_10, 0, 0)
            var_38 = rax_10
        
        int32_t var_30_1 = 0
        goto label_1404cfacb
return atexit(sub_142ceb7d0) __tailcall
