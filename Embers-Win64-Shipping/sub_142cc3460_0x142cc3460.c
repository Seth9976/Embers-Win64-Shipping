// 函数: sub_142cc3460
// 地址: 0x142cc3460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

data_1439aad60 = &data_142eaf920
AcquireSRWLockExclusive(&data_1439aad78)
int32_t i_2 = data_1439aad70
int64_t* rbx = data_1439aad68
int64_t rsi
rsi.b = i_2 s> 0

if (i_2 != 0)
    int32_t i
    
    do
        sub_1405ae080(rbx)
        rbx = &rbx[0xa]
        i = i_2
        i_2 -= 1
    while (i != 1)

bool cond:1 = data_1439aad74 == 0
data_1439aad70 = 0

if (not(cond:1))
    sub_1405a5310(&data_1439aad68, 0)

if (rsi.b != 0)
    sub_140d2af80(&data_143e1d990, &data_1439aad60)

ReleaseSRWLockExclusive(&data_1439aad78)
int32_t i_3 = data_1439aad70
int64_t* rbx_1 = data_1439aad68

if (i_3 != 0)
    int32_t i_1
    
    do
        sub_1405ae080(rbx_1)
        rbx_1 = &rbx_1[0xa]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_1 = data_1439aad68

if (rbx_1 != 0)
    sub_140a74f90(rbx_1)

data_1439aad60 = &data_142d56fa0
return &data_142d56fa0
