// 函数: sub_142049410
// 地址: 0x142049410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432a7520
uint64_t result = sub_142056ba0(arg1, 1)
int64_t i = 0x33
void* rsi = &arg1[0x8a]

do
    int32_t j_2 = *(rsi - 8)
    rsi -= 0x10
    void* rbx_1 = *rsi
    i -= 1
    
    if (j_2 != 0)
        int32_t j
        
        do
            sub_1405ec8a0(rbx_1 + 8)
            result = sub_1405d1550(rbx_1)
            rbx_1 += 0x18
            j = j_2
            j_2 -= 1
        while (j != 1)
        rbx_1 = *rsi
    
    if (rbx_1 != 0)
        result = sub_140a74f90(rbx_1)
while (i != 0)

int64_t i_1 = 0x11
void* rsi_1 = &arg1[0x24]

do
    int32_t j_3 = *(rsi_1 - 8)
    rsi_1 -= 0x10
    int64_t* rbx_2 = *rsi_1
    i_1 -= 1
    
    if (j_3 != 0)
        int32_t j_1
        
        do
            sub_1405ec8a0(&rbx_2[1])
            result = sub_1405d1550(rbx_2)
            rbx_2 = &rbx_2[3]
            j_1 = j_3
            j_3 -= 1
        while (j_1 != 1)
        rbx_2 = *rsi_1
    
    if (rbx_2 != 0)
        result = sub_140a74f90(rbx_2)
while (i_1 != 0)

return result
