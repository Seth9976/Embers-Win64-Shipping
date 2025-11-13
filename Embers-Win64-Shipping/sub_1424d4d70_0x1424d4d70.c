// 函数: sub_1424d4d70
// 地址: 0x1424d4d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t __saved_rbp_1
int64_t __saved_rbp = __saved_rbp_1
int64_t __saved_r14_1
int64_t __saved_r14 = __saved_r14_1
int64_t __saved_r15_1
int64_t __saved_r15 = __saved_r15_1
void var_58
void* rsp_1 = &var_58
int64_t __saved_rbx_1
int64_t __saved_rbx = __saved_rbx_1
int64_t __saved_rsi_1
int64_t __saved_rsi = __saved_rsi_1
int64_t __saved_rdi_1
int64_t __saved_rdi = __saved_rdi_1
int64_t __saved_r12_1
int64_t __saved_r12 = __saved_r12_1
int32_t var_28
int64_t rax_1 = __security_cookie ^ &var_28
*(arg2 + 0x30) = 0
int64_t* result

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    result = sub_140d30490(arg2, 0, r8_1)
else
    result = sub_140d30460(arg2, *(arg2 + 0x18), 0)

void* r15 = *(arg2 + 0x30)
int64_t r12 = *(arg2 + 0x38)

if (r15 != 0)
    result = *(r15 + 8)

if (r15 == 0 || ((zx.q(result[2].d) u>> 0x15).b & 1) == 0)
    *(arg2 + 0x90) = 1
else
    int32_t var_24 = 0
    
    if (*(arg2 + 0x20) == 0)
        int64_t* r8_3 = *(arg2 + 0x80)
        *(arg2 + 0x80) = r8_3[4]
        sub_140d30490(arg2, &var_24, r8_3)
    else
        sub_140d30460(arg2, *(arg2 + 0x18), &var_24)
    
    int64_t* rsi = *(r15 + 0x78)
    int32_t rdx_4 = *(rsi + 0x3c) * rsi[7].d
    void* rdi
    
    if (rdx_4 != 0)
        int64_t rcx_4 = sx.q(rdx_4 + 0xf)
        int64_t rax_5 = rcx_4 + 0xf
        
        if (rax_5 u<= rcx_4)
            rax_5 = 0xffffffffffffff0
        
        int64_t rax_6 = rax_5 & 0xfffffffffffffff0
        __chkstk(rax_6)
        rsp_1 = &var_58 - rax_6
        rdi = (rsp_1 + 0x3f) & 0xfffffffffffffff0
    else
        rdi = nullptr
    
    if (not(test_bit(zx.q(rsi[8].d), 9)))
        (*(*rsi + 0xf0))(rsi, rdi)
    else
        memset(rdi, 0, sx.q(rdx_4))
    
    *(arg2 + 0x38) = 0
    
    if (*(arg2 + 0x20) == 0)
        int64_t* r8_6 = *(arg2 + 0x80)
        *(arg2 + 0x80) = r8_6[4]
        sub_140d30490(arg2, rdi, r8_6)
    else
        sub_140d30460(arg2, *(arg2 + 0x18), rdi)
    
    var_28 = 0
    
    if (*(arg2 + 0x20) == 0)
        int64_t* r8_8 = *(arg2 + 0x80)
        *(arg2 + 0x80) = r8_8[4]
        sub_140d30490(arg2, &var_28, r8_8)
    else
        sub_140d30460(arg2, *(arg2 + 0x18), &var_28)
    
    int64_t rax_11 = *(arg2 + 0x20)
    uint64_t r8_9 = zx.q(var_24)
    int64_t r14
    r14.b = rax_11 != 0
    bool cond:1_1 = var_28 != 0
    *(arg2 + 0x20) = r14 + rax_11
    rax_11.b = cond:1_1
    *(rsp_1 + 0x20) = rax_11.b
    sub_1420c1730(r12, r15, r8_9, rdi)
    result.b = not.b((rsi[8] u>> 0x24).b)
    
    if ((result.b & 1) != 0)
        result = (*(*rsi + 0xe8))(rsi, rdi)

__security_check_cookie(rax_1 ^ &var_28)
return result
