// 函数: sub_140b38d90
// 地址: 0x140b38d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t rdx_2
int32_t r8_1

if ((arg3 & 0x10000000) == 0)
    int64_t* rax_1 = sub_140b483b0(arg1, &var_18, u"%D.%h:%m:%s.%n")
    int32_t rcx_1 = rax_1[1].d
    r8_1 = rcx_1 - 1
    
    if (rcx_1 == 0)
        r8_1 = 0
    
    rdx_2 = *rax_1
else
    sub_140a2e390(&var_18, u"FTimespan(0x%016X)", *arg1)
    int32_t var_10
    
    if (var_10 == 0)
        r8_1 = 0
        rdx_2 = var_18
    else
        r8_1 = var_10 - 1
        rdx_2 = var_18

sub_140a20ba0(arg2, rdx_2, r8_1)
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t result
result.b = 1
return result
