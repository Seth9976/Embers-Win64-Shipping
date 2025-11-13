// 函数: sub_14193d070
// 地址: 0x14193d070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = arg1
sub_14193d470()
void* rax = sub_141927060(&data_1439c7620, arg_8, &arg_8)
int32_t arg_18
sub_14193a6d0(rax, &arg_18, arg2)
int64_t rcx_1 = sx.q(arg_18)

if (rcx_1.d != 0xffffffff)
    int64_t rax_2 = rcx_1 << 5
    void* rax_3 = rax_2 + *rax
    
    if (rax_2 != neg.q(*rax) && rax_3 != -0x10)
        return zx.q(*(rax_3 + 0x10))

int32_t rcx_2 = *(rax + 0x34)
int64_t rsi

if (rcx_2 == 0)
    rsi = zx.q(*(rax + 8))
    int32_t rax_11 = (rsi + 1).d
    *(rax + 8) = rax_11
    
    if (rax_11 s> *(rax + 0xc))
        sub_1405c4e40(rax)
    
    sub_1405b2ba0(rax + 0x10, 0)
else
    rsi = sx.q(*(rax + 0x30))
    int64_t r8_2 = *rax
    int64_t rdx_2 = sx.q(*((rsi << 5) + r8_2 + 4))
    *(rax + 0x30) = rdx_2.d
    *(rax + 0x34) = rcx_2 - 1
    
    if (rcx_2 != 1)
        *((rdx_2 << 5) + r8_2) = 0xffffffff

void* rax_12 = *(rax + 0x20)
void* r8_3 = rax + 0x10

if (rax_12 != 0)
    r8_3 = rax_12

int32_t temp3
int32_t temp4
temp3:temp4 = sx.q(rsi.d)
void* r8_4 = r8_3 + (sx.q((temp4 + (temp3 & 0x1f)) s>> 5) << 2)
*r8_4 |= 1 << (rsi.b & 0x1f)
int64_t* rbx_2 = (sx.q(rsi.d) << 5) + *rax
*rbx_2 = *arg2
rbx_2[1].w = arg2[1].w
rbx_2[2] = 0
rbx_2[3].d = 0xffffffff
sub_1419375e0(rax, &arg_18, sub_140b21160(rbx_2, 0xa, 0), rbx_2, rsi.d, nullptr)
void* rbx_5 = (sx.q(arg_18) << 5) + *rax
uint64_t result = zx.q(data_143effe08(zx.q(arg_8), arg2))
*(rbx_5 + 0x10) = result
return result
