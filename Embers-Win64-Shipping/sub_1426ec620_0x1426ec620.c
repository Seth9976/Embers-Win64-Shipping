// 函数: sub_1426ec620
// 地址: 0x1426ec620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax = *(arg1 + 0x22)

if ((rax & 2) == 0)
    int16_t rdx_1 = *(arg1 + 0x1e)
    
    if (rdx_1 == 0)
        *(arg1 + 0x22) = rax & 0xfe
    else if ((rax & 4) != 0)
        char rcx = rax & 1
        
        if (arg1[4].b != 0)
            if (rcx == 0 || *(arg1 + 0x1c) s<= 0)
                rcx = 0
            else
                rcx = 1
        else if (rcx == 0 || *(arg1 + 0x1c) != rdx_1)
            rcx = 0
        else
            rcx = 1
        
        *(arg1 + 0x22) = (rax & 0xfe) | rcx
    else
        *(arg1 + 0x22) = rax | 1

_isnan(_mm_cvtps_pd(arg1[3].d.q).q)
char rax_1 = *(arg1 + 0x22)
int64_t* r8 = *arg1
char rcx_1 = rax_1 & 1

if ((*(r8 + 0x13e) & 2) != 0)
    if (rcx_1 == 0)
        int64_t rcx_6 = sx.q(arg1[1].d)
        arg1[3].d = 0xbf800000
        int64_t rax_5 = *r8
        *(rax_5 + (rcx_6 << 3) + 4) |= 0x80000000
        void* rax_6 = *arg1
        *(rax_6 + 0x138) -= 1
        return rax_6
    
    if ((rax_1 & 2) != 0)
        *(*(r8[0x25] + sx.q(arg1[1].d) * 0x10) + (sx.q(r8[0x24].d) << 2)) = arg1[3].d
        r8 = *arg1
    
    sub_1426e6a40(r8, arg1[1].d)
    void* rax_4 = *arg1
    *(rax_4 + 0x13e) |= 1
    return rax_4

int64_t* rdx_4

if (rcx_1 != 0 || (rax_1 & 4) == 0)
    rdx_4 = r8
    
    if (*(arg1 + 0x21) == 0 && (rax_1 & 2) == 0)
        int16_t rax_9 = *(arg1 + 0x1c)
        
        if (rax_9 == 0)
            arg1[3].d = 0
        else
            arg1[3].d = arg1[3].d f/ _mm_cvtepi32_ps(zx.o(sx.d(rax_9))).d
else
    int64_t rcx_7 = sx.q(arg1[1].d)
    arg1[3].d = 0xbf800000
    int64_t rax_7 = *r8
    *(rax_7 + (rcx_7 << 3) + 4) |= 0x80000000
    void* rax_8 = *arg1
    *(rax_8 + 0x138) -= 1
    rdx_4 = *arg1

int32_t rax_12 = arg1[3].d
*(*(rdx_4[0x25] + sx.q(arg1[1].d) * 0x10) + (sx.q(rdx_4[0x24].d) << 2)) = rax_12
return rax_12
