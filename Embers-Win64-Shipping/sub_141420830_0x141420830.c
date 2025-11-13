// 函数: sub_141420830
// 地址: 0x141420830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x1598) = 0
*(arg1 + 0x15a0) = 0
int64_t rcx = *(arg1 + 0x15b0)
*(arg1 + 0x15b0) = 0
j_sub_140a74f90(rcx)
int128_t zmm1 = data_142d4cc20
int32_t rax_2 = *(arg1 + 0x497c) & 0xfffc7f81
*(arg1 + 0x48b0) = data_142d5be90
*(arg1 + 0x4980) = 0
*(arg1 + 0x4fd0) = 0
*(arg1 + 0x4fd8) = 0
*(arg1 + 0x497c) = ((rax_2 & 0xffffbfff) | 1) & 0xffffd87f
*(arg1 + 0xd71) = 1
*(arg1 + 0x48c0) = zmm1
*(arg1 + 0x48d0) = data_143dbb1f8.q
int32_t rax_6 = data_143dbb200
*(arg1 + 0x48e0) = zx.o(0)
*(arg1 + 0x48d8) = rax_6
*(arg1 + 0x48dc) = 0x3f800000
*(arg1 + 0x48f0) = 0
*(arg1 + 0x48f8) = 0
*(arg1 + 0x4900) = data_143dbb1f8.q
*(arg1 + 0x4908) = data_143dbb200
int64_t* rcx_1 = *(arg1 + 0x5058)
*(arg1 + 0x5058) = 0

if (rcx_1 != 0)
    (*(*rcx_1 + 0x38))(rcx_1)

*(arg1 + 0x5068) = 0
*(arg1 + 0x490c) = 0
*(arg1 + 0x4910) = 0
*(arg1 + 0x4918) = (_mm_unpacklo_ps(zx.o(0), 0)).q
__builtin_memset(arg1 + 0x4920, 0, 0x14)
uint128_t temp0_1 = _mm_unpacklo_ps(zx.o(0), 0)
*(arg1 + 0x4934) = temp0_1.q
*(arg1 + 0x493c) = 0
*(arg1 + 0x494c) = 0
uint128_t temp0_2 = _mm_unpacklo_ps(zx.o(0), 0)
*(arg1 + 0x4954) = temp0_2.q
*(arg1 + 0x495c) = 0
*(arg1 + 0x4940) = temp0_1.q
*(arg1 + 0x4948) = 0
*(arg1 + 0x4960) = temp0_2.q
*(arg1 + 0x4968) = 0
char r8 = data_143de5480
int64_t rdi = data_143ed2cf8
int32_t var_20 = 0
int32_t var_20_1 = 0
int32_t var_14 = 0
int64_t rcx_2

if (r8 == 0)
    rcx_2 = 0
else
    uint32_t rax_9 = GetCurrentThreadId()
    r8 = data_143de5480
    rcx_2.b = rax_9 != data_143de5470

int32_t rax_10 = *(rdi + (rcx_2 << 2))
int32_t rdi_1

if (rax_10 s>= 0)
    rdi_1 = 4
    
    if (rax_10 s< 4)
        rdi_1 = rax_10
else
    rdi_1 = 0

int32_t rdx_1 = *(arg1 + 0x1548)
int64_t rsi = data_143ed2ce0

if (rdx_1 s>= 3)
    rdi_1 = 0xa

int64_t rcx_3

if (r8 == 0)
    rcx_3 = 0
else
    uint32_t rax_11 = GetCurrentThreadId()
    rdx_1 = *(arg1 + 0x1548)
    rcx_3.b = rax_11 != data_143de5470

int32_t rax_12 = *(rsi + (rcx_3 << 2))

if (rax_12 s< 0)
    rdi_1 = 0
else if (rax_12 s< rdi_1)
    rdi_1 = rax_12

*(arg1 + 0x278) = rdi_1
int64_t rax_14 = std::_Get_future_error_what((*U"1111")[sx.q(rdx_1)])
uint64_t rcx_5 = zx.q(data_14401b1a0)
*(arg1 + 0x5150) = rax_14
*(arg1 + 0x15a8) = *(arg1 + 8)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
*(arg1 + 0x5158) = 0
uint64_t rax_16

if (data_143ed4ab8 s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_5 << 3))))
    int64_t r8_1
    rax_16, r8_1 = _Init_thread_header(&data_143ed4ab8)
    
    if (data_143ed4ab8 == 0xffffffff)
        int64_t* rcx_21 = data_143db18d0
        
        if (rcx_21 == 0)
            sub_140a53c40()
            rcx_21 = data_143db18d0
        
        r8_1.b = 1
        int64_t* rax_29 = (*(*rcx_21 + 0xb0))(rcx_21, u"vr.HiddenAreaMask", r8_1)
        int64_t rax_30
        
        if (rax_29 == 0)
            rax_30 = 0
        else
            int64_t rdx_3 = *rax_29
            rax_30 = (*(rdx_3 + 0x58))(rax_29, rdx_3)
        
        data_143ed4ab0 = rax_30
        _Init_thread_footer(&data_143ed4ab8)

int64_t rdi_2 = data_143ed4ab0

if (rdi_2 == 0)
    rax_16.b = 0
else
    int64_t rcx_7
    
    if (data_143de5480 == 0)
        rcx_7 = 0
    else
        rcx_7.b = GetCurrentThreadId().d != data_143de5470
    
    if (*(rdi_2 + (rcx_7 << 2)) != 1)
        rax_16.b = 0
    else
        void* rcx_8 = data_143f5b298
        
        if (rcx_8 == 0)
            rax_16.b = 0
        else
            int64_t* rcx_9 = *(rcx_8 + 0xb08)
            
            if (rcx_9 == 0)
                rax_16.b = 0
            else if ((*(*rcx_9 + 0x100))(rcx_9) == 0)
                rax_16.b = 0
            else
                int64_t* rcx_10 = *(data_143f5b298 + 0xb08)
                int64_t* rax_20 = (*(*rcx_10 + 0x100))(rcx_10)
                int64_t rdx_2 = *rax_20
                
                if ((*(rdx_2 + 0x118))(rax_20, rdx_2).b == 0)
                    rax_16.b = 0
                else
                    rax_16.b = 1

int32_t rcx_12 = *(arg1 + 0x1548)
*(arg1 + 0x5159) = rax_16.b
*(arg1 + 0x515a) = sub_141319840(rcx_12)
int32_t rax_22 = *(arg1 + 0x497c)
*(arg1 + 0x18a8) = 0
*(arg1 + 0x497c) = rax_22 & 0xffffe7ff
*(arg1 + 0x515b) = 0
*(arg1 + 0x1540) = 0
*(arg1 + 0x5040) = 0
*(arg1 + 0x5048) = 0
*(arg1 + 0x2490) = 0
*(arg1 + 0x496c) = 1
*(arg1 + 0x4974) = data_143dbb1f0.d.d
*(arg1 + 0x4978) = data_143dbb1f0:4.d.d
*(arg1 + 0x4fd4) = 0x3f800000
uint32_t rax_23

if (data_143de5480 == 0)
    rax_23.b = 1
else
    rax_23.b = GetCurrentThreadId() == data_143de5470

if (rax_23.b == 0)
    rax_23.b = 0
else
    *(arg1 + 0x5238) = zx.d(sub_1423c1fc0(sub_1405e25d0(sub_141fe0f50(sub_141fe0c50(0))), 0))
    rax_23.b = 1

*(arg1 + 0x523c) = rax_23.b
sub_1405d16e0(arg1 + 0x5178, nullptr)
sub_1405d16e0(arg1 + 0x5180, nullptr)
sub_1405d16e0(arg1 + 0x5188, nullptr)
sub_1405d16e0(arg1 + 0x1648, nullptr)
int64_t* result = sub_1405d16e0(arg1 + 0x1650, nullptr)
__builtin_memset(arg1 + 0x16f8, 0, 0x50)
return result
