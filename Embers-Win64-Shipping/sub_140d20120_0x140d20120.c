// 函数: sub_140d20120
// 地址: 0x140d20120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
void* rsi = arg1
int32_t* r13_3 = rbp * 0x50 + *arg1
int32_t rax = *r13_3
void* const rax_7

if (rax s>= data_143e1d9b4)
    rax_7 = nullptr
else
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax)
    uint32_t rdx_1 = zx.d(temp0_1)
    int32_t rax_2 = temp1_1 + rdx_1
    rax_7 = *(data_143e1d9a0 + (sx.q(rax_2 s>> 0x10) << 3)) + sx.q(zx.d(rax_2.w) - rdx_1) * 0x18

*(rax_7 + 8) &= 0xfeffffff
void* rbx = &r13_3[6]
*(rax_7 + 0xc) = 0
int64_t r9 = 0
int32_t* r8 = *rbx
int32_t* arg_18 = r8
int64_t arg_20 = 0
uint64_t r10_1 = sx.q(*(rbx + 8)) << 2 u>> 2

if (r8 u> &r8[sx.q(*(rbx + 8))])
    r10_1 = 0

uint64_t var_58 = r10_1

if (r10_1 != 0)
    int64_t r14
    int64_t var_38_1 = r14
    
    do
        int32_t rax_10 = *r8
        
        if (rax_10 s>= 0)
            int32_t rax_14 = *(*(data_143e1d9a0 + (sx.q(rax_10 s>> 0x10) << 3))
                + sx.q(zx.d(rax_10.w)) * 0x18 + 0xc)
            
            if (rax_14 s< 0)
                void* r12_3 = sx.q(not.d(rax_14)) * 0x50 + *rsi
                int64_t rdx_5 = sx.q(*(r12_3 + 0x40))
                
                if (rdx_5.d != 0)
                    int32_t r15_1 = 0
                    int32_t rdi_1 = 0
                    int64_t rbx_1 = 0
                    r14.b = **(r12_3 + 0x38) != *r13_3
                    
                    do
                        int64_t r9_1 = sx.q(rdi_1)
                        rbx_1 += 1
                        rdi_1 += 1
                        
                        if (rbx_1 s< rdx_5)
                            int64_t rcx_7 = *(r12_3 + 0x38) + (rbx_1 << 2)
                            
                            do
                                int32_t rax_19
                                rax_19.b = *rcx_7 != *r13_3
                                
                                if (zx.d(r14.b) != rax_19)
                                    break
                                
                                rdi_1 += 1
                                rbx_1 += 1
                                rcx_7 += 4
                            while (rbx_1 s< rdx_5)
                        
                        int32_t rsi_2 = rdi_1 - r9_1.d
                        
                        if (r14.b != 0)
                            if (r15_1 != r9_1.d)
                                int64_t rcx_8 = *(r12_3 + 0x38)
                                memmove(rcx_8 + (sx.q(r15_1) << 2), rcx_8 + (r9_1 << 2), rsi_2 << 2)
                            
                            r15_1 += rsi_2
                        
                        r14.b ^= 1
                    while (rbx_1 s< rdx_5)
                    
                    r8 = arg_18
                    r9 = arg_20
                    r10_1 = var_58
                    rsi = arg1
                    *(r12_3 + 0x40) = r15_1
        
        r8 = &r8[1]
        r9 += 1
        arg_18 = r8
        arg_20 = r9
    while (r9 != r10_1)
    
    rbp = zx.q(arg2)
    rbx = &r13_3[6]

*r13_3 = 0xffffffff
r13_3[4] = 0

if (r13_3[5] s<= 0xffffffff)
    sub_1405dadb0(&r13_3[2], 0)

int32_t rax_21 = r13_3[0xd]
r13_3[0xc] = 0

if (rax_21 s< 0 && rax_21 != 0)
    sub_1405dadb0(&r13_3[0xa], 0)

int32_t rax_22 = *(rbx + 0xc)
*(rbx + 8) = 0

if (rax_22 s< 0 && rax_22 != 0)
    sub_1405dadb0(rbx, 0)

int32_t rax_23 = r13_3[0x11]
r13_3[0x10] = 0

if (rax_23 s< 0 && rax_23 != 0)
    sub_1405dadb0(&r13_3[0xe], 0)

r13_3[0x12].b = 0
int64_t rdi_2 = sx.q(*(rsi + 0x18))
int32_t rax_24 = (rdi_2 + 1).d
*(rsi + 0x18) = rax_24

if (rax_24 s> *(rsi + 0x1c))
    sub_1405a4cf0(rsi + 0x10)

int64_t result = *(rsi + 0x10)
*(result + (rdi_2 << 2)) = rbp.d
*(rsi + 0x20) -= 1
return result
