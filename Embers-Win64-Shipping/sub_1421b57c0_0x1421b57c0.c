// 函数: sub_1421b57c0
// 地址: 0x1421b57c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t __saved_zmm6 = arg4
void* r13 = *(arg1 + 0x28)
arg4 = zx.o(0)
void* rbx = *(r13 + 0x50)
int32_t rdi = *(rbx + 0xa8)

if (rdi s<= 0)
    return zx.o(0)

void* rax = sub_1421b7cc0(arg1, rbx)
void* arg_20 = rax
void* r8 = rax

if (rax == 0)
    r8 = *(arg1 + 0x18) + 0x610
    arg_20 = r8

int32_t i = 0

if (rdi s<= 0)
    return zx.o(0)

char* r14_1 = nullptr
int64_t r15_1 = 0
int128_t __saved_zmm7_1 = arg5
arg5 = 0x3727c5ac

do
    void* rcx = *(rbx + 0xa0)
    int32_t* rcx_1 = rcx + r15_1
    
    if (rcx != neg.q(r15_1))
        int64_t rax_1 = sx.q(*(r13 + 0x28))
        
        if (rax_1.d s< *(arg1 + 0x168))
            int64_t* rdi_3 = (rax_1 << 4) + *(arg1 + 0x160)
            
            if (i s< rdi_3[1].d && r14_1[*rdi_3] == 0 && not(rcx_1[2].d f> *(arg1 + 0x12c)))
                if (not(arg5.d f<= *arg2))
                    *arg2 = 0x3727c5ac
                
                int32_t rdx_1 = rcx_1[1]
                int32_t rbx_1 = *rcx_1
                uint128_t zmm0
                
                if (rdx_1 s> 0xffffffff)
                    int32_t rax_7
                    
                    if (rbx_1 - rdx_1 + 1 s<= 0)
                        rax_7 = 0
                    else
                        int32_t rax_3 = *(r8 + 4) * 0xbb38435
                        zmm0 = _mm_cvtepi32_ps(zx.o(rbx_1 - rdx_1 + 1))
                        *(r8 + 4) = rax_3 + 0x3619636b
                        rax_7 = int.d((((rax_3 + 0x3619636b) u>> 9 | 0x3f800000) - 1f) f* zmm0.d)
                    
                    rbx_1 = rax_7 + rdx_1
                
                zmm0, arg4, arg5 = sub_141fe5610(*(r13 + 0x50) + 0xb0, *(arg1 + 0x12c), 
                    *(arg1 + 0x18), nullptr, arg7, arg6, __saved_zmm7_1, __saved_zmm6)
                float zmm1 = zmm0.d f* _mm_cvtepi32_ps(zx.o(rbx_1)).d
                zmm0.d = -0.5f - (zmm1 + zmm1)
                int32_t rax_10 = neg.d(int.d(zmm0.d) s>> 1)
                zmm0.d = _mm_cvtepi32_ps(zx.o(rax_10)).d f/ *arg2
                *arg3 += rax_10
                r14_1[*rdi_3] = 1
                arg4.d = arg4.d f+ zmm0.d
    
    rbx = *(r13 + 0x50)
    i += 1
    r8 = arg_20
    r14_1 = &r14_1[1]
    r15_1 += 0xc
while (i s< *(rbx + 0xa8))

return arg4
