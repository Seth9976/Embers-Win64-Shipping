// 函数: sub_14082f7c0
// 地址: 0x14082f7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = arg3
int64_t rax = 0x358

if (arg4 == 0)
    rax = 0x308

void* rax_1 = sub_140817b00(arg1 + rax, arg3, &arg_18)
int32_t r8_1 = *rax_1

if (r8_1 == *(rax_1 + 0x10))
    int64_t rsi_1 = sx.q(*(rax_1 + 0x10))
    int32_t rcx_1 = (rsi_1 + 1).d
    *(rax_1 + 0x10) = rcx_1
    
    if (rcx_1 s> *(rax_1 + 0x14))
        sub_1405a4df0(rax_1 + 8)
    
    int64_t* rcx_4 = *(rax_1 + 8) + rsi_1 * 0x18
    __builtin_memset(rcx_4, 0, 0x18)
    sub_1408317b0(rcx_4, arg2, arg_18, arg4, u"NiagaraEmitterInstanceBatcher::DummyUAV")
    r8_1 = *rax_1

int64_t result = *(*(rax_1 + 8) + sx.q(r8_1) * 0x18 + 0x10)
*rax_1 = r8_1 + 1
return result
