// 函数: sub_1424d75d0
// 地址: 0x1424d75d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_48 = nullptr
int32_t i_2 = 0
*(arg2 + 0x38) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_48, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t* rax_2 = *(arg2 + 0x38)
int64_t* rsi = &var_48
int64_t var_28 = 0
int64_t var_20 = 0

if (rax_2 != 0)
    rsi = rax_2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_28, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t var_38 = 0
int64_t var_30 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &var_38, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_5 = *(arg2 + 0x20)
int64_t rcx_3
rcx_3.b = rax_5 != 0
*(arg2 + 0x20) = rcx_3 + rax_5
int64_t var_18
int64_t* result = sub_1420c5c90(&var_18, rsi, &var_28, &var_38)
int64_t* result_1 = result

if (arg3 != result)
    int64_t rcx_6 = *arg3
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int64_t rcx_8 = var_18

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int64_t rcx_9 = var_38

if (rcx_9 != 0)
    result = sub_140a74f90(rcx_9)

int64_t rcx_10 = var_28

if (rcx_10 != 0)
    result = sub_140a74f90(rcx_10)

int32_t i_1 = i_2
int64_t* rbx_1 = var_48

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx_11 = *rbx_1
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        rbx_1 = &rbx_1[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx_1 = var_48

if (rbx_1 == 0)
    return result

return sub_140a74f90(rbx_1)
