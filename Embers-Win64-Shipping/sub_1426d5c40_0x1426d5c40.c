// 函数: sub_1426d5c40
// 地址: 0x1426d5c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax
char rdx
rax, rdx = sub_140d3e110(arg1 + 0x34)

if (rax == 0)
    arg1[5].d = 4
    return rax

int64_t rax_1 = sx.q(*(arg1 + 0x2c))

if (rax_1.d s< 0 || rax_1.d s>= arg1[0x23].d)
    arg1[0x27].d = 0
    return sub_1426d7a60(arg1, rdx) __tailcall

int64_t* r14_2 = rax_1 * 0x30 + arg1[0x22]
int64_t performanceCount
QueryPerformanceCounter(&performanceCount)
int128_t zmm7
zmm7.q = float.d(performanceCount)
int64_t rdx_1 = sx.q(arg1[0x24].d)
int32_t r8_1 = r14_2[2].d - 1
uint64_t rbp
rbp.b = 1
zmm7.q = zmm7.q f* data_143d796f8
*(arg1 + 0x14c) = arg2.d

if (rdx_1.d s< 0)
    arg1[4].d = 0
    
    if (*(arg1 + 0x24) s<= 0xffffffff)
        sub_1405c5510(&arg1[3], 0)
    
    int32_t rax_2 = *(arg1 + 0xc)
    arg1[1].d = 0
    
    if (rax_2 s< 0 && rax_2 != 0)
        sub_1405c5570(arg1, 0)
    
    int64_t rax_3 = r14_2[4]
    *(arg1 + 0x13e) &= 0xfd
    arg1[2] = rax_3
    int64_t* rdi_1
    
    if (rax_3 == 0)
        rdi_1 = nullptr
    else
        void* rax_4 = sub_14273b6f0()
        
        if (rax_4 == 0)
            rdi_1 = nullptr
        else
            rdi_1 = arg1[2]
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> rdi_1[7].d || *(rdi_1[6] + (rax_5 << 3)) != rax_4 + 0x30)
                rdi_1 = nullptr
    
    void* rax_8 = rdi_1[0x23]
    
    if (rax_8 == 0)
        (*(*rdi_1 + 0x390))(rdi_1)
        rax_8 = rdi_1[0x23]
    
    *(arg1 + 0x13c) = *(rax_8 + 0x28)
    int64_t* rcx_6 = *r14_2
    (*(*rcx_6 + 0x278))(rcx_6, arg1)
    sub_1426d76e0(arg1)
else if (rdx_1.d s< r14_2[2].d)
    int64_t* rdi_2 = *(r14_2[1] + (rdx_1 << 3))
    char rax_12
    
    if (rdx_1.d s>= r8_1 && arg1[0x2a].d == 0)
        rax_12 = *(rdi_2 + 0x34)
    
    char rcx_8
    
    if (rdx_1.d s< r8_1 || arg1[0x2a].d != 0 || rax_12 == 1
            || (rax_12 != 0 && *(rdi_2 + 0xf9) != 4))
        rcx_8 = 0
    else
        rcx_8 = 2
    
    char rax_13 = (*(arg1 + 0x13e) & 0xfd) | rcx_8
    *(arg1 + 0x13e) = rax_13
    
    if ((rax_13 & 2) != 0 && *(arg1 + 0x124) == 0)
        int32_t rax_15 = r14_2[2].d - 1
        
        if (rax_15 s> 0)
            int64_t* rcx_9 = r14_2[1]
            int64_t i = 0
            
            do
                if (*(*rcx_9 + 0x34) != 0)
                    sub_1426c4800(*arg1, arg1[1].d, performanceCount.b)
                    break
                
                i += 1
                rcx_9 = &rcx_9[1]
            while (i s< sx.q(rax_15))
    
    rbp = zx.q(*(arg1 + 0x124))
    (*(*rdi_2 + 0x278))(rdi_2, arg1)
    int32_t rax_18 = *(arg1 + 0x124)
    
    if (rax_18 s>= arg1[1].d || (*(arg1 + 0x13e) & 1) != 0 || rbp.d == rax_18)
        rbp.b = 1
        
        if ((*(arg1 + 0x13e) & 2) != 0)
            sub_1426e82e0(&arg1[0x25], 0)
        else
            zmm7 = sub_1426e3880(
                *(*(arg1[0x22] + sx.q(*(arg1 + 0x2c)) * 0x30 + 8) + (sx.q(arg1[0x24].d) << 3)), 
                arg1)
    else
        rbp.b = 0

BOOL rax_21
char rdx_7
rax_21, rdx_7 = QueryPerformanceCounter(&performanceCount)
double zmm0[0x2] = zx.o(0)
zmm0[0] = float.d(performanceCount)
zmm0[0] = zmm0[0] f* data_143d796f8
zmm0[0] = zmm0[0] f- zmm7.q
zmm0 = _mm_cvtpd_ps(zmm0)
zmm0[0].d = zmm0[0].d f+ arg1[0x29].d
arg1[0x29].d = zmm0[0].d

if (rbp.b != 0)
    arg1[0x24].d += 1
    *(arg1 + 0x124) = 0

if (arg1[5].d == 0)
    rax_21 = arg1[0x24].d
    
    if (r14_2[2].d == rax_21 || arg1[0x27].d s<= 0)
        if (arg1[0x27].d s<= 0)
            rax_21 = *(arg1 + 0x2c) + 1
        
        if (arg1[0x27].d s> 0 || rax_21 s>= arg1[0x23].d)
            return sub_1426d7a60(arg1, rdx_7) __tailcall
        
        *(arg1 + 0x2c) = rax_21
        arg1[0x24].d = 0xffffffff

return rax_21
