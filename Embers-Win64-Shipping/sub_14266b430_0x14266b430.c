// 函数: sub_14266b430
// 地址: 0x14266b430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r9 = *(arg1 + 0x90)
int64_t rdx = sx.q(*(arg1 + 0x98))
void* rdi = arg1
int64_t* r8 = r9
void* rcx = &r9[rdx]

if (r9 != rcx)
    do
        if (*r8 == arg2)
            int32_t r8_2 = ((r8 - r9) s>> 3).d
            
            if (r8_2 != 0xffffffff)
                void* rcx_1 = &r9[sx.q(r8_2)]
                memmove(rcx_1, rcx_1 + 8, (rdx.d - r8_2 - 1) << 3)
                *(rdi + 0x98) -= 1
            
            break
        
        r8 = &r8[1]
    while (r8 != rcx)

if (arg2 == 0)
    return 

sub_142665360(rdi + 0x1f8, arg2 + 0x230)
void* lpCriticalSection = rdi + 0x1d0
EnterCriticalSection(lpCriticalSection)
int64_t rcx_4 = sx.q(*(rdi + 0xa8))

if (rcx_4.d != 0)
    int32_t rsi_1 = 0
    int32_t r13_1 = 0
    int64_t r12
    r12.b = **(arg1 + 0xa0) != arg2
    int64_t rdi_1 = 0
    
    do
        int64_t r9_1 = sx.q(rsi_1)
        rdi_1 += 1
        rsi_1 += 1
        
        if (rdi_1 s< rcx_4)
            int64_t* rcx_5 = *(arg1 + 0xa0) + (rdi_1 << 3)
            
            do
                int32_t rax_4
                rax_4.b = *rcx_5 != arg2
                
                if (zx.d(r12.b) != rax_4)
                    break
                
                rsi_1 += 1
                rdi_1 += 1
                rcx_5 = &rcx_5[1]
            while (rdi_1 s< rcx_4)
        
        int32_t r15_2 = rsi_1 - r9_1.d
        
        if (r12.b != 0)
            if (r13_1 != r9_1.d)
                int64_t rcx_6 = *(arg1 + 0xa0)
                memmove(rcx_6 + (sx.q(r13_1) << 3), rcx_6 + (r9_1 << 3), r15_2 << 3)
            
            r13_1 += r15_2
        
        r12.b ^= 1
    while (rdi_1 s< rcx_4)
    
    rdi = arg1
    *(arg1 + 0xa8) = r13_1

*(arg2 + 0x3f8) &= 0xfffffffe

if (j_sub_140d3e110(rdi + 0xf8) != 0)
    int64_t* rax_6 = sub_140d3c6e0(rdi + 0xf8)
    int64_t r8_7 = *rax_6
    (*(r8_7 + 0x270))(rax_6, arg2, r8_7)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)
