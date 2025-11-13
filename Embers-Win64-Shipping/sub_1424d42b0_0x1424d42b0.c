// 函数: sub_1424d42b0
// 地址: 0x1424d42b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

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
void** r12 = *(arg2 + 0x38)

if (r15 != 0)
    result = *(r15 + 8)

if (r15 == 0 || ((zx.q(result[2].d) u>> 0x15).b & 1) == 0)
    *(arg2 + 0x90) = 1
else
    var_28 = 0
    
    if (*(arg2 + 0x20) == 0)
        int64_t* r8_3 = *(arg2 + 0x80)
        *(arg2 + 0x80) = r8_3[4]
        sub_140d30490(arg2, &var_28, r8_3)
    else
        sub_140d30460(arg2, *(arg2 + 0x18), &var_28)
    
    int64_t* rsi_1 = *(r15 + 0x78)
    int32_t rdx_4 = *(rsi_1 + 0x3c) * rsi_1[7].d
    void* rdi_1
    
    if (rdx_4 != 0)
        int64_t rcx_4 = sx.q(rdx_4 + 0xf)
        int64_t rax_5 = rcx_4 + 0xf
        
        if (rax_5 u<= rcx_4)
            rax_5 = 0xffffffffffffff0
        
        int64_t rax_6 = rax_5 & 0xfffffffffffffff0
        __chkstk(rax_6)
        void var_48
        rdi_1 = (&var_48 - rax_6 + 0x2f) & 0xfffffffffffffff0
    else
        rdi_1 = nullptr
    
    if (not(test_bit(zx.q(rsi_1[8].d), 9)))
        (*(*rsi_1 + 0xf0))(rsi_1, rdi_1)
    else
        memset(rdi_1, 0, sx.q(rdx_4))
    
    *(arg2 + 0x38) = 0
    
    if (*(arg2 + 0x20) == 0)
        int64_t* r8_6 = *(arg2 + 0x80)
        *(arg2 + 0x80) = r8_6[4]
        sub_140d30490(arg2, rdi_1, r8_6)
    else
        sub_140d30460(arg2, *(arg2 + 0x18), rdi_1)
    
    void* r9_1 = *(arg2 + 0x38)
    
    if (r9_1 == 0 || *(*(arg2 + 0x30) + 8) != rsi_1[1])
        r9_1 = rdi_1
    
    int64_t rax_11 = *(arg2 + 0x20)
    int32_t r8_7 = var_28
    int64_t r14
    r14.b = rax_11 != 0
    *(arg2 + 0x20) = r14 + rax_11
    sub_1420c0d60(r12, r15, r8_7, r9_1)
    result.b = not.b((rsi_1[8] u>> 0x24).b)
    
    if ((result.b & 1) != 0)
        result = (*(*rsi_1 + 0xe8))(rsi_1, rdi_1)

__security_check_cookie(rax_1 ^ &var_28)
return result
