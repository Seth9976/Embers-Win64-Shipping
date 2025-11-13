// 函数: sub_14185e8a0
// 地址: 0x14185e8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[1].d

if (rsi == 0)
    return 0

void* rax_1 = *(arg2 + 0x10)
int32_t rbx = 0
int32_t rbp = 0
void* rcx = arg2 + 0x20

if (rax_1 != 0)
    rcx = rax_1

int32_t arg_8 = 0
int64_t r14
r14.b = (*arg2)((*(*rcx + 8))(rcx), *arg1) == 0

do
    int32_t r15_1 = rbx
    rbx += 1
    
    if (rbx s< rsi)
        do
            void* rax_5 = *(arg2 + 0x10)
            void* rcx_2 = arg2 + 0x20
            
            if (rax_5 != 0)
                rcx_2 = rax_5
            
            int32_t rcx_4
            rcx_4.b = (*arg2)((*(*rcx_2 + 8))(rcx_2), (sx.q(rbx) << 4) + *arg1) == 0
            
            if (zx.d(r14.b) != rcx_4)
                break
            
            rbx += 1
        while (rbx s< rsi)
        
        rbp = arg_8
    
    int32_t rdi_3 = rbx - r15_1
    
    if (r14.b != 0)
        if (rbp != r15_1)
            memmove((sx.q(rbp) << 4) + *arg1, (sx.q(r15_1) << 4) + *arg1, rdi_3 << 4)
        
        rbp += rdi_3
        arg_8 = rbp
    
    r14.b ^= 1
while (rbx s< rsi)

arg1[1].d = rbp
return zx.q(rsi - rbp)
