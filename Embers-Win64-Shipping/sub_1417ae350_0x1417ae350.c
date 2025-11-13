// 函数: sub_1417ae350
// 地址: 0x1417ae350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)

if (rbx.d s< arg1[3].d)
    int64_t rax_1 = arg1[2]
    int32_t* rcx = rax_1 + (rbx << 3)
    
    if (*(rax_1 + (rbx << 3) + 4) != 0 && rcx != 0)
        return sx.q(*rcx) * 0x30 + *arg1

int64_t rbp = sx.q(arg1[1].d)
int32_t rax_6 = (rbp + 1).d
arg1[1].d = rax_6

if (rax_6 s> *(arg1 + 0xc))
    sub_1405c4f50(arg1)

int64_t rax_7 = *arg1
int64_t r12_2 = rbp * 0x30
*(r12_2 + rax_7) = 0
*(r12_2 + rax_7 + 8) = 0
*(r12_2 + rax_7 + 0x10) = 0xffffffff
__builtin_memset(r12_2 + rax_7 + 0x14, 0, 0x11)
*(r12_2 + rax_7 + 0x2a) = 0
int64_t r15 = sx.q(arg1[3].d)

if (rbx.d s>= r15.d)
    int32_t i_1 = rbx.d - r15.d + 1
    int32_t rax_8 = r15.d + i_1
    arg1[3].d = rax_8
    
    if (rax_8 s> *(arg1 + 0x1c))
        sub_1405a4d70(&arg1[2])
    
    if (i_1 != 0)
        char* rax_11 = arg1[2] + (r15 << 3) + 4
        int32_t i
        
        do
            *rax_11 = 0
            rax_11 = &rax_11[8]
            i = i_1
            i_1 -= 1
        while (i != 1)

int64_t rcx_3 = rbx << 3
*(arg1[2] + rcx_3 + 4) = 1
*(rcx_3 + arg1[2]) = rbp.d
return *arg1 + r12_2
