// 函数: sub_140d3ac50
// 地址: 0x140d3ac50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = *(arg1 + 0x34)

if (r13 == 0)
    int64_t result
    result.b = 0
    return result

int64_t rax = *arg1
int32_t rbx = arg1[1].d
int32_t rcx = rbx
int64_t rbp
rbp.b = 0
int32_t i_1 = arg1[6].d
int32_t r12_1 = rbx - r13
int32_t arg_10 = rbx

if (i_1 != 0xffffffff)
    int32_t i
    
    do
        int64_t r9_2 = sx.q(i_1) * 0x60
        i = *(r9_2 + *arg1 + 4)
        
        if (i_1 s< r12_1)
            void* rax_3 = arg1[4]
            void* r14_1 = &arg1[2]
            int32_t rdx_1 = rol.d(1, rbx.b)
            void* r8_1 = r14_1
            
            if (rax_3 != 0)
                r8_1 = rax_3
            
            int32_t rax_4
            
            do
                rbx -= 1
                rdx_1 = ror.d(rdx_1, 1)
                rax_4 = rbx
                
                if (rbx s< 0)
                    rax_4 = rbx + 0x1f
            while ((*(r8_1 + (sx.q(rax_4 s>> 5) << 2)) & rdx_1) == 0)
            memmove(r9_2 + rax, sx.q(rbx) * 0x60 + rax, 0x60)
            void* rax_7 = *(r14_1 + 0x10)
            
            if (rax_7 != 0)
                r14_1 = rax_7
            
            int32_t i_2 = i_1
            
            if (i_1 s< 0)
                i_2 = i_1 + 0x1f
            
            void* rdx_5 = r14_1 + (sx.q(i_2 s>> 5) << 2)
            rbp.b = 1
            *rdx_5 |= 1 << (i_1.b & 0x1f)
        
        i_1 = i
    while (i != 0xffffffff)
    rbx = arg1[1].d
    rcx = arg_10

int32_t rax_12 = rbx - r12_1

if (rax_12 != r13)
    memmove(sx.q(r12_1) * 0x60 + *arg1, sx.q(rcx) * 0x60 + *arg1, (rax_12 - r13) * 0x60)
    rbx = arg1[1].d

arg1[1].d = rbx - r13
sub_140d3e820(arg1)
sub_140a876d0(&arg1[2], r12_1, r13)
*(arg1 + 0x34) = 0
arg1[6].d = 0xffffffff
return zx.q(rbp.b)
