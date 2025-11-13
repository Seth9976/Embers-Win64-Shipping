// 函数: sub_1418e28b0
// 地址: 0x1418e28b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg2 + 0x48))
int64_t rbx = sx.q(arg1[1].d)
int32_t rax = (rbx + rdi).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405a4f90(arg1)

memset((rbx << 4) + *arg1, 0, rdi << 4)
int32_t rcx_3 = *(arg2 + 0x48)
int32_t rdi_1 = 0

if (rcx_3 s> 0)
    int64_t rbx_1 = 0
    
    do
        int64_t* rcx_5 = *arg1 + rbx_1
        int32_t rax_3 = *(*(arg2 + 0x40) + rbx_1) + rcx_5[1].d
        rcx_5[1].d = rax_3
        
        if (rax_3 s> *(rcx_5 + 0xc))
            sub_1405daba0(rcx_5)
        
        rcx_3 = *(arg2 + 0x48)
        rdi_1 += 1
        rbx_1 += 0x10
    while (rdi_1 s< rcx_3)

*arg3 = (1 << rcx_3.b) - 1
void* result = arg2 + 0x70

if (&arg1[2] != result)
    int64_t rdi_2 = sx.q(*(result + 8))
    int32_t r8_2 = *(arg1 + 0x1c)
    int64_t rbp_1 = *result
    arg1[3].d = rdi_2.d
    
    if (rdi_2.d != 0 || r8_2 != 0)
        sub_1418ecac0(&arg1[2], rdi_2.d, r8_2)
        result = memcpy(arg1[2], rbp_1, (rdi_2.d + (rdi_2 << 2).d) * 2)
    else
        *(arg1 + 0x1c) = rdi_2.d

if (&arg1[4] == arg2 + 0x60)
    return result

int64_t rdi_3 = sx.q(*(arg2 + 0x68))
int64_t rsi_2 = *(arg2 + 0x60)
int32_t r8_5 = *(arg1 + 0x2c)
arg1[5].d = rdi_3.d

if (rdi_3.d == 0 && r8_5 == 0)
    *(arg1 + 0x2c) = rdi_3.d
    return result

sub_1405c4a90(&arg1[4], rdi_3.d, r8_5)
return memcpy(arg1[4], rsi_2, (rdi_3 << 2).d) __tailcall
