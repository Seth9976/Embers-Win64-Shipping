// 函数: sub_141397080
// 地址: 0x141397080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3[1].d)
void* rbx = arg1
int64_t rbp
rbp.b = 0
int32_t rsi = 0
int64_t r12
r12.b = 0
int64_t r15
r15.b = 0

if (rax s> 0)
    int64_t rdi_1 = 0
    
    do
        void* rcx = *(*arg3 + (rdi_1 << 3))
        r15.b |= *(rcx + 0xd72)
        r12.b |= *(rcx + 0xd74)
        void* rax_2
        
        if (sub_142391f10(rcx).b == 0 || *(data_143f5b298 + 0xb08) == 0)
            rax_2.b = 0
        else
            rax_2.b = 1
        
        rbp.b |= rax_2.b
        rdi_1 += 1
    while (rdi_1 s< rax)
    
    rbx = arg1

*arg2 = data_143dbb180
int64_t arg_10
sub_14141f090(&arg_10, arg3)
int32_t rax_4 = arg_10.d
uint32_t r8 = arg_10:4.d

if (*(data_143ec4b90 + 4) == 1 || rbp.b == 0)
    int32_t rdx_2 = *(data_143ec4b78 + 4)
    
    if (rdx_2 s>= 0)
        rsi = 3
        
        if (rdx_2 s< 3)
            rsi = rdx_2
else if (r15.b != 0 || r12.b != 0)
    int32_t rcx_3 = *(rbx + 0x394)
    
    if (rax_4 s<= rcx_3 && r8 s<= *(rbx + 0x398))
        rsi = 2
    else if (rcx_3 s> 0 && r15.b != 0)
        char rcx_4 = data_143ec6ef0
        char rdx_1 = rcx_4
        
        if (rcx_4 == 0)
            rdx_1 = 1
        
        data_143ec6ef0 = rdx_1
else if (rax_4 != *(rbx + 0x394) || r8 != *(rbx + 0x398))
    *(rbx + 0x394) = rax_4
    *(rbx + 0x398) = r8
else
    rsi = 2

if (rsi == 0)
    *(arg2 + 4) = r8
    *arg2 = rax_4
else if (rsi == 1)
    rax_4 = data_143a30330
    *(arg2 + 4) = data_143a30334
    *arg2 = rax_4
else if (rsi == 2)
    int64_t rcx_6 = *(rbx + 0x37c)
    uint32_t rdx_4 = (rcx_6 u>> 0x20).d
    
    if (rcx_6.d s>= rax_4)
        rax_4 = rcx_6.d
    
    if (rdx_4 s>= r8)
        r8 = rdx_4
    
    *(arg2 + 4) = r8
    *arg2 = rax_4

int32_t rax_5 = *(arg3 + 0x3c)

if (*(rbx + 0x370) != rax_5)
    *(rbx + 0x370) = rax_5
    int32_t rax_7 = *(rbx + 0x374) + 1
    *(rbx + 0x374) = rax_7
    
    if (rax_7 == 3)
        rax_7 -= 3
        *(rbx + 0x374) = rax_7
    
    uint64_t rcx_7 = zx.q(rax_7)
    *(rbx + (rcx_7 << 3) + 0x354) = data_143dbb180.d
    *(rbx + (rcx_7 << 3) + 0x358) = data_143dbb180:4.d
    *(zx.q(*(rbx + 0x374)) + rbx + 0x36c) = 0

uint64_t r8_1 = zx.q(*(rbx + 0x374))
int32_t r10 = *arg2
int32_t rcx_8 = r10
int32_t r9 = *(arg2 + 4)
int32_t rax_11 = *(rbx + (r8_1 << 3) + 0x354)
int32_t rdx_5 = *(rbx + (r8_1 << 3) + 0x358)

if (rax_11 s>= r10)
    rcx_8 = rax_11

*(rbx + (r8_1 << 3) + 0x354) = rcx_8
int32_t rax_12 = r9

if (rdx_5 s>= r9)
    rax_12 = rdx_5

*(rbx + (r8_1 << 3) + 0x358) = rax_12
uint64_t r8_2 = zx.q(*(rbx + 0x374))
rdx_5.b = sbb.b(rdx_5.b, rdx_5.b, data_143de5438 != 0)
rdx_5.b &= 4
rcx_8.b = sbb.b(rcx_8.b, rcx_8.b, r12.b != 0)
rcx_8.b &= 2
rdx_5.b |= rcx_8.b
rdx_5.b |= r15.b != 0
*(r8_2 + rbx + 0x36c) |= rdx_5.b
char rdx_6 = data_143de5438

if (rdx_6 != 0 || rbp.b != 0)
    rcx_8.b = 0
else
    rcx_8.b = 1
    
    if (r12.b == 0 && ((*(rbx + 0x36e) | *(rbx + 0x36d) | *(rbx + 0x36c)) & 7) == 0)
        int32_t rax_16 = *(rbx + 0x380)
        uint32_t zmm3[0x4]
        
        if (rax_16 != 0)
            zmm3 = zx.o(0)
            zmm3[0] = float.s(*(rbx + 0x37c))
            zmm3[0] = zmm3[0] f/ float.s(rax_16)
            zmm3[0] = zmm3[0] f- float.s(r10) f/ float.s(r9)
            zmm3 = __andps_xmmxud_memxud(zmm3, data_142d3f770)
        
        if (rax_16 == 0 || not(zmm3[0] f<= 9.99999994e-09f))
            rcx_8.b = 0
            *(rbx + 0x354) = data_143dbb180.d
            *(rbx + 0x358) = data_143dbb180:4.d
            *(rbx + 0x36c) = 0
            *(rbx + 0x35c) = data_143dbb180.d
            *(rbx + 0x360) = data_143dbb180:4.d
            *(rbx + 0x36d) = 0
            *(rbx + 0x364) = data_143dbb180.d
            *(rbx + 0x368) = data_143dbb180:4.d
            *(rbx + 0x36e) = 0
            rdx_6 = data_143de5438

if (((*(rbx + 0x36e) | *(rbx + 0x36d) | *(rbx + 0x36c)) & 4) != 0 == rdx_6 && rcx_8.b != 0)
    int32_t rax_24 = *(rbx + 0x354)
    int32_t rcx_10 = *(rbx + 0x358)
    int32_t rdx_7 = *(rbx + 0x35c)
    
    if (r10 s>= rax_24)
        rax_24 = r10
    
    int32_t r8_3 = *(rbx + 0x360)
    
    if (r9 s>= rcx_10)
        rcx_10 = r9
    
    if (rax_24 s>= rdx_7)
        rdx_7 = rax_24
    
    int32_t rax_25 = *(rbx + 0x364)
    
    if (rcx_10 s>= r8_3)
        r8_3 = rcx_10
    
    int32_t rcx_11 = *(rbx + 0x368)
    
    if (rdx_7 s>= rax_25)
        rax_25 = rdx_7
    
    *arg2 = rax_25
    
    if (r8_3 s>= rcx_11)
        rcx_11 = r8_3
    
    *(arg2 + 4) = rcx_11

return arg2
