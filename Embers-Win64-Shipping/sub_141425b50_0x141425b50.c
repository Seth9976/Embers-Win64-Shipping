// 函数: sub_141425b50
// 地址: 0x141425b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (arg1[1].d != *(arg1 + 0x34))
    void* r8_1 = &arg1[7]
    void* r9_1 = *arg1
    void* rdx = *(r8_1 + 8)
    int64_t r10_1 = rbx * 0x70
    int64_t rcx_1 = sx.q(arg1[9].d - 1) & sx.q(*(r10_1 + r9_1 + 0x6c))
    
    if (rdx != 0)
        r8_1 = rdx
    
    int32_t i = *(r8_1 + (rcx_1 << 2))
    void* rdx_1 = r8_1 + (rcx_1 << 2)
    
    for (; i != 0xffffffff; i = *rdx_1)
        if (i == rbx.d)
            *rdx_1 = *(r10_1 + r9_1 + 0x68)
            break
        
        rdx_1 = r9_1 + 0x68 + sx.q(i) * 0x70

int64_t i_2 = 3
int64_t* rsi_2 = *arg1 + 0x38 + rbx * 0x70
int64_t i_1

do
    rsi_2 -= 0x10
    sub_1413de930(rsi_2)
    i_1 = i_2
    i_2 -= 1
while (i_1 != 1)
void* r9_2 = &arg1[2]

if (*(arg1 + 0x34) != i_2.d)
    *(sx.q(arg1[6].d) * 0x70 + *arg1) = rbx.d

int32_t* rcx_6 = *arg1
int32_t rax_8 = -1
rcx_6[rbx * 0x1c] = 0xffffffff

if (*(arg1 + 0x34) s> 0)
    rax_8 = arg1[6].d

rcx_6[rbx * 0x1c + 1] = rax_8
*(arg1 + 0x34) += 1
arg1[6].d = rbx.d
void* rax_9 = *(r9_2 + 0x10)

if (rax_9 != 0)
    r9_2 = rax_9

int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(rbx.d)
int32_t result = (temp2 + (temp1 & 0x1f)) s>> 5
int64_t result_1 = sx.q(result)
*(r9_2 + (result_1 << 2)) &= not.d(rol.d(1, rbx.b))
return result
