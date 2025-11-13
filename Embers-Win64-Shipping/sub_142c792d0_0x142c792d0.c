// 函数: sub_142c792d0
// 地址: 0x142c792d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg1 + arg2
void* rdi = -ffffffffffffffff

do
    rdi += 1
while (*(arg3 + rdi) != 0)

char* rbx_1 = arg1 + 2

if (rbx_1 u>= rsi)
    goto label_142c7933a

void* result = isdigit(zx.d(*rbx_1))

if (result.d == 0)
    goto label_142c7933a

bool cond:0_1

while (true)
    rbx_1 = &rbx_1[1]
    cond:0_1 = rbx_1 == rsi
    
    if (rbx_1 u>= rsi)
        break
    
    result = isdigit(zx.d(*rbx_1))
    
    if (result.d == 0)
        cond:0_1 = rbx_1 == rsi
        break

if (cond:0_1 || *rbx_1 != 0x20)
    result.b = 0
else
    rbx_1 = &rbx_1[1]
label_142c7933a:
    void* rbp_1 = rdi + rbx_1
    
    if (rbp_1 u<= rsi)
        result = sub_142c704d0(rbx_1, arg3, rdi)
    
    if (rbp_1 u> rsi || result.d == 0 || (*rbp_1 != 0x20 && rbp_1 + 2 != rsi))
        result.b = 0
    else
        result.b = 1

return result
