// 函数: sub_140b6e4d0
// 地址: 0x140b6e4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t frequency
QueryPerformanceFrequency(&frequency)
void*** var_18 = nullptr
double zmm1 = 1.0 f/ float.d(frequency)
data_143d796f8 = zmm1
data_143d79700 = zmm1
void*** rax = sub_140a84c80(0, 0x20, 0)
var_18 = rax
int32_t var_10 = 2

if (rax != 0)
    *rax = &data_142e7edc0
    rax[1] = sub_140b737b0
    rax[3] = sub_140a387b0()

int64_t performanceCount
sub_140a208a0(sub_140b18f30(), &performanceCount, &var_18, 0x3e800000)
void*** rax_4

if (var_10 == 0)
    rax_4 = var_18
label_140b6e5b4:
    
    if (rax_4 != 0)
        sub_140a74f90(rax_4)
else
    void*** rcx_2 = var_18
    
    if (rcx_2 != 0)
        (*rcx_2)[7](rcx_2, 0)
        rax_4 = var_18
        
        if (rax_4 != 0)
            rax_4 = sub_140a84c80(rax_4, 0, 0)
            var_18 = rax_4
        
        int32_t var_10_1 = 0
        goto label_140b6e5b4
QueryPerformanceCounter(&performanceCount)
return float.d(performanceCount) f* data_143d796f8 f+ 16777216.0
