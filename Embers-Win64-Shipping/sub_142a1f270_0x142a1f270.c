// 函数: sub_142a1f270
// 地址: 0x142a1f270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax_1 = zx.q(*(arg1 + 0x3738)) + *(arg1 + 0x36f0)
int32_t i = 1
uint64_t rdi = 0
int32_t arg_8 = 1
int32_t r13 = 0
int32_t r10 = 1
int32_t r9_2
int32_t temp0_1

do
    int32_t r15_1 = 0
    int32_t rsi_5 = (((*(arg1 + 0x36bc) << 7) - 0x80) u>> 8) + 1
    
    if (*(arg1 + 0x36b8) s< 0)
        sub_142a2e350(arg1 + 0x36a0)
        r10 = arg_8
    
    int64_t r8_1 = *(arg1 + 0x36b0)
    uint64_t rcx_2 = zx.q(rsi_5) << 0x38
    
    if (r8_1 u>= rcx_2)
        r15_1 = 1
        rsi_5 = *(arg1 + 0x36bc) - rsi_5
        r8_1 -= rcx_2
    
    uint32_t rdx = zx.d(*(zx.q(rsi_5) + &data_143609200))
    r9_2 = *(arg1 + 0x36b8) - rdx
    r13 |= r15_1 << r10.b
    *(arg1 + 0x36b0) = r8_1 << rdx.b
    temp0_1 = r10
    r10 -= 1
    *(arg1 + 0x36b8) = r9_2
    arg_8 = r10
    *(arg1 + 0x36bc) = rsi_5 << rdx.b
while (temp0_1 - 1 s>= 0)

if (r9_2 - 0x41 u> 0x3fffffbe)
    *(arg1 + 0x34e4) = r13

int32_t r13_1 = 1 << (*(arg1 + 0x34e4)).b

if (*(arg1 + 0x36ec) u> 0)
    do
        int32_t rbp_1 = *(arg1 + (rdi << 2) + 0x3738)
        int64_t r15_4 = zx.q(rbp_1) + *(arg1 + (rdi << 3) + 0x36f0)
        
        if (rdi.d != 0)
            goto label_142a1f3c7
        
        int64_t rdx_1 = *(arg1 + 0x36f0)
        int32_t rcx_10 = (r13_1 - 1) * 3 - rdx_1.d + arg2.d
        int32_t temp1_1 = rbp_1
        rbp_1 -= rcx_10
        
        if (temp1_1 != rcx_10)
            rdi = 1
            *(arg1 + 0x3738) = rcx_10
            *(arg1 + 0x36f8) = zx.q(rcx_10) + rdx_1
        label_142a1f3c7:
            
            if (rbp_1 != 0)
                uint64_t rsi_7 = zx.q(rdi.d)
                void* r8_4 = arg1 + 0x36f0 + (rsi_7 << 3)
                
                while (true)
                    int32_t rax_9 =
                        sub_142a1f160(arg1, arg2, *r8_4, rax_1, r15_4, (rdi - 1).d, r13_1)
                    uint64_t rdx_3 = zx.q(rax_9)
                    *(arg1 + (rsi_7 << 2) + 0x3738) = rdx_3.d
                    int32_t temp2_1 = rbp_1
                    rbp_1 -= rax_9
                    
                    if (temp2_1 == rax_9)
                        break
                    
                    rdi = zx.q(rdi.d + 1)
                    r8_4 = arg1 + 0x36f0 + (rdi << 3)
                    rsi_7 = zx.q(rdi.d)
                    *r8_4 = *(arg1 + (zx.q((rdi - 1).d) << 3) + 0x36f0) + rdx_3
                
                i = 1
        
        rdi = zx.q(rdi.d + 1)
    while (rdi.d u< *(arg1 + 0x36ec))

*(arg1 + 0x36ec) = r13_1 + 1

if (r13_1 + 1 u> 1)
    void* rdi_1 = arg1 + 0x3520
    
    do
        uint64_t i_1 = zx.q(i)
        
        if (sub_142a2e460(rdi_1, *(arg1 + (i_1 << 3) + 0x36f0), *(arg1 + (i_1 << 2) + 0x3738), 
                *(arg1 + 0x3840), *(arg1 + 0x3848)) != 0)
            sub_1429da010(arg1 + 0x12c0, 2, "Failed to allocate bool decoder %d", zx.q(i))
        
        rdi_1 += 0x30
        i += 1
    while (i u< *(arg1 + 0x36ec))

if (*(arg1 + 0x376c) u> r13_1 - 1)
    *(arg1 + 0x376c) = r13_1 - 1

int32_t rcx_16 = *(arg1 + 0x1e74)
int32_t result = rcx_16 - 1

if (*(arg1 + 0x376c) s> result)
    result = rcx_16 - 1
    *(arg1 + 0x376c) = result

return result
