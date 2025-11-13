// 函数: sub_14289aff0
// 地址: 0x14289aff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t rbx = sx.q(arg3)
int64_t* rsi = *(*(arg1 + 0x38) + 8)
sub_142899cc0(arg1, 0xf)
uint64_t rdi_1

if (rbx.d s>= 0)
    rdi_1 = *rsi

if (rbx.d s< 0 || rbx u<= rdi_1)
    rdi_1 = zx.q(rbx.d)

if (arg2 != 0 && rdi_1.d s> 0)
    int64_t rbx_1 = sx.q(rdi_1.d)
    memcpy(arg2, rsi[1], rbx_1.d)
    *rsi -= rbx_1
    rsi[1] += rbx_1
else if (*rsi == 0)
    int32_t rbx_2 = *(arg1 + 0x30)
    
    if (rbx_2 != 0)
        sub_14289a9a0(arg1, 9)
    
    return zx.q(rbx_2)

return zx.q(rdi_1.d)
