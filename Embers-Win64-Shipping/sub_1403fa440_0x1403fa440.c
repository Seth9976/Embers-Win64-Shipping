// 函数: sub_1403fa440
// 地址: 0x1403fa440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg5)
void* r15 = arg2
int32_t zmm5 = *arg6
int64_t rsi = sx.q(arg3)
int64_t r13 = sx.q(arg4)
int64_t r14 = arg1
uint64_t result = zx.q(divs.dp.d(sx.q(arg3), rbp.d))
int64_t r10 = sx.q(result.d)

if (rbp.d != 1 && arg3 s> 0)
    result = 0
    __builtin_memset(r15, 0, rsi << 2)

int64_t rdi_2 = 0
int64_t rbx = 0
float zmm0
int128_t zmm1

if (r10 s>= 4)
    float* rcx_1 = r15 + (rbp << 3)
    result = r14 + (r13 << 3)
    int64_t i_5 = ((r10 - 4) u>> 2) + 1
    rbx = i_5 << 2
    int64_t i
    
    do
        zmm0 = *(result + (neg.q(r13) << 3)) * 32768f
        zmm0 - zmm0
        
        if (is_unordered.d(zmm0, zmm0) || not(zmm0 == zmm0))
            zmm0 = (zx.o(0)).d
        
        zmm1 = *(result + (neg.q(r13) << 2))
        rcx_1[neg.q(rbp) * 2] = zmm0
        zmm1.d = zmm1.d f* 32768f
        zmm1.d f- zmm1.d
        
        if (is_unordered.d(zmm1.d, zmm1.d) || not(zmm1.d f== zmm1.d))
            zmm1 = zx.o(0)
        
        zmm0 = *result
        rcx_1[neg.q(rbp)] = zmm1.d
        zmm0 = zmm0 * 32768f
        zmm0 - zmm0
        
        if (is_unordered.d(zmm0, zmm0) || not(zmm0 == zmm0))
            zmm0 = (zx.o(0)).d
        
        *rcx_1 = zmm0
        zmm0 = *((r13 << 2) + result) * 32768f
        zmm0 - zmm0
        
        if (is_unordered.d(zmm0, zmm0) || not(zmm0 == zmm0))
            zmm0 = (zx.o(0)).d
        
        rcx_1[rbp] = zmm0
        result += r13 << 4
        rcx_1 = &rcx_1[rbp * 4]
        i = i_5
        i_5 -= 1
    while (i != 1)
    r14 = arg1
    r15 = arg2
    rbp = zx.q(arg5)

if (rbx s< r10)
    int64_t rax_3 = sx.q(rbp.d)
    float* rdx_4 = r15 + ((rax_3 * rbx) << 2)
    result = r14 + ((r13 * rbx) << 2)
    int64_t i_4 = r10 - rbx
    int64_t i_1
    
    do
        zmm0 = *result * 32768f
        zmm0 - zmm0
        
        if (is_unordered.d(zmm0, zmm0) || not(zmm0 == zmm0))
            zmm0 = (zx.o(0)).d
        
        *rdx_4 = zmm0
        result += r13 << 2
        rdx_4 = &rdx_4[rax_3]
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

int128_t zmm3

if (arg8 != 0)
    int64_t rbx_1 = 0
    
    if (r10 s>= 4)
        int64_t rcx_5 = sx.q(rbp.d)
        result = r15 + (rcx_5 << 3)
        int64_t r9_3 = rcx_5 << 2
        int64_t r8_4 = neg.q(rcx_5)
        int64_t rcx_6 = neg.q(rcx_5)
        int64_t i_6 = ((r10 - 4) u>> 2) + 1
        rbx_1 = i_6 << 2
        int64_t i_2
        
        do
            zmm1 = *(result + (rcx_6 << 3))
            
            if (zmm1.d f> 65536f)
                zmm1 = 0x47800000
            else if (not(-65536f f<= zmm1.d))
                zmm1 = 0xc7800000
            else if (not(zmm1.d f<= 65536f))
                zmm1 = 0x47800000
            
            *(result + (rcx_6 << 3)) = zmm1.d
            zmm3 = *(result + (r8_4 << 2))
            
            if (zmm3.d f> 65536f)
                zmm3 = 0x47800000
            else if (not(-65536f f<= zmm3.d))
                zmm3 = 0xc7800000
            else if (not(zmm3.d f<= 65536f))
                zmm3 = 0x47800000
            
            *(result + (r8_4 << 2)) = zmm3.d
            zmm1 = *result
            
            if (zmm1.d f> 65536f)
                zmm1 = 0x47800000
            else if (not(-65536f f<= zmm1.d))
                zmm1 = 0xc7800000
            else if (not(zmm1.d f<= 65536f))
                zmm1 = 0x47800000
            
            *result = zmm1.d
            zmm3 = *(r9_3 + result)
            
            if (zmm3.d f> 65536f)
                zmm3 = 0x47800000
            else if (not(-65536f f<= zmm3.d))
                zmm3 = 0xc7800000
            else if (not(zmm3.d f<= 65536f))
                zmm3 = 0x47800000
            
            *(r9_3 + result) = zmm3.d
            result += rcx_5 << 4
            i_2 = i_6
            i_6 -= 1
        while (i_2 != 1)
    
    if (rbx_1 s< r10)
        int64_t rax_5 = sx.q(rbp.d)
        result = rax_5 * rbx_1
        int64_t i_7 = r10 - rbx_1
        void* rcx_7 = r15 + (result << 2)
        int64_t i_3
        
        do
            zmm1 = *rcx_7
            
            if (zmm1.d f> 65536f)
                zmm1 = 0x47800000
            else if (not(-65536f f<= zmm1.d))
                zmm1 = 0xc7800000
            else if (not(zmm1.d f<= 65536f))
                zmm1 = 0x47800000
            
            *rcx_7 = zmm1.d
            rcx_7 += rax_5 << 2
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)

zmm3 = *arg7

if (rsi s>= 4)
    void* rcx_8 = r15 + 8
    
    do
        int128_t zmm2 = *(rcx_8 - 8)
        zmm1 = *(rcx_8 - 4)
        result = rsi - 3
        rdi_2 += 4
        rcx_8 += 0x10
        zmm0 = zmm2.d f+ zmm3.d
        zmm3 = *(rcx_8 - 0xc)
        zmm2.d = zmm2.d f* zmm5
        *(rcx_8 - 0x18) = zmm0
        zmm0 = zmm1.d f+ (zmm2 ^ 0x80000000).d
        zmm2 = *(rcx_8 - 0x10)
        zmm1.d = zmm1.d f* zmm5
        *(rcx_8 - 0x14) = zmm0
        zmm0 = zmm2.d f+ (zmm1 ^ 0x80000000).d
        zmm2.d = zmm2.d f* zmm5
        *(rcx_8 - 0x10) = zmm0
        zmm0 = zmm3.d f+ (zmm2 ^ 0x80000000).d
        zmm3.d = zmm3.d f* zmm5
        zmm3 ^= 0x80000000
        *(rcx_8 - 0xc) = zmm0
    while (rdi_2 s< result)

while (rdi_2 s< rsi)
    zmm1 = *(r15 + (rdi_2 << 2))
    rdi_2 += 1
    *(r15 + (rdi_2 << 2) - 4) = zmm1.d f+ zmm3.d
    zmm3.d = zmm1.d f* zmm5
    zmm3 ^= 0x80000000

*arg7 = zmm3.d
return result
