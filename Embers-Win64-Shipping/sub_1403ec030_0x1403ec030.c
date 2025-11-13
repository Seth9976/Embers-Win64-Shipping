// 函数: sub_1403ec030
// 地址: 0x1403ec030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_868
int64_t rax_1 = __security_cookie ^ &var_868
int32_t i_3 = *(arg1 + 0x11fc)
void var_818

if (i_3 s> 0)
    int64_t rcx = 0
    uint64_t i_2 = zx.q(i_3)
    uint64_t i
    
    do
        void* rax_2 = &var_818 + rcx
        rcx += 4
        float zmm0 = 1f f/ *(arg2 - &var_818 + rax_2)
        *rax_2 = zmm0
        void var_80c
        *(&var_80c + rcx) = zmm0 * zmm0
        i = i_2
        i_2 -= 1
    while (i != 1)

void* var_840
void var_668
int32_t* rbp

if (*(arg1 + 0x12cd) != 2)
    int64_t rcx_6 = sx.q(*(arg1 + 0x1238))
    int32_t i_1 = 0
    void* rdi_1 = &var_668
    int64_t r14_2 = arg4 - (rcx_6 << 2)
    
    if (i_3 s> 0)
        void* rbx_1 = &var_818
        int32_t rdx_5 = *(arg1 + 0x1204) + rcx_6.d
        
        do
            sub_1403f0b80(rdi_1, r14_2, *rbx_1, rdx_5)
            int64_t rcx_8 = sx.q(*(arg1 + 0x1204))
            rdx_5 = *(arg1 + 0x1238) + rcx_8.d
            i_1 += 1
            r14_2 += rcx_8 << 2
            rbx_1 += 4
            rdi_1 += sx.q(rdx_5) << 2
        while (i_1 s< *(arg1 + 0x11fc))
    
    memset(&arg2[9], 0, sx.q(*(arg1 + 0x11fc) * 5) << 2)
    rbp = arg2 + 0x368
    *rbp = 0
    *(arg1 + 0x1250) = 0
else
    rbp = arg2 + 0x368
    void var_808
    void var_7f8
    sub_1403f1040(&arg2[9], &var_7f8, rbp, arg3, arg2 + 0xe4, &var_808, *(arg1 + 0x1204), i_3, 
        *(arg1 + 0x1208))
    var_840.d = *(arg1 + 0x124c)
    sub_1403ecd80(&arg2[9], arg1 + 0x12b4, arg1 + 0x12d0, arg1 + 0x1250, &var_7f8, var_840.w, 
        *(arg1 + 0x1248), *(arg1 + 0x11fc))
    sub_1403f0d50(arg1, arg2, arg5)
    int64_t rcx_4 = sx.q(*(arg1 + 0x1238))
    var_840.d = *(arg1 + 0x1204)
    sub_1403f1650(&var_668, arg4 - (rcx_4 << 2), &arg2[9], arg2 + 0xe4, &var_818, var_840.d, 
        *(arg1 + 0x11fc), rcx_4.d)

int128_t zmm3

if (*(arg1 + 0x1258) == 0)
    float zmm0_1[0x2] = *rbp
    zmm0_1[0] = zmm0_1[0] / 3f
    zmm3.d = fconvert.s(pow(0x4000000000000000, _mm_cvtps_pd(zmm0_1)))
    double zmm1
    zmm1.d = (*(arg2 + 0x35c)).d f* 0.75f
    zmm1.d = zmm1.d f+ 0.25f
    zmm3.d = zmm3.d f/ 10000f
    zmm3.d = zmm3.d f/ zmm1.d
else
    zmm3 = 0x3c23d70a

int64_t var_68
sub_1403f0dd0(arg1, &var_68, &var_668, zmm3)
sub_1403ecce0(arg1, &arg2[1], &var_68, arg1 + 0x11ac)
var_840.d = *(arg1 + 0x11fc)
int32_t* var_848
var_848.d = *(arg1 + 0x1204)
sub_1403f17c0(arg2 + 0x36c, &var_668, &arg2[1], arg2, var_848.d, var_840.d, *(arg1 + 0x1238))
*(arg1 + 0x11ac) = var_68
int64_t var_60
*(arg1 + 0x11b4) = var_60
int64_t var_58
*(arg1 + 0x11bc) = var_58
int64_t result
*(arg1 + 0x11c4) = result
__security_check_cookie(rax_1 ^ &var_868)
return result
