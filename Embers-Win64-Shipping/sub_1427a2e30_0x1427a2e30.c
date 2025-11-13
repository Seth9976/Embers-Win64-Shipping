// 函数: sub_1427a2e30
// 地址: 0x1427a2e30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg1[0xd]
int64_t rbx = sx.q(arg1[0xe].d)
int64_t rbp = 0
uint64_t r15_1 = rbx << 3 u>> 3

if (r14 u> &r14[rbx])
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t rbx_1 = *r14
        int64_t* rax_2 = (*(*arg1 + 0x280))(arg1)
        int64_t r8_1 = *rax_2
        (*(r8_1 + 0x288))(rax_2, rbx_1, r8_1)
        rbp += 1
        r14 = &r14[1]
    while (rbp != r15_1)
    
    rbx = zx.q(arg1[0xe].d)

int32_t temp0 = rbx.d

if (temp0 s< 0)
    arg1[0xe].d = 0
    
    if (*(arg1 + 0x74) s< 0)
        sub_1405a4d70(&arg1[0xd])
    
    memset(arg1[0xd] + (sx.q(rbx.d) << 3), 0, sx.q(neg.d(rbx.d)) << 3)
else if (temp0 s> 0 && rbx.d != 0)
    arg1[0xe].d = 0
    sub_1405c53d0(&arg1[0xd])

int64_t rsi = sx.q(arg1[0xc].d)
int32_t temp1 = rsi.d

if (temp1 s< 0)
    arg1[0xc].d = 0
    
    if (*(arg1 + 0x64) s< 0)
        sub_1405a4d70(&arg1[0xb])
    
    memset(arg1[0xb] + (rsi << 3), 0, sx.q(neg.d(rsi.d)) << 3)
else if (temp1 s> 0 && rsi.d != 0)
    arg1[0xc].d = 0
    sub_1405c53d0(&arg1[0xb])

int64_t result = (*(*arg1 + 0x2b8))(arg1)
arg1[0xa] = 0
return result
