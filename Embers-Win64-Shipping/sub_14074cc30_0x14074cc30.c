// 函数: sub_14074cc30
// 地址: 0x14074cc30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(&data_143cdfd68)
int32_t i_1 = *(arg1 + 0x38)
int64_t* rbx = *(arg1 + 0x30)

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg1 + 0x38) = 0

if (*(arg1 + 0x3c) != 0)
    sub_14061cd70(arg1 + 0x30, 0)

int64_t var_18 = 0
int64_t var_10 = 0
sub_140a53700(arg1 + 0x10, &var_18)
int64_t rcx_3 = var_18

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return LeaveCriticalSection(&data_143cdfd68)
