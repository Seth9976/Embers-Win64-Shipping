// 函数: sub_1406eaa90
// 地址: 0x1406eaa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rdx = sub_140b5b8a0(arg1[2], 0) == 0
int64_t result

if ((arg1[3] != 0 | rdx) == 0)
label_1406eac4d:
    int64_t rcx_20 = arg3[4]
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    int64_t rcx_21 = arg3[2]
    
    if (rcx_21 != 0)
        sub_140a74f90(rcx_21)
    
    int64_t rcx_22 = *arg3
    
    if (rcx_22 != 0)
        sub_140a74f90(rcx_22)
    
    sub_1406e9b20(arg4)
    result.b = 0
else
    void* rax_1 = sub_140d3c6e0(arg1)
    
    if (rax_1 == 0)
        goto label_1406eac4d
    
    if (sub_140d1fd20(rax_1, *(arg1 + 8)) == 0)
        goto label_1406eac4d
    
    void var_c0
    sub_140596d10(&var_c0, arg4)
    void var_b0
    sub_140596d10(&var_b0, &arg4[2])
    void var_a0
    sub_140596d10(&var_a0, &arg4[4])
    void var_90
    sub_140596d10(&var_90, &arg4[6])
    void var_80
    sub_140596d10(&var_80, &arg4[8])
    void var_70
    sub_140596d10(&var_70, &arg4[0xa])
    int64_t var_60_1 = arg4[0xc]
    int64_t var_58_1 = arg4[0xd]
    int32_t var_50_1 = arg4[0xe].d
    int32_t var_4c_1 = *(arg4 + 0x74)
    void var_48
    sub_140596d10(&var_48, &arg4[0xf])
    void var_38
    sub_140596d10(&var_38, &arg4[0x11])
    void var_28
    sub_140596d10(&var_28, &arg4[0x13])
    void var_f8
    sub_140596d10(&var_f8, arg3)
    void var_e8
    sub_140596d10(&var_e8, &arg3[2])
    void var_d8
    sub_140596d10(&var_d8, &arg3[4])
    char var_c8_1 = arg3[6].b
    sub_1406eae90(arg1, arg2, &var_f8, &var_c0)
    int64_t rcx_16 = arg3[4]
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    int64_t rcx_17 = arg3[2]
    
    if (rcx_17 != 0)
        sub_140a74f90(rcx_17)
    
    int64_t rcx_18 = *arg3
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    sub_1406e9b20(arg4)
    result.b = 1

return result
