// 函数: sub_1408d0410
// 地址: 0x1408d0410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_8 = arg1
int64_t r12 = arg1[0xb]
uint64_t rsi = zx.q(arg2)
int64_t* r11 = arg1
uint64_t rbp_1 = rsi * 0xa0
int32_t rax = *(r12 + rbp_1 + 8)

if (rax != 0xffffffff)
    if (rax s< 0 || rax s>= arg1[0x1a].d)
        arg1.b = 0
    else
        arg1.b = 1
    
    if (arg1.b != 0)
        return rax

if (*(r12 + rbp_1 + 0x28) == 0)
    return 0xffffffff

void* rax_1 = *(r12 + rbp_1 + 0x40)
void* rcx = r12 + rbp_1
int32_t r10_1 = *(rcx + 0x48)
void* rdx = rcx + 0x30

if (rax_1 != 0)
    rdx = rax_1

int32_t i = 0
int32_t rdi_1 = 0
uint64_t rcx_2 = zx.q((r10_1 + 0x1f) u>> 5)
int64_t rax_2 = 0

if (rcx_2 != 0)
    while (*(rdx + (rax_2 << 2)) == 0xffffffff)
        rdi_1 += 1
        rax_2 += 1
        
        if (rax_2 s>= rcx_2)
            break

float zmm0

if (rdi_1 s< rcx_2.d)
    int64_t r9_1 = sx.q(rdi_1)
    int32_t rcx_3 = *(rdx + (r9_1 << 2))
    int32_t rax_4 = not.d(rcx_3)
    uint64_t rflags_1
    int32_t temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax_4)
    int32_t rdi_3 = (rdi_1 << 5) + temp0_1
    
    if (rdi_3 s< r10_1)
        *(rdx + (r9_1 << 2)) = rcx_3 | (neg.d(rax_4) & rax_4)
        
        if (rdi_3 != 0xffffffff)
            void* r15_1 = &r11[0x19]
            int64_t r14_1 = sx.q(*(r15_1 + 8))
            int32_t rax_6 = (r14_1 + 1).d
            *(r15_1 + 8) = rax_6
            
            if (rax_6 s> *(r15_1 + 0xc))
                sub_1405c4f50(r15_1)
                r11 = arg_8
            
            int16_t* r14_4 = r14_1 * 0x30 + *r15_1
            *(r14_4 + 0x20) = 0
            *(r14_4 + 0x28) = 0
            int32_t r15_3 = r11[0x1a].d - 1
            *(r12 + rbp_1 + 8) = r15_3
            *r14_4 = 0
            *(r14_4 + 3) = rsi.b
            char rax_7
            
            if (*(r12 + rbp_1 + 3) == 0)
                rax_7 = 0xff
            else
                rax_7 = *(r12 + rbp_1 + 0x10)
            
            r14_4[2].b = rax_7
            *(r14_4 + 0x14) = rdi_3
            r14_4[1].b = *(r12 + rbp_1 + 2)
            *(r14_4 + 8) = 0
            *(r14_4 + 0x18) = 0xffffffff
            void* rax_10
            int64_t rdx_2
            rax_10, rdx_2 = (*(*r11 + 0x150))(r11)
            rdx_2.b = 1
            int64_t rbx_1 = sx.q(rdi_3)
            zmm0 = *(*(r12 + rbp_1 + 0x90) + (rbx_1 << 2)) f+ *(rax_10 + 0x520)
            *(r14_4 + 0x10) = zmm0
            *(r14_4 + 0xc) = zmm0 f- *(arg_8[0xb] + rbp_1 + 4)
            int64_t* rbx_2 = *(*(r12 + rbp_1 + 0x20) + (rbx_1 << 3))
            int64_t r8_4 = *rbx_2
            (*(r8_4 + 0x340))(rbx_2, rdx_2, r8_4)
            sub_141f481b0(rbx_2, zx.o(0), 0)
            sub_141f44450(rbx_2, 0)
            return r15_3

int32_t i_1 = -1
int32_t i_2 = -1
zmm0 = 3.40282347e+38f
int32_t r10_2 = r11[0x1a].d
int128_t zmm1 = 0x7f7fffff
float zmm3 = r11[0x26].d f- *(r11[0xb] + rbp_1 + 0xc)
int128_t zmm2

if (r10_2 s>= 4)
    void* rax_14 = r11[0x19]
    int32_t i_3 = 2
    void* rdx_3 = rax_14 + 8
    void* rax_15 = rax_14 + 0x38
    
    do
        if (*(rdx_3 - 5) == rsi.b)
            zmm2 = *rdx_3
            
            if (not(zmm2.d f> zmm3) && not(zmm2.d f>= zmm0))
                zmm0 = zmm2.d
                i_1 = i
            else if (not(zmm2.d f>= zmm1.d))
                zmm1 = zmm2
                i_2 = i
        
        if (*(rax_15 - 5) == rsi.b)
            zmm2 = *rax_15
            
            if (not(zmm2.d f> zmm3) && not(zmm2.d f>= zmm0))
                zmm0 = zmm2.d
                i_1 = i_3 - 1
            else if (not(zmm2.d f>= zmm1.d))
                zmm1 = zmm2
                i_2 = i_3 - 1
        
        if (*(rax_15 + 0x2b) == rsi.b)
            zmm2 = *(rax_15 + 0x30)
            
            if (not(zmm2.d f> zmm3) && not(zmm2.d f>= zmm0))
                zmm0 = zmm2.d
                i_1 = i_3
            else if (not(zmm2.d f>= zmm1.d))
                zmm1 = zmm2
                i_2 = i_3
        
        if (*(rax_15 + 0x5b) == rsi.b)
            zmm2 = *(rax_15 + 0x60)
            
            if (not(zmm2.d f> zmm3) && not(zmm2.d f>= zmm0))
                zmm0 = zmm2.d
                i_1 = i_3 + 1
            else if (not(zmm2.d f>= zmm1.d))
                zmm1 = zmm2
                i_2 = i_3 + 1
        
        rdx_3 += 0xc0
        rax_15 += 0xc0
        i += 4
        i_3 += 4
    while (i s< r10_2 - 3)

if (i s< r10_2)
    int128_t* rdx_6 = r11[0x19] + 8 + sx.q(i) * 0x30
    
    do
        if (*(rdx_6 - 5) == rsi.b)
            zmm2 = *rdx_6
            
            if (not(zmm2.d f> zmm3) && not(zmm2.d f>= zmm0))
                zmm0 = zmm2.d
                i_1 = i
            else if (not(zmm2.d f>= zmm1.d))
                zmm1 = zmm2
                i_2 = i
        
        rdx_6 = &rdx_6[3]
        i += 1
    while (i s< r10_2)

if (i_1 != 0xffffffff)
    return i_1

if (i_2 != 0xffffffff)
    return i_2

return -1
