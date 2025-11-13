// 函数: sub_140e48c50
// 地址: 0x140e48c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x3b8)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142ed9ee8

if (result != -0x10)
    sub_140dde0c0(&result[2])
    result[7].b &= 0xfb
    result[2] = &data_142ed8028
    result[0x57] = 0
    result[0x58].b = 0
    result[0x59] = 0
    result[0x5a].d = 0
    result[0x5b] = &data_142d8ad18
    result[0x5c].d = 0x42000000
    *(result + 0x2e4) = 0x42000000
    *(result + 0x2ec) = 0
    *(result + 0x2f4) = 0
    *(result + 0x2f8) = data_14399f5c0
    result[0x61].b = 0
    __builtin_memset(&result[0x62], 0, 0x20)
    int64_t zmm1_1 = data_143dbb1f0
    result[0x67].d = zmm1_1.d
    result[0x66].d = zmm1_1.d
    result[0x68].b = 0
    int128_t zmm0_1 = zmm1_1:4.d
    *(result + 0x33c) = zmm0_1.d
    *(result + 0x334) = zmm0_1.d
    *(result + 0x344) = 3
    result[0x69] = 0
    result[0x6a] = 0
    result[0x6b].b &= 0xfc
    __builtin_memcpy(&result[0x6c], 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x00", 0x11)
    __builtin_memset(&result[0x6f], 0, 0x11)
    result[0x72] = 0
    result[0x73].d = 0
    result[0x75] = 0
    result[0x76].d = 0
    *(result + 0x3e) &= 0xfb
    
    if (sub_140db3510(&result[5]) != 0)
        sub_140dc03a0(&result[5], *(result + 0x3e))
    
    result[7].b &= 0xfd

return result
