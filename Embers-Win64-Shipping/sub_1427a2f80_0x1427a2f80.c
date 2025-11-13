// 函数: sub_1427a2f80
// 地址: 0x1427a2f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1[0x20]
int64_t rbx = sx.q(arg1[0x21].d)
int64_t rbp = 0
void* result = &r14[rbx]
uint64_t r15_1 = rbx << 3 u>> 3

if (r14 u> result)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t rbx_1 = *r14
        int64_t* rax_1 = (*(*arg1 + 0x280))(arg1)
        int64_t r8_1 = *rax_1
        result = (*(r8_1 + 0x288))(rax_1, rbx_1, r8_1)
        rbp += 1
        r14 = &r14[1]
    while (rbp != r15_1)
    
    rbx = zx.q(arg1[0x21].d)

int32_t temp0 = rbx.d

if (temp0 s< 0)
    arg1[0x21].d = 0
    
    if (*(arg1 + 0x10c) s< 0)
        sub_1405a4d70(&arg1[0x20])
    
    result = memset(arg1[0x20] + (sx.q(rbx.d) << 3), 0, sx.q(neg.d(rbx.d)) << 3)
else if (temp0 s> 0 && rbx.d != 0)
    arg1[0x21].d = 0
    result = sub_1405c53d0(&arg1[0x20])

int64_t rsi_1 = sx.q(arg1[0x1d].d)
int32_t temp1 = rsi_1.d

if (temp1 s< 0)
    arg1[0x1d].d = 0
    
    if (*(arg1 + 0xec) s< 0)
        sub_1405a4d70(&arg1[0x1c])
    
    result = memset(arg1[0x1c] + (rsi_1 << 3), 0, sx.q(neg.d(rsi_1.d)) << 3)
else if (temp1 s> 0 && rsi_1.d != 0)
    arg1[0x1d].d = 0
    result = sub_1405c53d0(&arg1[0x1c])

int64_t rsi_2 = sx.q(arg1[0x1f].d)
int32_t temp2 = rsi_2.d

if (temp2 s< 0)
    arg1[0x1f].d = 0
    
    if (*(arg1 + 0xfc) s< 0)
        sub_1405a4d70(&arg1[0x1e])
    
    result = memset(arg1[0x1e] + (rsi_2 << 3), 0, sx.q(neg.d(rsi_2.d)) << 3)
else if (temp2 s> 0 && rsi_2.d != 0)
    arg1[0x1f].d = 0
    result = sub_1405c53d0(&arg1[0x1e])

__builtin_memset(&arg1[0x24], 0, 0x40)
arg1[8] = 0
return result
