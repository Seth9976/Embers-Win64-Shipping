// 函数: sub_140379a3c
// 地址: 0x140379a3c
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t cb

if (*arg1 != 0x165 && *arg1 != 1)
    cb = zx.q(arg1[8]) + 0x12

if (*arg1 == 0x165 || *arg1 == 1 || cb u< 0x28)
    cb = 0x28

int16_t* result = CoTaskMemAlloc(cb)

if (result != 0)
    void* rdi_1
    
    if (*arg1 == 0x165)
        rdi_1 = 0x20
    else if (*arg1 != 1)
        rdi_1 = zx.q(arg1[8]) + 0x12
    else
        rdi_1 = 0x10
    
    memcpy(result, arg1, rdi_1.d)
    memset(rdi_1 + result, 0, cb - rdi_1)
    
    if (*arg1 != 0xfffe)
        result[9] = arg1[7]
        int32_t rax_1 = sub_140378690(arg1, 1)
        *result = 0xfffe
        *(result + 0x14) = rax_1
        result[8] = 0x16
        int128_t var_18_1 = data_1435fc300
        var_18_1.d = zx.d(*arg1)
        *(result + 0x18) = var_18_1

return result
