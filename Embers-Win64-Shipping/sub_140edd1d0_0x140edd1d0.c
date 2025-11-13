// 函数: sub_140edd1d0
// 地址: 0x140edd1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x5b8) == 0)
    int64_t* rcx = data_143e29f28
    float arg_8
    (*(*rcx + 0x58))(rcx, &arg_8)
    int128_t zmm4_1 = *arg2
    int128_t zmm5_1 = *(arg2 + 4)
    int128_t zmm3
    zmm3.d = zmm5_1.d f* *(arg2 + 0x24)
    int128_t zmm2
    zmm2.d = zmm4_1.d f* *(arg2 + 0x1c)
    zmm5_1.d = zmm5_1.d f* *(arg2 + 0x28)
    zmm4_1.d = zmm4_1.d f* arg2[2].d
    int32_t zmm1 = arg2[3].d
    int32_t var_40_1 = zmm2.d
    int32_t var_38_1 = zmm3.d
    float var_48 = *(arg2 + 0x2c)
    int32_t var_44_1 = zmm1
    int32_t var_3c_1 = zmm4_1.d
    int32_t var_34_1 = zmm5_1.d
    char rax_2
    int128_t zmm7
    rax_2, zmm7 = sub_140db3460(&var_48, &arg_8)
    int32_t rcx_2
    rcx_2.b = rax_2 != 0
    *(arg1 + 0x5b8) = rcx_2 + 1

return sub_140594850() __tailcall
