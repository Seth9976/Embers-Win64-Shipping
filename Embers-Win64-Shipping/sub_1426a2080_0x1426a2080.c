// 函数: sub_1426a2080
// 地址: 0x1426a2080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x34)
int64_t rbp

if (rcx == 0)
    rbp = zx.q(arg1[1].d)
    int32_t rax_1 = (rbp + 1).d
    arg1[1].d = rax_1
    
    if (rax_1 s> *(arg1 + 0xc))
        sub_1405c4d20(arg1)
    
    sub_1405b2ba0(&arg1[2], 0)
else
    rbp = sx.q(arg1[6].d)
    int64_t r9_1 = *arg1
    int64_t r8 = sx.q(*(r9_1 + rbp * 0x14 + 4))
    arg1[6].d = r8.d
    *(arg1 + 0x34) = rcx - 1
    
    if (rcx != 1)
        *(r9_1 + r8 * 0x14) = 0xffffffff

void* rax_2 = arg1[4]
void* r9_2 = &arg1[2]

if (rax_2 != 0)
    r9_2 = rax_2

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbp.d)
int64_t r8_1 = sx.q((temp1 + (temp0 & 0x1f)) s>> 5)
*(r9_2 + (r8_1 << 2)) |= 1 << (rbp.b & 0x1f)
int64_t* rdi = *arg1 + sx.q(rbp.d) * 0x14
*rdi = *arg2
rdi[1].d = *arg3
*(rdi + 0xc) = 0xffffffff
int64_t rbx_1 = *rdi
int32_t arg_8
sub_1426af620(arg1, &arg_8, (rbx_1 u>> 0x20).d + sub_140b5ead0(rbx_1.d), rdi, rbp.d, nullptr)
return *arg1 + sx.q(arg_8) * 0x14 + 8
