// 函数: sub_1423ceeb0
// 地址: 0x1423ceeb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rdx = zx.q(data_14401b1a0)
*arg1 = &data_143341678
int64_t rbx = 0
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
arg1[1].d = 0x42c80000
*(arg1 + 0xc) = 0x280
arg1[2].d = 0x1e0
void* rsi = *(ThreadLocalStoragePointer + (rdx << 3))

if (data_143f5b770 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b770)
    
    if (data_143f5b770 == 0xffffffff)
        int64_t* rcx_5 = data_143db18d0
        
        if (rcx_5 == 0)
            sub_140a53c40()
            rcx_5 = data_143db18d0
        
        int512_t zmm2
        zmm2.o = zx.o(0)
        int64_t* rax_12 = (*(*rcx_5 + 0x10))(rcx_5, r.StereoEmulationFOV", zmm2, 
            FOV in degrees, of the imaginable HMD for stereo emulation", 0)
        data_143f5b760 = rax_12
        data_143f5b758 = &data_142d3ff18
        int64_t rdx_3 = *rax_12
        data_143f5b768 = (*(rdx_3 + 0x60))(rax_12, rdx_3)
        atexit(sub_142d0fd20)
        _Init_thread_footer(&data_143f5b770)

if (data_143f5b790 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b790)
    
    if (data_143f5b790 == 0xffffffff)
        int64_t* rcx_7 = data_143db18d0
        
        if (rcx_7 == 0)
            sub_140a53c40()
            rcx_7 = data_143db18d0
        
        int64_t* rax_15 = (*(*rcx_7 + 0x18))(rcx_7, r.StereoEmulationWidth", 0, 
            Width of the imaginable HMD for stereo emulation", 0)
        data_143f5b780 = rax_15
        data_143f5b778 = &data_142d3ff18
        int64_t rdx_4 = *rax_15
        data_143f5b788 = (*(rdx_4 + 0x58))(rax_15, rdx_4)
        atexit(sub_142d0fdc0)
        _Init_thread_footer(&data_143f5b790)

if (data_143f5b7b0 s> *(rsi + 0x14))
    _Init_thread_header(&data_143f5b7b0)
    
    if (data_143f5b7b0 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t* rax_9 = (*(*rcx_3 + 0x18))(rcx_3, r.StereoEmulationHeight", 0, 
            Height of the imaginable HMD for stereo emulation", 0)
        data_143f5b7a0 = rax_9
        data_143f5b798 = &data_142d3ff18
        int64_t rdx_2 = *rax_9
        data_143f5b7a8 = (*(rdx_2 + 0x58))(rax_9, rdx_2)
        atexit(sub_142d0fd70)
        _Init_thread_footer(&data_143f5b7b0)

int64_t rsi_1 = data_143f5b768
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

int32_t zmm0 = *(rsi_1 + (rcx << 2))

if (not(zmm0 f== 0f))
    int32_t zmm1 = 0x41a00000
    
    if (not(zmm0 f< 20f))
        zmm1 = __minss_xmmss_memss(zmm0, 0x43960000)
    
    arg1[1].d = zmm1

int64_t rsi_2 = data_143f5b788
int64_t rcx_1

if (data_143de5480 == 0)
    rcx_1 = 0
else
    rcx_1.b = GetCurrentThreadId() != data_143de5470

int32_t rsi_3 = *(rsi_2 + (rcx_1 << 2))
int64_t r14 = data_143f5b7a8

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

int32_t rcx_2 = *(r14 + (rbx << 2))
int32_t rax_6 = 0x64

if (rsi_3 != 0)
    int32_t rdx_1
    
    if (rsi_3 s>= 0x64)
        rdx_1 = 0x2710
        
        if (rsi_3 s< 0x2710)
            rdx_1 = rsi_3
    else
        rdx_1 = 0x64
    
    *(arg1 + 0xc) = rdx_1

if (rcx_2 != 0)
    if (rcx_2 s>= 0x64)
        rax_6 = 0x2710
        
        if (rcx_2 s< 0x2710)
            rax_6 = rcx_2
    
    arg1[2].d = rax_6

return arg1
