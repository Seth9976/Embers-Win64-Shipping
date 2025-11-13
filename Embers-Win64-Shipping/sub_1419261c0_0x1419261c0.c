// 函数: sub_1419261c0
// 地址: 0x1419261c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rsi

if (rcx == 0)
    rsi = zx.q(arg1[1].d)
    int32_t rax_1 = (rsi + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c5340(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rsi = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(rsi * 0x88 + r9_1 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r8 * 0x88 + r9_1) = 0xffffffff

void* rax_2 = arg1[4]
void* r8_1 = &arg1[2]

if (rax_2 != 0)
    r8_1 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rsi.d)
void* r8_2 = r8_1 + (sx.q((temp1 + (temp0 & 0x1f)) s>> 5) << 2)
*r8_2 |= 1 << (rsi.b & 0x1f)
int128_t* rbx_1 = sx.q(rsi.d) * 0x88 + *arg1
*rbx_1 = *arg2
rbx_1[1] = arg2[1]
rbx_1[2] = arg2[2]
rbx_1[3] = arg2[3]
rbx_1[4] = arg2[4]
rbx_1[5] = arg2[5]
rbx_1[6] = arg2[6]
rbx_1[7].q = arg2[7].q
*(rbx_1 + 0x78) = *arg3
rbx_1[8].d = 0xffffffff
int32_t arg_8
sub_141936d70(arg1, &arg_8, sub_140b21160(rbx_1, 0x78, 0), rbx_1, rsi.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x88 + 0x78
