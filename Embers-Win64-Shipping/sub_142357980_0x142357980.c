// 函数: sub_142357980
// 地址: 0x142357980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78

if (arg3 != 0)
    int64_t rdx = sx.q(*(arg1 + 0x70))
    int64_t rbx_1 = *(arg3 + 0x18)
    void* i = *(arg1 + 0x68)
    int64_t r14_2 = rdx * 6
    int64_t var_58_1 = rbx_1
    
    for (void* r8 = i + (r14_2 << 3); i != r8; i += 0x30)
        int64_t rcx = *(i + 8)
        
        if (rcx.d == rbx_1.d)
            int32_t rcx_2 = (rcx u>> 0x20).d + 1
            
            if (var_58_1:4.d s>= rcx_2)
                rcx_2 = var_58_1:4.d
            
            int32_t var_4c_1 = rcx_2
            rbx_1 = rbx_1.d.q
            var_58_1 = rbx_1
    
    int32_t rax_2 = (rdx + 1).d
    *(arg1 + 0x70) = rax_2
    
    if (rax_2 s> *(arg1 + 0x74))
        sub_1405c4f50(arg1 + 0x68)
    
    int64_t rsi_2 = *(arg1 + 0x68)
    *(rsi_2 + (r14_2 << 3)) = arg3
    *(rsi_2 + (r14_2 << 3) + 8) = rbx_1
    *(rsi_2 + (r14_2 << 3) + 0x10) = 0
    *(rsi_2 + (r14_2 << 3) + 0x18) = 0
    *(rsi_2 + (r14_2 << 3) + 0x20) = 0
    *(rsi_2 + (r14_2 << 3) + 0x28) = 0
    
    if (*(rsi_2 + (r14_2 << 3)) != 0)
        int32_t rcx_4
        rcx_4.b = *(rsi_2 + (r14_2 << 3) + 0xc) == 0
        
        if ((rcx_4.b & sub_140b5b8a0(rbx_1.d, 0)) != 0)
            *(rsi_2 + (r14_2 << 3) + 8) = *(*(rsi_2 + (r14_2 << 3)) + 0x18)
    
    int16_t var_48_1 = 1
    int64_t rcx_6 = 4
    void var_44
    void var_34
    
    if (&var_44 u> &var_34)
        rcx_6 = 0
    
    int64_t rcx_7
    int64_t rdi_2
    rdi_2, rcx_7 = __memfill_u32(&var_44, 0x3f800000, rcx_6)
    *(rsi_2 + (r14_2 << 3) + 0x18) = var_48_1.o
    int32_t var_38
    *(rsi_2 + (r14_2 << 3) + 0x28) = var_38
    *arg2 = rbx_1
else
    *arg2 = arg3

__security_check_cookie(rax_1 ^ &var_78)
return arg2
