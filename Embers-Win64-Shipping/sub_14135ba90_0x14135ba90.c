// 函数: sub_14135ba90
// 地址: 0x14135ba90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
TEB* gsbase
void* rdi = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143ec2230 s> *(rdi + 0x14))
    _Init_thread_header(&data_143ec2230)
    
    if (data_143ec2230 == 0xffffffff)
        int64_t* rcx_4 = data_143db18d0
        
        if (rcx_4 == 0)
            sub_140a53c40()
            rcx_4 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_13 = (*(*rcx_4 + 0xb0))(rcx_4, u"r.HDR.Display.ColorGamut", r8_1)
        int64_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0
        else
            int64_t rdx = *rax_13
            rax_14 = (*(rdx + 0x58))(rax_13, rdx)
        
        data_143ec2228 = rax_14
        _Init_thread_footer(&data_143ec2230)

if (data_143ec2240 s> *(rdi + 0x14))
    _Init_thread_header(&data_143ec2240)
    
    if (data_143ec2240 == 0xffffffff)
        int64_t* rcx_6 = data_143db18d0
        
        if (rcx_6 == 0)
            sub_140a53c40()
            rcx_6 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_16 = (*(*rcx_6 + 0xb0))(rcx_6, u"r.HDR.Display.OutputDevice", r8_2)
        int64_t rax_17
        
        if (rax_16 == 0)
            rax_17 = 0
        else
            int64_t rdx_1 = *rax_16
            rax_17 = (*(rdx_1 + 0x58))(rax_16, rdx_1)
        
        data_143ec2238 = rax_17
        _Init_thread_footer(&data_143ec2240)

if (data_143ec2250 s> *(rdi + 0x14))
    _Init_thread_header(&data_143ec2250)
    
    if (data_143ec2250 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        int64_t r8_3
        r8_3.b = 1
        int64_t* rax_19 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.TonemapperGamma", r8_3)
        int64_t rax_20
        
        if (rax_19 == 0)
            rax_20 = 0
        else
            int64_t rdx_2 = *rax_19
            rax_20 = (*(rdx_2 + 0x60))(rax_19, rdx_2)
        
        data_143ec2248 = rax_20
        _Init_thread_footer(&data_143ec2250)

int32_t rax_4 = *(arg2 + 0x48)

if (rax_4 == 8)
    rbx = rax_4
else if (rax_4 == 9)
    rbx = rax_4
else if (*(arg2 + 0x51) == 0)
    int32_t rcx = *(data_143ec2238 + 4)
    
    if (rcx s>= 0)
        rbx = 9
        
        if (rcx s< 9)
            rbx = rcx
else
    rbx = 3

float zmm0[0x4] = zx.o(0)
float zmm8[0x4] = *(data_143ec2248 + 4)

if (not(zmm8[0] <= zmm0[0]) && rbx u<= 1)
    rbx = 2

int64_t* rcx_1 = *(arg2 + 0x18)
(*(*rcx_1 + 0x20))(rcx_1)
int64_t* rcx_2 = *(arg2 + 0x18)
float zmm7[0x4] = 0x3f800000
zmm7[0] = 1f / zmm0[0]
(*(*rcx_2 + 0x20))(rcx_2)
float temp0[0x4] = _mm_max_ss(zmm8[0], 0x3f800000)
int64_t zmm1
zmm1.d = 2.20000005f / zmm0[0]
*(arg1 + 0xc) = rbx
int128_t zmm6
zmm6.d = 1f / temp0[0]
*arg1 = (_mm_unpacklo_ps(zmm7, zmm1)).q
arg1[1].d = zmm6.d
arg1[2].d = *(data_143ec2228 + 4)
return arg1
