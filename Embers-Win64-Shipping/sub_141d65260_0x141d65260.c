// 函数: sub_141d65260
// 地址: 0x141d65260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)

if (rdi.d == 0)
    return 0

int64_t* rcx = *arg1
uint64_t rax_1 = 0
int32_t r13 = 0
int32_t r14 = 0
char arg_8

if (rcx[1].d != 0)
    int64_t* rcx_1 = *rcx
    
    if (rcx_1 != 0)
        rax_1 = *(*(*rcx_1 + 0x30))(rcx_1, &arg_8)

rax_1.b = rax_1 != *arg2
int64_t rsi = 0
arg_8 = rax_1.b

do
    int64_t rbp_1 = sx.q(r14)
    rsi += 1
    r14 += 1
    
    if (rsi s< rdi)
        int64_t* rdx_1 = arg2
        int64_t rbx_2 = rsi << 4
        
        do
            int64_t* rcx_2 = *arg1
            int64_t rax_4 = 0
            
            if (*(rcx_2 + rbx_2 + 8) != 0)
                int64_t* rcx_3 = *(rcx_2 + rbx_2)
                
                if (rcx_3 != 0)
                    rdx_1 = arg2
                    void arg_20
                    rax_4 = *(*(*rcx_3 + 0x30))(rcx_3, &arg_20)
            
            int32_t rcx_4
            rcx_4.b = rax_4 != *rdx_1
            
            if (zx.d(rax_1.b) != rcx_4)
                break
            
            r14 += 1
            rsi += 1
            rbx_2 += 0x10
        while (rsi s< rdi)
        
        rax_1 = zx.q(arg_8)
    
    int32_t i_1 = r14 - rbp_1.d
    
    if (rax_1.b == 0)
        int64_t* rbx_5 = (rbp_1 << 4) + *arg1
        
        if (i_1 != 0)
            int32_t i
            
            do
                int32_t rax_8 = rbx_5[1].d
                int64_t* rcx_8
                int64_t* r8_3
                
                if (rax_8 == 0)
                    r8_3 = *rbx_5
                    rcx_8 = nullptr
                else
                    rcx_8 = *rbx_5
                    r8_3 = rcx_8
                
                int64_t rax_9
                
                if (rcx_8 != 0)
                    rax_9 = *rcx_8
                label_141d653c5:
                    (*(rax_9 + 0x38))(rcx_8, 0)
                    int64_t rcx_9 = *rbx_5
                    
                    if (rcx_9 != 0)
                        *rbx_5 = sub_140a84c80(rcx_9, 0, 0)
                    
                    rbx_5[1].d = 0
                else if (rax_8 != 0 && r8_3 != 0)
                    rax_9 = *r8_3
                    rcx_8 = r8_3
                    goto label_141d653c5
                int64_t rcx_10 = *rbx_5
                
                if (rcx_10 != 0)
                    sub_140a74f90(rcx_10)
                
                rbx_5 = &rbx_5[2]
                i = i_1
                i_1 -= 1
            while (i != 1)
            rax_1 = zx.q(arg_8)
    else
        if (r13 != rbp_1.d)
            int64_t rax_7 = *arg1
            memmove((sx.q(r13) << 4) + rax_7, (rbp_1 << 4) + rax_7, i_1 << 4)
            rax_1 = zx.q(arg_8)
        
        r13 += i_1
    
    rax_1.b ^= 1
    arg_8 = rax_1.b
while (rsi s< rdi)

arg1[1].d = r13
return zx.q(rdi.d - r13)
