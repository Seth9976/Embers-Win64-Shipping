// 函数: sub_1403f0820
// 地址: 0x1403f0820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = 8
int64_t r10 = sx.q(arg4)

if (r10 s<= 8)
    return 

float zmm1
float zmm2

if (r10 - 8 s>= 4)
    float* rcx = arg3 + 0x18
    void* r9_1 = arg1 - arg3
    int64_t i_2 = ((r10 - 0xc) u>> 2) + 1
    rbx = (i_2 << 2) + 8
    int64_t i
    
    do
        zmm2 = *arg2 * rcx[1] + arg2[1] f* *rcx + rcx[-1] f* arg2[2] + rcx[-2] f* arg2[3]
            + rcx[-3] f* arg2[4] + rcx[-4] f* arg2[5] + rcx[-5] f* arg2[6] + rcx[-6] f* arg2[7]
        *(r9_1 + rcx + 8) = rcx[2] - zmm2
        zmm2 = rcx[2] f* *arg2 + arg2[1] f* rcx[1] + arg2[2] f* *rcx + rcx[-1] f* arg2[3]
            + rcx[-2] f* arg2[4] + rcx[-3] f* arg2[5] + rcx[-4] f* arg2[6] + rcx[-5] f* arg2[7]
        *(r9_1 + rcx + 0xc) = rcx[3] - zmm2
        zmm2 = *arg2 * rcx[3] + rcx[2] f* arg2[1] + arg2[2] f* rcx[1] + arg2[3] f* *rcx
            + rcx[-1] f* arg2[4] + rcx[-2] f* arg2[5] + rcx[-3] f* arg2[6] + rcx[-4] f* arg2[7]
        *(r9_1 + rcx + 0x10) = rcx[4] - zmm2
        float zmm3 = rcx[3] f* arg2[1]
        float zmm0 = rcx[4] f* *arg2
        zmm1 = rcx[2]
        rcx = &rcx[4]
        zmm3 = zmm3 + zmm0 + zmm1 f* arg2[2] + arg2[3] f* rcx[-3] + arg2[4] f* rcx[-4]
            + rcx[-5] f* arg2[5] + rcx[-6] f* arg2[6]
        *(r9_1 + rcx + 4) = rcx[1] - (zmm3 + rcx[-7] f* arg2[7])
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rbx s>= r10)
    return 

void* i_3 = r10 - rbx
float* rcx_2 = arg3 - 8 + (rbx << 2)
void* i_1

do
    zmm1 = rcx_2[-1]
    rcx_2 = &rcx_2[1]
    zmm2 = *arg2 * *rcx_2 + arg2[1] f* rcx_2[-1] + zmm1 f* arg2[2] + rcx_2[-3] f* arg2[3]
        + rcx_2[-4] f* arg2[4] + rcx_2[-5] f* arg2[5] + rcx_2[-6] f* arg2[6]
    *(arg1 - arg3 + rcx_2 + 4) = rcx_2[1] - (zmm2 + rcx_2[-7] f* arg2[7])
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
