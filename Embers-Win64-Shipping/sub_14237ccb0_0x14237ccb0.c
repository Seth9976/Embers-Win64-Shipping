// 函数: sub_14237ccb0
// 地址: 0x14237ccb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm2
int128_t zmm3
zmm2, zmm3 = sub_14237c390(arg1 + 0x70, arg2, arg3, arg4)
int32_t rax = *(arg2 + 0xc40)
void* rsi = *(arg1 + 0x108)

if (rax u>= 0x62)
    zmm2, zmm3 = sub_14198a900(&data_143f02b98, arg2, rax, 1, zmm2, zmm3)
    rax = 0

uint64_t rcx_2 = zx.q(rax) << 5
*(arg2 + 0xc40) = rax + 1
int64_t var_20 = 0
*(rcx_2 + arg2) = 0
*(rcx_2 + arg2 + 8) = rsi.o
*(rsi + 8) += 1
void* rsi_1 = *(arg1 + 0x110)

if (rsi_1 != 0)
    int32_t rax_2 = *(arg2 + 0xc40)
    
    if (rax_2 u>= 0x62)
        zmm2, zmm3 = sub_14198a900(&data_143f02b98, arg2, rax_2, 1, zmm2, zmm3)
        rax_2 = 0
    
    uint64_t rcx_4 = zx.q(rax_2) << 5
    *(arg2 + 0xc40) = rax_2 + 1
    int64_t var_20_1 = 0
    char var_14_1 = 0
    *(rcx_4 + arg2 + 8) = rsi_1.o
    *(rcx_4 + arg2) = 2
    *(rcx_4 + arg2 + 0x18) = 0.q
    *(rsi_1 + 8) += 1

void* rsi_2 = *(arg1 + 0x148)

if (rsi_2 != 0)
    int32_t rax_4 = *(arg2 + 0xc40)
    
    if (rax_4 u>= 0x62)
        zmm2, zmm3 = sub_14198a900(&data_143f02b98, arg2, rax_4, 1, zmm2, zmm3)
        rax_4 = 0
    
    int32_t* rcx_6 = zx.q(rax_4) << 5
    *(arg2 + 0xc40) = rax_4 + 1
    int64_t var_20_2 = 0
    *(rcx_6 + arg2) = 0
    *(rcx_6 + arg2 + 8) = rsi_2.o
    *(rsi_2 + 8) += 1

void* rsi_3 = *(arg1 + 0x158)

if (rsi_3 != 0)
    int32_t rax_6 = *(arg2 + 0xc40)
    
    if (rax_6 u>= 0x62)
        zmm2, zmm3 = sub_14198a900(&data_143f02b98, arg2, rax_6, 1, zmm2, zmm3)
        rax_6 = 0
    
    int32_t* rcx_8 = zx.q(rax_6) << 5
    *(arg2 + 0xc40) = rax_6 + 1
    int64_t var_20_3 = 0
    char var_14_2 = 0
    *(rcx_8 + arg2 + 8) = rsi_3.o
    *(rcx_8 + arg2) = 2
    *(rcx_8 + arg2 + 0x18) = 0.q
    *(rsi_3 + 8) += 1

int128_t zmm2_1
int128_t zmm3_1
zmm2_1, zmm3_1 = sub_14237c310(arg1 + 0x178, arg2, zmm2, zmm3)
int64_t result
int128_t zmm2_2
int128_t zmm3_2
result, zmm2_2, zmm3_2 = sub_14237c310(arg1 + 0x1b8, arg2, zmm2_1, zmm3_1)
void* rcx_11 = *(arg1 + 0x1f8)

if (rcx_11 == 0)
    return result

int128_t zmm2_3
int128_t zmm3_3
zmm2_3, zmm3_3 = sub_14237c310(rcx_11, arg2, zmm2_2, zmm3_2)
int128_t zmm2_4
int128_t zmm3_4
zmm2_4, zmm3_4 = sub_14237c310(*(arg1 + 0x1f8) + 0x40, arg2, zmm2_3, zmm3_3)
int128_t zmm2_5
int128_t zmm3_5
zmm2_5, zmm3_5 = sub_14237c310(*(arg1 + 0x1f8) + 0x80, arg2, zmm2_4, zmm3_4)
return sub_14237c310(*(arg1 + 0x1f8) + 0xc0, arg2, zmm2_5, zmm3_5)
