// 函数: sub_1418eeab0
// 地址: 0x1418eeab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0x1f
__builtin_memset(&arg3[1], 0, 0x4c)
uint32_t rsi = 0x7fffffff
char rax = *arg1
int32_t rax_1

if (rax == 0)
    rax_1 = 0
else if (rax == 1 || rax == 2 || (rax u> 2 && rax u<= 4))
    rax_1 = 1
else
    rax_1 = 0x7fffffff

arg3[5] = rax_1
char rax_2 = *arg1
int32_t rax_3

if (rax_2 == 0)
    rax_3 = 0
else if (rax_2 == 1 || rax_2 == 2 || (rax_2 u> 2 && rax_2 u<= 4))
    rax_3 = 1
else
    rax_3 = 0x7fffffff

arg3[6] = rax_3
uint32_t rcx = zx.d(*arg1)
int32_t rax_4

if (rcx == 0 || rcx == 1)
    rax_4 = 0
else if (rcx == 2)
    rax_4 = 1
else if (rcx == 3)
    rax_4 = 0
else if (rcx == 4)
    rax_4 = 1
else
    rax_4 = 0x7fffffff

arg3[7] = rax_4
int32_t rdx = 3
uint32_t rcx_4 = zx.d(arg1[1])
int32_t rax_5

if (rcx_4 == 0)
    rax_5 = 0
else if (rcx_4 == 1)
    rax_5 = 2
else if (rcx_4 == 2)
    rax_5 = 1
else if (rcx_4 == 3)
    rax_5 = 3
else
    rax_5 = 0x7fffffff

arg3[8] = rax_5
uint32_t rcx_7 = zx.d(arg1[2])
int32_t rax_6

if (rcx_7 == 0)
    rax_6 = 0
else if (rcx_7 == 1)
    rax_6 = 2
else if (rcx_7 == 2)
    rax_6 = 1
else if (rcx_7 == 3)
    rax_6 = 3
else
    rax_6 = 0x7fffffff

arg3[9] = rax_6
uint32_t rcx_10 = zx.d(arg1[3])

if (rcx_10 == 0)
    rdx = 0
else if (rcx_10 == 1)
    rdx = 2
else if (rcx_10 == 2)
    rdx = 1
else if (rcx_10 != 3)
    rdx = 0x7fffffff

arg3[0xa] = rdx
float zmm0 = 1f
arg3[0xb] = *(arg1 + 4)
arg3[0xd] = 0x3f800000

if (*arg1 != 0)
    int32_t rbp_1 = *(arg1 + 0x10)
    TEB* gsbase
    
    if (data_143e2b900
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e2b900)
        
        if (data_143e2b900 == 0xffffffff)
            int64_t* rcx_20 = data_143db18d0
            
            if (rcx_20 == 0)
                sub_140a53c40()
                rcx_20 = data_143db18d0
            
            int64_t r8
            r8.b = 1
            int64_t* rax_19 = (*(*rcx_20 + 0xb0))(rcx_20, u"r.MaxAnisotropy", r8)
            
            if (rax_19 != 0)
                int64_t rdx_1 = *rax_19
                rax_19 = (*(rdx_1 + 0x58))(rax_19, rdx_1)
            
            data_143e2b8f8 = rax_19
            _Init_thread_footer(&data_143e2b900)
    
    int64_t r14_1 = data_143e2b8f8
    int64_t rcx_15
    
    if (data_143de5480 == 0)
        rcx_15 = 0
    else
        rcx_15.b = GetCurrentThreadId() != data_143de5470
    
    int32_t rcx_16 = *(r14_1 + (rcx_15 << 2))
    
    if (rbp_1 s> 0)
        rcx_16 = rbp_1
    
    int64_t rax_11
    
    if (rcx_16 s>= 1)
        rax_11 = 0x10
        
        if (rcx_16 s< 0x10)
            rax_11 = zx.q(rcx_16)
    else
        rax_11 = 1
    
    int32_t zmm1 = float.s(rax_11)
    
    if (zmm1 f>= 1f)
        zmm0 = _mm_min_ss(*(arg2 + 0xa00), zmm1)
    else
        zmm0 = 1f
    
    arg3[0xd] = zmm0

int32_t rax_12
rax_12.b = zmm0 > 1f
arg3[0xc] = rax_12
int32_t rax_13
rax_13.b = arg1[0x18] != 0
arg3[0xe] = rax_13
uint32_t rcx_17 = zx.d(arg1[0x18])

if (rcx_17 == 0)
    rsi = 0
else if (rcx_17 == 1)
    rsi = rcx_17

arg3[0xf] = rsi
arg3[0x10] = *(arg1 + 8)
arg3[0x11] = *(arg1 + 0xc)
int32_t rax_16 = *(arg1 + 0x14)
arg3[0x12] = sbb.d(rcx_17, rcx_17, rax_16 != 0) & 4
return zx.q(neg.d(rax_16))
