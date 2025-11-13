// 函数: sub_141f79130
// 地址: 0x141f79130
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(arg1[1].d)

if (rdx.d == 0)
    return 0

int64_t* rcx = *arg1
int32_t rbp = 0
int32_t r13 = 0
int64_t r14

if (*rcx == 0)
    r14.b = 0
else
    void* rcx_1 = rcx[1]
    
    if (rcx_1 == 0)
        r14.b = 0
    else
        int32_t rax_2 = 0
        
        if (0 == *(rcx_1 + 8))
            *(rcx_1 + 8) = 0
        else
            rax_2 = *(rcx_1 + 8)
        
        if (rax_2 s<= 0)
            r14.b = 0
        else
            r14.b = 1

int64_t rsi = 0

do
    int64_t r9_1 = sx.q(rbp)
    rsi += 1
    rbp += 1
    
    if (rsi s< rdx)
        int64_t rcx_3 = rsi << 4
        
        do
            int64_t rax_3 = *arg1
            int32_t rax_4
            
            if (*(rcx_3 + rax_3) == 0)
                rax_4 = 0
            else
                void* rdx_1 = *(rcx_3 + rax_3 + 8)
                
                if (rdx_1 == 0)
                    rax_4 = 0
                else
                    rax_4 = 0
                    
                    if (0 == *(rdx_1 + 8))
                        *(rdx_1 + 8) = 0
                    else
                        rax_4 = *(rdx_1 + 8)
                    
                    if (rax_4 s<= 0)
                        rax_4 = 0
                    else
                        rax_4.b = 1
            
            if (r14.b != rax_4.b)
                break
            
            rbp += 1
            rsi += 1
            rcx_3 += 0x10
        while (rsi s< rdx)
    
    int32_t i_1 = rbp - r9_1.d
    
    if (r14.b != 0)
        if (r13 != r9_1.d)
            memmove((sx.q(r13) << 4) + *arg1, (r9_1 << 4) + *arg1, i_1 << 4)
        
        r13 += i_1
    else if (i_1 != 0)
        int64_t* rbx_4 = (r9_1 << 4) + 8 + *arg1
        int32_t i
        
        do
            int64_t* rcx_7 = *rbx_4
            
            if (rcx_7 != 0)
                int32_t rax_5 = *(rcx_7 + 0xc)
                *(rcx_7 + 0xc) -= 1
                
                if (rax_5 == 1 && rcx_7 != 0)
                    (*(*rcx_7 + 8))(rcx_7, 1)
            
            rbx_4 = &rbx_4[2]
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    r14.b ^= 1
while (rsi s< rdx)

arg1[1].d = r13
return zx.q(rdx.d - r13)
