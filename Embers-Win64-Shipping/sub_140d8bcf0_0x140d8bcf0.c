// 函数: sub_140d8bcf0
// 地址: 0x140d8bcf0
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
        sub_1407c3920(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8_1 = sx.q(*(rsi * 0x78 + r9_1 + 4))
    arg1[6].d = r8_1.d
    *(arg1 + 0x34) = rdx - 1
    
    if (rdx != 1)
        *(r8_1 * 0x78 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_2 = &arg1[2]

if (rax_2 != 0)
    r8_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_3 = r8_2 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_3 |= 1 << (rsi.b & 0x1f)
int64_t* rbx_1 = sx.q(rsi.d) * 0x78 + *arg1
sub_140d8b1e0(&var_18, rbx_1)
rbx_1[0xe].d = 0xffffffff
int32_t arg_8
sub_140d9d620(arg1, &arg_8, rbx_1[3].d, rbx_1, rsi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x78 + 0x20
