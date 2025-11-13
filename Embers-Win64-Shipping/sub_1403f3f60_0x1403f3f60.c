// 函数: sub_1403f3f60
// 地址: 0x1403f3f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r11 = 0

if (arg2 s<= 0)
    return 

void* r10_2 = arg1 - arg4 + 8
float* rbx_1 = arg4
uint64_t i_1 = zx.q(arg2)
uint64_t i

do
    int64_t r8 = 0
    int32_t zmm2 = (zx.o(0)).d
    void* j_2
    float zmm0
    
    if (r11 s>= 4)
        j_2 = &arg4[1]
        int64_t j_3 = ((r11 - 4) u>> 2) + 1
        r8 = j_3 << 2
        int64_t j
        
        do
            float zmm1 = *(r10_2 + j_2 - 0xc)
            zmm0 = *(r10_2 + j_2 - 8)
            j_2 += 0x10
            zmm2 = zmm1 f* *(j_2 - 0x14) f+ zmm2 f+ zmm0 f* *(j_2 - 0x10) f+
                *(r10_2 + j_2 - 0x14) f* *(j_2 - 0xc) f+ *(r10_2 + j_2 - 0x10) f* *(j_2 - 8)
            j = j_3
            j_3 -= 1
        while (j != 1)
    
    if (r8 s< r11)
        void* rcx_2 = &arg4[r8]
        j_2 = r11 - r8
        void* j_1
        
        do
            zmm0 = *(rcx_2 + r10_2 - 8)
            rcx_2 += 4
            zmm2 = zmm2 f+ zmm0 f* *(rcx_2 - 4)
            j_1 = j_2
            j_2 -= 1
        while (j_1 != 1)
    
    zmm0 = *(rbx_1 + arg3 - arg4)
    rbx_1 = &rbx_1[1]
    r10_2 += sx.q(arg2) << 2
    r11 += 1
    rbx_1[-1] = zmm0 f- zmm2
    i = i_1
    i_1 -= 1
while (i != 1)
