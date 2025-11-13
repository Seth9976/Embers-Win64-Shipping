// 函数: sub_1414fadf0
// 地址: 0x1414fadf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1].d = 0xffffffff
void* rsi = &arg1[4]
*(arg1 + 0xc) = 4
*arg1 = &data_142fbb448
int32_t rbx = 0
arg1[2] = *arg4
arg1[3].d = arg4[1].d
int64_t i_2 = 8
void* rcx = &arg1[0x13]
*rsi = zx.d(arg4[1].b)
__builtin_memset(rsi + 8, 0, 0x40)
void* rax_2 = rcx + 0x14
int64_t* rdi = arg4
*(rsi + 0x4c) = 0
*(rsi + 0x58) = &data_14399e5d8
__builtin_memset(rsi + 0x60, 0, 0x14)
*(rsi + 0x48) = 0x400
*(rsi + 0x50) = 0
int64_t i

do
    *rcx = 0
    rcx += 0xa8
    __builtin_memset(rax_2 - 0x10, 0, 0x14)
    *(rax_2 + 8) = 0
    *(rax_2 + 0x14) = &data_14399e5d8
    *(rax_2 + 0x1c) = 0
    *(rax_2 + 4) = 0x1000
    *(rax_2 + 0xc) = 0
    *(rax_2 + 0x24) = 0
    __builtin_memset(rax_2 + 0x2c, 0, 0x41)
    __builtin_memset(rax_2 + 0x74, 0, 0x20)
    rax_2 += 0xa8
    i = i_2
    i_2 -= 1
while (i != 1)
__builtin_memset(&arg1[0xbb], 0, 0x20)
int32_t r12 = 0
__builtin_memset(&arg1[0xc0], 0, 0x90)
*(arg1 + 0x69c) = arg3
arg1[0xd2] = 0
arg1[0xd3].d = 0
*(arg1 + 0x69d) = 1
uint32_t temp0 = divu.dp.d((i_2.d):data_1439c7a78, *rdi + (*(rdi + 4) << 1))
uint32_t rax_6 = zx.d(*(rdi + 0xa))
int32_t r13_1 = temp0 * temp0

if (rax_6.b != 0)
    int32_t rdx_1 = r13_1 + 3
    
    do
        uint32_t rax_7 = zx.d(rdi[1].b)
        void* r15_2 = &arg1[0x13 + zx.q(r12) * 0x15]
        *(r15_2 + 0x10) = 0
        
        if (*(r15_2 + 0x14) != rdx_1)
            sub_1405a5410(r15_2 + 8, rdx_1)
        
        for (int32_t i_1 = 0; i_1 u< 3; i_1 += 1)
            int64_t rbp_1 = sx.q(*(r15_2 + 0x10))
            int32_t rax_9 = (rbp_1 + 1).d
            *(r15_2 + 0x10) = rax_9
            
            if (rax_9 s> *(r15_2 + 0x14))
                sub_1405a4f90(r15_2 + 8)
            
            int32_t* rax_12 = (rbp_1 << 4) + *(r15_2 + 8)
            *rax_12 = 0xffffffff
            rax_12[2] = i_1
            rax_12[1] = i_1
        
        *(r15_2 + 4) = rax_7
        *r15_2 = r12
        sub_140a30d10(r15_2 + 0x18, r13_1)
        
        if (r13_1 s> *(r15_2 + 0x6c))
            sub_1405dadb0(r15_2 + 0x60, r13_1)
        
        rdi = arg4
        rdx_1 = r13_1 + 3
        r12 += 1
        rax_6 = zx.d(*(rdi + 0xa))
    while (r12 u< rax_6)
    
    rsi = &arg1[4]

int32_t r10 = 0
uint32_t r8_1 = zx.d(rax_6.b)
arg1[0xbf].w = 0

if (r8_1 != 0)
    uint32_t rdx_5
    uint32_t temp9_1
    
    do
        char r9 = *(rdi + 9)
        rdx_5 = 4
        
        if (r8_1 u<= 4)
            rdx_5 = r8_1
        
        char rcx_7
        
        if (rdx_5 == 1)
            rcx_7 = 0x1c
            
            if (r9 == 0)
                rcx_7 = 0x20
        else if (rdx_5 == 2)
            rcx_7 = 0x44
            
            if (r9 == 0)
                rcx_7 = 0x31
        else if (rdx_5 - 3 u> 1)
            rcx_7 = 0
        else
            rcx_7 = 0x30
            
            if (r9 == 0)
                rcx_7 = 0x22
        
        uint64_t rax_15 = zx.q(r10)
        r10 += 1
        *(rax_15 + arg1 + 0x5f8) = rcx_7
        temp9_1 = r8_1
        r8_1 -= rdx_5
    while (temp9_1 != rdx_5)

int32_t rdx_6 = arg5
arg1[0xd2].d = rdx_6
char temp8 = *(rdi + 0xb) & 1
bool cond:1 = temp8 == 0

if (temp8 == 0)
    cond:1 = rdx_6 == 0x20
    int32_t rax_16 = 0x20
    
    if (rdx_6 u>= 0x20)
        rax_16 = rdx_6
    
    rdx_6 = rax_16

uint64_t rflags
int32_t temp0_1
temp0_1, rflags = _bit_scan_reverse(rdx_6)
int32_t rcx_8

rcx_8 = cond:1 ? 0x20 : 0x1f - temp0_1

int32_t rcx_10 = rcx_8 << 0x1a s>> 0x1f
uint64_t rflags_1
char temp0_2
temp0_2, rflags_1 = _bit_scan_reverse(rdx_6 - 1)
char r8_2

if (rcx_10 == 0)
    r8_2 = 0x20
else
    r8_2 = 0x1f - temp0_2

int32_t rdx_8 = 1 << ((not.d(rcx_10)).b & (0x20 - r8_2))
uint64_t rflags_2
int32_t temp0_3
temp0_3, rflags_2 = _bit_scan_reverse(rdx_8)
arg1[0xd2].d = rdx_8

if (rdx_8 != 0)
    rbx = temp0_3

*(arg1 + 0x694) = rbx + 1
sub_14150b030(rsi, rdx_8)
return arg1
