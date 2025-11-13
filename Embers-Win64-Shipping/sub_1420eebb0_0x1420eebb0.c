// 函数: sub_1420eebb0
// 地址: 0x1420eebb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t* performanceCount
QueryPerformanceCounter(&performanceCount)
int64_t* rbx = *arg1
int64_t var_128
int64_t* var_148 = &var_128
__builtin_memset(&var_128, 0, 0x2c)
void var_98
void* var_140 = &var_98
int128_t zmm6
zmm6.q = float.d(performanceCount)
int64_t (* var_d8)(int64_t* arg1, int64_t* arg2)
int64_t* var_138 = &var_d8
void** const var_b8 = &data_142e345d8
int64_t rdi = 0
var_d8 = sub_1420de8b0
zmm6.q = zmm6.q f* data_143d796f8
int32_t var_fc = 0x80
uint64_t r14_1 = sx.q(arg1[1].d) << 3 u>> 3
int32_t var_f8 = 0xffffffff

if (rbx u> &rbx[arg1[1]])
    r14_1 = 0

int32_t var_f4 = 0
int64_t var_e8 = 0
int32_t var_e0 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_3c = 0xa
void*** var_c8 = nullptr
int64_t* var_a0 = var_138
int128_t var_b0 = var_148.o

if (r14_1 != 0)
    do
        int64_t* performanceCount_2 = *rbx
        
        if (performanceCount_2 != 0)
            performanceCount = performanceCount_2
            void*** rcx_1 = &var_b8
            
            if (var_c8 != 0)
                rcx_1 = var_c8
            
            var_d8((*rcx_1)[1](rcx_1), &performanceCount)
            int32_t var_40_1 = 0
            
            if (var_3c s< 0 && var_3c != 0)
                sub_1413675a0(&var_98, 0)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

QueryPerformanceCounter(&performanceCount)
performanceCount = &var_128
int64_t performanceCount_1
QueryPerformanceCounter(&performanceCount_1)
sub_1420d7dd0(*arg1, arg1[1].d, &performanceCount)
QueryPerformanceCounter(&performanceCount_1)
QueryPerformanceCounter(&performanceCount)
int128_t zmm0
zmm0.q = float.d(performanceCount)
zmm0.q = zmm0.q f* data_143d796f8
zmm0.q = zmm0.q f- zmm6.q
TEB* gsbase

if (not(zmm0.q f<= 1.0) && data_143db4814
        s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143db4814)
    
    if (data_143db4814 == 0xffffffff)
        sub_140af2b60()
        data_143db4810 = sub_140b21a10(&data_143dbb3f0, u"UNATTENDED")
        _Init_thread_footer(&data_143db4814)

int64_t r10 = sx.q(arg1[1].d)
int64_t rdx_3 = r10

if (r10.d s> 0)
    int64_t r8_1 = rdx_3
    int64_t* r9_3 = *arg1 - 8 + (r10 << 3)
    
    while (*r9_3 == 0)
        rdx_3 = zx.q(rdx_3.d - 1)
        r8_1 -= 1
        r9_3 -= 8
        
        if (r8_1 s<= 0)
            break
    
    if (rdx_3.d s< r10.d)
        arg1[1].d = rdx_3.d
        sub_1405c53d0(arg1)

if (var_d8 != 0)
    void** const* rcx_12 = &var_b8
    
    if (var_c8 != 0)
        rcx_12 = var_c8
    
    (*rcx_12)[2](rcx_12)

if (var_48 != 0)
    sub_140a74f90(var_48)

int32_t var_e0_1 = 0

if (var_e8 != 0)
    sub_140a74f90(var_e8)

int64_t var_120
var_120.d = 0
int32_t var_f8_1 = 0xffffffff
int32_t var_f4_1 = 0
int64_t var_118
void* result = sub_14059a8e0(&var_118, 0)
int64_t var_108

if (var_108 != 0)
    result = sub_140a74f90(var_108)

int64_t rcx_18 = var_128

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)

__security_check_cookie(rax_1 ^ &var_178)
return result
