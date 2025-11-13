// 函数: sub_14063e410
// 地址: 0x14063e410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143ddb400

if (rcx == 0)
    int64_t rcx_1 = *arg1
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    int64_t rcx_2 = *arg2
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    return 0

int16_t* const rdx = &data_142d40450
int16_t* r8

if (arg2[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *arg2

if (arg1[1].d != 0)
    rdx = *arg1

int32_t arg_20
*arg3 = sub_140af3c10(rcx, rdx, r8, &arg_20, &data_143de5830)
int64_t rcx_3 = *arg1
int32_t rsi_1 = arg_20

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_4 = *arg2

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

return zx.q(rsi_1)
