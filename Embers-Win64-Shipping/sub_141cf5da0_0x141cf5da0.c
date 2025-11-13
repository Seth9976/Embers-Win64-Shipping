// 函数: sub_141cf5da0
// 地址: 0x141cf5da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(arg1[1].d)
int32_t* rbx = arg2

if (r8.d == 0)
    return 0

void* rdx = *arg1
int32_t rbp = 0
int32_t r15 = 0
int32_t rcx_4 = (*(rdx + 0x30) ^ rbx[3]) | (*(rdx + 0x28) ^ rbx[1]) | (*(rdx + 0x2c) ^ rbx[2])
    | (*(rdx + 0x24) ^ *rbx)
int64_t r12
r12.b = rcx_4 != 0
int64_t rsi = 0

do
    int64_t r10_1 = sx.q(rbp)
    rsi += 1
    rbp += 1
    
    if (rsi s< r8)
        void* rdx_3 = *arg1 + 0x2c + rsi * 0x38
        
        do
            int32_t rax_13
            rax_13.b = ((*(rdx_3 - 8) ^ *rbx) | (*(rdx_3 - 4) ^ rbx[1]) | (*(rdx_3 + 4) ^ rbx[3])
                | (*rdx_3 ^ rbx[2])) != 0
            
            if (zx.d(r12.b) != rax_13)
                break
            
            rbp += 1
            rsi += 1
            rdx_3 += 0x38
        while (rsi s< r8)
    
    int32_t i_1 = rbp - r10_1.d
    
    if (r12.b == 0)
        void* rbx_3 = r10_1 * 0x38 + *arg1
        
        if (i_1 != 0)
            int32_t i
            
            do
                int64_t rcx_13 = *(rbx_3 + 0x10)
                
                if (rcx_13 != 0)
                    sub_140a74f90(rcx_13)
                
                int64_t rcx_14 = *rbx_3
                
                if (rcx_14 != 0)
                    sub_140a74f90(rcx_14)
                
                rbx_3 += 0x38
                i = i_1
                i_1 -= 1
            while (i != 1)
    else
        if (r15 != r10_1.d)
            memmove(sx.q(r15) * 0x38 + *arg1, r10_1 * 0x38 + *arg1, i_1 * 0x38)
        
        r15 += i_1
    
    rbx = arg2
    r12.b ^= 1
while (rsi s< r8)

arg1[1].d = r15
return zx.q(r8.d - r15)
