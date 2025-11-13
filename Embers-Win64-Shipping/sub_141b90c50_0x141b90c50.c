// 函数: sub_141b90c50
// 地址: 0x141b90c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140e19ef0(arg1, 1)
void*** result_1 = j_sub_140a82f30(0xc0)
void*** result = result_1

if (result_1 == 0)
    result = result_1
else
    sub_140ddb700(result_1)
    *result = &data_143074de0
    __builtin_memcpy(&result[4], 
        "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x80\x3f\x01", 0x11)
    result[7] = 0
    result[8].d = 0
    *(result + 0x48) = zx.o(0)
    result[0xb].b = 1
    result[0xc] = 0
    result[0xd].d = 0
    result[0xe].d = 0x3f000000
    *(result + 0x74) = 0x3f000000
    result[0xf].b = 1
    result[0x10] = 0
    result[0x11].d = 0
    result[0x12].w = 0x100
    result[0x13] = 0
    result[0x14].d = 0
    result[0x15].d = 0
    *(result + 0xac) = 1
    result[0x16] = 0
    result[0x17].d = 0

if (arg1[0x59].b == 0)
    int64_t rbp_1 = sx.q(arg1[0x58].d)
    int32_t rax = (rbp_1 + 1).d
    arg1[0x58].d = rax
    
    if (rax s> *(arg1 + 0x2c4))
        sub_140638870(&arg1[0x57])
    
    *(arg1[0x57] + (rbp_1 << 3)) = result
    int64_t rax_1 = arg1[0x56]
    
    if (rax_1 != 0 && result[1] != rax_1)
        result[1] = rax_1
        sub_140de7bf0(result)

return result
