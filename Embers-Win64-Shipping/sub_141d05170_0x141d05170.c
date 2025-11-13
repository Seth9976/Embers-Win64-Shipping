// 函数: sub_141d05170
// 地址: 0x141d05170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(GetCurrentThreadId())
EnterCriticalSection(arg1 + 0x78)
void*** result

if (*(arg1 + 0x30) != *(arg1 + 0x5c))
    void* rcx_1 = *(arg1 + 0x68)
    void* r8_1 = arg1 + 0x60
    
    if (rcx_1 != 0)
        r8_1 = rcx_1
    
    int32_t rax_1 = *(r8_1 + (((sx.q(*(arg1 + 0x70)) - 1) & r12) << 2))
    
    if (rax_1 != 0xffffffff)
        int64_t r8_2 = *(arg1 + 0x28)
        int64_t rdx_3
        
        while (true)
            rdx_3 = sx.q(rax_1)
            int64_t rcx_2 = rdx_3 * 3
            
            if (*(r8_2 + (rcx_2 << 3)) == r12.d)
                break
            
            rax_1 = *(r8_2 + (rcx_2 << 3) + 0x10)
            
            if (rax_1 == 0xffffffff)
                goto label_141d0521e
        
        if (rax_1 != 0xffffffff)
            void* rbp_1 = r8_2 + rdx_3 * 0x18
            
            if (rbp_1 != 0 && rbp_1 != -8)
                result = *(rbp_1 + 8)
                
                if (result != 0)
                label_141d053f8:
                    
                    if (arg1 != -0x78)
                        LeaveCriticalSection(arg1 + 0x78)
                    
                    return result

label_141d0521e:
void*** rax_5
int16_t* const rdi_1

if (arg2 == 0)
    if (*(arg1 + 0x10) == 0)
        rdi_1 = &data_142d40450
    else
        rdi_1 = *(arg1 + 8)
    
    sub_140a464c0()
    char const (* r9_2)[0x4] = data_14399ea08
    rax_5 = (*(r9_2 + 0x18))(&data_14399ea08, rdi_1, 0, r9_2)
    goto label_141d052c1

rdi_1 = &data_142d40450
int16_t* const rdx_4

if (*(arg1 + 0x10) == 0)
    rdx_4 = &data_142d40450
else
    rdx_4 = *(arg1 + 8)

int64_t* rax_4 = (*(*arg2 + 0xc0))(arg2, rdx_4, 0)

if (rax_4 == 0)
label_141d052d1:
    
    if (arg1 != -0x78)
        LeaveCriticalSection(arg1 + 0x78)
    
    return nullptr

if (*(arg1 + 0x10) != 0)
    rdi_1 = *(arg1 + 8)

rax_5 = j_sub_140a82f30(0xe0)

if (rax_5 != 0)
    int64_t rdx_5 = *rax_4
    rax_5 = sub_140a3b1f0(rax_5, rax_4, rdi_1, (*(rdx_5 + 0x40))(rax_4, rdx_5), 0x400)

label_141d052c1:
void*** result_1 = sub_141d10c30(arg1, rax_5, rdi_1)
result = result_1

if (result_1 == 0)
    goto label_141d052d1

int32_t rdx_9 = *(arg1 + 0x5c)
int64_t r15_2

if (rdx_9 == 0)
    r15_2 = zx.q(*(arg1 + 0x30))
    int32_t rax_8 = (r15_2 + 1).d
    *(arg1 + 0x30) = rax_8
    
    if (rax_8 s> *(arg1 + 0x34))
        sub_1405a4df0(arg1 + 0x28)
    
    int32_t rsi_1 = *(arg1 + 0x50)
    void* rdi_2 = arg1 + 0x38
    sub_1405a4980(rdi_2, rsi_1 + 1)
    *(rdi_2 + 0x18) += 1
    void* rax_9 = *(rdi_2 + 0x10)
    
    if (rax_9 != 0)
        rdi_2 = rax_9
    
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(rsi_1)
    int64_t rdx_14 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
    *(rdi_2 + (rdx_14 << 2)) &= not.d(1 << (rsi_1.b & 0x1f))
else
    r15_2 = sx.q(*(arg1 + 0x58))
    int64_t r9_3 = *(arg1 + 0x28)
    int64_t r8_5 = sx.q(*(r9_3 + r15_2 * 0x18 + 4))
    *(arg1 + 0x58) = r8_5.d
    *(arg1 + 0x5c) = rdx_9 - 1
    
    if (rdx_9 != 1)
        *(r9_3 + r8_5 * 0x18) = 0xffffffff

void* rax_16 = *(arg1 + 0x48)
void* r8_6 = arg1 + 0x38

if (rax_16 != 0)
    r8_6 = rax_16

int32_t temp3_1
int32_t temp4_1
temp3_1:temp4_1 = sx.q(r15_2.d)
void* rdx_17 = r8_6 + (sx.q((temp4_1 + (temp3_1 & 0x1f)) s>> 5) << 2)
*rdx_17 |= 1 << (r15_2.b & 0x1f)
int64_t rdx_18 = sx.q(r15_2.d) * 3
int64_t r8_7 = *(arg1 + 0x28)
*(r8_7 + (rdx_18 << 3)) = r12.d
*(r8_7 + (rdx_18 << 3) + 8) = result
*(r8_7 + (rdx_18 << 3) + 0x10) = 0xffffffff
void arg_8
sub_141d00470(arg1 + 0x28, &arg_8, *(r8_7 + (rdx_18 << 3)), r8_7 + (rdx_18 << 3), r15_2.d, nullptr)
goto label_141d053f8
