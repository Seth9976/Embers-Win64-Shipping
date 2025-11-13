// 函数: sub_1406b4ff0
// 地址: 0x1406b4ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t rax_2 = _Query_perf_frequency()
int64_t rax_4
int64_t rdx
rdx:rax_4 = sx.o(_Query_perf_counter())
int64_t rbx_2 = divs.dp.q(rdx:rax_4, rax_2) * 0x3b9aca00
    + divs.dp.q(sx.o(mods.dp.q(rdx:rax_4, rax_2) * 0x3b9aca00), rax_2)
int64_t result = *arg3

if (result s> 0)
    int64_t rcx = result * 0x3b9aca00
    
    if (rbx_2 s>= 0x7fffffffffffffff - rcx)
        rbx_2 = 0x7fffffffffffffff
    else
        rbx_2 += rcx

uint128_t zmm6
uint128_t var_38 = zmm6

while (*(arg4 + 0xbc) == 0)
    int64_t rax_9 = _Query_perf_frequency()
    int64_t rax_11
    int64_t rdx_4
    rdx_4:rax_11 = sx.o(_Query_perf_counter())
    int64_t rsi_3 = divs.dp.q(rdx_4:rax_11, rax_9) * 0x3b9aca00
        + divs.dp.q(sx.o(mods.dp.q(rdx_4:rax_11, rax_9) * 0x3b9aca00), rax_9)
    
    if (rsi_3 s>= rbx_2)
        result.b = 0
        goto label_1406b519b
    
    int64_t rcx_2 = _Xtime_get_ticks() * 0x64
    int64_t rax_17 = rbx_2 - rsi_3
    int32_t r8_1 = rcx_2.d - 0x52ea0000
    rsi_3.b = float.d(rax_17) f> 0x43088e6d68b00000
    
    if (rsi_3.b == 0)
        r8_1 = rcx_2.d + rax_17.d
    
    int64_t rdx_8 = rcx_2 - -0x311cdad160000
    
    if (rsi_3.b == 0)
        rdx_8 = rax_17 + rcx_2
    
    int64_t rdx_11 = rdx_8 s/ 0x3b9aca00
    struct xtime target
    target.sec = rdx_11
    target.nsec = r8_1 - rdx_11.d * 0x3b9aca00
    
    if (_Mtx_current_owns(*arg2) == 0)
        std::_Throw_Cpp_error(4)
        noreturn
    
    result = _Cnd_timedwait(arg1, *arg2, &target)
    
    if (result.d != 0)
        if (result.d != 2)
            std::_Throw_C_error(result.d)
            noreturn
        
        if (rsi_3.b == 0)
            result.b = *(arg4 + 0xbc) != 0
            goto label_1406b519b

result.b = 1
label_1406b519b:
__security_check_cookie(rax_1 ^ &var_78)
return result
