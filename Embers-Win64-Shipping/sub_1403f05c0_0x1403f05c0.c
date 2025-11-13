// 函数: sub_1403f05c0
// 地址: 0x1403f05c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = 6
int64_t r10 = sx.q(arg4)

if (r10 s<= 6)
    return 

float zmm0
float zmm1

if (r10 - 6 s>= 4)
    int32_t* rcx = arg3 + 0x10
    void* r9_1 = arg1 - arg3
    int64_t i_2 = ((r10 - 0xa) u>> 2) + 1
    rbx = (i_2 << 2) + 6
    int64_t i
    
    do
        zmm0 = *rcx
        zmm1 = rcx[-1]
        rcx = &rcx[4]
        zmm0 = rcx[-2] f- (*arg2 f* rcx[-3] + zmm0 f* arg2[1] + zmm1 f* arg2[2] + rcx[-6] f* arg2[3]
            + rcx[-7] f* arg2[4] + rcx[-8] f* arg2[5])
        *(rcx + r9_1 - 8) = zmm0
        *(rcx + r9_1 - 4) = rcx[-1] f- (rcx[-2] f* *arg2 + arg2[1] f* rcx[-3] + rcx[-4] f* arg2[2]
            + rcx[-5] f* arg2[3] + rcx[-6] f* arg2[4] + rcx[-7] f* arg2[5])
        *(rcx + r9_1) = *rcx - (rcx[-1] f* *arg2 + rcx[-2] f* arg2[1] + arg2[2] f* rcx[-3]
            + rcx[-4] f* arg2[3] + rcx[-5] f* arg2[4] + rcx[-6] f* arg2[5])
        *(rcx + r9_1 + 4) = rcx[1] f- (*rcx f* *arg2 + rcx[-1] f* arg2[1] + rcx[-2] f* arg2[2]
            + arg2[3] f* rcx[-3] + rcx[-4] f* arg2[4] + rcx[-5] f* arg2[5])
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
    float zmm2 = *(rcx_2 + 4)
    rcx_2 += 4
    zmm0 = *(rcx_2 + 4) - (zmm2 f* *arg2 + arg2[1] f* *(rcx_2 - 4) + zmm1 f* arg2[2]
        + *(rcx_2 - 0xc) f* arg2[3] + *(rcx_2 - 0x10) f* arg2[4] + *(rcx_2 - 0x14) f* arg2[5])
    *(rcx_2 + arg1 - arg3 + 4) = zmm0
    i_1 = i_3
    i_3 -= 1
while (i_1 != 1)
