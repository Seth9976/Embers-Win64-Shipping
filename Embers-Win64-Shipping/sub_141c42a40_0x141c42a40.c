// 函数: sub_141c42a40
// 地址: 0x141c42a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* r14 = arg4

if (arg3 != 2 && arg6 != 2)
    return 

int32_t* rdx = arg2 - arg4
void* r12_1 = arg1 + 0x20
void* r15_1 = arg1 + 0x70
int32_t* arg_10 = rdx
int64_t i_1 = 2
int64_t i

do
    (*(*(r15_1 - 0x50) + 8))(r12_1, *(rdx + r14))
    float zmm5_1 = arg5 f* *(arg1 + 0x10) f* *r15_1 + *(r15_1 - 4) f* *(r15_1 + 4)
    
    if (not(zmm5_1 <= -1.17549435e-38f) && not(zmm5_1 >= 1.17549435e-38f))
        zmm5_1 = (zx.o(0)).d
    
    *(r15_1 + 4) = zmm5_1
    void* rdi_1 = r15_1 + 0x198
    float zmm3 = *(r15_1 + 0x1a0)
    void* rbx_1 = r15_1 + 0x154
    float zmm4_1 = *(r15_1 + 0x19c)
    void* rsi_1 = r15_1 + 8
    float zmm2 = *rdi_1
    float zmm1 = *(r15_1 + 0x1a4)
    zmm5_1 = zmm5_1 * 0.25f
    int64_t j_1 = 4
    *(r15_1 + 0x188) = (zmm3 - zmm4_1) f* *(arg1 + 0x1c) + zmm5_1
    arg5 = (zmm2 + zmm1) f* *(arg1 + 0x1c) + zmm5_1
    *(r15_1 + 0x18c) = arg5
    *(r15_1 + 0x190) = (zmm2 - zmm1) f* *(arg1 + 0x1c) + zmm5_1
    *(r15_1 + 0x194) = zmm5_1 - (zmm4_1 + zmm3) f* *(arg1 + 0x1c)
    *r14 = 0f
    int64_t j
    
    do
        (*(*rsi_1 + 8))(rsi_1, *(rdi_1 - 0x10))
        arg5 = arg5 f* *(rbx_1 - 4)
        zmm2 = *(rbx_1 - 8) f* *rbx_1 + arg5
        
        if (not(zmm2 <= -1.17549435e-38f) && not(zmm2 >= 1.17549435e-38f))
            zmm2 = (zx.o(0)).d
        
        *rbx_1 = zmm2
        rsi_1 += 0x50
        *rdi_1 = zmm2
        rbx_1 += 0x10
        zmm2 = zmm2 + *r14
        rdi_1 += 4
        *r14 = zmm2
        j = j_1
        j_1 -= 1
    while (j != 1)
    arg5 = *(arg1 + 8)
    rdx = arg_10
    zmm1 = 1f - arg5
    arg5 = arg5 * zmm2
    r12_1 += 0x1f8
    r15_1 += 0x1f8
    *r14 = zmm1 f* *(rdx + r14) + arg5
    r14 = &r14[1]
    i = i_1
    i_1 -= 1
while (i != 1)
