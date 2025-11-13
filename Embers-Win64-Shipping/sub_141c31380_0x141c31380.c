// 函数: sub_141c31380
// 地址: 0x141c31380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = arg2
int32_t rbx = 0
__builtin_memset(&arg1[4], 0, 0x40)
int32_t rax = 1 << (*arg1).b
arg1[1] = rax
int32_t rax_1 = rax * 2
arg1[2] = rax_1
int32_t rax_2 = rax_1 + arg1[0x12]
arg1[0x12] = rax_2

if (rax_2 s> arg1[0x13])
    sub_140775270(&arg1[0x10])

sub_141c39290(arg1)
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg1[1])
arg1[0xa] = 0
int64_t rbp = sx.q((temp1 + (temp0 & 0xf)) s>> 4)

if (arg1[0xb] s<= 0xffffffff)
    sub_1405c5570(&arg1[8], 0)

int32_t rax_7 = arg1[0xa] + rbp.d
arg1[0xa] = rax_7

if (rax_7 s> arg1[0xb])
    sub_1405a4d70(&arg1[8])

int32_t rax_8 = arg1[1]
char rax_9

if (rax_8 != 0)
    uint64_t rflags_1
    char temp0_1
    temp0_1, rflags_1 = _bit_scan_forward(rax_8)
    rax_9 = temp0_1
else
    rax_9 = 0x20

if (rbp.d s> 0)
    int64_t r8_1 = 0
    
    while (r8_1 s< rbp)
        uint32_t r9_4 = (zx.d(*(zx.q((zx.q(rbx) u>> 8).b) + &data_143205280))
            | zx.d(*(zx.q(rbx.b) + &data_143205280)) << 8) << 8
            | zx.d(*(zx.q((zx.q(rbx) u>> 0x10).b) + &data_143205280))
        uint32_t r9_7 =
            (r9_4 << 8 | zx.d(*((zx.q(rbx) u>> 0x18) + &data_143205280))) u>> (0x24 - rax_9)
        
        if (rbx == r9_7)
            uint32_t arg_c = r9_7
            *(*(arg1 + 0x20) + (r8_1 << 3)) = rbx.q
            r8_1 += 1
        else if (rbx s< r9_7)
            uint32_t arg_1c = r9_7
            *(*(arg1 + 0x20) + (r8_1 << 3)) = rbx.q
            int32_t arg_24 = rbx
            *(*(arg1 + 0x20) + (r8_1 << 3) + 8) = r9_7.q
            r8_1 += 2
        
        rbx += 1
        
        if (rbx s>= rbp.d)
            break

sub_141c389b0(arg1)
return arg1
