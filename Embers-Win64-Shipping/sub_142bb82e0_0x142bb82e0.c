// 函数: sub_142bb82e0
// 地址: 0x142bb82e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t rax_1 = __security_cookie ^ &var_48
void* rcx = *(arg1 + 0x2e0)
uint64_t result

if (rcx != 0)
    int32_t r8 = *(rcx + 4)
    void var_28
    sub_142bbb300(*(rcx + 0x108), &var_28, r8)
    int32_t rax_2 = arg2
    
    if (arg2 u> r8)
        rax_2 = r8
    
    uint64_t rbx_1 = 0
    
    if (rax_2 != 0)
        rbx_1 = zx.q(rax_2)
        memcpy(arg3, &var_28, rax_2 << 2)
    
    int64_t rcx_4
    int64_t rdi_3
    
    if (rbx_1.d u< arg2)
        rdi_3, rcx_4 = __memfill_u32(arg3 + (rbx_1 << 2), 0x8000, zx.q(arg2 - rbx_1.d))
    result = 0
else
    result = zx.q((rcx + 6).d)

__security_check_cookie(rax_1 ^ &var_48)
return result
