// 函数: sub_14207c2c0
// 地址: 0x14207c2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t var_20 = 0
int64_t rax = sx.q(arg1[0xf].d)
int32_t var_24 = 0

if (rax.d s> 0)
    int64_t rcx = 0
    int32_t* rax_1 = arg1[0xe]
    
    while (not(arg2 f<= *rax_1))
        rsi += 1
        rcx += 1
        rax_1 = &rax_1[5]
        
        if (rcx s>= rax)
            break

sub_141fd3f30(&arg1[0xe], rsi, 1)
int64_t rbx = sx.q(rsi) * 5
int64_t rcx_3 = arg1[0xe]
*(rcx_3 + (rbx << 2)) = arg2.o
*(rcx_3 + (rbx << 2) + 0x10) = 0
*(arg1[0xe] + (rbx << 2) + 0x10) = sub_14208b5a0(arg1, rsi)
return zx.q(rsi)
