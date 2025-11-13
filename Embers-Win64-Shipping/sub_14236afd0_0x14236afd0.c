// 函数: sub_14236afd0
// 地址: 0x14236afd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141997e80(arg1 + 0x178)

if ((*(arg1 + 0x44) & 0x20) != 0)
    sub_141997e80(*(arg1 + 0x1f8) + 0x80)

sub_141997e80(arg1 + 0x70)
sub_141997e80(arg1 + 0xf8)
uint64_t result = zx.q(*(arg1 + 0x44))

if ((result.b & 0x10) != 0)
    sub_141997e80(arg1 + 0x138)
    result = zx.q(*(arg1 + 0x44))

if ((result.b & 4) != 0)
    sub_141997e80(*(arg1 + 0x1f8))
    result = zx.q(*(arg1 + 0x44))

if ((result.b & 2) != 0)
    sub_141997e80(arg1 + 0x1b8)
    result = zx.q(*(arg1 + 0x44))

if ((result.b & 8) != 0)
    sub_141997e80(*(arg1 + 0x1f8) + 0x40)
    result = zx.q(*(arg1 + 0x44))

if ((result.b & 1) != 0)
    result = sub_1419803d0(data_143f0f1a0)
    
    if (result.b != 0)
        result = sub_141997e80(*(arg1 + 0x1f8) + 0xc0)

if ((*(arg2 + 0x95) & 1) != 0)
    result = zx.q(*(arg2 + 0x94))
    
    if ((result.b & 8) != 0 && result.b s< 0)
        result = sub_141997e80(arg1 + 0x2b8)

if (data_143f0f21f != 0)
    uint64_t rdx = zx.q(data_143f0f1a0)
    result = zx.q(*(&data_143f025fc + sx.q(rdx.d) * 0x14) u>> 0x13)
    
    if ((result.b & 1) != 0)
        result = data_143f13cd8
        
        if (test_bit(result, rdx))
            void* arg_8 = arg1
            
            if (sub_140a80f40() == 0)
                uint32_t rax_3
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_3.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_3.b == 0))
                    void var_38
                    void** rax_4 = sub_14235ef40(&var_38, nullptr, 0xff)
                    *(*rax_4 + 0x10) = arg1
                    void* rcx_19 = *rax_4
                    int32_t r8_1 = rax_4[2].d
                    int64_t* rdx_3 = rax_4[1]
                    int64_t* rbx_1 = *(rcx_19 + 0x20)
                    int64_t* arg_10 = rbx_1
                    void* rsi_1 = &rbx_1[9]
                    
                    if (rbx_1 != 0)
                        *rsi_1 += 1
                        rbx_1 = arg_10
                    
                    result = sub_1405a5630(rcx_19, rdx_3, r8_1, 1)
                    
                    if (rbx_1 != 0)
                        result = zx.q(*rsi_1)
                        *rsi_1 -= 1
                        
                        if (result.d == 1)
                            result = sub_140a2f6e0(arg_10)
                else
                    void* arg_18 = arg1
                    result = sub_142355020(&arg_18)
            else
                result = sub_142355020(&arg_8)

void* rcx_21 = *(arg1 + 0x38)

if (rcx_21 == 0)
    return result

return sub_141fe77b0(rcx_21 + 0x50, arg2) __tailcall
