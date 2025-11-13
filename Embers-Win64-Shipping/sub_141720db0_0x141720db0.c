// 函数: sub_141720db0
// 地址: 0x141720db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = *arg1
int32_t* rcx = arg1[1]
int64_t r8 = sx.q(arg2)
int32_t r9 = rax[1].d
int32_t r10 = *(rax + 0x14)
float zmm3 = *rcx
uint64_t var_58 = *rax
uint64_t var_48 = *(rax + 0xc)
float zmm4

if ((r8.b & 1) != 0)
    var_58.d = zmm3
    zmm4 = zmm3
    zmm3 = var_48.d
else
    zmm4 = var_58.d
    var_48.d = zmm3

int128_t zmm1 = rcx[1]
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(r8.d)
int128_t zmm6

if ((((temp1 - temp0) s>> 1).b & 1) != 0)
    var_58:4.d = zmm1.d
    zmm6 = zmm1
    zmm1 = var_48:4.d
else
    zmm6 = var_58:4.d
    var_48:4.d = zmm1.d

double zmm2 = rcx[2]
int32_t zmm5

if (r8.d s>= 4)
    zmm5 = zmm2.d
    r9 = zmm2.d
    zmm2 = r10
else
    zmm5 = r9
    r10 = zmm2.d

int64_t r12 = r8 * 0x38
uint64_t* rcx_1 = *arg1[2]
int64_t r13_1 = r8 << 4
rcx_1[r8 * 7] = var_58
rcx_1[r8 * 7 + 1].d = r9
int64_t rcx_2 = *arg1[2]
*(rcx_2 + r12 + 0xc) = var_48
*(rcx_2 + r12 + 0x14) = r10
*(*arg1[2] + r12 + 0x18) = 0xffffffff
int64_t* rdi = *arg1[3]
int64_t rsi = sx.q(rdi[r8 * 2 + 1].d)
uint64_t* result

if (rsi.d s<= 5 || *arg1[4] s>= *(arg1[5] + 0x88) || rsi.d s>= *(arg1[6] + 8))
    int64_t rdi_4 = rdi[r8 * 2]
    uint64_t rbx_1 = 0
    var_48 = 0
    int32_t var_40_3 = rsi.d
    int32_t r15_1
    
    if (rsi.d != 0)
        sub_140638750(&var_48, rsi.d, 0)
        rbx_1 = var_48
        memcpy(rbx_1, rdi_4, (rsi << 2).d)
        int32_t var_3c
        r15_1 = var_3c
        rsi = zx.q(var_40_3)
    else
        r15_1 = 0
    
    result = &var_48
    int64_t* rdi_6 = *arg1[7] + r13_1
    
    if (rdi_6 != &var_48)
        int64_t rcx_17 = *rdi_6
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        *rdi_6 = rbx_1
        rdi_6[1].d = rsi.d
        *(rdi_6 + 0xc) = r15_1
    else if (rbx_1 != 0)
        return sub_140a74f90(rbx_1)
else
    zmm3 = zmm3 - zmm4
    int32_t rbx = 0
    zmm2.d = zmm2.d f- zmm5
    zmm1.d = zmm1.d f- zmm6.d
    int32_t r15 = 2
    var_48.d = zmm3
    var_48:4.d = zmm1.d
    int32_t var_40_2 = zmm2.d
    int32_t rdi_1
    
    if (zmm2.d f<= zmm3 || zmm2.d f<= zmm1.d)
        rdi_1 = 0
        
        if (zmm1.d f> zmm3)
            rdi_1 = 1
    else
        rdi_1 = 2
    
    zmm2 = 1.25
    zmm1 = _mm_cvtps_pd((*(&var_48 + (zx.q(rdi_1) << 2))).q)
    
    if (not(zmm1.q f>= _mm_cvtps_pd(*(&var_48 + (sx.q((rdi_1 + 1) u% 3) << 2))).q f* zmm2)
            && not(zmm1.q f>= _mm_cvtps_pd(*(&var_48 + (sx.q((rdi_1 + 2) u% 3) << 2))).q f* zmm2)
            && rsi.d s> 0x14)
        rdi_1 = -1
    
    char var_68_1 = 1
    *(*arg1[2] + r12 + 0x18) = rdi_1
    int64_t* rdx_6 = *arg1[2] + r12
    int32_t var_70_1 = *arg1[4] + 1
    int32_t rax_20 = sub_14173c830(arg1[5], rdx_6, rdx_6 + 0xc, *arg1[3] + r13_1, rdi_1)
    
    if (rdi_1 == 0xffffffff)
        r15 = 8
    
    do
        void* rdi_3 = *arg1[2] + r12
        int64_t rsi_1 = sx.q(*(rdi_3 + 0x28))
        int32_t rax_21 = (rsi_1 + 1).d
        *(rdi_3 + 0x28) = rax_21
        
        if (rax_21 s> *(rdi_3 + 0x2c))
            sub_1405a4cf0(rdi_3 + 0x20)
        
        result = *(rdi_3 + 0x20)
        int32_t rdx_8 = rbx + rax_20
        rbx += 1
        *(result + (rsi_1 << 2)) = rdx_8
    while (rbx s< r15)

return result
