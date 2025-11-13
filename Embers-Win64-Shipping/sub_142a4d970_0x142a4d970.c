// 函数: sub_142a4d970
// 地址: 0x142a4d970
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)

if (*arg3 s> 0)
    return 0

int128_t* result = sub_142a7dd00(0x38)
int128_t* result_1 = result

if (result != 0)
    *result = data_14360faf8
    __builtin_memcpy(&result[1], 
        "\x30\xbe\xa4\x42\x01\x00\x00\x00\x60\xbe\xa4\x42\x01\x00\x00\x00\x90\x2a\xa9\x42\x01\x00\x00\x"
    "00\x90\xbe\xa4\x42\x01\x00\x00\x00", 
        0x20)
    result[3].q = sub_142a4bed0
    int64_t* rax_1 = sub_142a7dd00(0x10)
    
    if (rax_1 == 0)
        *arg3 = 7
        sub_142a7dcd0(result_1)
        return nullptr
    
    int64_t rax_3 = sub_142a7dd00(sx.q((rbp + 1).d))
    *rax_1 = rax_3
    memcpy(rax_3, arg1, rbp.d)
    *(rbp + *rax_1) = 0
    rax_1[1] = *rax_1
    result = result_1
    *(result_1 + 8) = rax_1
else
    *arg3 = 7

return result
