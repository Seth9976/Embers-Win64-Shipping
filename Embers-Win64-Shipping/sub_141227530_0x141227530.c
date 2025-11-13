// 函数: sub_141227530
// 地址: 0x141227530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
TEB* gsbase
void* rdi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143e84450 s> *(rdi + 0x14))
    _Init_thread_header(&data_143e84450)
    
    if (data_143e84450 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_11 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.Shadow.MinResolution", r8_3)
        int64_t rax_12
        
        if (rax_11 == 0)
            rax_12 = 0
        else
            int64_t rdx_2 = *rax_11
            rax_12 = (*(rdx_2 + 0x58))(rax_11, rdx_2)
        
        data_143e84448 = rax_12
        _Init_thread_footer(&data_143e84450)

if (data_143e84460 s> *(rdi + 0x14))
    _Init_thread_header(&data_143e84460)
    
    if (data_143e84460 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_14 = (*(*rcx_5 + 0xb0))(rcx_5, u"r.Shadow.FadeResolution", r8_4)
        int64_t rax_15
        
        if (rax_14 == 0)
            rax_15 = 0
        else
            int64_t rdx_3 = *rax_14
            rax_15 = (*(rdx_3 + 0x58))(rax_14, rdx_3)
        
        data_143e84458 = rax_15
        _Init_thread_footer(&data_143e84460)

int32_t rbp = *(data_143e84448 + 4)

if (rbp s<= 0)
    rbp = 0

int32_t r14 = *(data_143e84458 + 4)

if (r14 s<= 0)
    r14 = 0

void var_38
sub_1422f9c00(arg1, &var_38, arg2)
int32_t rcx_2 = *(arg1 + 0x15a0) - *(arg1 + 0x1598)
int32_t rax_6 = *(arg1 + 0x15a4) - *(arg1 + 0x159c)
int32_t var_2c
float temp0[0x4] = __maxss_xmmss_memss(var_2c[0], 0x3f800000)
uint128_t zmm6
zmm6.d = _mm_cvtepi32_ps(zx.o(rcx_2)).d f* 0.5f
bool cond:1 = data_143e84470 s> *(rdi + 0x14)
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(rax_6))
zmm6.d = zmm6.d f* *(arg1 + 0x280)
zmm1.d = zmm1.d f* 0.5f
zmm1.d = zmm1.d f* *(arg1 + 0x294)
zmm6.d = _mm_max_ss(zmm6.d, zmm1.d).d f* *(arg2 + 0xc)
zmm6.d = zmm6.d f/ temp0[0]

if (cond:1)
    _Init_thread_header(&data_143e84470)
    
    if (data_143e84470 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        int64_t r8_5
        r8_5.b = 1
        int64_t* rax_17 = (*(*rcx_7 + 0xb0))(rcx_7, u"r.Shadow.TexelsPerPixel", r8_5)
        
        if (rax_17 != 0)
            int64_t rdx_4 = *rax_17
            rbx = (*(rdx_4 + 0x60))(rax_17, rdx_4)
        
        data_143e84468 = rbx
        _Init_thread_footer(&data_143e84470)

float zmm0[0x4] = *(data_143e84468 + 4)
zmm0[0] = zmm0[0] f* zmm6.d
return sub_141481cb0(zmm0, r14, rbp)
