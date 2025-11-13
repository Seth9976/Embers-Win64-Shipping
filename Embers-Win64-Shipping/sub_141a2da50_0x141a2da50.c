// 函数: sub_141a2da50
// 地址: 0x141a2da50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = sx.q(arg1[1].d)
int64_t* r8 = arg1

if (r9.d == 0)
    return 0

int32_t* rdx = *arg1
int32_t r12 = 0
int32_t rdi = 0
int64_t rbp

if (((arg2[5] ^ rdx[5]) | (arg2[4] ^ rdx[4]) | (arg2[3] ^ rdx[3]) | (arg2[2] ^ rdx[2])) != 0
        || *arg2 != *rdx)
    rbp.b = 1
else
    rbp.b = 0

int64_t rbx = 0

do
    int64_t r10_1 = sx.q(rdi)
    rbx += 1
    rdi += 1
    
    if (rbx s< r9)
        int32_t* r8_1 = *r8 + rbx * 0x24
        void* rdx_1 = &r8_1[4]
        
        do
            int32_t rcx_10 = (*(rdx_1 - 8) ^ arg2[2]) | (*(rdx_1 - 4) ^ arg2[3])
                | (*(rdx_1 + 4) ^ arg2[5]) | (arg2[4] ^ *rdx_1)
            int32_t rax_14
            
            if (rcx_10 != 0 || *arg2 != *r8_1)
                rax_14.b = 1
            else
                rax_14.b = 0
            
            if (rbp.b != rax_14.b)
                break
            
            rdi += 1
            rbx += 1
            r8_1 = &r8_1[9]
            rdx_1 += 0x24
        while (rbx s< r9)
        
        r8 = arg1
    
    int32_t rsi_3 = rdi - r10_1.d
    
    if (rbp.b != 0)
        if (r12 != r10_1.d)
            int64_t r9_2 = *r8
            memmove(r9_2 + sx.q(r12) * 0x24, r9_2 + r10_1 * 0x24, rsi_3 * 0x24)
        
        r12 += rsi_3
    
    r8 = arg1
    rbp.b ^= 1
while (rbx s< r9)

r8[1].d = r12
return zx.q(r9.d - r12)
