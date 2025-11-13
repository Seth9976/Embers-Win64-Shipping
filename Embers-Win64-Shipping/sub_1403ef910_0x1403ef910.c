// 函数: sub_1403ef910
// 地址: 0x1403ef910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = 0xa
int64_t r10 = sx.q(arg4)

if (r10 s<= 0xa)
    return 

float zmm0
float zmm1
float zmm2

if (r10 - 0xa s>= 4)
    float* rcx = arg3 + 0x20
    void* r9_1 = arg1 - arg3
    int64_t i_2 = ((r10 - 0xe) u>> 2) + 1
    rbx = (i_2 << 2) + 0xa
    int64_t i
    
    do
        zmm2 = *arg2 * rcx[1] + *rcx f* arg2[1] + rcx[-1] f* arg2[2] + rcx[-2] f* arg2[3]
            + rcx[-3] f* arg2[4] + rcx[-4] f* arg2[5] + rcx[-5] f* arg2[6] + rcx[-6] f* arg2[7]
        *(rcx + r9_1 + 8) = rcx[2] - (zmm2 + rcx[-7] f* arg2[8] + rcx[-8] f* arg2[9])
        zmm2 = rcx[2] f* *arg2 + arg2[1] f* rcx[1] + *rcx f* arg2[2] + rcx[-1] f* arg2[3]
            + rcx[-2] f* arg2[4] + rcx[-3] f* arg2[5] + rcx[-4] f* arg2[6] + rcx[-5] f* arg2[7]
        *(rcx + r9_1 + 0xc) = rcx[3] - (zmm2 + rcx[-6] f* arg2[8] + rcx[-7] f* arg2[9])
        zmm2 = rcx[3] f* *arg2 + rcx[2] f* arg2[1] + arg2[2] f* rcx[1] + *rcx f* arg2[3]
            + rcx[-1] f* arg2[4] + rcx[-2] f* arg2[5]
        zmm1 = rcx[-3]
        zmm0 = rcx[-4]
        rcx = &rcx[4]
        *(rcx + r9_1) = *rcx - (zmm2 + zmm1 f* arg2[6] + zmm0 f* arg2[7] + rcx[-9] f* arg2[8]
            + rcx[-0xa] f* arg2[9])
        float zmm3 = *rcx f* *arg2 + rcx[-1] f* arg2[1] + rcx[-2] f* arg2[2] + arg2[3] f* rcx[-3]
            + rcx[-4] f* arg2[4] + rcx[-5] f* arg2[5] + rcx[-6] f* arg2[6] + rcx[-7] f* arg2[7]
        *(rcx + r9_1 + 4) = rcx[1] - (zmm3 + rcx[-8] f* arg2[8] + rcx[-9] f* arg2[9])
        i = i_2
        i_2 -= 1
    while (i != 1)

if (rbx s>= r10)
    return 

void* i_3 = r10 - rbx
void* rcx_2 = arg3 - 8 + (rbx << 2)
void* i_1

do
    zmm1 = *(rcx_2 - 4)
    zmm2 = *(rcx_2 + 4)
    rcx_2 += 4
    zmm2 = zmm2 f* *arg2 + arg2[1] f* *(rcx_2 - 4) + zmm1 f* arg2[2] + *(rcx_2 - 0xc) f* arg2[3]
        + *(rcx_2 - 0x10) f* arg2[4] + *(rcx_2 - 0x14) f* arg2[5] + *(rcx_2 - 0x18) f* arg2[6]
    zmm0 = *(rcx_2 + 4) - (zmm2 + *(rcx_2 - 0x1c) f* arg2[7] + *(rcx_2 - 0x20) f* arg2[8]
        + *(rcx_2 - 0x24) f* arg2[9])
    *(rcx_2 + arg1 - arg3 + 4) = zmm0
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
