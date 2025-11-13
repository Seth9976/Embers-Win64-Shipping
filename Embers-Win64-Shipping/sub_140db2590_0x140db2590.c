// 函数: sub_140db2590
// 地址: 0x140db2590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg4

if (*(arg4 + 0x21) == 0)
    int64_t rax
    rax.b = 0
    return rax

int64_t rcx = *arg1
int32_t rbp = 0
int32_t r12 = 0
int64_t r13 = sx.q(arg5)
void* r14 = r13 * 0x68
int32_t rbx = (r13 + 1).d

while (true)
    int64_t** r15_1 = r14 + rcx
    void var_48
    sub_140da9d40(arg2, &var_48, r15_1, &data_143e20dd8)
    int32_t rcx_2 = sx.d(r15_1[3].w)
    r12 += rcx_2
    int16_t var_46
    rbp += sx.d(var_46) + rcx_2
    
    if (rbx s< 0)
        break
    
    if (rbx s>= arg1[1].d)
        break
    
    rcx = *arg1
    r14 += 0x68
    
    if (*(r15_1 + 0x14) != *(r14 + rcx + 0x14))
        break
    
    rbx += 1

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(rbp)
int32_t r8_1 = *arg6

if (*(rdi + 0x22) u<= 1)
    rbp = (temp1 - temp0) s>> 1

if (arg3 s>= rbp + r8_1)
    *arg6 = r8_1 + r12
    int32_t rax_11
    rax_11.b = 0
    return rax_11

if (*(rdi + 0x23) != 0 && arg5 - 1 s>= 0 && arg5 - 1 s< arg1[1].d)
    rdi = sx.q(arg5 - 1) * 0x68 + *arg1

*arg7 = rdi
void** rax_10
rax_10.b = 1
return rax_10
