// 函数: sub_142908540
// 地址: 0x142908540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xc8)
void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
int64_t i_2 = sx.q(arg4[1].d)
void var_c8
void* rdi = &var_c8
int64_t i_1 = i_2
int64_t* rax_2 = sub_142890e60(arg1, i_2.d)
void* rax_3

if (rax_2 != 0 && i_1 u> 0x10)
    rax_3 = sub_1428a6730(i_2 << 3)
    rdi = rax_3

int64_t result

if (rax_2 == 0 || (i_1 u> 0x10 && rax_3 == 0))
    result = 0
else
    void* rcx_1 = *arg2
    void* r10_1 = rdi
    void* r11_1 = rdi
    
    if (rcx_1 != 0)
        r10_1 = rcx_1
    
    void* rcx_2 = *arg3
    
    if (rcx_2 != 0)
        r11_1 = rcx_2
    
    int64_t r9 = 0
    int64_t r13_1 = 0
    int64_t r8_1 = 0
    int64_t rsi_1 = 0
    
    if (i_2.d != 0)
        do
            int64_t rdx_7 =
                (neg.q((r9 - sx.q(arg2[1].d)) u>> 0x3f) & *(r10_1 + (r13_1 << 3))) + rsi_1
            int64_t rcx_8 =
                (neg.q((r9 - sx.q(arg3[1].d)) u>> 0x3f) & *(r11_1 + (r8_1 << 3))) + rdx_7
            *(rdi + (r9 << 3)) = rcx_8
            int64_t rax_6
            rax_6.b = rdx_7 u< rsi_1
            rsi_1 = adc.q(rax_6, 0, rcx_8 u< rdx_7)
            r9 += 1
            r13_1 += (r9 - sx.q(*(arg2 + 0xc))) u>> 0x3f
            r8_1 += (r9 - sx.q(*(arg3 + 0xc))) u>> 0x3f
        while (r9 u< i_1)
    
    int64_t* r14_1 = *arg1
    int64_t rsi_3 = rsi_1 - sub_142921500(r14_1, rdi, *arg4, i_2.d)
    
    if (i_2.d != 0)
        int64_t r14_2 = r14_1 - rdi
        void* rax_10 = rdi
        int64_t i
        
        do
            int64_t rdx_10 = not.q(rsi_3) & *(r14_2 + rax_10)
            int64_t rcx_17 = rsi_3 & *rax_10
            rax_10 += 8
            *(r14_2 + rax_10 - 8) = rdx_10 | rcx_17
            *(rax_10 - 8) = 0
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    arg1[1].d = i_2.d
    arg1[2].d = 0
    
    if (rdi != &var_c8)
        sub_1428a6780(rdi)
    
    result = 1

__security_check_cookie(rax_1 ^ &var_f8)
return result
