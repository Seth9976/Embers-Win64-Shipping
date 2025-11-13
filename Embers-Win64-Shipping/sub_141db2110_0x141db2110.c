// 函数: sub_141db2110
// 地址: 0x141db2110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_c8
int64_t* result = sub_141dcb7e0(arg1, &var_c8)
int64_t* rbx = var_c8

if (rbx != 0)
    uint128_t var_9c
    memset(&var_9c, 0, 0x88)
    uint64_t var_a8_1 = *arg4
    int32_t var_a0_1 = arg4[1].d
    int64_t var_b8 = arg2
    int64_t var_b0_1 = arg3
    int128_t zmm1_1 = arg5[1]
    var_9c = *arg5
    int128_t var_8c_1 = zmm1_1
    uint128_t var_7c_1 = arg5[2]
    int128_t var_6c_1 = arg5[3]
    uint128_t var_5c_1 = arg5[4]
    int128_t var_4c_1 = arg5[5]
    uint128_t var_3c_1 = arg5[6]
    uint128_t var_2c_1 = arg5[7]
    int64_t var_1c_1 = arg5[8].q
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
