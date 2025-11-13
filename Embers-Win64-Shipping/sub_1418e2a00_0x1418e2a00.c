// 函数: sub_1418e2a00
// 地址: 0x1418e2a00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
int64_t r8
int64_t r9
rax, r8, r9 = sub_1418fdb30()

if (rax == 0)
    sub_140af98a0("Unknown", 0xd7, 
        Failed to find all required Vulkan entry points; make sure your driver supports Vulkan!", r9)
    sub_140afbb40()

int64_t* rcx = data_143db18d0

if (rcx == 0)
    sub_140a53c40()
    rcx = data_143db18d0

r8.b = 1
int64_t* rax_2 = (*(*rcx + 0xb0))(rcx, u"r.GPUCrashDebugging", r8)
int32_t rax_3

if (rax_2 != 0)
    int64_t rdx_1 = *rax_2
    rax_3 = (*(rdx_1 + 0x90))(rax_2, rdx_1)

if (rax_2 != 0 && rax_3 != 0)
    rax_3.b = 1
else
    sub_140af2b60()
    rax_3 = sub_140b21a10(&data_143dbb3f0, u"gpucrashdebugging")
    
    if (rax_3.b != 0)
        rax_3.b = 1

data_143efb318 = rax_3.b
sub_1418e2f60(arg1)
int64_t rbx = 0
int64_t rdx_2
TEB* gsbase

if (data_143efb620 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    int64_t r8_1
    rdx_2, r8_1 = _Init_thread_header(&data_143efb620)
    
    if (data_143efb620 == 0xffffffff)
        int64_t* rcx_8 = data_143db18d0
        
        if (rcx_8 == 0)
            sub_140a53c40()
            rcx_8 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_13 = (*(*rcx_8 + 0xb0))(rcx_8, u"r.Streaming.PoolSize", r8_1)
        int64_t rax_14
        
        if (rax_13 == 0)
            rax_14 = 0
        else
            int64_t rdx_3 = *rax_13
            rax_14 = (*(rdx_3 + 0x58))(rax_13, rdx_3)
        
        data_143efb618 = rax_14
        _Init_thread_footer(&data_143efb620)

int64_t rdi = data_143efb618

if (data_143de5480 != 0)
    uint32_t rax_6
    rax_6, rdx_2 = GetCurrentThreadId()
    rbx.b = rax_6 != data_143de5470

int64_t rax_7 = sx.q(*(rdi + (rbx << 2)))

if (data_143f0f208 s<= 0)
    if (rax_7.d s<= 0)
        return rax_7
    
    rdx_2.b = 1
    data_143f0f200 = rax_7 << 0x14
    return sub_1418c0cc0(*(arg1 + 0x58) + 0x10, rdx_2.b)

rdx_2.b = 1
int64_t rax_8 = sub_1418c0cc0(*(arg1 + 0x58) + 0x10, rdx_2.b)
int32_t zmm1 = float.s(rax_8)
uint128_t zmm0
zmm0.d = _mm_cvtepi32_ps(zx.o(data_143f0f208)).d f* 9.53674295e-09f

if (rax_8 s< 0)
    zmm1 = zmm1 f+ 1.84467441e+19f

zmm0.d = zmm0.d f* zmm1
truncf(zmm0.d)
int64_t rax_10 = int.q(zmm0.d) << 0x14
data_143f0f200 = rax_10
return rax_10
