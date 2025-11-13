// 函数: sub_142940400
// 地址: 0x142940400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg3 + 1
int16_t* r10 = arg2
int32_t arg_18 = r9
int32_t r14 = 0
uint64_t r8 = zx.q(*r10)
int32_t i = 1
int32_t r12_1 = (1 << r9.b) - 1
int32_t r15 = 0
int32_t r13 = divu.dp.d(0:0x1be, r9) + 3
int64_t rcx_1 = sx.q(r13 - 1)
int32_t rbx_1 = r13 - 2
int64_t rdi = sx.q(rbx_1)
arg1[rcx_1].d = 0xffffffff
*(&arg1[rcx_1] + 4) = 0

do
    if (i u< 0x1c)
        r8 += zx.q(*(r10 + (zx.q(i) u>> 1 << 2)) u>> ((i & 1) << 4).b << 0x10)
    
    if (r8.w != 0)
        int32_t r11_1 = rol.d(1, r9.b)
        
        do
            int32_t r9_1
            
            if (r8.d != 0)
                int32_t rax_5 = 0xf
                int32_t rdx_5 = r8.d << 0x10
                bool cond:0_1 = rdx_5 == 0
                
                if (rdx_5 == 0)
                    rdx_5 = r8.d
                
                if (cond:0_1)
                    rax_5 = 0x1f
                
                int32_t r10_2 = rdx_5 << 8
                int32_t rcx_6 = rax_5 - 8
                
                if (r10_2 == 0)
                    rcx_6 = rax_5
                
                if (r10_2 == 0)
                    r10_2 = rdx_5
                
                uint64_t r9_3 = zx.q(r10_2 << 4)
                int32_t temp10_1 = r9_3.d
                int32_t rdx_6 = rcx_6 - 4
                
                if (temp10_1 == 0)
                    r9_3 = zx.q(r10_2)
                
                if (temp10_1 == 0)
                    rdx_6 = rcx_6
                
                uint32_t rax_6 = (r9_3 << 2).d
                int32_t rcx_7 = rdx_6 - 2
                
                if (rax_6 == 0)
                    rcx_7 = rdx_6
                
                if (rax_6 == 0)
                    rax_6 = r9_3.d
                
                r9_1 = rcx_7 - 1
                
                if ((rax_6 & 0x7fffffff) == 0)
                    r9_1 = rcx_7
            else
                r9_1 = (r8 + 0x20).d
            
            uint32_t rdx_8 = r8.d u>> r9_1.b
            int32_t rcx_10 = rdx_8 & r12_1
            int32_t rdx_10 = rcx_10 - r11_1
            
            if ((r11_1 & rdx_8) == 0)
                rdx_10 = rcx_10
            
            rbx_1 -= 1
            *(&arg1[rdi] + 4) = rdx_10
            r8 -= sx.q((1 << r9_1.b) * rdx_10)
            arg1[rdi].d = r9_1 + r15
            rdi -= 1
        while (r8.w != 0)
        
        r9 = arg_18
        r10 = arg2
    
    r8 u>>= 0x10
    i += 1
    r15 += 0x10
while (i u< 0x1e)

int32_t r13_2 = r13 - (rbx_1 + 1)

if (r13 != rbx_1 + 1)
    int64_t* rdx_11 = arg1
    
    do
        uint64_t rax_13 = zx.q(r14 + rbx_1 + 1)
        r14 += 1
        *rdx_11 = arg1[rax_13]
        rdx_11 = &rdx_11[1]
    while (r14 u< r13_2)

return zx.q(r13_2 - 1)
