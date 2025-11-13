// 函数: sub_1424d4ad0
// 地址: 0x1424d4ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = __security_cookie ^ &var_38
*(arg2 + 0x30) = 0
int64_t* result

if (*(arg2 + 0x20) == 0)
    int64_t* r8 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8[4]
    result = sub_140d30490(arg2, 0, r8)
else
    result = sub_140d30460(arg2, *(arg2 + 0x18), 0)

void* r15 = *(arg2 + 0x30)
void** r12 = *(arg2 + 0x38)

if (r15 != 0)
    result = *(r15 + 8)

if (r15 == 0 || ((zx.q(result[2].d) u>> 0x15).b & 1) == 0)
    *(arg2 + 0x90) = 1
else
    int64_t* rsi_1 = *(r15 + 0x78)
    int32_t rdx_2 = *(rsi_1 + 0x3c) * rsi_1[7].d
    char* rdi_1
    
    if (rdx_2 != 0)
        int64_t rcx_3 = sx.q(rdx_2 + 0xf)
        int64_t rax_4 = rcx_3 + 0xf
        
        if (rax_4 u<= rcx_3)
            rax_4 = 0xffffffffffffff0
        
        int64_t rax_5 = rax_4 & 0xfffffffffffffff0
        __chkstk(rax_5)
        void var_58
        rdi_1 = (&var_58 - rax_5 + 0x2f) & 0xfffffffffffffff0
    else
        rdi_1 = nullptr
    
    if (not(test_bit(zx.q(rsi_1[8].d), 9)))
        (*(*rsi_1 + 0xf0))(rsi_1, rdi_1)
    else
        memset(rdi_1, 0, sx.q(rdx_2))
    
    *(arg2 + 0x38) = 0
    
    if (*(arg2 + 0x20) == 0)
        int64_t* r8_3 = *(arg2 + 0x80)
        *(arg2 + 0x80) = r8_3[4]
        sub_140d30490(arg2, rdi_1, r8_3)
    else
        sub_140d30460(arg2, *(arg2 + 0x18), rdi_1)
    
    int64_t rax_9 = *(arg2 + 0x20)
    int64_t r14
    r14.b = rax_9 != 0
    *(arg2 + 0x20) = r14 + rax_9
    sub_1420c0f10(rsi_1, rdi_1)
    *arg3 = sub_1420c1400(r12, r15, rdi_1)
    result.b = not.b((rsi_1[8] u>> 0x24).b)
    
    if ((result.b & 1) != 0)
        result = (*(*rsi_1 + 0xe8))(rsi_1, rdi_1)

__security_check_cookie(var_38 ^ &var_38)
return result
