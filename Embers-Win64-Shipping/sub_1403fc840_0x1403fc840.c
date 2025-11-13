// 函数: sub_1403fc840
// 地址: 0x1403fc840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int64_t __saved_r13_1
int64_t __saved_r13 = __saved_r13_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
uint128_t __saved_zmm6_1
uint128_t __saved_zmm6 = __saved_zmm6_1
int128_t zmm7
int128_t var_48 = zmm7
uint128_t __saved_zmm8_1
uint128_t __saved_zmm8 = __saved_zmm8_1
int32_t var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* rax_2 = *arg1
int64_t r13 = sx.q(arg5)
int32_t rdx = (r13 + 0x400).d
int64_t r10_1 = sx.q(rdx * arg4) << 2
int64_t rax_5 = r10_1 + 0xf

if (rax_5 u<= r10_1)
    rax_5 = 0xffffffffffffff0

int64_t rax_6 = rax_5 & 0xfffffffffffffff0
__chkstk(rax_6)
void var_f8
void* rsp_1 = &var_f8 - rax_6
void* var_78
int64_t* rbx = &var_78
var_78 = rsp_1 + 0x60
void* var_70 = rsp_1 + 0x60 + (sx.q(rdx) << 2)
int32_t i = 0
int32_t r14 = 0
uint64_t r9
uint128_t __saved_zmm6_2

do
    void* rcx_2 = *rbx
    int128_t* rdx_1 = arg3 + (sx.q(r14) << 2)
    
    if (((rdx_1.d | rcx_2.d) & 0xf) != 0)
        memcpy(rcx_2, rdx_1, 0x1000)
    else
        int64_t j_1 = 0x20
        int64_t j
        
        do
            __saved_zmm6_2 = *rdx_1
            rcx_2 += 0x80
            rdx_1 = &rdx_1[8]
            *(rcx_2 - 0x80) = __saved_zmm6_2
            *(rcx_2 - 0x70) = rdx_1[-7]
            *(rcx_2 - 0x60) = rdx_1[-6]
            *(rcx_2 - 0x50) = rdx_1[-5]
            *(rcx_2 - 0x40) = rdx_1[-4]
            *(rcx_2 - 0x30) = rdx_1[-3]
            *(rcx_2 - 0x20) = rdx_1[-2]
            *(rcx_2 - 0x10) = rdx_1[-1]
            j = j_1
            j_1 -= 1
        while (j != 1)
    
    int64_t rdx_2 = sx.q(arg1[1].d)
    memcpy(*rbx + 0x1000, arg2 + ((sx.q((rdx_2 + r13).d * i) + rdx_2) << 2), (r13 << 2).d)
    r9 = zx.q(arg4)
    i += 1
    r14 += 0x400
    rbx = &rbx[1]
while (i s< r9.d)

__saved_zmm8_1 = 0x3f000000
__saved_zmm6_1 = zx.o(0)
int32_t rcx_12

if (arg10 == 0)
    rcx_12 = 0xf
    var_98 = 0xf
    __saved_zmm6_2 = __saved_zmm6_1
else
    uint64_t r8_1 = zx.q((r13 + 0x400).d)
    int64_t rcx_8 = sx.q(r8_1.d s>> 1) << 2
    int64_t rax_16 = rcx_8 + 0xf
    
    if (rax_16 u<= rcx_8)
        rax_16 = 0xffffffffffffff0
    
    int64_t rax_17 = rax_16 & 0xfffffffffffffff0
    __chkstk(rax_17)
    rsp_1 -= rax_17
    *(rsp_1 + 0x20) = arg1[0xa].d
    sub_140400fe0(&var_78, rsp_1 + 0x60, r8_1, r9)
    *(rsp_1 + 0x28) = arg1[0xa].d
    *(rsp_1 + 0x20) = &var_98
    __acrt_GetStringTypeA(rsp_1 + 0x860, rsp_1 + 0x60, zx.q(r13.d), 0x3d3)
    int32_t rax_20 = 0x400 - var_98
    *(rsp_1 + 0x30) = *(arg1 + 0x74)
    var_98 = rax_20
    *(rsp_1 + 0x28) = arg1[0xe].d
    *(rsp_1 + 0x20) = &var_98
    __saved_zmm6_2, __saved_zmm6_1, __saved_zmm8_1 =
        sub_1404017f0(rsp_1 + 0x60, 0x400, 0xf, zx.q(r13.d))
    rcx_12 = var_98
    __saved_zmm6_2.d = __saved_zmm6_2.d f* 0.699999988f
    
    if (rcx_12 s> 0x3fe)
        rcx_12 = 0x3fe
    
    int32_t rax_22 = arg1[8].d
    var_98 = rcx_12
    
    if (rax_22 s> 2)
        __saved_zmm6_2.d = __saved_zmm6_2.d f* __saved_zmm8_1.d
    
    if (rax_22 s> 4)
        __saved_zmm6_2.d = __saved_zmm6_2.d f* __saved_zmm8_1.d
    
    if (rax_22 s> 8)
        __saved_zmm6_2 = __saved_zmm6_1

int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(rcx_12 - arg1[0xe].d)
uint128_t zmm1 = 0x3e4ccccd

if (((temp2 ^ temp1) - temp1) * 0xa s> rcx_12)
    zmm1 = 0x3ecccccd

if (arg11 s< 0x19)
    zmm1.d = zmm1.d f+ 0.100000001f

if (arg11 s< 0x23)
    zmm1.d = zmm1.d f+ 0.100000001f

uint128_t __saved_zmm6_3 = *(arg1 + 0x74)

if (not(__saved_zmm6_3.d f<= 0.400000006f))
    zmm1.d = zmm1.d f- 0.100000001f

if (not(__saved_zmm6_3.d f<= 0.550000012f))
    zmm1.d = zmm1.d f- 0.100000001f

if (not(zmm1.d f> 0.200000003f))
    zmm1 = 0x3e4ccccd

zmm7 = 0x80000000
int32_t var_94
int32_t var_90

if (zmm1.d f<= __saved_zmm6_2.d)
    zmm1.d = __saved_zmm6_2.d f- __saved_zmm6_3.d
    
    if (not(__saved_zmm6_1.d f<= zmm1.d))
        zmm1 ^= 0x80000000
    
    if (not(0.100000001f f<= zmm1.d))
        __saved_zmm6_2 = __saved_zmm6_3
    
    __saved_zmm6_2.d = __saved_zmm6_2.d f* 32f
    __saved_zmm6_2.d = __saved_zmm6_2.d f/ 3f
    __saved_zmm6_2.d = __saved_zmm6_2.d f+ __saved_zmm8_1.d
    __saved_zmm6_2.q = fconvert.d(__saved_zmm6_2.d)
    var_94 = 1
    int32_t rcx_14 = int.d(floor(__saved_zmm6_2.q)) - 1
    
    if (rcx_14 s> 7)
        rcx_14 = 7
    
    if (rcx_14 s< 0)
        rcx_14 = 0
    
    var_90 = rcx_14
    __saved_zmm6_1.d = _mm_cvtepi32_ps(zx.o(rcx_14 + 1)).d f* 0.09375f
else
    var_94 = 0
    var_90 = 0

int32_t rsi = 0
int32_t r15_1 = 0
void** r14_1 = &var_78
__saved_zmm8_1 = __saved_zmm6_1 ^ 0x80000000
int32_t zmm6

do
    int64_t r9_3 = sx.q(arg1[1].d)
    int32_t rcx_15 = 0xf
    int32_t rbx_3 = *(rax_2 + 0x30) - r9_3.d
    
    if (arg1[0xe].d s> 0xf)
        rcx_15 = arg1[0xe].d
    
    arg1[0xe].d = rcx_15
    memcpy(arg2 + (sx.q((r9_3 + r13).d * rsi) << 2), arg1 + ((sx.q(r9_3.d * rsi) + 0x35) << 2), 
        (r9_3 << 2).d)
    int128_t zmm0_2
    
    if (rbx_3 != 0)
        int64_t r9_4 = sx.q(arg1[1].d)
        int32_t r10_2 = arg1[0xf].d
        uint64_t r8_6 = zx.q(arg1[0xe].d)
        zmm0_2 = *(arg1 + 0x74) ^ zmm7
        void* rdx_12 = *r14_1 + 0x1000
        *(rsp_1 + 0x50) = 0
        *(rsp_1 + 0x48) = 0
        *(rsp_1 + 0x40) = r10_2
        *(rsp_1 + 0x38) = r10_2
        *(rsp_1 + 0x30) = zmm0_2.d
        *(rsp_1 + 0x28) = zmm0_2.d
        *(rsp_1 + 0x20) = rbx_3
        zmm7, __saved_zmm8_1 = sub_14037de40(arg2 + ((sx.q((r9_4 + r13).d * rsi) + r9_4) << 2), 
            rdx_12, r8_6, zx.q(r8_6.d))
    
    void* rax_41 = *r14_1
    int64_t r10_3 = sx.q(arg1[1].d)
    zmm0_2 = *(arg1 + 0x74)
    *(rsp_1 + 0x50) = r10_3.d
    int64_t r9_6 = sx.q(rbx_3)
    uint64_t r9_7 = zx.q(var_98)
    *(rsp_1 + 0x48) = *(rax_2 + 0x48)
    *(rsp_1 + 0x40) = arg6
    uint64_t r8_10 = zx.q(arg1[0xe].d)
    *(rsp_1 + 0x38) = arg1[0xf].d
    *(rsp_1 + 0x30) = __saved_zmm8_1.d
    *(rsp_1 + 0x28) = (zmm0_2 ^ zmm7).d
    *(rsp_1 + 0x20) = r13.d - rbx_3
    zmm6, zmm7, __saved_zmm8_1 = sub_14037de40(
        arg2 + ((sx.q((r10_3 + r13).d * rsi) + r9_6 + r10_3) << 2), rax_41 + ((r9_6 + 0x400) << 2), 
        r8_10, r9_7)
    int64_t r9_8 = sx.q(arg1[1].d)
    memcpy(arg1 + ((sx.q(r9_8.d * rsi) + 0x35) << 2), 
        arg2 + ((sx.q((r9_8 + r13).d * rsi) + r13) << 2), (r9_8 << 2).d)
    int64_t rcx_27
    void* rdx_17
    int32_t count
    
    if (r13.d s<= 0x400)
        int64_t rbx_5 = sx.q(r15_1)
        memmove(arg3 + (rbx_5 << 2), arg3 + ((rbx_5 + r13) << 2), (0x400 - r13.d) << 2)
        rdx_17 = *r14_1 + 0x1000
        count = (r13 << 2).d
        rcx_27 = arg3 + 0x1000 + ((rbx_5 - r13) << 2)
    else
        count = 0x1000
        rdx_17 = (r13 << 2) + *r14_1
        rcx_27 = arg3 + (sx.q(r15_1) << 2)
    
    memmove(rcx_27, rdx_17, count)
    rsi += 1
    r15_1 += 0x400
    r14_1 = &r14_1[1]
while (rsi s< arg4)

*arg8 = zmm6
*arg7 = var_98
*arg9 = var_90
__security_check_cookie(rax_1 ^ &var_98)
return zx.q(var_94)
