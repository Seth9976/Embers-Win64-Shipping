// 函数: sub_14244dd60
// 地址: 0x14244dd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = *(arg1 + 0x20)
int64_t rdi = sx.q(arg3)
void* r13 = arg1
int64_t rax

if (rbx == 0)
    rbx = nullptr
else
    void* rax_1 = sub_1425be5e0()
    void* r10_1 = *(rbx + 0x10)
    rax = sx.q(*(rax_1 + 0x38))
    
    if (rax.d s> *(r10_1 + 0x38))
        rbx = nullptr
    else if (*(*(r10_1 + 0x30) + (rax << 3)) != rax_1 + 0x30)
        rbx = nullptr

int32_t r8 = *(rbx + 0x538)
int32_t i = 0
int32_t r11_2 = *(rbx + 0x53c)
int32_t var_a8 = r8
int32_t var_a4 = r11_2

if (*(r13 + 0x40) s<= 0)
    return 

int64_t rbp
int64_t arg_18 = rbp
int64_t* rdx = nullptr
int64_t rsi_1 = 0
int64_t* r12_1 = arg5
uint128_t zmm8
uint128_t var_68_1 = zmm8
int64_t* var_a0_1 = nullptr

do
    int64_t r9 = *(r13 + 0x38)
    
    if (i != 0xffffffff && *(rsi_1 + r9 + 0x70) != 0)
        void* rcx_1 = *(rdx + *(r13 + 0x48))
        
        if ((*(rcx_1 + 0xbb) & 2) == 0)
            rbp.b = 0
            int32_t r10_2 = -1
            void* var_80_1 = rcx_1
            int32_t var_78_1 = 0xffffffff
            
            if (data_143de5426 != 0)
                goto label_14244e02f
            
            int64_t rbx_1 = -1
            int32_t r8_1 = -1
            uint64_t rax_4 = zx.q(*(rsi_1 + r9 + 0x98))
            uint128_t zmm3 = zx.o(*(rsi_1 + r9 + 0x28) - r11_2)
            int32_t rcx_4 = *(rsi_1 + r9 + 0x10)
            zmm8 = _mm_cvtepi32_ps(zx.o(*(rsi_1 + r9 + 0x24) - r8))
            
            if (rax_4.d s<= rcx_4)
                rcx_4 = rax_4.d
            
            int64_t r13_1 = sx.q(rcx_4)
            zmm3 = _mm_cvtepi32_ps(zmm3)
            float zmm4 = zmm8.d f+ *(rsi_1 + r9 + 0x3c)
            float zmm5 = zmm3.d f+ *(rsi_1 + r9 + 0x40)
            zmm8.d = zmm8.d f+ *(rsi_1 + r9 + 0x30)
            zmm3.d = zmm3.d f+ *(rsi_1 + r9 + 0x34)
            
            if (-1 s< r13_1)
                int64_t r11_3 = -0x14
                
                while (rbp.b == 0 || r8_1 s<= r10_2)
                    int32_t rcx_5 = *(rsi_1 + r9 + 0x6c)
                    
                    if (r8_1 s< 0 || r8_1 s>= *(rsi_1 + r9 + 0x98))
                        rax_4.b = 0
                    else
                        rax_4.b = 1
                    
                    if (rax_4.b != 0)
                        rcx_5 += *(*(rsi_1 + r9 + 0x90) + r11_3)
                    
                    int64_t rdx_1 = 0
                    
                    if (rdi s> 0)
                        int64_t* rcx_6 = arg2
                        uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(rcx_5))
                        zmm2.d = zmm2.d f* zmm2.d
                        
                        do
                            uint128_t zmm1 = zx.o(*rcx_6)
                            uint128_t zmm0 = zx.o(0)
                            
                            if (not(zmm1.d f>= zmm8.d))
                                zmm0.d = zmm1.d f- zmm8.d
                                zmm0.d = zmm0.d f* zmm0.d
                            else if (not(zmm1.d f<= zmm4))
                                zmm0.d = zmm1.d f- zmm4
                                zmm0.d = zmm0.d f* zmm0.d
                            
                            zmm1 = zmm1.q:4.d
                            
                            if (not(zmm1.d f>= zmm3.d))
                                zmm1.d = zmm1.d f- zmm3.d
                                zmm1.d = zmm1.d f* zmm1.d
                                zmm0.d = zmm0.d f+ zmm1.d
                            else if (not(zmm1.d f<= zmm5))
                                zmm1.d = zmm1.d f- zmm5
                                zmm1.d = zmm1.d f* zmm1.d
                                zmm0.d = zmm0.d f+ zmm1.d
                            
                            zmm1 = rcx_6[1].d
                            
                            if (not(zmm1.d f>= -2097152f))
                                zmm1.d = zmm1.d f- -2097152f
                                zmm1.d = zmm1.d f* zmm1.d
                                zmm0.d = zmm0.d f+ zmm1.d
                            else if (not(zmm1.d f<= 2097152f))
                                zmm1.d = zmm1.d f- 2097152f
                                zmm1.d = zmm1.d f* zmm1.d
                                zmm0.d = zmm0.d f+ zmm1.d
                            
                            if (zmm0.d f<= zmm2.d)
                                r10_2 = r8_1
                                rbp.b = 1
                                break
                            
                            rdx_1 += 1
                            rcx_6 += 0xc
                        while (rdx_1 s< rdi)
                    
                    r8_1 += 1
                    rbx_1 += 1
                    r11_3 += 0x14
                    
                    if (rbx_1 s>= r13_1)
                        break
                
                r12_1 = arg5
                var_78_1 = r10_2
            
            int64_t rbx_2
            
            if (-1 s< r13_1 && rbp.b != 0)
                r13 = arg1
            label_14244e02f:
                rbx_2 = sx.q(arg4[1].d)
                int32_t rax_6 = (rbx_2 + 1).d
                arg4[1].d = rax_6
                
                if (rax_6 s> *(arg4 + 0xc))
                    sub_1405a4df0(arg4)
                
                rax = *arg4
            else
                rbx_2 = sx.q(r12_1[1].d)
                int32_t rax_5 = (rbx_2 + 1).d
                r12_1[1].d = rax_5
                
                if (rax_5 s> *(r12_1 + 0xc))
                    sub_1405a4df0(r12_1)
                
                rax = *r12_1
                r13 = arg1
            
            int64_t rcx_9 = rbx_2 * 3
            r11_2 = var_a4
            r8 = var_a8
            rdx = var_a0_1
            *(rax + (rcx_9 << 3)) = i.o
            *(rax + (rcx_9 << 3) + 0x10) = var_78_1.q
    
    rdx = &rdx[1]
    i += 1
    rsi_1 += 0xb0
    var_a0_1 = rdx
while (i s< *(r13 + 0x40))
