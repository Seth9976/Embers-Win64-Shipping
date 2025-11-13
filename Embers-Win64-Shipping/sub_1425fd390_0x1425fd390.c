// 函数: sub_1425fd390
// 地址: 0x1425fd390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = arg1[4].b == 0
*arg1 = &data_14344caf8

if (not(cond:0))
    int16_t* const r9_1
    
    if (arg1[3].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = arg1[2]
    
    sub_140af98a0("Unknown", 0x64, 
        Can't free resource '%s' as it was allocated in permanent pool.", r9_1)
    sub_140afbb40()

int64_t* rcx = arg1[0x12]

if (rcx != 0)
    (**rcx)(rcx, 1)

int32_t rcx_1 = arg1[6].d
int64_t rcx_5

if (rcx_1 == 1)
label_1425fd427:
    rcx_5 = arg1[0xa]
label_1425fd42b:
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
else if (rcx_1 == 2)
    if (*(arg1 + 0xa4) != 0)
        goto label_1425fd427
else if (rcx_1 == 5)
    int64_t rcx_4 = arg1[0xe]
    
    if (rcx_4 != 0)
        sub_140a74f90(rcx_4)
    
    rcx_5 = arg1[0x10]
    goto label_1425fd42b
sub_141e50f80(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
