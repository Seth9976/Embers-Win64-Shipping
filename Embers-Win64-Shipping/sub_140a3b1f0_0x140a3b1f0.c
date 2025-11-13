// 函数: sub_140a3b1f0
// 地址: 0x140a3b1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b4c2a0(arg1)
*arg1 = &data_142e5de88
arg1[0x12] = 0
arg1[0x13] = 0
bool cond:0 = arg3 == 0

if (arg3 != 0)
    int16_t temp1_1 = *arg3
    cond:0 = temp1_1 == 0
    
    if (temp1_1 != 0)
        int64_t rbx_1 = -1
        
        do
            rbx_1 += 1
        while (arg3[rbx_1] != 0)
        
        int32_t rdx = 0
        
        if (rbx_1.d + 1 s> 0)
            sub_1405947f0(&arg1[0x12], rbx_1.d + 1)
            rdx = arg1[0x13].d
        
        int32_t rax_1 = rdx + rbx_1.d + 1
        arg1[0x13].d = rax_1
        
        if (rax_1 s> *(arg1 + 0x9c))
            sub_140594770(&arg1[0x12])
        
        int64_t r8 = sx.q(rbx_1.d + 1)
        cond:0 = r8 == neg.q(r8)
        memcpy(arg1[0x12], arg3, r8.d * 2)

uint64_t r10 = zx.q(arg5)
uint64_t rflags
int32_t rcx_3
rcx_3, rflags = _bit_scan_reverse(r10)
arg1[0x14] = arg4
arg1[0x15] = 0
arg1[0x16] = 0
arg1[0x17] = arg2
__builtin_memset(&arg1[0x18], 0, 0x18)
uint64_t rcx_4

if (cond:0)
    rcx_4 = 0x40
else
    rcx_4 = zx.q(0x3f - rcx_3)

int64_t rcx_6 = rcx_4 << 0x39 s>> 0x3f
uint64_t rflags_1
char r10_1
r10_1, rflags_1 = _bit_scan_reverse(r10 - 1)
char rax_4

if (rcx_6 == 0)
    rax_4 = 0x40
else
    rax_4 = 0x3f - r10_1

rcx_6.b = not.b(rcx_6.b)
rcx_6.b &= 0x40 - rax_4
int64_t rdx_4 = 1 << rcx_6.b
arg1[0x1b] = rdx_4

if (rdx_4 s> arg1[0x1a])
    sub_140a4fbe0(&arg1[0x18], rdx_4)

rdx_4.b = 1
(*arg1)[0x14](arg1, rdx_4)
int64_t rdx_5
rdx_5.b = 1
(*arg1)[0x1b](arg1, rdx_5)
return arg1
