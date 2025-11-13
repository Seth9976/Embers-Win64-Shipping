// 函数: sub_142bf3cb0
// 地址: 0x142bf3cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rdi = &data_14369a0e0

if (arg1 != 0)
    rdi = arg1

void* rbp = *(rdi + 0x18)

if (rbp == 0)
    rbp = &data_143ccb6b0

int32_t* result_1 = sub_140dc0ea0(1, 0x68)
int32_t* result = result_1

if (result_1 == 0)
    result = &data_14369a0e0
else
    *result_1 = 1
    result_1[1] = 1
    *(result_1 + 8) = 0
    sub_142bf2880(rbp)
    *(result + 0x10) = &data_14369a0e0
    *(result + 0x18) = sub_142bf2890(rbp)
    *(result + 0x58) = result
    *(result + 0x40) = &data_14369a300
    int32_t rax_1 = sub_142bfb140(rbp)
    result[9] = rax_1
    result[8] = rax_1

if (result[1] != 0)
    if (rdi != 0 && *rdi != 0)
        *rdi
        *rdi += 1
    
    *(result + 0x10) = rdi
    result[8] = *(rdi + 0x20)
    result[9] = *(rdi + 0x24)
    result[0xa] = *(rdi + 0x28)
    result[0xb] = *(rdi + 0x2c)
    result[0xc] = *(rdi + 0x30)
    int32_t rax_7 = *(rdi + 0x34)
    result[0xd] = rax_7
    
    if (rax_7 != 0)
        int32_t count = *(rdi + 0x34) << 2
        int64_t rax_9 = j_sub_140a82f30(zx.q(count))
        *(result + 0x38) = rax_9
        
        if (rax_9 != 0)
            memcpy(rax_9, *(rdi + 0x38), count)
        else
            result[0xd] = rax_9.d
    else
        *(result + 0x38) = 0

return result
