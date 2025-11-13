// 函数: sub_14068ba20
// 地址: 0x14068ba20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t rax_2 = _Query_perf_frequency()
int64_t rax_4
int64_t rdx
rdx:rax_4 = sx.o(_Query_perf_counter())
int64_t rdi_1 = divs.dp.q(rdx:rax_4, rax_2) * 0x3b9aca00
    + divs.dp.q(sx.o(mods.dp.q(rdx:rax_4, rax_2) * 0x3b9aca00), rax_2)
int64_t result = *arg3

if (result s> 0)
    int64_t rcx = result * 0xf4240
    
    if (rdi_1 s>= 0x7fffffffffffffff - rcx)
        rdi_1 = 0x7fffffffffffffff
    else
        rdi_1 += rcx

int64_t rbp
int64_t arg_18 = rbp
uint128_t zmm6
uint128_t var_48 = zmm6

while (*(arg4 + 0xdc) == 0)
    int64_t rax_9 = _Query_perf_frequency()
    int64_t rax_11
    int64_t rdx_4
    rdx_4:rax_11 = sx.o(_Query_perf_counter())
    result = divs.dp.q(sx.o(mods.dp.q(rdx_4:rax_11, rax_9) * 0x3b9aca00), rax_9)
        + divs.dp.q(rdx_4:rax_11, rax_9) * 0x3b9aca00
    
    if (result s>= rdi_1)
        result.b = 0
        goto label_14068bbc6
    
    int64_t rbx_3 = rdi_1 - result
    int64_t rdx_8 = _Xtime_get_ticks() * 0x64
    int32_t rcx_3 = rdx_8.d - 0x52ea0000
    rbp.b = float.d(rbx_3) f> 0x43088e6d68b00000
    
    if (rbp.b == 0)
        rcx_3 = rdx_8.d + rbx_3.d
    
    int64_t rdx_9 = rdx_8 - -0x311cdad160000
    
    if (rbp.b == 0)
        rdx_9 = rdx_8 + rbx_3
    
    int64_t rdx_12 = rdx_9 s/ 0x3b9aca00
    struct xtime target
    target.sec = rdx_12
    target.nsec = rcx_3 - rdx_12.d * 0x3b9aca00
    
    if (_Mtx_current_owns(*arg2) == 0)
        std::_Throw_Cpp_error(4)
        noreturn
    
    result = _Cnd_timedwait(arg1, *arg2, &target)
    
    if (result.d != 0)
        if (result.d != 2)
            std::_Throw_C_error(result.d)
            noreturn
        
        if (rbp.b == 0)
            result.b = *(arg4 + 0xdc) != 0
            goto label_14068bbc6

result.b = 1
label_14068bbc6:
__security_check_cookie(rax_1 ^ &var_88)
return result
