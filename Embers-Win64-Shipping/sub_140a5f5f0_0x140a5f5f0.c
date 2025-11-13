// 函数: sub_140a5f5f0
// 地址: 0x140a5f5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** result = j_sub_140a82f30(0x40)

if (result == 0)
    return result

result[1].d = 1
*(result + 0xc) = 1
*result = &data_142e632f0
int64_t rdx = *arg3
int64_t r8 = arg3[1]
arg3[1] = 0
*arg3 = 0
int64_t r9_1 = *arg2
*arg2 = 0
int32_t r10_1 = arg2[1].d
int32_t r11_1 = *(arg2 + 0xc)
arg2[1] = 0
int64_t* rdi_1 = arg1[1]

if (rdi_1 != 0)
    rdi_1[1].d += 1

result[2] = *arg1
result[3] = rdi_1

if (rdi_1 != 0)
    *(rdi_1 + 0xc) += 1

result[4] = r9_1
result[5].d = r10_1
*(result + 0x2c) = r11_1
result[6] = rdx
result[7] = r8

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rsi_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))

return result
