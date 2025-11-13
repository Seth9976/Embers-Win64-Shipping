// 函数: sub_141db2220
// 地址: 0x141db2220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_c8
int64_t* result = sub_141dcb940(arg1, &var_c8)
int64_t* rbx = var_c8

if (rbx != 0)
    uint128_t var_94
    memset(&var_94, 0, 0x88)
    int64_t var_b8 = arg2
    int64_t r8
    int64_t var_b0_1 = r8
    int64_t r9
    int64_t var_a8_1 = r9
    uint64_t var_a0_1 = *arg3
    int32_t var_98_1 = arg3[1].d
    int128_t zmm1_1 = arg4[1]
    var_94 = *arg4
    int128_t var_84_1 = zmm1_1
    uint128_t var_74_1 = arg4[2]
    int128_t var_64_1 = arg4[3]
    uint128_t var_54_1 = arg4[4]
    int128_t var_44_1 = arg4[5]
    uint128_t var_34_1 = arg4[6]
    uint128_t var_24_1 = arg4[7]
    int64_t var_14_1 = arg4[8].q
    result = sub_1405a9f90(rbx, &var_b8)

int64_t* var_c0

if (var_c0 != 0)
    var_c0[1].d -= 1
    
    if (var_c0[1].d == 1)
        result = (**var_c0)(var_c0)
        int32_t temp1_1 = *(var_c0 + 0xc)
        *(var_c0 + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*var_c0 + 8))(var_c0, 1)

return result
