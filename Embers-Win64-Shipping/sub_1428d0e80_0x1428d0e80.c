// 函数: sub_1428d0e80
// 地址: 0x1428d0e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0x20
__chkstk(0x20)
int64_t r10 = arg4
int32_t* r15 = arg6
int64_t i = arg3
char* rsi = arg2
char* r14 = arg1
int32_t rbx = *r15

if (arg7 == 0)
    if (rbx != 0)
        while (i != 0)
            char rdx_4 = *r14
            i -= 1
            uint64_t rcx_6 = zx.q(rbx)
            r14 = &r14[1]
            result.b = *(rcx_6 + arg5) ^ rdx_4
            *rsi = result.b
            rsi = &rsi[1]
            *(rcx_6 + arg5) = rdx_4
            rbx = (rbx + 1) & 0xf
            
            if (rbx == 0)
                break
    
    if (i u>= 0x10)
        uint64_t i_6 = i u>> 4
        void* r15_4 = rsi - arg5
        int64_t i_5 = i - i_6 * 0x10
        uint64_t i_1
        
        do
            result = arg8(arg5, arg5, arg4)
            
            if (rbx u< 0x10)
                int64_t* r8_4 = zx.q(rbx) + arg5
                uint64_t j_3 = zx.q(((0xf - rbx) u>> 3) + 1)
                uint64_t j
                
                do
                    int64_t rax_7 = *r8_4
                    int64_t* rcx_8 = r15_4 + r8_4
                    int64_t rdx_6 = *(rcx_8 + r14 - rsi)
                    r8_4 = &r8_4[1]
                    result = rax_7 ^ rdx_6
                    *rcx_8 = result
                    r8_4[-1] = rdx_6
                    j = j_3
                    j_3 -= 1
                while (j != 1)
            
            rsi = &rsi[0x10]
            r15_4 += 0x10
            r14 = &r14[0x10]
            rbx = 0
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
        i = i_5
        r10 = arg4
        r15 = arg6
    
    if (i != 0)
        arg8(arg5, arg5, r10)
        int64_t i_2
        
        do
            char* rcx_10 = zx.q(rbx)
            rbx += 1
            char rdx_8 = *(rcx_10 + r14)
            result.b = rcx_10[arg5] ^ rdx_8
            *(rcx_10 + rsi) = result.b
            rcx_10[arg5] = rdx_8
            i_2 = i
            i -= 1
        while (i_2 != 1)
else
    if (rbx != 0)
        while (i != 0)
            char rax = *r14
            i -= 1
            uint64_t rcx = zx.q(rbx)
            r14 = &r14[1]
            *(rcx + arg5) ^= rax
            result = zx.q(*(rcx + arg5))
            *rsi = result.b
            rsi = &rsi[1]
            rbx = (rbx + 1) & 0xf
            
            if (rbx == 0)
                break
    
    int64_t r9 = arg8
    
    if (i u>= 0x10)
        uint64_t i_7 = i u>> 4
        uint64_t* r15_2 = rsi - arg5
        void* r12_2 = r14 - arg5
        i -= i_7 * 0x10
        uint64_t rax_3 = i_7 << 4
        r14 = &r14[rax_3]
        uint64_t i_3
        
        do
            result = r9(arg5, arg5, arg4)
            
            if (rbx u< 0x10)
                int64_t* rcx_3 = zx.q(rbx) + arg5
                uint64_t j_2 = zx.q(((0xf - rbx) u>> 3) + 1)
                uint64_t j_1
                
                do
                    *rcx_3 ^= *(r12_2 + rcx_3)
                    result = *rcx_3
                    *(r15_2 + rcx_3) = result
                    rcx_3 = &rcx_3[1]
                    j_1 = j_2
                    j_2 -= 1
                while (j_1 != 1)
            
            r9 = arg8
            r15_2 = &r15_2[2]
            r12_2 += 0x10
            rbx = 0
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
        rsi = &rsi[rax_3]
        r10 = arg4
        r15 = arg6
    
    if (i != 0)
        r9(arg5, arg5, r10)
        int64_t i_4
        
        do
            char* rcx_5 = zx.q(rbx)
            rbx += 1
            rcx_5[arg5] ^= *(rcx_5 + r14)
            result = zx.q(rcx_5[arg5])
            *(rcx_5 + rsi) = result.b
            i_4 = i
            i -= 1
        while (i_4 != 1)

*r15 = rbx
return result
