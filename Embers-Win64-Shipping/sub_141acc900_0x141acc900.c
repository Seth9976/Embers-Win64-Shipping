// 函数: sub_141acc900
// 地址: 0x141acc900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40) = 0

if (*(arg1 + 0x44) s<= 0xffffffff)
    sub_1405dadb0(arg1 + 0x38, 0)

int32_t* i = *arg2
void* r15_2 = &i[sx.q(arg2[1].d) * 0x10]
int32_t rbx = *i

for (; i != r15_2; i = &i[0x10])
    if (*(sx.q(*i) + *(arg1 + 0x18)) == 1)
        int64_t rbp_1 = sx.q(*(arg1 + 0x40))
        int32_t rax_2 = (rbp_1 + 1).d
        *(arg1 + 0x40) = rax_2
        
        if (rax_2 s> *(arg1 + 0x44))
            sub_1405a4cf0(arg1 + 0x38)
        
        *(*(arg1 + 0x38) + (rbp_1 << 2)) = *i

int64_t rbp_2 = sx.q(*(arg1 + 0x40))
int32_t rdi = *(arg1 + 8)
int32_t rax_4 = rbp_2.d
int32_t arg_8
int32_t arg_10

if (rbx != rdi)
    do
        void* rcx_4 = *(arg1 + 0x10)
        arg_8 = rbx
        sub_141ea4020(rcx_4, &arg_10, &arg_8)
        int64_t rax_5 = sx.q(arg_8)
        
        if (*(rax_5 + *(arg1 + 0x18)) == 1)
            int32_t* r9_1 = *(arg1 + 0x38)
            int64_t r10_1 = sx.q(*(arg1 + 0x40))
            int32_t* rdx_2 = r9_1
            void* r8_2 = &r9_1[r10_1]
            
            if (r9_1 != r8_2)
                do
                    if (*rdx_2 == arg_10)
                        int32_t* rcx_7 = r9_1
                        
                        if (r9_1 != r8_2)
                            while (*rcx_7 != rax_5.d)
                                rcx_7 = &rcx_7[1]
                                
                                if (rcx_7 == r8_2)
                                    goto label_141acca1b
                        
                        if (r9_1 == r8_2 || ((rcx_7 - r9_1) s>> 2).d == 0xffffffff)
                        label_141acca1b:
                            int32_t rcx_10 = (r10_1 + 1).d
                            *(arg1 + 0x40) = rcx_10
                            
                            if (rcx_10 s> *(arg1 + 0x44))
                                sub_1405a4cf0(arg1 + 0x38)
                                rax_5 = zx.q(arg_8)
                            
                            *((r10_1 << 2) + *(arg1 + 0x38)) = rax_5.d
                        
                        break
                    
                    rdx_2 = &rdx_2[1]
                while (rdx_2 != r8_2)
        
        rbx += 1
    while (rbx != rdi)
    
    rax_4 = *(arg1 + 0x40)

uint64_t result = zx.q(rax_4 - 1)

for (int64_t i_1 = sx.q(result.d); i_1 s>= rbp_2; i_1 -= 1)
    result = *(arg1 + 0x38)
    int64_t rcx_13 = sx.q(*(result + (i_1 << 2)))
    arg_8 = rcx_13.d
    
    if (rcx_13.d != 0)
        result = *(arg1 + 0x18)
        
        if (*(rcx_13 + result) == 1)
            sub_141ea4020(*(arg1 + 0x10), &arg_10, &arg_8)
            sub_140ae0920(sx.q(arg_8) * 0x30 + *arg1, sx.q(arg_10) * 0x30 + *arg1)
            result = *(arg1 + 0x18)
            *(sx.q(arg_8) + result) = 0

int32_t* rbx_1 = *arg2
void* rbp_5 = &rbx_1[sx.q(arg2[1].d) * 0x10]

if (rbx_1 != rbp_5)
    void* rdi_1 = &rbx_1[0xc]
    
    do
        void* rcx_19 = *(arg1 + 0x10)
        arg_8 = *rbx_1
        sub_141ea4020(rcx_19, &arg_10, &arg_8)
        int64_t rdx_9 = sx.q(arg_10)
        
        if (rdx_9.d != 0xffffffff && *(rdx_9 + *(arg1 + 0x18)) == 0)
            sub_141a98300(arg1, rdx_9.d)
        
        rbx_1 = &rbx_1[0x10]
        int64_t rcx_21 = sx.q(arg_8)
        int128_t* rax_12 = rcx_21 * 0x30 + *arg1
        *rax_12 = *(rdi_1 - 0x20)
        rax_12[1] = *(rdi_1 - 0x10)
        int128_t zmm0 = *rdi_1
        rdi_1 += 0x40
        rax_12[2] = zmm0
        result = *(arg1 + 0x18)
        *(rcx_21 + result) = 1
    while (rbx_1 != rbp_5)

return result
