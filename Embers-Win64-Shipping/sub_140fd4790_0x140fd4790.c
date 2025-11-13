// 函数: sub_140fd4790
// 地址: 0x140fd4790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18 = arg2
int32_t rdx = *(arg1 + 0x34)
int64_t r8
int64_t var_10 = r8
int64_t rsi

if (rdx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_140ffca50(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8_1 = sx.q(*(rsi * 0x240 + r9_1 + 4))
    arg1[6].d = r8_1.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8_1 * 0x240 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_2 = &arg1[2]

if (rax_2 != 0)
    r8_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (rsi.b & 0x1f)
void* rbx_2 = sx.q(rsi.d) * 0x240 + *arg1
sub_140fce430(&var_18, rbx_2)
*(rbx_2 + 0x238) = 0xffffffff
int32_t arg_8
sub_140fe5360(arg1, &arg_8, *(rbx_2 + 0x208), rbx_2, rsi.d, nullptr)
return *arg1 + 0x230 + sx.q(arg_8) * 0x240
