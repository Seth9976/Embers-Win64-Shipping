// 函数: sub_1408c87c0
// 地址: 0x1408c87c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* r10 = *arg1
void* rdi = nullptr
int64_t r11 = sx.q(arg1[1].d)
int16_t* r9 = r10
int16_t* const r12 = &data_142d40450
int16_t* r8 = &r10[r11]

if (r8 != r10)
    while (true)
        if (*r9 != 0x2e)
            r9 = &r9[1]
            
            if (r9 != r8)
                continue
        else if (((r9 - r10) s>> 1).d != 0xffffffff)
            break
        
        if (r8 == r10)
            break
        
        do
            r8 -= 2
            
            if (*r8 == 0x2f)
                int32_t r8_2 = ((r8 - r10) s>> 1).d
                
                if (r8_2 != 0xffffffff)
                    int32_t rbx_1 = (r11 - 1).d
                    
                    if (r11.d == 0)
                        rbx_1 = 0
                    
                    int32_t rcx
                    
                    if (r8_2 + 1 s>= 0)
                        rcx = rbx_1
                        
                        if (r8_2 + 1 s< rbx_1)
                            rcx = r8_2 + 1
                    else
                        rcx = 0
                    
                    int64_t r8_3 = sx.q(rcx)
                    
                    if (sx.q(r8_2 + 1) + 0x7fffffff s< r8_3)
                        rbx_1 = rcx
                    else if (sx.q(r8_2 + 1) + 0x7fffffff s< sx.q(rbx_1))
                        rbx_1 = r8_2 - -0x80000000
                    
                    int64_t var_38 = 0
                    int16_t* rax_3 = &data_142d40450
                    int32_t var_30_1 = 0
                    
                    if (r11.d != 0)
                        rax_3 = r10
                    
                    int64_t r14_1 = 0
                    int32_t rbx_2 = rbx_1 - rcx
                    int32_t rbp_1 = 0
                    void* r15_1 = &rax_3[r8_3]
                    
                    if (r15_1 != 0 && *r15_1 != 0 && rbx_2 s> 0)
                        sub_1405947f0(&var_38, rbx_2 + 1)
                        rbp_1 = var_30_1 + 1 + rbx_2
                        
                        if (rbp_1 s> 0)
                            sub_140594770(&var_38)
                        
                        r14_1 = var_38
                        UnDecorator::getReferenceType(r14_1, r15_1, rbx_2 * 2)
                        *(r14_1 + (sx.q(rbp_1) << 1) - 2) = 0
                    
                    int32_t rdx_5 = arg1[1].d
                    int32_t rax_5
                    rax_5.b = rdx_5 s<= 0
                    int32_t rbx_3 = rdx_5 - 1
                    
                    if (rdx_5 s<= 0)
                        rbx_3 = 0
                    
                    int32_t rax_7 = rax_5 + 1 + rdx_5
                    arg1[1].d = rax_7
                    
                    if (rax_7 s> *(arg1 + 0xc))
                        sub_140594770(arg1)
                    
                    int64_t rcx_5 = sx.q(rbx_3)
                    int32_t r8_6 = rbp_1 - 1
                    *(*arg1 + (rcx_5 << 1)) = 0x2e
                    *(*arg1 + (rcx_5 << 1) + 2) = 0
                    
                    if (rbp_1 == 0)
                        r8_6 = 0
                    
                    sub_140a20ba0(arg1, r14_1, r8_6)
                    
                    if (r14_1 != 0)
                        sub_140a74f90(r14_1)
                
                break
        while (r8 != r10)
        
        break

int64_t* rax_10 = sub_1425b3af0()

if (rax_10[0x23] == 0)
    int64_t rdx_7 = *rax_10
    (*(rdx_7 + 0x390))(rax_10, rdx_7)

if (arg1[1].d != 0)
    r12 = *arg1

void* result = sub_140d2f6f0(sub_1425b3af0(), 0, r12, 0, arg2, 0, 1, 0)

if (result == 0)
    return result

int32_t rax_12 = *(result + 0xc)

if (rax_12 s< data_143e1d9b4)
    int16_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_12)
    uint32_t rdx_9 = zx.d(temp0_1)
    int32_t rax_14 = temp1_1 + rdx_9
    rdi = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3)) + sx.q(zx.d(rax_14.w) - rdx_9) * 0x18

*(rdi + 8) |= 0x40000000
return result
