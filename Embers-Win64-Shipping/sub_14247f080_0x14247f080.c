// 函数: sub_14247f080
// 地址: 0x14247f080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_58
void* rsp = &var_58
uint64_t result_1
int64_t rax_1 = __security_cookie ^ &result_1
*(arg2 + 0x30) = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, 0, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), 0)

void* r13 = *(arg2 + 0x30)
uint64_t result = *(arg2 + 0x38)
result_1 = result

if (r13 != 0)
    result = *(r13 + 8)

if (r13 == 0 || ((*(result + 0x10) u>> 0x2e).b & 1) == 0)
    *(arg2 + 0x90) = 1
else
    int64_t* r14_1 = *(r13 + 0x78)
    int32_t rdx_2 = *(r14_1 + 0x3c) * r14_1[7].d
    void* rdi_1
    
    if (rdx_2 != 0)
        int64_t rcx_3 = sx.q(rdx_2 + 0xf)
        int64_t rax_4 = rcx_3 + 0xf
        
        if (rax_4 u<= rcx_3)
            rax_4 = 0xffffffffffffff0
        
        int64_t rax_5 = rax_4 & 0xfffffffffffffff0
        __chkstk(rax_5)
        rsp = &var_58 - rax_5
        rdi_1 = (rsp + 0x2f) & 0xfffffffffffffff0
    else
        rdi_1 = nullptr
    
    if (not(test_bit(zx.q(r14_1[8].d), 9)))
        (*(*r14_1 + 0xf0))(r14_1, rdi_1)
    else
        memset(rdi_1, 0, sx.q(rdx_2))
    
    *(arg2 + 0x38) = 0
    
    if (*(arg2 + 0x20) == 0)
        int64_t* r8_4 = *(arg2 + 0x80)
        *(arg2 + 0x80) = r8_4[4]
        sub_140d30490(arg2, rdi_1, r8_4)
    else
        sub_140d30460(arg2, *(arg2 + 0x18), rdi_1)
    
    int64_t* r15_1 = *(r13 + 0x80)
    int32_t rdx_7 = *(r15_1 + 0x3c) * r15_1[7].d
    void* rsi_1
    
    if (rdx_7 != 0)
        int64_t rcx_7 = sx.q(rdx_7 + 0xf)
        int64_t rax_10 = rcx_7 + 0xf
        
        if (rax_10 u<= rcx_7)
            rax_10 = 0xffffffffffffff0
        
        int64_t rax_11 = rax_10 & 0xfffffffffffffff0
        __chkstk(rax_11)
        rsi_1 = (rsp - rax_11 + 0x2f) & 0xfffffffffffffff0
    else
        rsi_1 = nullptr
    
    if (not(test_bit(zx.q(r15_1[8].d), 9)))
        (*(*r15_1 + 0xf0))(r15_1, rsi_1)
    else
        memset(rsi_1, 0, sx.q(rdx_7))
    
    *(arg2 + 0x38) = 0
    
    if (*(arg2 + 0x20) == 0)
        int64_t* r8_7 = *(arg2 + 0x80)
        *(arg2 + 0x80) = r8_7[4]
        sub_140d30490(arg2, rsi_1, r8_7)
    else
        sub_140d30460(arg2, *(arg2 + 0x18), rsi_1)
    
    int64_t rax_15 = *(arg2 + 0x20)
    uint64_t result_2 = result_1
    int64_t r12
    r12.b = rax_15 != 0
    *(arg2 + 0x20) = r12 + rax_15
    sub_141e9fa20(result_2, r13)
    
    if ((not.b((r15_1[8] u>> 0x24).b) & 1) != 0)
        (*(*r15_1 + 0xe8))(r15_1, rsi_1)
    
    result.b = not.b((r14_1[8] u>> 0x24).b)
    
    if ((result.b & 1) != 0)
        result = (*(*r14_1 + 0xe8))(r14_1, rdi_1)

__security_check_cookie(rax_1 ^ &result_1)
return result
