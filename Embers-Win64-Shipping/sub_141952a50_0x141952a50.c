// 函数: sub_141952a50
// 地址: 0x141952a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = sx.q(data_1439c74cc)
int32_t result_1 = 0
int32_t result_2
int32_t rbp

if (0x400 - rcx.d s<= 1)
    memcpy(&result_1, &data_143efcd00 + (rcx << 2), (0x400 - rcx.d) << 2)
    data_143effcf0(0x400, &data_143efcd00)
    rbp = 1 - (0x400 - rcx.d)
    memcpy(&(&result_1)[sx.q(0x400 - rcx.d)], &data_143efcd00, rbp << 2)
    result_2 = result_1
else
    result_2 = *(&data_143efcd00 + (rcx << 2))
    rbp = (rcx + 1).d
    result_1 = result_2

data_1439c74cc = rbp
sub_14190a020(result_2)
int64_t r9 = 0x88e4

if (arg1[4].b != 0)
    r9 = 0x88e0

data_143effd00(0x8a11, zx.q(arg1[1].d), 0, r9)
int64_t* rbx_2 = arg1[3]

if (rbx_2 != 0)
    rbx_2[1].d += 1

char rsi_1 = arg1[4].b
int32_t rbp_1 = arg1[1].d
void* rdi_1 = *arg1
int32_t result = result_1
*(rdi_1 + 0x28) = result
*(rdi_1 + 0x2c) = 0
*(rdi_1 + 0x30) = 0
int64_t* rcx_4 = *(rdi_1 + 0x50)
*(rdi_1 + 0x50) = rbx_2

if (rbx_2 != 0)
    rbx_2[1].d += 1

if (rcx_4 != 0)
    rcx_4[1].d -= 1
    
    if (rcx_4[1].d == 1)
        result = (**rcx_4)(rcx_4, 1)

*(rdi_1 + 0x58) = rbp_1
*(rdi_1 + 0x5c) = rsi_1

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        return (**rbx_2)(rbx_2, 1)

return result
