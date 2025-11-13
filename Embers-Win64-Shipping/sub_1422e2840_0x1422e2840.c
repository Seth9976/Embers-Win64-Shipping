// 函数: sub_1422e2840
// 地址: 0x1422e2840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_1422d5450(&arg1[0x2a2])

if (not(0.00100000005f f<= *(rax + 0x20)))
    *(rax + 0x20) = 0

if (not(0.00100000005f f<= *(rax + 4)))
    *(rax + 4) = 0

if ((*(*arg1 + 0x28) & 0x40) == 0)
    *(rax + 4) = 0

TEB* gsbase
void* rdi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143f56580 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f56580)
    
    if (data_143f56580 == 0xffffffff)
        int64_t* rcx_9 = data_143db18d0
        
        if (rcx_9 == 0)
            sub_140a53c40()
            rcx_9 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_29 = (*(*rcx_9 + 0xb0))(rcx_9, u"r.SceneColorFringeQuality", r8_2)
        int64_t rax_30
        
        if (rax_29 == 0)
            rax_30 = 0
        else
            int64_t rdx_2 = *rax_29
            rax_30 = (*(rdx_2 + 0x58))(rax_29, rdx_2)
        
        data_143f56578 = rax_30
        _Init_thread_footer(&data_143f56580)

if (*data_143f56578 s<= 0)
    arg1[0x1fe].d = 0

if (data_143f56590 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f56590)
    
    if (data_143f56590 == 0xffffffff)
        int64_t* rcx_11 = data_143db18d0
        
        if (rcx_11 == 0)
            sub_140a53c40()
            rcx_11 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_32 = (*(*rcx_11 + 0xb0))(rcx_11, u"r.BloomQuality", r8_3)
        int64_t rax_33
        
        if (rax_32 == 0)
            rax_33 = 0
        else
            int64_t rdx_3 = *rax_32
            rax_33 = (*(rdx_3 + 0x58))(rax_32, rdx_3)
        
        data_143f56588 = rax_33
        _Init_thread_footer(&data_143f56590)

if (*data_143f56588 s<= 0)
    arg1[0x1ff].d = 0

if ((*(*arg1 + 0x28) & 2) == 0)
    arg1[0x1ff].d = 0

int32_t rcx_3 = *data_143f55a60

if (rcx_3 s< 1)
    arg1[0x1fa].d = 0

if (rcx_3 s< 2)
    arg1[0x23b].d = 0

if (rcx_3 s< 3)
    arg1[0x1f3].d = 0

if (rcx_3 s< 4)
    arg1[0x23c].d = 0

if (rcx_3 s< 5)
    *(arg1 + 0x11dc) = 0

if (data_143f565a0 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f565a0)
    
    if (data_143f565a0 == 0xffffffff)
        int64_t* rcx_13 = data_143db18d0
        
        if (rcx_13 == 0)
            sub_140a53c40()
            rcx_13 = data_143db18d0
        
        int64_t r8_4
        r8_4.b = 1
        int64_t* rax_35 = (*(*rcx_13 + 0xb0))(rcx_13, u"r.DepthOfFieldQuality", r8_4)
        int64_t rax_36
        
        if (rax_35 == 0)
            rax_36 = 0
        else
            int64_t rdx_4 = *rax_35
            rax_36 = (*(rdx_4 + 0x58))(rax_35, rdx_4)
        
        data_143f56598 = rax_36
        _Init_thread_footer(&data_143f565a0)

if (*data_143f56598 s<= 0)
    *(arg1 + 0x126c) = 0

void* rcx_4 = *arg1
int32_t rax_11 = *(rcx_4 + 0x28)

if (not(test_bit(rax_11, 0xe)))
    *(arg1 + 0x126c) = 0
    rax_11 = *(rcx_4 + 0x28)

if (rax_11.b s>= 0)
    arg1[0x23b].d = 0
    rax_11 = *(rcx_4 + 0x28)

if ((rax_11.b & 0x10) == 0)
    arg1[0x27d].d = 0
    
    if (*(arg1 + 0x13ec) s<= 0xffffffff)
        sub_141a64260(&arg1[0x264], 0)

int64_t* rcx_6 = *(data_143f5b298 + 0xaf8)

if (rcx_6 != 0)
    (*(*rcx_6 + 0xd8))(rcx_6, &arg1[0x1bc], zx.q(arg1[0x15a].d))

float zmm0[0x4] = *data_143f55508

if (not(zmm0[0] < 0f))
    *(arg1 + 0x12d4) = zmm0[0]

if (data_143f565b0 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f565b0)
    
    if (data_143f565b0 == 0xffffffff)
        int64_t* rcx_15 = data_143db18d0
        
        if (rcx_15 == 0)
            sub_140a53c40()
            rcx_15 = data_143db18d0
        
        int64_t r8_5
        r8_5.b = 1
        int64_t* rax_38 = (*(*rcx_15 + 0xb0))(rcx_15, u"r.AmbientOcclusionStaticFraction", r8_5)
        int64_t rax_39
        
        if (rax_38 == 0)
            rax_39 = 0
        else
            int64_t rdx_5 = *rax_38
            rax_39 = (*(rdx_5 + 0x60))(rax_38, rdx_5)
        
        data_143f565a8 = rax_39
        _Init_thread_footer(&data_143f565b0)

zmm0 = *data_143f565a8

if (not(zmm0[0] < 0f))
    arg1[0x23d].d = zmm0[0]

void* rax_17 = *arg1

if ((*(rax_17 + 0x28) & 0x100) == 0 || (*(rax_17 + 0x2c) & 0x200000) == 0)
    *(arg1 + 0x11e4) = 0

if (data_143f565c0 s> *(rdi + 0x14))
    _Init_thread_header(&data_143f565c0)
    
    if (data_143f565c0 == 0xffffffff)
        int64_t* rcx_17 = data_143db18d0
        
        if (rcx_17 == 0)
            sub_140a53c40()
            rcx_17 = data_143db18d0
        
        int64_t r8_6
        r8_6.b = 1
        int64_t* rax_41 = (*(*rcx_17 + 0xb0))(rcx_17, u"r.AmbientOcclusionRadiusScale", r8_6)
        int64_t rax_42
        
        if (rax_41 == 0)
            rax_42 = 0
        else
            int64_t rdx_6 = *rax_41
            rax_42 = (*(rdx_6 + 0x60))(rax_41, rdx_6)
        
        data_143f565b8 = rax_42
        _Init_thread_footer(&data_143f565c0)

zmm0 = 0x3dcccccd
float zmm1[0x4] = *data_143f565b8

if (not(zmm1[0] < 0.100000001f))
    zmm0 = __minss_xmmss_memss(zmm1[0], 0x41700000)

zmm0[0] = zmm0[0] f* *(arg1 + 0x11ec)
*(arg1 + 0x11ec) = zmm0[0]
zmm0 = 0x3c23d70a
float zmm2[0x4] = *data_143f55668

if (not(zmm2[0] < 0.00999999978f))
    zmm0 = _mm_min_ss(zmm2[0], 0x42480000)

zmm0[0] = zmm0[0] f* *(arg1 + 0x11fc)
*(arg1 + 0x11fc) = zmm0[0]
zmm0 = *data_143f559e8

if (zmm0[0] >= 0f)
    zmm0 = _mm_min_ss(zmm0[0], 0x42480000)
else
    zmm0 = zx.o(0)

zmm0[0] = zmm0[0] f* *(arg1 + 0x1284)
*(arg1 + 0x1284) = zmm0[0]
zmm1 = *data_143f55a00

if (not(zmm1[0] < 0f))
    *(arg1 + 0x1284) = zmm1[0]

zmm0 = *data_143f55a18

if (not(zmm0[0] < 0f))
    arg1[0x251].d = zmm0[0]

int32_t rcx_7 = *data_143f55a30

if (rcx_7 s>= 0)
    *(arg1 + 0x128c) = rcx_7

zmm1 = *data_143f55a48

if (not(zmm1[0] < 0f))
    arg1[0x1fe].d = _mm_min_ss(arg1[0x1fe].d[0], zmm1[0])[0]
else if (not(zmm1[0] != -2f))
    arg1[0x1fe].d = 0x40a00000

void* rax_26 = *arg1

if ((*(rax_26 + 0x2c) & 0x20) == 0 || (*(rax_26 + 0x28) & 0x40) == 0)
    __builtin_memset(&arg1[0x244], 0, 0x14)

if (sub_1419c6730() != 0)
    sub_1422e0be0(arg1)

void* result = *arg1

if ((*(result + 0x28) & 0x40000) == 0)
    arg1[0x261].d = 0x42c80000
else
    zmm0 = arg1[0x261].d
    zmm1 = 0x3f800000
    
    if (not(zmm0[0] < 1f))
        zmm1 = __minss_xmmss_memss(zmm0[0], 0x43c80000)
    
    arg1[0x261].d = zmm1[0]

return result
