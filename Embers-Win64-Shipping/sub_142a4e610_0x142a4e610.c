// 函数: sub_142a4e610
// 地址: 0x142a4e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char** rbx = arg4
char* r12 = arg2
int32_t r13 = 0
int32_t arg_8 = 0
int32_t rbp = 0
int64_t r15 = sx.q(arg3)
char* r14 = arg1
int32_t rax
uint32_t rax_1 = sub_142a862b0(arg1, "root", rax)

if (rax_1 != 0)
    if (sub_142a86320(r14, &data_143613c2c, 3, rax_1) == 0)
        char rax_3 = r14[3]
        
        if (rax_3 == 0)
            r14 = &r14[3]
        else if (rax_3 - 0x2d u<= 0x32 && test_bit(0x4000000080001, sx.q(rax_3 - 0x2d)))
            r14 = &r14[3]
else
    r14 = &r14[4]

uint32_t rcx_2 = zx.d(*r14)

if (rcx_2.b - 0x49 u<= 0x2f && test_bit(0x800100008001, sx.q(rcx_2.b - 0x49)))
    char rax_7 = r14[1]
    
    if (rax_7 == 0x5f || rax_7 == 0x2d)
        if (r15.d s> 0)
            *r12 = sub_142a86220(rcx_2)
            r12[1] = 0x2d
        
        rbp = 2
        r14 = &r14[2]

uint32_t rcx_3 = zx.d(*r14)

if (rcx_3.b != 0)
    uint64_t rbx_1 = zx.q(rbp)
    
    while (rcx_3.b - 0x2d u> 0x32 || not(test_bit(0x4000000080003, sx.q(rcx_3.b - 0x2d))))
        if (rbx_1 s< r15)
            *(&arg_8 + r12 - &arg_8 + rbx_1) = sub_142a86220(rcx_3)
        
        if (rbx_1 s< 3)
            *(&arg_8 + rbx_1) = sub_142a86220(zx.d(*r14))
        
        rcx_3 = zx.d(r14[1])
        r14 = &r14[1]
        rbp += 1
        rbx_1 += 1
        
        if (rcx_3.b == 0)
            break
    
    rbx = arg4
    r13 = 0

if (rbp == 3)
    void** const r9 = &data_1436117a0
    int16_t r9_1
    int64_t r10_1
    
    while (true)
        void* r8 = *r9
        r13 += 1
        r10_1 = -1
        
        if (r8 != 0)
            while (true)
                void* rax_13 = &arg_8
                uint32_t i
                uint32_t rdx
                
                do
                    rdx = zx.d(*rax_13)
                    i = zx.d(*(rax_13 + r8 - &arg_8))
                    
                    if (rdx != i)
                        break
                    
                    rax_13 += 1
                while (i != 0)
                
                if (rdx - i == 0)
                    r9_1 = ((r9 - &data_1436117a0) s>> 3).w
                    break
                
                r8 = r9[1]
                r9 = &r9[1]
                
                if (r8 == 0)
                    goto label_142a4e7c4
            
            break
        
    label_142a4e7c4:
        r9 = &r9[1]
        
        if (r13 s>= 2)
            r9_1 = -1
            break
    
    int64_t rax_14 = sx.q(r9_1)
    
    if (rax_14.d s>= 0)
        char* rcx_6 = (&data_14360fb40)[rax_14]
        int32_t rdx_2 = rcx_6.d
        char rax_15 = *rcx_6
        
        if (rax_15 == 0)
        label_142a4e80b:
            rbp = rcx_6.d - rdx_2
        else
            while (r15.d s> 0)
                rcx_6 = &rcx_6[1]
                *r12 = rax_15
                r12 = &r12[1]
                r15 = zx.q(r15.d - 1)
                rax_15 = *rcx_6
                
                if (rax_15 == 0)
                    goto label_142a4e80b
            
            bool cond:0_1
            
            do
                cond:0_1 = rcx_6[r10_1 + 1] != 0
                r10_1 += 1
            while (cond:0_1)
            rbp = rcx_6.d - rdx_2 + r10_1.d

if (rbx != 0)
    *rbx = r14

return zx.q(rbp)
