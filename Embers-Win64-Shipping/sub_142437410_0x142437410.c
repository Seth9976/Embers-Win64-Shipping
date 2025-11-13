// 函数: sub_142437410
// 地址: 0x142437410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = *(arg1 + 0x18)
*(arg2 + 0x24) = 2
int32_t rax_2 = *(arg1 + 0x38) + 6
char rcx

if (rax_2 s>= 6)
    rcx = 0xa
    
    if (rax_2 s< 0xa)
        rcx = rax_2.b
else
    rcx = 6

char rbx = 1
*(arg2 + 0xc) = 1 << rcx
int32_t rcx_1 = *(arg1 + 0x3c)
int32_t rax_4

if (rcx_1 s>= 0)
    rax_4 = 4
    
    if (rcx_1 s< 4)
        rax_4 = rcx_1
else
    rax_4 = 0

*(arg2 + 0x1c) = 1
arg2[2].d = rax_4 * 2
arg2[4].d = 0x10001
int64_t rsi = data_143f5e8b0
int64_t rcx_2

if (data_143de5480 == 0)
    rcx_2 = 0
else
    rcx_2.b = GetCurrentThreadId() != data_143de5470

int32_t rdx = *(rsi + (rcx_2 << 2))
int32_t rdx_1 = rdx + *(arg1 + 0x34)
char rcx_3

if (rdx + *(arg1 + 0x34) s>= 0)
    rcx_3 = 0xc
    
    if (rdx_1 s< 0xc)
        rcx_3 = rdx_1.b
else
    rcx_3 = 0

float zmm1[0x4] = *(arg3 + 0x20)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
uint32_t zmm6[0x4] = __maxss_xmmss_memss(__andps_xmmxud_memxud(zmm1, data_142d3f770)[0], 0x38d1b717)
int32_t rsi_1 = 1 << rcx_3
uint64_t rcx_4 = zx.q(data_14401b1a0)
zmm1 = __maxss_xmmss_memss(
    __andps_xmmxud_memxud(_mm_shuffle_ps(zmm1, zmm1, 0x55), data_142d3f770)[0], 0x38d1b717)
int64_t rcx_5 = *(ThreadLocalStoragePointer + (rcx_4 << 3))
zmm6[0] = zmm6[0] f/ zmm1[0]

if (data_143cda914 s> *(0x14 + rcx_5))
    _Init_thread_header(&data_143cda914)
    
    if (data_143cda914 == 0xffffffff)
        data_143cda910 = 0x3fb8aa3b
        _Init_thread_footer(&data_143cda914)

float result = logf(zmm6[0]) f* data_143cda910
float zmm2 = result + result
int32_t r8

if (result < zx.o(0)[0])
    r8 = rsi_1
    result = 0.5f - zmm2
    uint32_t rsi_2 = rsi_1 u>> (int.d(result) s>> 1).b
    rsi_1 = 1
    
    if (rsi_2 u>= 1)
        rsi_1 = rsi_2
else
    r8 = 1
    uint32_t rdx_3 = rsi_1 u>> (int.d(zmm2 + 0.5f) s>> 1).b
    
    if (rdx_3 u>= 1)
        r8 = rdx_3

bool cond:4 = rsi_1 == r8
arg2[3].d = r8
*(arg2 + 0x14) = rsi_1

if (rsi_1 u>= r8)
    r8 = rsi_1

uint64_t rflags
int32_t temp0_6
temp0_6, rflags = _bit_scan_reverse(r8)
int32_t rcx_10

rcx_10 = cond:4 ? 0x20 : 0x1f - temp0_6

int32_t rcx_12 = rcx_10 << 0x1a s>> 0x1f
uint64_t rflags_1
int32_t temp0_7
temp0_7, rflags_1 = _bit_scan_reverse(r8 - 1)
int32_t r9

if (rcx_12 == 0)
    r9 = 0x20
else
    r9 = 0x1f - temp0_7

int32_t r8_2 = *(arg1 + 0x54)
int32_t rax_11

if (r8_2 s>= 0)
    rax_11 = 5
    
    if (r8_2 s< 5)
        rax_11 = r8_2
else
    rax_11 = 0

int32_t rdx_5 = (0x20 - r9) & not.d(rcx_12)
char rcx_14 = 0

if (rdx_5 - rax_11 s>= 0)
    rcx_14 = rdx_5.b - rax_11.b

*(arg2 + 0x25) = rcx_14
char rax_13 = *(arg1 + 0x28)

if (rax_13 == 0)
    rax_13 = 1
else if (rax_13 == 2)
    rax_13 = 2
else if (rax_13 u<= 2 || rax_13 u> 4)
    rax_13 = 1
else
    rax_13 = 3

*(arg2 + 0x26) = rax_13

if (*(arg1 + 0x2c) == 0)
    char rax_14 = *(arg1 + 0x28)
    
    if (rax_14 != 0)
        if (rax_14 == 2)
            rbx = 2
        else if (rax_14 u> 2 && rax_14 u<= 4)
            rbx = 3

*(arg2 + 0x2f) = rbx
int32_t i = 0

do
    int64_t i_1 = sx.q(i)
    *(i_1 + arg2 + 0x27) = sub_1424369b0(arg1, i)
    char rax_16 = i.b
    
    if (*(arg1 + 0x2c) != 0)
        rax_16 = 0
    
    i += 1
    *(i_1 + arg2 + 0x30) = rax_16
while (i s< zx.d(*(arg2 + 0x26)))

return result
