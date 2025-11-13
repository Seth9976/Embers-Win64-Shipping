// 函数: sub_141b1f870
// 地址: 0x141b1f870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[9].d)

if (rbx.d == 0)
    return 

uint64_t i_1 = arg1[8]
int64_t* i = arg1
int32_t i_2 = -0x80000000

if (i_1 != 0)
    i = i_1

for (; i != &i[rbx * 2]; i = &i[2])
    void* rcx = *i
    i_1.w = *(rcx + 0xc9) u>> 8
    
    if (i_1.b == 0 && (*(i + 0xc) & 3) == 0)
        i_1 = zx.q(*(rcx + 0xac))
        
        if (i_2 s>= i_1.d)
            i_1 = zx.q(i_2)
        
        i_2 = i_1.d

int32_t rbx_1 = rbx.d - 1

if (rbx.d - 1 s< 0)
    return 

int64_t rsi_2 = sx.q(rbx_1) << 4
int64_t r15_1 = rsi_2
int64_t r14_2 = sx.q(rbx_1 + 1) << 4
int32_t temp1_1

do
    int64_t* rax_1 = arg1[8]
    int64_t* rcx_1 = arg1
    
    if (rax_1 != 0)
        rcx_1 = rax_1
    
    i_1 = *(rsi_2 + rcx_1)
    
    if (*(i_1 + 0xac) != i_2)
        i_1.w = *(i_1 + 0xc9) u>> 8
        
        if (i_1.b == 0 && (*(rsi_2 + rcx_1 + 0xc) & 3) == 0)
            int32_t rdx_1 = arg1[9].d
            int32_t rax_3 = rdx_1 - rbx_1
            
            if (rax_3 != 1)
                memmove(rcx_1 + r15_1, r14_2 + rcx_1, (rax_3 - 1) << 4)
                rdx_1 = arg1[9].d
            
            arg1[9].d = rdx_1 - 1
    
    r14_2 -= 0x10
    r15_1 -= 0x10
    rsi_2 -= 0x10
    temp1_1 = rbx_1
    rbx_1 -= 1
while (temp1_1 - 1 s>= 0)
