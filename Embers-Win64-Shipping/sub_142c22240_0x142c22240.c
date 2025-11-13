// 函数: sub_142c22240
// 地址: 0x142c22240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 u> 0x40)
    int64_t rax
    rax.b = 0
    return rax

void* rdx = *(arg1 + 8)
void* rbp = *(arg1 + 0x90)
int32_t r8 = *(rbp + 0x5c)
*arg1 = r8
arg1[0xe] = arg2 - 1
arg1[0xf] = *(*(rdx + 0x90) + 0x60)
void* r9 = *(rdx + 0x90)
char rdx_1

if (r8 != *(r9 + 0x5c))
    rdx_1 = 0
else
    rdx_1 = *(*(r9 + 0x70) + zx.q(*(r9 + 0x5c)) * 0x14 + 0xf)

arg1[7].b = rdx_1
*(arg1 + 0x28) = arg5
*(arg1 + 0x20) = arg4
*(arg1 + 0x30) = arg3
uint64_t r8_1 = zx.q(*(rbp + 0x5c))
int64_t rax_6 = *(rbp + 0x70)
uint64_t rcx_2 = r8_1 * 5
char rdx_2

if ((*(rax_6 + (rcx_2 << 2) + 0xc) & 4) != 0)
    rdx_2 = *(rax_6 + (rcx_2 << 2) + 0xe)

int32_t r14_1

if ((*(rax_6 + (rcx_2 << 2) + 0xc) & 4) == 0 || (rdx_2 & 0x10) == 0)
    r14_1 = 1
else
    r14_1 = zx.d(rdx_2) & 0xf

char rdx_3 = *(rax_6 + (rcx_2 << 2) + 0xe)
uint32_t rdi_1 = zx.d(*(rax_6 + (rcx_2 << 2) + 0xe)) u>> 5
int32_t r15

if ((rdx_3 & 0x10) == 0)
    r15 = zx.d(rdx_3) & 0xf
else
    r15 = 0

int32_t rbx = 0
int32_t r12 = 1
*arg7 = r8_1.d
uint64_t rax_8

if (arg2 u<= 1)
label_142c22465:
    *arg6 = *arg1 - *(rbp + 0x5c) + 1
    
    if (arg8 != 0)
        *arg8 = r14_1
    
    rax_8.b = 1
else
    void* r13_1 = &arg7[1]
    
    while (true)
        if (sub_142c22680(arg1).b != 0)
            *r13_1 = *arg1
            uint64_t rcx_4 = zx.q(*arg1) * 5
            int64_t rax_11 = *(rbp + 0x70)
            char r8_2 = *(rax_11 + (rcx_4 << 2) + 0xe)
            uint32_t rdx_5 = zx.d(*(rax_11 + (rcx_4 << 2) + 0xe)) u>> 5
            
            if ((r8_2 & 0x10) == 0)
                rax_8 = zx.q(r8_2) & 0xf
            else
                rax_8 = 0
            
            if (rdi_1 != 0 && r15 != 0)
                if (rdi_1 == rdx_5 && r15 == rax_8.d)
                    goto label_142c2241a
                
                if (rbx == 0)
                    int32_t rdx_6 = *(rbp + 0x64)
                    int64_t r9_1 = *(rbp + 0x78)
                    
                    if (rdx_6 != 0)
                        while (true)
                            uint64_t r8_3 = zx.q(rdx_6 - 1)
                            uint64_t rcx_5 = r8_3 * 5
                            
                            if (zx.d(*(r9_1 + (rcx_5 << 2) + 0xe)) u>> 5 != rdi_1)
                                goto label_142c223df
                            
                            char rax_14 = *(r9_1 + (rcx_5 << 2) + 0xe)
                            
                            if ((rax_14 & 0x10) == 0 && (zx.d(rax_14) & 0xf) != 0)
                                rdx_6 = r8_3.d
                                
                                if (r8_3.d == 0)
                                    goto label_142c223df
                                
                                continue
                            
                            rax_8 =
                                sub_142c22570(&arg1[4], *(arg1 + 8), r9_1 + zx.q(rdx_6 - 1) * 0x14)
                            
                            if (rax_8.d != 1)
                                goto label_142c223df
                            
                            rbx = (rax_8 + 1).d
                            break
                        
                        goto label_142c2241a
                else if (rbx != 1)
                    goto label_142c2241a
            else if (rdx_5 == 0 || rax_8.d == 0 || rdx_5 == rdi_1)
            label_142c2241a:
                uint64_t rcx_8 = zx.q(*arg1) * 5
                int64_t rax_17 = *(rbp + 0x70)
                char rax_18
                
                if ((*(rax_17 + (rcx_8 << 2) + 0xc) & 4) != 0)
                    rax_18 = *(rax_17 + (rcx_8 << 2) + 0xe)
                
                int32_t rax_20
                
                if ((*(rax_17 + (rcx_8 << 2) + 0xc) & 4) == 0 || (rax_18 & 0x10) == 0)
                    rax_20 = 1
                else
                    rax_20 = zx.d(rax_18) & 0xf
                
                r14_1 += rax_20
                r12 += 1
                r13_1 += 4
                
                if (r12 u>= arg2)
                    goto label_142c22465
                
                continue
        
    label_142c223df:
        rax_8.b = 0
        break

return rax_8
