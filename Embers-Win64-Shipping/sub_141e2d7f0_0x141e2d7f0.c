// 函数: sub_141e2d7f0
// 地址: 0x141e2d7f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *arg2
int64_t rsi = 0
int64_t r10 = sx.q(arg2[1].d)
uint128_t zmm6 = arg1
int64_t rdi = 0
uint64_t r14_1 = r10 << 3 u>> 3

if (rbx u> &rbx[r10])
    r14_1 = 0

if (r14_1 != 0)
    do
        zmm6 = sub_141e296c0(zmm6, *rbx, arg6)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != r14_1)
    
    r10 = zx.q(arg2[1].d)
    rbx = *arg2

uint128_t zmm1
uint128_t zmm2

if (_mm_and_ps(*arg7, 0x7fffffff).d f> 9.99999975e-05f)
label_141e2d8b6:
    int64_t rdx_1 = 0
    uint64_t r8_2 = sx.q(r10.d) << 3 u>> 3
    
    if (rbx u> &rbx[sx.q(r10.d)])
        r8_2 = 0
    
    if (r8_2 != 0)
        do
            void* rax_4 = *rbx
            rbx = &rbx[1]
            rdx_1 += 1
            arg1.d = zmm6.d f* *arg7
            zmm1.d = (*(arg7 + 4)).d f* zmm6.d
            zmm2.d = (*(arg7 + 8)).d f* zmm6.d
            arg1.d = arg1.d f+ *(rax_4 + 0x20)
            zmm1.d = zmm1.d f+ *(rax_4 + 0x24)
            zmm2.d = zmm2.d f+ *(rax_4 + 0x28)
            *(rax_4 + 0x20) = arg1.d
            *(rax_4 + 0x24) = zmm1.d
            *(rax_4 + 0x28) = zmm2.d
        while (rdx_1 != r8_2)
        
        r10 = zx.q(arg2[1].d)
        rbx = *arg2
else
    if (_mm_and_ps(*(arg7 + 4), 0x7fffffff).d f> 9.99999975e-05f)
        goto label_141e2d8b6
    
    if (not(_mm_and_ps(*(arg7 + 8), 0x7fffffff).d f<= 9.99999975e-05f))
        goto label_141e2d8b6

int64_t* rcx_1 = rbx
uint128_t zmm3

if (_mm_and_ps(*arg8, 0x7fffffff).d f> 9.99999975e-05f)
label_141e2d969:
    int64_t rdx_2 = 0
    uint64_t r9_1 = sx.q(r10.d) << 3 u>> 3
    
    if (rcx_1 u> &rcx_1[sx.q(r10.d)])
        r9_1 = 0
    
    if (r9_1 != 0)
        do
            void* rax_7 = *rcx_1
            arg1 = *(rax_7 + 0x3c)
            
            if (not(arg1.d f<= 9.99999975e-05f))
                zmm2.d = 1f f/ arg1.d
                zmm1.d = (*(arg8 + 4)).d f* zmm2.d
                arg1.d = zmm2.d f* *arg8
                zmm3.d = (*(arg8 + 8)).d f* zmm2.d
                arg1.d = arg1.d f* zmm6.d
                zmm1.d = zmm1.d f* zmm6.d
                arg1.d = arg1.d f+ *(rax_7 + 0x20)
                zmm3.d = zmm3.d f* zmm6.d
                zmm1.d = zmm1.d f+ *(rax_7 + 0x24)
                zmm3.d = zmm3.d f+ *(rax_7 + 0x28)
                *(rax_7 + 0x20) = arg1.d
                *(rax_7 + 0x24) = zmm1.d
                *(rax_7 + 0x28) = zmm3.d
            
            rcx_1 = &rcx_1[1]
            rdx_2 += 1
        while (rdx_2 != r9_1)
else
    if (_mm_and_ps(*(arg8 + 4), 0x7fffffff).d f> 9.99999975e-05f)
        goto label_141e2d969
    
    if (not(_mm_and_ps(*(arg8 + 8), 0x7fffffff).d f<= 9.99999975e-05f))
        goto label_141e2d969

int64_t* i = *arg5

for (void* rdi_3 = &i[sx.q(arg5[1].d) * 0xc]; i != rdi_3; i = &i[0xc])
    zmm6 = sub_141e15930(i, zmm6)

if (arg9 s> 0)
    uint64_t i_6 = zx.q(arg9)
    uint64_t i_1
    
    do
        int64_t* j = *arg3
        
        for (void* rdi_5 = sx.q(arg3[1].d) * 0x68 + j; j != rdi_5; j = &j[0xd])
            zmm6 = sub_141e2b350(j, zmm6)
        
        int64_t* j_1 = *arg4
        
        for (void* rdi_8 = &j_1[sx.q(arg4[1].d) * 6]; j_1 != rdi_8; j_1 = &j_1[6])
            zmm6 = sub_141e2b0e0(j_1, zmm6)
        
        i_1 = i_6
        i_6 -= 1
    while (i_1 != 1)

int32_t** rdi_9 = *arg2
void* rbp_2 = &rdi_9[sx.q(arg2[1].d)]

while (rdi_9 != rbp_2)
    int32_t* rbx_1 = *rdi_9
    zmm3 = rbx_1[0xf]
    arg1.d = zmm3.d f* rbx_1[0xa]
    int64_t i_5 = 4
    zmm2.d = zmm3.d f* rbx_1[8]
    zmm1.d = zmm3.d f* rbx_1[9]
    arg1.d = arg1.d f* zmm6.d
    zmm2.d = zmm2.d f* zmm6.d
    arg1.d = arg1.d f+ rbx_1[2]
    zmm1.d = zmm1.d f* zmm6.d
    zmm2.d = zmm2.d f+ *rbx_1
    zmm1.d = zmm1.d f+ rbx_1[1]
    *(rbx_1 + 0xc0) = (_mm_unpacklo_ps(zmm2, zmm1.q)).q
    rbx_1[0x32] = arg1.d
    void* rax_15 = &rbx_1[0x11]
    void var_78
    int64_t i_2
    
    do
        rax_15 += 0x10
        arg1.d = zmm3.d f* *(rax_15 - 0x14)
        zmm1.d = zmm3.d f* *(rax_15 - 0x10)
        *(&var_78 - rbx_1 + rax_15 - 0x54) = arg1.d
        arg1.d = zmm3.d f* *(rax_15 - 0xc)
        void var_74
        *(&var_74 - rbx_1 + rax_15 - 0x54) = zmm1.d
        zmm1.d = zmm3.d f* *(rax_15 - 8)
        void var_70
        *(&var_70 - rbx_1 + rax_15 - 0x54) = arg1.d
        void var_6c
        *(&var_6c - rbx_1 + rax_15 - 0x54) = zmm1.d
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)
    uint32_t var_88[0x4]
    uint32_t (* rax_16)[0x4]
    rax_16, zmm6 = sub_141e32e10(&var_88, &rbx_1[4], &var_78, &rbx_1[0xb], zmm6.d)
    rdi_9 = &rdi_9[1]
    *(rbx_1 + 0xd0) = *rax_16

void* i_3 = *arg3

for (void* rdx_6 = sx.q(arg3[1].d) * 0x68 + i_3; i_3 != rdx_6; i_3 += 0x68)
    *(i_3 + 0x34) = *(i_3 + 0x38)

void* rcx_6 = *arg4
void* rdx_9 = sx.q(arg4[1].d) * 0x30 + rcx_6

if (rcx_6 != rdx_9)
    zmm1 = zx.o(0)
    
    do
        if (zmm1.d f<= *(rcx_6 + 0x24))
            arg1 = _mm_min_ss((*(rcx_6 + 0x20)).d, zmm1.d)
        else
            arg1 = zmm1
        
        *(rcx_6 + 0x20) = arg1.d
        rcx_6 += 0x30
    while (rcx_6 != rdx_9)

if (arg10 s> 0)
    uint64_t i_7 = zx.q(arg10)
    uint64_t i_4
    
    do
        int64_t* j_2 = *arg3
        
        for (void* rdi_11 = sx.q(arg3[1].d) * 0x68 + j_2; j_2 != rdi_11; j_2 = &j_2[0xd])
            zmm6 = sub_141e2b350(j_2, zmm6)
        
        int64_t* j_3 = *arg4
        
        for (void* rdi_14 = &j_3[sx.q(arg4[1].d) * 6]; j_3 != rdi_14; j_3 = &j_3[6])
            zmm6 = sub_141e2b0e0(j_3, zmm6)
        
        i_4 = i_7
        i_7 -= 1
    while (i_4 != 1)

int64_t* rbx_2 = *arg2
void* result = &rbx_2[arg2[1]]
uint64_t rdi_16 = sx.q(arg2[1].d) << 3 u>> 3

if (rbx_2 u> result)
    rdi_16 = 0

if (rdi_16 != 0)
    do
        result = sub_141e331b0(*rbx_2)
        rsi += 1
        rbx_2 = &rbx_2[1]
    while (rsi != rdi_16)

return result
