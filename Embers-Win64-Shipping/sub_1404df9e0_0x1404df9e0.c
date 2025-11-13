// 函数: sub_1404df9e0
// 地址: 0x1404df9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x20, 0)
var_18 = rax
int32_t var_10 = 2

if (rax != 0)
    *rax = &data_142d43dd8
    rax[1] = sub_14199dd30
    rax[3] = sub_140a387b0()
    *rax = &data_142d43e30

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

data_143f138a0 = (*(*rcx + 0x70))(rcx, r.DumpRenderTargetPoolMemory", 
    Dump allocation information for the render target pool.", &var_18, 0)
data_143f13898 = &data_142d3ff10
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_1404dfacc:
    
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
        goto label_1404dfacc
return atexit(sub_142cf1b90) __tailcall
