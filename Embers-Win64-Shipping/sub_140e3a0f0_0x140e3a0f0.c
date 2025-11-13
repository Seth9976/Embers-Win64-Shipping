// 函数: sub_140e3a0f0
// 地址: 0x140e3a0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax
int64_t rcx
void* const r8
int64_t r9

if (arg2 != 0)
    rax = 0x84c
    rcx = 0x104c
    r8 = 0x154c
    r9 = 0x174c
else
    rax = 0x44c
    rcx = 0xc4c
    r8 = 0x144c
    r9 = 0x164c

int64_t rax_1 = sx.q(arg2)
int32_t* r12 = arg1 + rcx
int32_t rcx_1 = sx.d(*(arg1 + 0x1cc))
void* r15 = arg1 + r9
int32_t r8_1 = *(arg1 + (rax_1 << 2) + 0x2c90)
int32_t i_2 = rcx_1 - r8_1
*(arg1 + (rax_1 << 2) + 0x2c90) = rcx_1
int32_t i_3 = i_2 - 1

if (rcx_1 - r8_1 s>= 0)
    i_3 = i_2

int32_t i = r8_1 - rcx_1

if (i_2 s>= 0)
    i = i_2

int32_t rbx = 0

for (; i != 0; i s>>= 1)
    rbx += 1

int64_t rax_2 = sx.q(rbx)
sub_140e42710(arg1, *(arg1 + rax + (rax_2 << 2)), zx.d(*(rax_2 + r8 + arg1)))

if (rbx != 0)
    sub_140e42710(arg1, ((1 << rbx.b) - 1) & i_3, rbx)

int64_t result = 0x3f
void* r13 = arg1 + 0x1ce
int64_t result_1 = 0x3f
int32_t rsi = 0
int64_t i_1

do
    int32_t rbp_1 = sx.d(*r13)
    int32_t rcx_5 = rbp_1
    
    if (rbp_1.w != 0)
        if (rsi s>= 0x10)
            uint64_t j_2 = zx.q(rsi) u>> 4
            rsi += neg.d(j_2.d) << 4
            uint64_t j
            
            do
                sub_140e42710(arg1, r12[0xf0], zx.d(*(r15 + 0xf0)))
                j = j_2
                j_2 -= 1
            while (j != 1)
            rcx_5 = sx.d(rbp_1.w)
        
        int32_t rax_6 = rcx_5 - 1
        int32_t rdi = 1
        
        if (rbp_1.w s>= 0)
            rax_6 = rcx_5
        
        int32_t rax_8 = neg.d(rcx_5)
        int32_t rbx_2 = 2
        
        if (rbp_1.w s>= 0)
            rax_8 = rcx_5
        
        for (int32_t j_1 = rax_8 s>> 1; j_1 != 0; j_1 s>>= 1)
            rdi += 1
            rbx_2 = rol.d(rbx_2, 1)
        
        int64_t rax_10 = sx.q(rdi + (rsi << 4))
        sub_140e42710(arg1, r12[rax_10], zx.d(*(rax_10 + r15)))
        sub_140e42710(arg1, (rbx_2 - 1) & rax_6, rdi)
        result = result_1
        rsi = 0
    else
        rsi += 1
    
    r13 += 2
    i_1 = result
    result -= 1
    result_1 = result
while (i_1 != 1)

if (rsi == 0)
    return result

return sub_140e42710(arg1, *r12, zx.d(*r15))
