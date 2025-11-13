// 函数: sub_1408f2500
// 地址: 0x1408f2500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rax = sub_141f88540()
void** rdx = *rax
rdx[3](rax, rdx)
int512_t zmm1_1
int128_t zmm6_1
int128_t zmm7_1
zmm1_1, zmm6_1, zmm7_1 = sub_1423c0310()
int64_t var_48
int64_t* rax_1 = sub_140596d10(&var_48, arg4)
void var_38
int64_t* rax_2
int64_t rdx_3
rax_2, rdx_3 = sub_140596d10(&var_38, arg1)
zmm1_1.o = zmm7_1

if (sub_1408f1710(rax_2, rdx_3, zmm6_1, rax_1) == 0)
    int16_t* const r8_1
    
    if (arg1[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *arg1
    
    sub_140a2e390(&var_48, Failed to create GameplayAutomationScreenshot Instance for "%s"!", r8_1)
    sub_140b19e60()
    sub_140b1f680(&data_1439a8bd0, 2, &var_48)
    int64_t rcx_5 = var_48
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)

int64_t result = sub_1423ee750(arg1, 0, 1)
int64_t rcx_7 = *arg1

if (rcx_7 != 0)
    result = sub_140a74f90(rcx_7)

int64_t rcx_8 = *arg4

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8)
