// 函数: sub_1421810b0
// 地址: 0x1421810b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void arg_8
sub_141cccd00(arg1, *sub_140b58260(&arg_8, u"StatelessConnectHandlerComponent", 1))
arg1[5] = 0
*arg1 = &data_1432e5060
int64_t* rcx_2 = &arg1[0x1a]
__builtin_memset(&arg1[6], 0, 0x20)
int64_t rdx
rdx.b = 1
arg1[0xa].b = 0xff
__builtin_memset(&arg1[0xb], 0, 0x39)
__builtin_memset(&arg1[0x13], 0, 0x31)
arg1[0x1c] = 0
arg1[0x1d].d = 0
*(arg1 + 0xec) = 0x80
int64_t* rax_1 = arg1[0x1c]

if (rax_1 != 0)
    rcx_2 = rax_1

*rcx_2 = 0
rcx_2[1] = 0
sub_141ccf520(arg1, rdx.b)
arg1[3].b = 1
int64_t rbx = data_143f4d390
int64_t rcx_4

if (data_143de5480 == 0)
    rcx_4 = 0
else
    uint32_t rax_2
    rax_2, rdx = GetCurrentThreadId()
    rcx_4.b = rax_2 != data_143de5470

uint64_t r15 = 0
int64_t* rcx_6 = (rcx_4 << 4) + rbx
uint64_t var_38 = 0
int32_t rbx_1 = rcx_6[1].d
int64_t rdi = *rcx_6

if (rbx_1 != 0)
    sub_1405a4c70(&var_38, rbx_1, 0)
    r15 = var_38
    memcpy(r15, rdi, rbx_1 * 2)

if (rbx_1 s> 1 && (rbx_1 == 0 || rbx_1 - 1 s<= 0x20))
    rdi.b = 1
    int32_t rbp_1 = 0
    uint64_t rsi_1 = r15
    
    while (true)
        int32_t rax_4 = rbx_1 - 1
        
        if (rbx_1 == 0)
            rax_4 = 0
        
        if (rbp_1 s>= rax_4)
            if (rdi.b != 0)
                break
        else if (rdi.b != 0)
            int16_t rax_5 = *rsi_1
            
            if (rax_5 == 0x30)
                rax_5 = 0x30
                rdi.b = 1
            else if (rax_5 == 0x31)
                rdi.b = 1
            else
                rdi.b = 0
            
            rdx.b = rax_5 != 0x30
            sub_1405b2ba0(&arg1[0x1a], rdx.b)
            rbp_1 += 1
            rsi_1 += 2
            continue
        
        sub_14059a8e0(&arg1[0x1a], 0)
        break

if (r15 != 0)
    sub_140a74f90(r15)

return arg1
