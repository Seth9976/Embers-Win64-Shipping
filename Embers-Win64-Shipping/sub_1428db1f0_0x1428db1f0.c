// 函数: sub_1428db1f0
// 地址: 0x1428db1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int64_t* rdi = *arg1
void* rbx = arg2

if (rdi == 0)
    return zx.q((rdi - 1).d)

int32_t rax_2 = sub_142890560(rdi) & 7
int32_t rsi
rsi.b = rax_2 == 0

if (rbx != 0)
    if (rax_2 == 0)
        *rbx = rax_2.b
        rbx += 1
    
    sub_14288fba0(rdi, rbx)

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(sub_142890560(rdi) + 7)
return zx.q(((temp1 + (temp0 & 7)) s>> 3) + rsi)
