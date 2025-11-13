// 函数: sub_141f57b40
// 地址: 0x141f57b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_78 = arg5[2]
void* rax_1
int64_t rcx_1
rax_1, rcx_1 = sub_140d3c6e0(&arg1[0x87])
void* r12 = arg1[0xa9]

if (r12 == 0)
    void* r12_1 = arg1[0x86]
    
    if (r12_1 != 0)
        r12 = *(r12_1 + 0x148)
    
    if (r12_1 == 0 || r12 == 0)
        r12 = nullptr

void* r15_1

if (rax_1 == 0)
    r15_1 = nullptr
else
    r15_1 = *(rax_1 + 0x548)
    
    if (r15_1 == 0)
        void* r15_2 = *(rax_1 + 0x430)
        
        if (r15_2 == 0)
            r15_1 = nullptr
        else
            r15_1 = *(r15_2 + 0x148)
            
            if (r15_1 == 0)
                r15_1 = nullptr

uint32_t zmm2[0x4] = var_78.d
uint128_t zmm1 = var_78:4.d
zmm2[0] = zmm2[0] f- zmm1.d
int64_t r13
uint32_t zmm0[0x4]

if (_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999975e-05f)
    r13.b = 0
else
    zmm0 = var_78:8.d
    zmm2[0] = zmm2[0] f- zmm0[0]
    
    if (_mm_and_ps(zmm2, 0x7fffffff)[0] f> 9.99999975e-05f)
        r13.b = 0
    else
        zmm1.d = zmm1.d f- zmm0[0]
        
        if (_mm_and_ps(zmm1, 0x7fffffff).d f> 9.99999975e-05f)
            r13.b = 0
        else
            void* rax_2 = arg1[0x86]
            
            if (rax_2 == 0 ||
                    (arg1[sx.q(*(arg1 + 0x494)) * 2 + 0x8b].d != *(rax_2 + 0x1b0) && r15_1 == 0))
                r13.b = 0
            else
                r13.b = 1

uint32_t rbx = zx.d(arg1[0x2a].b)
char rax_4

if (rbx s<= data_143a30368:4.d)
    rax_4, rcx_1 = sub_141f4ac80(arg1)

if (rbx s<= data_143a30368:4.d && (rax_4 != 0 || (*(arg1 + 0x20c) & 0x20) != 0))
    rax_4 = 1
else
    rax_4 = 0

char rdx

if (r12 == 0 || *(r12 + 0x48) == 0)
    rdx = 0
else
    rdx = 1

if (r15_1 == 0 || *(r15_1 + 0x48) == 0)
    rcx_1.b = 0
else
    rcx_1.b = 1

void* rax_5

if (rax_4 == 0 || (*(arg1 + 0x5a7) & 2) != 0)
    rax_5 = arg1[0x86]

uint32_t rax_8
void var_58
int64_t* rax_7
void* rcx_4

if ((rax_4 == 0 || (*(arg1 + 0x5a7) & 2) != 0) && rax_5 != 0)
label_141f57cc7:
    rcx_4 = rax_5
label_141f57cce:
    sub_1423120c0(rcx_4, &var_78)
    var_78.d = var_78.d + *arg3
    var_78:4.d = var_78:4.d + arg3[1]
    var_78:8.d = var_78:8.d + arg3[2]
    rax_7 = sub_140ae2e90(&var_78, &var_58, arg5)
label_141f57d17:
    *arg2 = *rax_7
    arg2[1][0].q = rax_7[2]
    rax_8 = rax_7[3].d
else if (rax_1 == 0)
label_141f57d7a:
    
    if (rdx != 0 && r13.b != 0 && arg4 != 0)
        rax_7 = sub_1419ead80(&var_78, sub_1422412b0(r12, &var_58, arg1, arg5))
        goto label_141f57d17
    
    if (rax_1 != 0 && r13.b != 0 && rcx_1.b != 0)
        rax_7 = sub_1419ead80(&var_78, sub_1422412b0(r15_1, &var_58, arg1, arg5))
        goto label_141f57d17
    
    rcx_4 = arg1[0x86]
    
    if (rcx_4 != 0)
        goto label_141f57cce
    
    zmm2 = arg5[1]
    var_78:8.d = _mm_shuffle_ps(zmm2, zmm2, 0xaa)[0]
    zmm0 = zx.o(data_143dbb1f8.q)
    int32_t rax_11 = var_78:8.d
    zmm1 = _mm_shuffle_ps(zmm2, zmm2, 0x55)
    var_78:0xc.q = zmm0.q
    var_78:8.d = rax_11
    int32_t var_64_1 = data_143dbb200
    int32_t var_60_1 = 0
    zmm1.q = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
    rax_8 = 0
    *arg2 = zmm1
    int64_t var_68
    arg2[1][0].q = var_68
else
    rax_5 = *(rax_1 + 0x430)
    
    if (rax_5 != 0 && (*(rax_1 + 0x5a7) & 2) != 0)
        goto label_141f57cc7
    
    if (r13.b == 0 || (*(arg1 + 0x5a6) & 8) == 0)
        goto label_141f57d7a
    
    *arg2 = *(rax_1 + 0x100)
    arg2[1][0].q = *(rax_1 + 0x110)
    rax_8 = *(rax_1 + 0x118)
(*arg2)[6] = rax_8
zmm2 = *(arg1 + 0x264)
zmm2[0] = zmm2[0] f* (*arg2)[3]
zmm1.d = zmm2.d f* arg2[1][0]
zmm2[0] = zmm2[0] f* (*arg2)[5]
(*arg2)[3] = zmm2[0]
arg2[1][0] = zmm1.d
(*arg2)[5] = zmm2[0]
zmm0 = *(arg1 + 0x264)
zmm0[0] = zmm0[0] f* (*arg2)[6]
(*arg2)[6] = zmm0[0]
return arg2
