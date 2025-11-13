// 函数: sub_1414fd600
// 地址: 0x1414fd600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_18 = zmm6
int128_t zmm7
int128_t var_28 = zmm7
uint32_t rcx = zx.d(arg5)
int64_t r8 = sx.q(arg2)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg4.d)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(((temp1 + (temp0 & 3)) s>> 2) + 7)
int32_t rax_7 = (temp3 + (temp2 & 7)) s>> 3
int32_t temp4
int32_t temp5
temp4:temp5 = sx.q((arg4 u>> 0x20).d)
int32_t temp6
int32_t temp7
temp6:temp7 = sx.q(((temp5 + (temp4 & 3)) s>> 2) + 7)
int32_t result = (temp7 + (temp6 & 7)) s>> 3
int32_t result_1 = result
void*** rbx_1
int32_t var_88
int128_t var_78
int128_t var_68
int64_t var_58_1
int128_t var_50_1
int32_t var_38_1

if (rcx == 0)
    char rcx_23 =
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[r8]), &var_68, &data_143ef1020, 0)
    zmm7 = var_68
    var_78 = sub_141509cf0(rcx_23)
    sub_141998c50(zmm7.q, &data_143ef0f80, arg3)
    var_58_1 = arg3
    var_50_1 = zmm7
    var_38_1 = 1
    int64_t var_40_4 = rax_7.q
    void*** rax_22
    char rcx_25
    rax_22, rcx_25 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
    rbx_1 = rax_22
    
    if (rax_22 == 0)
        rbx_1 = nullptr
    else
        var_88.q = arg3
        sub_141509cf0(rcx_25)
        void* var_80_4 = &data_143ef0fb0
        var_68 = var_88.o
        sub_141992bd0(rbx_1, &arg5, &var_68, 2)
    label_1414fd97c:
        *rbx_1 = &data_142fbbbd0
        *(rbx_1 + 0x38) = var_58_1.o
        *(rbx_1 + 0x48) = var_50_1
        rbx_1[0xb] = var_38_1.q
else if (rcx == 2)
    char rcx_17 =
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[r8]), &var_68, &data_143ef1180, 0)
    zmm7 = var_68
    var_78 = sub_141509cf0(rcx_17)
    sub_141998c50(zmm7.q, &data_143ef0f80, arg3)
    var_58_1 = arg3
    var_50_1 = zmm7
    var_38_1 = 1
    int64_t var_40_3 = rax_7.q
    void*** rax_20
    char rcx_19
    rax_20, rcx_19 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
    rbx_1 = rax_20
    
    if (rax_20 != 0)
        var_88.q = arg3
        sub_141509cf0(rcx_19)
        void* var_80_3 = &data_143ef0fb0
        var_68 = var_88.o
        sub_141992bd0(rbx_1, &arg5, &var_68, 2)
        goto label_1414fd97c
    
    rbx_1 = nullptr
else if (rcx == 3)
    char rcx_11 =
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[r8]), &var_68, &data_143ef12e0, 0)
    zmm7 = var_68
    var_78 = sub_141509cf0(rcx_11)
    sub_141998c50(zmm7.q, &data_143ef0f80, arg3)
    var_58_1 = arg3
    var_50_1 = zmm7
    var_38_1 = 1
    int64_t var_40_2 = rax_7.q
    void*** rax_18
    char rcx_13
    rax_18, rcx_13 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
    rbx_1 = rax_18
    
    if (rax_18 != 0)
        var_88.q = arg3
        sub_141509cf0(rcx_13)
        void* var_80_2 = &data_143ef0fb0
        var_68 = var_88.o
        sub_141992bd0(rbx_1, &arg5, &var_68, 2)
        goto label_1414fd97c
    
    rbx_1 = nullptr
else
    if (rcx != 4)
        return result
    
    char rcx_5 =
        sub_1419a2ec0(std::_Get_future_error_what((*1111")[r8]), &var_78, &data_143ef1440, 0)
    zmm7 = var_78
    var_68 = sub_141509cf0(rcx_5)
    sub_141998c50(zmm7.q, &data_143ef0f80, arg3)
    var_58_1 = arg3
    var_50_1 = zmm7
    var_38_1 = 1
    int64_t var_40_1 = rax_7.q
    void*** rax_16
    char rcx_7
    rax_16, rcx_7 = sub_14081d830(0x60, *(arg1 + 8), 1, 0)
    rbx_1 = rax_16
    
    if (rax_16 != 0)
        var_88.q = arg3
        sub_141509cf0(rcx_7)
        void* var_80_1 = &data_143ef0fb0
        var_68 = var_88.o
        sub_141992bd0(rbx_1, &arg5, &var_68, 2)
        goto label_1414fd97c
    
    rbx_1 = nullptr
return sub_1419968d0(arg1, rbx_1)
