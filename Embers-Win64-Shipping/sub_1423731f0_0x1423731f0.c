// 函数: sub_1423731f0
// 地址: 0x1423731f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg2)
sub_142361fb0(arg1)
sub_142361f00(arg1)
int32_t rdx = arg1[0xa].d
int64_t rdi = sx.q((rbp + 1).d)
int32_t rcx_2 = rdx - rbp.d

if (rcx_2 != 1)
    int64_t rax_1 = arg1[9]
    memmove(rax_1 + (rbp << 2), rax_1 + (rdi << 2), (rcx_2 - 1) << 2)
    rdx = arg1[0xa].d

arg1[0xa].d = rdx - 1
sub_1405dac90(&arg1[9])
int32_t rax_3 = arg1[0xc].d
int32_t rcx_7 = rax_3 - rbp.d

if (rcx_7 != 1)
    int64_t rax_4 = arg1[0xb]
    memmove(rax_4 + rbp, rax_4 + rdi, rcx_7 - 1)
    rax_3 = arg1[0xc].d

arg1[0xc].d = rax_3 - 1
sub_1405dac10(&arg1[0xb])
int32_t result = (*(*arg1 + 0x2b0))(arg1)

if (arg1[6].d s<= result)
    return result

int32_t rax_7 = arg1[6].d
int32_t rcx_13 = rax_7 - rbp.d

if (rcx_13 != 1)
    int64_t rax_8 = arg1[5]
    memmove(rax_8 + (rbp << 3), rax_8 + (rdi << 3), (rcx_13 - 1) << 3)
    rax_7 = arg1[6].d

arg1[6].d = rax_7 - 1
return sub_1405c53d0(&arg1[5])
