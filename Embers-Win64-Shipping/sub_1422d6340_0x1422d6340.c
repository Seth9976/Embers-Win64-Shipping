// 函数: sub_1422d6340
// 地址: 0x1422d6340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
int64_t rbx = 0
uint64_t rdx = zx.q(data_14401b1a0)
*(arg1 + 0x20) = 0
*(arg1 + 0x28) = 0
void* r14 = *(ThreadLocalStoragePointer + (rdx << 3))

if (data_143f56380 s> *(r14 + 0x14))
    _Init_thread_header(&data_143f56380)
    
    if (data_143f56380 == 0xffffffff)
        int64_t* rcx_1 = data_143db18d0
        
        if (rcx_1 == 0)
            sub_140a53c40()
            rcx_1 = data_143db18d0
        
        int64_t r8_1
        r8_1.b = 1
        int64_t* rax_6 =
            (*(*rcx_1 + 0xb0))(rcx_1, r.DefaultFeature.AutoExposure.ExtendDefaultLuminanceRange", 
            r8_1)
        int64_t rax_7
        
        if (rax_6 == 0)
            rax_7 = 0
        else
            int64_t rdx_1 = *rax_6
            rax_7 = (*(rdx_1 + 0x58))(rax_6, rdx_1)
        
        data_143f56378 = rax_7
        _Init_thread_footer(&data_143f56380)

int64_t rsi = data_143f56378
int64_t rcx

if (data_143de5480 == 0)
    rcx = 0
else
    rcx.b = GetCurrentThreadId() != data_143de5470

int32_t rbp = *(rsi + (rcx << 2))

if (data_143f56390 s> *(r14 + 0x14))
    _Init_thread_header(&data_143f56390)
    
    if (data_143f56390 == 0xffffffff)
        int64_t* rcx_3 = data_143db18d0
        
        if (rcx_3 == 0)
            sub_140a53c40()
            rcx_3 = data_143db18d0
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rax_9 = (*(*rcx_3 + 0xb0))(rcx_3, u"r.DefaultFeature.AutoExposure.Bias", r8_2)
        int64_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0
        else
            int64_t rdx_2 = *rax_9
            rax_10 = (*(rdx_2 + 0x60))(rax_9, rdx_2)
        
        data_143f56388 = rax_10
        _Init_thread_footer(&data_143f56390)

int64_t rsi_1 = data_143f56388

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

int32_t zmm4 = *(rsi_1 + (rbx << 2))
*arg1 = 0
*(arg1 + 4) = 0x41200000
*(arg1 + 8) = 0x42b40000
int32_t zmm0
int32_t zmm1
int32_t zmm2
int32_t zmm3

if (rbp != 1)
    zmm0 = 0x40800000
    zmm1 = 0xc1000000
    zmm2 = 0x41000000
    zmm3 = 0x3cf5c28f
else
    zmm0 = 0x41a00000
    zmm1 = 0xc1200000
    zmm2 = 0x41a00000
    zmm3 = -0x3ee00000

*(arg1 + 0xc) = zmm3
*(arg1 + 0x10) = zmm2
*(arg1 + 0x30) = zmm1
*(arg1 + 0x34) = zmm0
*(arg1 + 0x3c) &= 0xfffffffe
*(arg1 + 0x1c) = zmm4
*(arg1 + 0x14) = 0x40400000
*(arg1 + 0x18) = 0x3f800000
*(arg1 + 0x38) = 0x41900000
return arg1
