// 函数: sub_1403f00a0
// 地址: 0x1403f00a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = 0x10
int64_t r10 = sx.q(arg4)

if (r10 s<= 0x10)
    return 

float zmm1
float zmm2

if (r10 - 0x10 s>= 4)
    float* rcx = arg3 + 0x38
    void* r9_1 = arg1 - arg3
    int64_t i_2 = ((r10 - 0x14) u>> 2) + 1
    rbx = (i_2 << 2) + 0x10
    int64_t i
    
    do
        zmm2 = *arg2 * rcx[1] + arg2[1] f* *rcx + rcx[-1] f* arg2[2] + rcx[-2] f* arg2[3]
            + rcx[-3] f* arg2[4] + rcx[-4] f* arg2[5] + rcx[-5] f* arg2[6] + rcx[-6] f* arg2[7]
        zmm2 = zmm2 + rcx[-7] f* arg2[8] + rcx[-8] f* arg2[9] + rcx[-9] f* arg2[0xa]
            + rcx[-0xa] f* arg2[0xb]
        zmm2 = zmm2 + rcx[-0xb] f* arg2[0xc] + rcx[-0xc] f* arg2[0xd] + rcx[-0xd] f* arg2[0xe]
            + rcx[-0xe] f* arg2[0xf]
        *(r9_1 + rcx + 8) = rcx[2] - zmm2
        zmm2 = rcx[2] f* *arg2 + arg2[1] f* rcx[1] + arg2[2] f* *rcx + rcx[-1] f* arg2[3]
            + rcx[-2] f* arg2[4] + rcx[-3] f* arg2[5] + rcx[-4] f* arg2[6] + rcx[-5] f* arg2[7]
        zmm2 = zmm2 + rcx[-6] f* arg2[8] + rcx[-7] f* arg2[9] + rcx[-8] f* arg2[0xa]
            + rcx[-9] f* arg2[0xb]
        zmm2 = zmm2 + rcx[-0xa] f* arg2[0xc] + rcx[-0xb] f* arg2[0xd] + rcx[-0xc] f* arg2[0xe]
            + rcx[-0xd] f* arg2[0xf]
        *(r9_1 + rcx + 0xc) = rcx[3] - zmm2
        zmm2 = *arg2 * rcx[3] + rcx[2] f* arg2[1] + arg2[2] f* rcx[1] + arg2[3] f* *rcx
            + rcx[-1] f* arg2[4] + rcx[-2] f* arg2[5] + rcx[-3] f* arg2[6] + rcx[-4] f* arg2[7]
        zmm2 = zmm2 + rcx[-5] f* arg2[8] + rcx[-6] f* arg2[9] + rcx[-7] f* arg2[0xa]
            + rcx[-8] f* arg2[0xb]
        zmm2 = zmm2 + rcx[-9] f* arg2[0xc] + rcx[-0xa] f* arg2[0xd] + rcx[-0xb] f* arg2[0xe]
            + rcx[-0xc] f* arg2[0xf]
        *(r9_1 + rcx + 0x10) = rcx[4] - zmm2
        float zmm3 = rcx[3] f* arg2[1] + rcx[4] f* *arg2 + rcx[2] f* arg2[2] + arg2[3] f* rcx[1]
        zmm1 = arg2[4] f* *rcx
        float zmm0 = rcx[-1]
        rcx = &rcx[4]
        zmm3 = zmm3 + zmm1 + zmm0 f* arg2[5] + rcx[-6] f* arg2[6] + rcx[-7] f* arg2[7]
            + rcx[-8] f* arg2[8] + rcx[-9] f* arg2[9]
        zmm3 = zmm3 + rcx[-0xa] f* arg2[0xa] + rcx[-0xb] f* arg2[0xb] + rcx[-0xc] f* arg2[0xc]
            + rcx[-0xd] f* arg2[0xd]
        *(r9_1 + rcx + 4) = rcx[1] - (zmm3 + rcx[-0xe] f* arg2[0xe] + rcx[-0xf] f* arg2[0xf])
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
    zmm2 = zmm2 + rcx_2[-7] f* arg2[7] + rcx_2[-8] f* arg2[8] + rcx_2[-9] f* arg2[9]
        + rcx_2[-0xa] f* arg2[0xa]
    zmm2 = zmm2 + rcx_2[-0xb] f* arg2[0xb] + rcx_2[-0xc] f* arg2[0xc] + rcx_2[-0xd] f* arg2[0xd]
        + rcx_2[-0xe] f* arg2[0xe]
    *(arg1 - arg3 + rcx_2 + 4) = rcx_2[1] - (zmm2 + rcx_2[-0xf] f* arg2[0xf])
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
