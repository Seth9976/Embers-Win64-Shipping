// 函数: sub_1426f1790
// 地址: 0x1426f1790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = arg1[0xf].d
int32_t* r10 = arg1[0xe]
int64_t* rsi = arg1
int64_t* r14 = arg1[0x11]
int64_t* rbp = arg4
int32_t rax = rdi - 1
int64_t r15 = sx.q(*r10)

if (rax s>= 1)
    rax = 1

if (rax != 0)
    memcpy(r10, &r10[sx.q(rdi - rax)], rax << 2)
    r10 = arg1[0xe]
    rdi = arg1[0xf].d

arg1[0xf].d = rdi - 1
uint64_t rbx = 0

if (rdi - 1 s> 1)
    uint64_t r8_2
    
    do
        r8_2 = zx.q(((rbx << 1) + 1).d)
        int32_t r9 = (r8_2 + 1).d
        int64_t r11_1 = **r14
        
        if (r9 s< rdi - 1)
            if ((*(sx.q(r10[sx.q(r9)]) * 0x1c + r11_1 + 0xc)).d f>
                    *(sx.q(r10[sx.q(r8_2.d)]) * 0x1c + r11_1 + 0xc))
                r9 = r8_2.d
            
            r8_2 = zx.q(r9)
        
        int64_t rbx_1 = sx.q(rbx.d)
        int64_t r9_1 = sx.q(r8_2.d)
        int64_t rbp_1 = sx.q(r10[rbx_1])
        int64_t rsi_1 = sx.q(r10[r9_1])
        
        if ((*(rbp_1 * 0x1c + r11_1 + 0xc)).d f<= *(rsi_1 * 0x1c + r11_1 + 0xc))
            break
        
        r10[rbx_1] = rsi_1.d
        r10[r9_1] = rbp_1.d
        rbx = zx.q(r8_2.d)
    while (((r8_2 << 1) + 1).d s< rdi - 1)
    rbp = arg4
    rsi = arg1

void* rdi_3 = &rsi[1]
int32_t* r14_1 = r15 * 0x1c
int64_t rcx_4 = *arg1[0x10]
*(r14_1 + rcx_4 + 0x18) &= 0xfe
int64_t rax_8 = *rdi_3
*(r14_1 + rax_8 + 0x18) |= 2
int32_t* result

if (arg3 == 0 || *(r14_1 + rax_8) != arg2)
    void* i = &data_143b580d0
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    
    do
        int32_t* r11_2 = *rdi_3
        void* r10_1 = *rsi
        int32_t rbx_2 = *(r14_1 + r11_2)
        int32_t r8_3 = *(r10_1 + 0x40)
        uint32_t temp0_1 = divu.dp.d(0:rbx_2, r8_3)
        int32_t r9_3 = *(i + 4) + modu.dp.d(0:rbx_2, r8_3)
        int32_t rdx_4 = *i
        int32_t rdx_5 = rdx_4 + temp0_1
        
        if (rdx_4 + temp0_1 s>= 0 && rdx_5 s< *(r10_1 + 0x3c) && r9_3 s>= 0 && r9_3 s< r8_3)
            int32_t r8_4 = r8_3 * rdx_5
            int32_t r8_5 = r8_4 + r9_3
            
            if (r8_4 + r9_3 s>= 0 && r8_5 s< *(r10_1 + 0x50) && r8_5 != *(r14_1 + r11_2 + 4)
                    && r8_5 != rbx_2)
                int64_t r9_4 = sx.q(r8_5)
                
                if (*(r9_4 + *(*rbp + 0x48)) == 0)
                    int32_t* rdx_9
                    
                    if (*(rdi_3 + 0x18) == *(rdi_3 + 0x44))
                    label_1426f19f1:
                        rdx_9 = nullptr
                    else
                        void* rax_14 = *(rdi_3 + 0x50)
                        void* rdx_6 = rdi_3 + 0x48
                        
                        if (rax_14 != 0)
                            rdx_6 = rax_14
                        
                        int32_t rax_15 = *(rdx_6 + (((sx.q(*(rdi_3 + 0x58)) - 1) & r9_4) << 2))
                        
                        if (rax_15 == 0xffffffff)
                        label_1426f19f1_1:
                            rdx_9 = nullptr
                        else
                            while (true)
                                rdx_9 = (sx.q(rax_15) << 4) + *(rdi_3 + 0x10)
                                
                                if (*rdx_9 == r8_5)
                                    break
                                
                                rax_15 = rdx_9[2]
                                
                                if (rax_15 == 0xffffffff)
                                    goto label_1426f19f1_2
                            
                            if (rax_15 == 0xffffffff)
                            label_1426f19f1_2:
                                rdx_9 = nullptr
                    
                    void* rax_16 = &rdx_9[1]
                    
                    if (rdx_9 == 0)
                        rax_16 = nullptr
                    
                    void* rbx_4
                    int32_t* r9_6
                    uint128_t zmm0
                    
                    if (rax_16 == 0)
                        int64_t rsi_2 = sx.q(*(rdi_3 + 8))
                        char var_5c = var_5c & 0xfc
                        int32_t var_74 = r8_5
                        int32_t var_70_1 = 0xffffffff
                        int32_t rax_18 = (rsi_2 + 1).d
                        int32_t var_6c_1 = 0x7f7fffff
                        int32_t var_68_1 = 0x7f7fffff
                        int64_t var_64_1 = -1
                        *(rdi_3 + 8) = rax_18
                        
                        if (rax_18 s> *(rdi_3 + 0xc))
                            sub_1405c50f0(rdi_3)
                        
                        int64_t rdx_11 = *rdi_3
                        zmm0 = var_74.o
                        uint128_t* r8_6 = rsi_2 * 0x1c
                        int32_t var_78 = rsi_2.d
                        *(r8_6 + rdx_11) = zmm0
                        *(r8_6 + rdx_11 + 0x10) = var_64_1
                        *(r8_6 + rdx_11 + 0x18) = var_5c.d
                        sub_140908920(rdi_3 + 0x10, &var_74, &var_78)
                        int64_t rcx_12 = sx.q(var_78)
                        rbx_4 = rcx_12 * 0x1c + *rdi_3
                        *(rbx_4 + 0x10) = rcx_12.d
                        r9_6 = *rdi_3
                    else
                        r9_6 = r11_2
                        rbx_4 = sx.q(*rax_16) * 0x1c + r11_2
                    
                    int32_t rax_20 = *(r9_6 + r14_1)
                    int32_t rsi_3 = *rbx_4
                    int32_t rbp_2 = *(*rbp + 0x40)
                    uint32_t temp0_3 = divu.dp.d(0:rsi_3, rbp_2)
                    uint32_t temp1_3 = modu.dp.d(0:rsi_3, rbp_2)
                    int32_t temp17_1
                    int32_t temp18_1
                    temp17_1:temp18_1 = sx.q(divu.dp.d(0:rax_20, rbp_2) - temp0_3)
                    int32_t temp19_1
                    int32_t temp20_1
                    temp19_1:temp20_1 = sx.q(modu.dp.d(0:rax_20, rbp_2) - temp1_3)
                    uint128_t zmm1
                    zmm1.d = _mm_cvtepi32_ps(zx.o((temp18_1 ^ temp17_1) - temp17_1
                        + (temp20_1 ^ temp19_1) - temp19_1)).d f+ *(r9_6 + r14_1 + 8)
                    
                    if (arg3 == 0 || rsi_3 == arg2)
                        zmm6 = zx.o(0)
                    else
                        int32_t temp25_1
                        int32_t temp26_1
                        temp25_1:temp26_1 = sx.q(temp1_3 - modu.dp.d(0:arg2, rbp_2))
                        int32_t temp27_1
                        int32_t temp28_1
                        temp27_1:temp28_1 = sx.q(temp0_3 - divu.dp.d(0:arg2, rbp_2))
                        zmm6 = _mm_cvtepi32_ps(zx.o((temp26_1 ^ temp25_1) - temp25_1
                            + (temp28_1 ^ temp27_1) - temp27_1))
                    
                    zmm0.d = zmm6.d f+ zmm1.d
                    
                    if (zmm0.d f>= *(rbx_4 + 0xc))
                        rsi = arg1
                    else
                        *(rbx_4 + 8) = zmm1.d
                        *(rbx_4 + 0xc) = zmm0.d
                        *(rbx_4 + 4) = *(r14_1 + *rdi_3)
                        int32_t rcx_22 = *(r14_1 + *rdi_3 + 0x10)
                        *(rbx_4 + 0x18) &= 0xfd
                        bool cond:2_1 = (*(rbx_4 + 0x18) & 1) != 0
                        *(rbx_4 + 0x14) = rcx_22
                        
                        if (not(cond:2_1))
                            sub_142708d70(&arg1[0xe], rbx_4)
                        
                        rsi = arg1
                        
                        if (not(zmm6.d f>= *arg6))
                            *arg6 = zmm6.d
                            *arg5 = *(rbx_4 + 0x10)
        
        rbp = arg4
        i += 8
    while (i s< &data_143b58110)
    
    result.b = 1
else
    *arg5 = *(r14_1 + rax_8 + 0x10)
    *arg6 = 0
    result.b = 0

return result
