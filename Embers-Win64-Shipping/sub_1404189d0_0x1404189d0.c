// 函数: sub_1404189d0
// 地址: 0x1404189d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** var_18 = nullptr
void*** rax = sub_140a84c80(0, 0x20, 0)
var_18 = rax
int32_t var_10 = 2

if (rax != 0)
    *rax = &data_142d56538
    rax[2] = sub_140a387b0()
    *rax = &data_142d56590

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

data_143cd7e48 = (*(*rcx + 0x98))(rcx, MediaIO.HideInputTimecode", 
    All media player will stop logging the frame timecode when a new frame is captured.", &var_18, 1)
data_143cd7e40 = &data_142d3ff10
void*** rax_5

if (var_10 == 0)
    rax_5 = var_18
label_140418ab4:
    
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
        goto label_140418ab4
return atexit(sub_142cb0c30) __tailcall
