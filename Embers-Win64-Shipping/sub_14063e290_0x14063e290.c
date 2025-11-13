// 函数: sub_14063e290
// 地址: 0x14063e290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143ddb400
int32_t* rdx

if (rcx != 0)
    int16_t* const rdx_1 = &data_142d40450
    int16_t* r8
    
    if (arg3[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *arg3
    
    if (arg2[1].d != 0)
        rdx_1 = *arg2
    
    char var_18[0x10]
    *arg4 = sub_140af31d0(rcx, rdx_1, r8, &var_18, &data_143de5830)
    rdx = &var_18
else
    rdx = &data_14399f634

sub_140acc920(arg1, rdx)
int64_t rcx_2 = *arg2

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = *arg3

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return arg1
