// 函数: sub_1403ea4b0
// 地址: 0x1403ea4b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = sx.q(arg6)

if (i_1 s<= 0)
    return 

int64_t rsi_1 = sx.q(arg7)
void* rbp_1 = arg2 - arg4
int64_t i

do
    float zmm0 = arg1[1]
    float zmm2 = arg1[2]
    float zmm3 = zmm0 * arg5 + *arg1
    *arg1 = *arg4
    zmm2 = zmm2 - zmm3
    arg1[1] = zmm3
    zmm3 = zmm3 * *arg3
    zmm2 = zmm2 * arg5 + zmm0
    
    if (rsi_1.d s> 2)
        void* rcx = &arg1[3]
        void* rdx_1 = arg3 - arg1
        uint64_t j_1 = zx.q(((rsi_1 - 3).d u>> 1) + 1)
        uint64_t j
        
        do
            zmm0 = *rcx
            rcx += 8
            float zmm1 = (zmm0 - zmm2) * arg5 f+ *(rcx - 0xc)
            *(rcx - 0xc) = zmm2
            zmm3 = zmm3 + zmm2 f* *(rcx + rdx_1 - 0x10)
            zmm2 = *(rcx - 4)
            *(rcx - 8) = zmm1
            zmm3 = zmm3 + zmm1 f* *(rdx_1 + rcx - 0xc)
            zmm2 = (zmm2 - zmm1) * arg5 + zmm0
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    arg1[rsi_1] = zmm2
    zmm0 = *arg4
    arg4 = &arg4[1]
    *(arg4 + rbp_1 - 4) = zmm0 - (zmm2 * arg3[rsi_1 - 1] + zmm3)
    i = i_1
    i_1 -= 1
while (i != 1)
