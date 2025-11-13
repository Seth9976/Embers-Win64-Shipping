// 函数: sub_141f18030
// 地址: 0x141f18030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r14 = arg4
int32_t rax = sub_141f16380(arg1, *(arg3 + 0x278), arg5)
bool rax_1 = (*(*arg1 + 0xe0))(arg1, zx.q(*(arg3 + 0x1548)), zx.q(arg5), zx.q(*(arg3 + 0x278)))
int64_t r9_1 = *arg1
int32_t rax_2 = (*(r9_1 + 0xa0))(arg1, arg3, zx.q(arg5), r9_1)
int32_t r13
r13.b = rax_1 != 0
int32_t r13_1 = r13 + rax

if (rax_2 u>= r13_1)
    r13_1 = rax_2

bool rbx = r14 == 0xffffffff

if (arg4 == 0xffffffff)
    r14 = rax

int128_t zmm0 = sub_141f1ac10(arg1, arg3, r14, arg5, rbx)
uint128_t zmm0_1 = sub_141f1ac10(arg1, arg3, r14 + 1, arg5, rbx)
uint128_t zmm8 = zmm0_1
uint128_t zmm10 = zmm0_1
TEB* gsbase

if (data_143f3b0d0 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f3b0d0)
    
    if (data_143f3b0d0 == 0xffffffff)
        int64_t* rcx_10 = data_143db18d0
        
        if (rcx_10 == 0)
            sub_140a53c40()
            rcx_10 = data_143db18d0
        
        int64_t r8_8
        r8_8.b = 1
        int64_t* rax_12 = (*(*rcx_10 + 0xb0))(rcx_10, u"r.Shadow.CSM.TransitionScale", r8_8)
        
        if (rax_12 != 0)
            int64_t rdx_8 = *rax_12
            rax_12 = (*(rdx_8 + 0x60))(rax_12, rdx_8)
        
        data_143f3b0c8 = rax_12
        _Init_thread_footer(&data_143f3b0d0)

uint128_t zmm9 = zx.o(0)
int32_t zmm7 = *(data_143f3b0c8 + 4)

if (zmm7 f>= 0f)
    zmm7 = __minss_xmmss_memss(zmm7, 0x40000000)
else
    zmm7 = (zx.o(0)).d

float zmm6 = (zmm8.d f- zmm0.d) f* zmm7 f* arg1[0x37].d

if (r14 s< r13_1 - 1)
    zmm8.d = zmm8.d f+ zmm6
else if (arg5 == 0 || (arg1[0x27].b & 8) == 0)
    if (arg4 == 0xffffffff)
        int64_t rbx_1 = data_143f3aef0
        int64_t rcx_6
        
        if (data_143de5480 == 0)
            rcx_6 = 0
        else
            rcx_6.b = GetCurrentThreadId() != data_143de5470
        
        zmm0_1 = *(rbx_1 + (rcx_6 << 2))
        
        if (not(zmm0_1.d f< 0f))
            zmm9 = __minss_xmmss_memss(zmm0_1.d, 0x3f800000)
        
        zmm6 = zmm6 f* zmm9.d
    
    zmm10.d = zmm8.d f- zmm6

if (arg6 != 0)
    arg6[3] = zmm6
    arg6[2] = 0
    
    if (r14 u>= 1)
        int128_t zmm0_2
        int512_t zmm6_1
        zmm0_2, zmm6_1 = sub_141f1ac10(arg1, arg3, r14 - 1, arg5, rbx)
        zmm6_1.o = zmm0_2
        int32_t zmm6_2
        int32_t zmm7_1
        zmm0_1, zmm6_2, zmm7_1, zmm8 = sub_141f1ac10(arg1, arg3, r14, arg5, rbx)
        zmm0_1.d = zmm0_1.d f- zmm6_2
        zmm0_1.d = zmm0_1.d f* zmm7_1
        arg6[2] = zmm0_1.d
    
    arg6[1] = zmm8.d
    zmm0_1.d = zmm8.d f- zmm10.d
    *arg6 = zmm0.d
    arg6[4] = zmm10.d
    arg6[5] = zmm0_1.d
    arg6[0x5a] = arg1[0x2e].d
    arg6[0x59] = r14

int32_t rax_9 = *(arg3 + 0x614)
bool var_c8_1
var_c8_1.d = zmm0.d
uint64_t var_a8 = *(arg3 + 0x60c)
int32_t var_a0 = rax_9
sub_141f183a0(arg1, arg2, arg3, &var_a8, var_c8_1, zmm8.d, arg6)
return arg2
