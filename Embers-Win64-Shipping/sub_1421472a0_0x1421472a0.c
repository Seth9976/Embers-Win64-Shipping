// 函数: sub_1421472a0
// 地址: 0x1421472a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

(*(*arg1 + 0x290))()
bool cond:0 = arg1[0xbc] != 0
char var_58 = 0
int64_t var_50 = 0
int128_t zmm0 = var_58.o
*(arg1 + 0x271) = 0
*(arg1 + 0x260) = zmm0

if (not(cond:0) && arg1[0x333].d == 0)
    uint64_t result = arg1[0xb]
    arg2.o = zx.o(*(result + 0x218))
    arg2.q = arg2.q f- arg1[0x3d]
    zmm0 = _mm_cvtps_pd((*(result + 0x74)).q)
    
    if (not(arg2.q f<= zmm0.q))
        result = zx.q(*(arg1 + 0xa4) u>> 1)
    
    if (arg2.q f<= zmm0.q || (result.b & 1) != 0 || *(arg1 + 0x134) == 1)
        return result

if (((*(arg1 + 0xa4) u>> 1).b & 1) == 0 && *(arg1[0xb] + 0x88) == 0
        && *arg1[0x266] == *(arg1 + 0x1354))
    int64_t rdi_1 = data_143f4cc88
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi_1 + (rcx_1 << 2)) != 0)
        sub_14213f9e0(arg1)
        return (*(*arg1 + 0x298))(arg1)

bool cond:1_1 = arg1[0xbc] != 0
int64_t rbp_1 = 1
var_58 = 1
var_50:4.w = 0

if (not(cond:1_1))
    sub_14214ee30(arg1, 0, 0, arg2)
    int32_t rcx_5 = 0x135
    int64_t rdx_1 = arg1[0xbc]
    int64_t var_40_1 = arg1[0xbc]
    
    if (rdx_1 s> 0)
        rcx_5 = 1
    
    int32_t rax_12 = arg1[0xbd].d - rcx_5
    *(arg1 + 0x250) = (*(arg1 + 0x569) & 1).o
    
    if (rax_12 == rdx_1.d)
        (*(*arg1 + 0x2a8))(arg1, 0)
    
    arg1[0xa5] += 1
    var_50:4.b = 1

arg1[0x28]
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
double zmm6[0x2] = zx.o(0)
zmm6[0] = float.d(performanceCount)
zmm6[0] = zmm6[0] f* data_143d796f8
zmm6[0] = zmm6[0] + 16777216.0
sub_140b560b0(&arg1[0xa8], 1)
char r14_1 = -1
uint128_t zmm7 = 0x408f400000000000

if ((1 & (*(arg1 + 0xa4) u>> 1).b) == 0)
    sub_142158bf0(arg1, &arg1[0xa8], arg2)
    
    if (*(arg1 + 0x229) != 0)
        int64_t r15_1 = arg1[0xbc]
        arg1[0xbc] = arg1[0x47]
        zmm6[0] = zmm6[0] f- arg1[0x49]
        zmm6[0] = zmm6[0] f* zmm7.q
        int32_t rax_17
        
        if (zmm6[0] f< zmm7.q)
            int64_t rcx_11 = int.q(zmm6[0])
            arg2.o = zmm6
            
            if (rcx_11 != -0x8000000000000000)
                double zmm0_2[0x2] = zx.o(0)
                zmm0_2[0] = float.d(rcx_11)
                
                if (not(zmm0_2[0] == zmm6[0]))
                    arg2.o = _mm_unpacklo_pd(arg2.o, arg2.q)
                    uint32_t temp0_3 = _mm_movemask_pd(arg2.o)
                    arg2.o = zx.o(0)
                    arg2.q = float.d(rcx_11 - (zx.q(temp0_3) & 1))
            
            zmm6[0] = zmm6[0] f- arg2.q
            zmm6[0] = zmm6[0] f* zmm7.q
            rax_17 = int.d(_mm_cvtpd_ps(zmm6)[0].d) & 0x3ff
        else
            rax_17 = 0x3ff
        
        performanceCount.d = rax_17
        (*(arg1[0xa8] + 0x160))(&arg1[0xa8], &performanceCount, 0x400)
        int64_t* rcx_14 = arg1[0xb]
        arg1[0x49] = zmm6.q
        uint64_t rsi
        
        if ((*(*rcx_14 + 0x368))(rcx_14) == 0)
            rsi.b = *data_143f4cc40 s> 0
        else
            rsi = zx.q(arg1[0x261].b)
        
        sub_140b560b0(&arg1[0xa8], rsi.b)
        
        if (rsi.b != 0)
            int64_t* rcx_16 = arg1[0xb]
            
            if ((*(*rcx_16 + 0x368))(rcx_16) != 0)
                char rcx_17 = -1
                uint128_t zmm0_3
                zmm0_3.q = arg1[0x91] f* zmm7.q
                arg2.o = _mm_cvtpd_ps(zmm0_3)
                arg2.d = arg2.d f+ arg2.d
                arg2.d = arg2.d f- 0.5f
                int32_t rdx_6 = int.d(arg2.d) s>> 1
                
                if (rdx_6 s<= 0xff)
                    rcx_17 = rdx_6.b
                
                performanceCount.b = rcx_17
                int64_t* rcx_18 = arg1[0xa9]
                char* rdx_7 = *rcx_18
                
                if (&rdx_7[1] u> rcx_18[1])
                    (*(arg1[0xa8] + 0x150))(&arg1[0xa8], &performanceCount, 1)
                else
                    performanceCount.b = *rdx_7
                    *rcx_18 += 1
        
        arg1[0x46].b = 0
        arg1[0x47] = 0
        arg1[0xbc] = r15_1

(*(*arg1 + 0x290))(arg1, arg2)
int64_t* rcx_21 = arg1[0xb]
int32_t var_54_1 = arg1[0x25].d
var_50.d = *(arg1 + 0x124)

if ((*(*rcx_21 + 0x388))(rcx_21) != 0)
    (*(*arg1 + 0x288))(arg1, arg1[0xba], zx.q(arg1[0xbc].d), &var_58)

int32_t rax_37 = arg1[0x260].d
uint64_t r8_2 = zx.q(rax_37.b)
*(arg1 + (r8_2 << 2) + 0xdf8) = rax_37
arg1[r8_2 + 0xbf] = zmm6.q
int32_t temp0_6
int32_t temp1_1
temp0_6:temp1_1 = sx.q(arg1[0x99].d)
int32_t rax_41 = (temp1_1 + (temp0_6 & 0x3ff)) s>> 0xa

if (rax_41 s<= 0xff)
    r14_1 = rax_41.b

*(r8_2 + arg1 + 0x11f8) = r14_1

if ((1 & (*(arg1 + 0xa4) u>> 1).b) == 0)
    int32_t r9_2 = arg1[0x2e7].d
    performanceCount.w = *(arg1 + 0x198a)
    int64_t rdx_14 = zx.q(r9_2 - *(arg1 + 0x173c)) + 1
    performanceCount:2.w = arg1[0x32c].w
    
    if (rdx_14 u> sx.q(arg1[0x32a].d))
        sub_142155220(&arg1[0x2e7], rdx_14.d)
        r9_2 = arg1[0x2e7].d
    
    arg1[0x2e7].d = r9_2 + 1
    void* r8_3 = &arg1[0x2e9]
    void* rcx_25 = *(r8_3 + 0x200)
    
    if (rcx_25 != 0)
        r8_3 = rcx_25
    
    *(r8_3 + ((zx.q(arg1[0x2e8].d) & zx.q(r9_2)) << 2)) = performanceCount.d
    arg1[0x32b] = 0
    *(arg1 + 0x198a) = (*(arg1 + 0x198a) + 1) & 0x3fff

sub_14214fc00(&arg1[0x2e2], arg1[0x260].d)
void* rax_51 = arg1[0xb]
arg1[0x260].d += 1
arg1[0x97].d += 1
arg1[0x98].d += 1
*(rax_51 + 0x258) += 1
void* rax_52 = arg1[0xb]
*(rax_52 + 0x25c) += 1

if (arg1[0x345].b == 0)
    double zmm1 = (*(arg1[0xb] + 0x218) f- arg1[0x3d]) f* zmm7.q
    sub_140b32ef0(&arg1[0x2a4], zmm1, zmm1)

void* rcx_28 = arg1[0xb]
uint64_t rdx_21 = zx.q(((arg1[0xbc] + 7) s>> 3).d + arg1[0x31].d)
arg1[0x95].d += rdx_21.d
arg1[0x96].d += rdx_21.d
arg1[0x3d] = *(rcx_28 + 0x218)
arg1[0x3f].d += (rdx_21 << 3).d
*(rcx_28 + 0x240) += rdx_21.d
void* rax_56 = arg1[0xb]
*(rax_56 + 0x244) += rdx_21.d
data_143f4c9ac += rdx_21.d

if (arg1[0x25].d s<= 0 || *(arg1 + 0x124) != 0)
    rbp_1 = 0

int64_t rax_57 = *arg1
arg1[0xa4] += rbp_1
arg1[0x345].b = 1
return (*(rax_57 + 0x298))(arg1)
