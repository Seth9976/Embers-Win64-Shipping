// 函数: sub_14236c630
// 地址: 0x14236c630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg2 + 0xc0)
int64_t rax = sub_141e5f950(arg2 + 0xb0, arg1)
int64_t arg_18 = rax
int32_t rbx = 0
void* const rcx_6

if (*(rbp + 0x668) == *(rbp + 0x694))
label_14236c6e0:
    rcx_6 = nullptr
else
    void* r8_1 = *(rbp + 0x6a0)
    void* r9_1 = rbp + 0x698
    
    if (r8_1 != 0)
        r9_1 = r8_1
    
    int32_t rax_3 =
        *(r9_1 + ((sx.q((rax u>> 0x20).d * 0x17 + rax.d) & (sx.q(*(rbp + 0x6a8)) - 1)) << 2))
    
    if (rax_3 == 0xffffffff)
    label_14236c6e0_1:
        rcx_6 = nullptr
    else
        int64_t r8_2 = *(rbp + 0x660)
        
        while (true)
            int64_t rdx_3 = sx.q(rax_3) * 3
            rcx_6 = r8_2 + (rdx_3 << 3)
            
            if (*(r8_2 + (rdx_3 << 3)) == rax)
                break
            
            rax_3 = *(rcx_6 + 0x10)
            
            if (rax_3 == 0xffffffff)
                goto label_14236c6e0_2
        
        if (rax_3 == 0xffffffff)
        label_14236c6e0_2:
            rcx_6 = nullptr

void* rax_4 = rcx_6 + 8

if (rcx_6 == 0)
    rax_4 = nullptr

int32_t result_1
uint64_t result_2

if (rax_4 != 0)
    result_2 = zx.q(*rax_4)
else
    int64_t rsi_1 = sx.q(*(rbp + 0x6b8))
    int32_t rax_5 = (rsi_1 + 8).d
    *(rbp + 0x6b8) = rax_5
    
    if (rax_5 s> *(rbp + 0x6bc))
        sub_1405daba0(rbp + 0x6b0)
    
    result_1 = rsi_1.d
    *(rsi_1 + *(rbp + 0x6b0)) = 0
    sub_141cf16a0(rbp + 0x660, &arg_18, &result_1)
    result_2 = sx.q(result_1)
    *(result_2 + *(rbp + 0x6b0)) = 1

int32_t* rdi_3 = sx.q(result_2.d + 4) + *(rbp + 0x6b0)
sub_1405ba560(&data_143a2ff40, &result_1, arg1)
int64_t result = sx.q(result_1)
void* const rcx_11

if (result.d == 0xffffffff)
    rcx_11 = nullptr
else
    rcx_11 = (result << 5) + data_143a2ff40

int64_t* rsi_2 = rcx_11 + 8

if (rcx_11 == 0)
    rsi_2 = nullptr

if (rsi_2 != 0)
    void* r14_1 = *rsi_2
    int64_t rbp_1 = *(arg2 + 0xc0)
    int64_t* rdi_6 = sx.q(*rdi_3) * 0x50 + r14_1
    sub_140865c40(rdi_6, &result_1, rbp_1)
    result = sx.q(result_1)
    int64_t r8_6
    
    if (result.d == 0xffffffff)
        r8_6 = 0
    else
        r8_6 = *rdi_6 + result * 0x18
    
    int32_t* rcx_13 = r8_6 + 8
    
    if (r8_6 == 0)
        rcx_13 = nullptr
    
    if (rcx_13 != 0)
        int32_t rax_10 = *rcx_13
        
        if (rax_10 s<= 1)
            int32_t r8_7
            int32_t r10_1
            
            if (rdi_6[1].d - *(rdi_6 + 0x34) s<= 1)
                int64_t r11_1 = sx.q(rsi_2[1].d)
                r8_7 = 0
                r10_1 = 0
                int64_t r9_2 = 0
                
                if (r11_1 s>= 2)
                    int32_t* rcx_14 = r14_1 + 8
                    int64_t i_1 = ((r11_1 - 2) u>> 1) + 1
                    r9_2 = i_1 * 2
                    int64_t i
                    
                    do
                        int32_t rax_14 = *rcx_14 - rcx_14[0xb]
                        rcx_14 = &rcx_14[0x28]
                        rbx += rax_14
                        r8_7 += rcx_14[-0x14] - rcx_14[-9]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                if (r9_2 s< r11_1)
                    int64_t rax_18 = r9_2 * 0xa
                    r10_1 = *(r14_1 + (rax_18 << 3) + 8) - *(r14_1 + (rax_18 << 3) + 0x34)
            
            if (rdi_6[1].d - *(rdi_6 + 0x34) s> 1 || rbx + r8_7 + r10_1 != 1)
                sub_140868c90(rdi_6, rbp_1)
            else
                sub_1423723d0(&data_143a2ff40, arg1)
        else
            *rcx_13 = rax_10 - 1

result.b = 0
return result
