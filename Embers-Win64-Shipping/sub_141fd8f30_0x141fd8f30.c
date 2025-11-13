// 函数: sub_141fd8f30
// 地址: 0x141fd8f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r10 = *arg1
int32_t i = 0
int32_t result = *(r10 + 0xe8)
int64_t* rcx = *arg1[1]

if (rcx[1].d s> 0)
    int64_t r13_1 = 0
    arg2 = 1
    
    do
        int64_t* rsi_1 = *(*rcx + r13_1)
        void* rcx_1 = *rsi_1
        int64_t zmm0 = *(rcx_1 + 0x18)
        int32_t r12_1 = *(rcx_1 + 0x20)
        int32_t rbx_1 = zmm0.d
        int32_t zmm1
        
        if (*arg1[2] != 0)
            zmm1 = *arg1[3]
        
        int32_t r15_1
        
        if (*arg1[2] == 0 || rbx_1 s<= 6 || (zmm0 u>> 0x20).d s<= 6 || r12_1 s<= 6)
            r15_1 = zmm0:4.d
        else
            int64_t rax_6 = zmm0
            zmm0.d = float.s(zmm0.d)
            int64_t zmm3
            zmm3.d = float.s(r12_1)
            zmm0.d = zmm0.d f* zmm1
            int64_t zmm2
            zmm2.d = float.s((rax_6 u>> 0x20).d)
            rbx_1 = int.d(zmm0.d)
            zmm2.d = zmm2.d f* zmm1
            zmm3.d = zmm3.d f* zmm1
            r15_1 = int.d(zmm2.d)
            r12_1 = int.d(zmm3.d)
        
        *(rsi_1 + 0x14) = rbx_1
        rsi_1[3].d = r15_1
        *(rsi_1 + 0x1c) = r12_1
        rsi_1[4].b &= 0xfd
        int32_t rcx_11
        
        if (sub_14121b060(*arg1 + 0x28, &rsi_1[1], rsi_1 + 0xc, &rsi_1[2], rbx_1, r15_1, r12_1)
                != 0)
            void* rcx_12 = *arg1
            int32_t rdx_5 = rsi_1[1].d + rbx_1
            int32_t rax_19 = *(rcx_12 + 0x100)
            
            if (rax_19 u>= rdx_5)
                rdx_5 = rax_19
            
            *(rcx_12 + 0x100) = rdx_5
            void* rcx_13 = *arg1
            int32_t rdx_7 = *(rsi_1 + 0xc) + r15_1
            int32_t rax_20 = *(rcx_13 + 0x104)
            
            if (rax_20 u>= rdx_7)
                rdx_7 = rax_20
            
            *(rcx_13 + 0x104) = rdx_7
            void* rcx_14 = *arg1
            int32_t rdx_9 = rsi_1[2].d + r12_1
            int32_t rax_21 = *(rcx_14 + 0x108)
            
            if (rax_21 u>= rdx_9)
                rdx_9 = rax_21
            
            *(rcx_14 + 0x108) = rdx_9
            void* rax_22 = *arg1
            rcx_11 = arg2
            *(rax_22 + 0xf8) += rbx_1 * r15_1 * r12_1
        else
            int64_t* r14_1 = *arg1[1]
            int32_t rcx_4 = r14_1[1].d
            int32_t rax_11 = rcx_4 - i
            
            if (rax_11 != 1)
                int64_t r9_2 = *r14_1
                memmove(r9_2 + (sx.q(i) << 3), r9_2 + (sx.q(arg2) << 3), (rax_11 - 1) << 3)
                rcx_4 = r14_1[1].d
            
            r14_1[1].d = rcx_4 - 1
            sub_1405c53d0(r14_1)
            void* r14_2 = *arg1
            int32_t rcx_7 = *(r14_2 + 0xe8)
            *(r14_2 + 0xe8) = rcx_7 + 1
            
            if (rcx_7 + 1 s> *(r14_2 + 0xec))
                sub_1405a4d70(r14_2 + 0xe0)
            
            i -= 1
            *(*(r14_2 + 0xe0) + (sx.q(rcx_7) << 3)) = rsi_1
            void* rax_18 = *arg1
            rcx_11 = arg2 - 1
            *(rax_18 + 0xfc) += rbx_1 * r15_1 * r12_1
            r13_1 -= 8
        
        arg2 = rcx_11 + 1
        i += 1
        r13_1 += 8
        rcx = *arg1[1]
    while (i s< rcx[1].d)
    
    r10 = *arg1

if (*(r10 + 0xe8) s<= result)
    return result

return sub_141fd4030(*(r10 + 0xe0), *(r10 + 0xe8), arg2.b)
