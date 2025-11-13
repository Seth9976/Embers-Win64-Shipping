// 函数: sub_1426b1e00
// 地址: 0x1426b1e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x2c8)
int64_t i_1 = sx.q(rax - 1)

if (rax - 1 s< 0)
    return 0

int64_t rsi_1 = i_1 * 0x14
int64_t result
int64_t i

do
    i = i_1
    int32_t* rdi_2 = *(arg1 + 0x2c0) + rsi_1
    result = sub_140d3c6e0(rdi_2)
    
    if (result != 0)
        break
    
    int128_t zmm2 = data_143b57f80.d
    int32_t zmm1 = rdi_2[2]
    
    if (not((zmm2 ^ 0x80000000).d f>= zmm1) && not(zmm1 f>= zmm2.d))
        zmm2 = data_143b57f80:4.d
        zmm1 = rdi_2[3]
        
        if (not((zmm2 ^ 0x80000000).d f>= zmm1) && not(zmm1 f>= zmm2.d))
            zmm2 = data_143b57f88
            zmm1 = rdi_2[4]
            
            if (not((zmm2 ^ 0x80000000).d f>= zmm1) && zmm1 f< zmm2.d)
                break
    
    i_1 -= 1
    rsi_1 -= 0x14
while (i s> 0)
return result
