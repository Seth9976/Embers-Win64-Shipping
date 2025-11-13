// 函数: sub_142196000
// 地址: 0x142196000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r13 = arg4

if (arg1[0xca] != 0)
    arg5 = sub_1421a5650(arg1, 0, 0, arg5)

uint64_t rsi = 0
int32_t rbp = 0
char rax_1 = (*(*arg1 + 0x350))(arg1)
int64_t r12

if (arg2 == 0)
    r12.b = 0
    
    if (arg3 != 0 && arg1[0xc1].d s> 0)
        int64_t r15_3 = 0
        int64_t* r14_2 = arg1[0xc0]
        uint64_t r13_2 = sx.q(arg1[0xc1].d) << 3 u>> 3
        
        if (r14_2 u> &r14_2[arg1[0xc1]])
            r13_2 = 0
        
        if (r13_2 != 0)
            do
                int64_t* rdi_2 = *r14_2
                
                if (rdi_2 != 0)
                    void* rax_8 = rdi_2[5]
                    
                    if (rax_8 != 0 && (*(rax_8 + 0x2c) & 1) != 0)
                        void* rax_9 = rdi_2[2]
                        char r8_1 = *(rax_9 + 0x35)
                        char rdx_1 = r8_1
                        uint32_t rcx_4 = zx.d(*(*(rax_9 + 0x20) + 0xb7))
                        
                        if (rcx_4.b u<= r8_1)
                            rdx_1 = rcx_4.b
                        
                        if (rdx_1 u< *(arg1 + 0x43e))
                            rdi_2[0x1c].d &= 0xfffffffe
                            (*(*rdi_2 + 0xf8))(rdi_2, 1)
                            rdi_2[0x1c].d |= 0x400
                        else
                            rbp += 1
                
                r14_2 = &r14_2[1]
                r15_3 += 1
            while (r15_3 != r13_2)
        
        r13 = arg4
        arg1[0xcc].d = rbp
    
    void* rcx_6 = arg1[0x81]
    char rax_13 = *(rcx_6 + 0xb4)
    
    if (rax_13 == 0)
        rax_13 = (*(rcx_6 + 0xb6) & 1) + 1
    
    uint32_t rcx_7 = zx.d(rax_13)
    
    if (rcx_7 == 1)
        sub_142188ca0(arg1)
    else if (rcx_7 == 2)
        r12.b = 0
    else if (rcx_7 == 3)
        if (arg1[0xca] != 0)
            sub_1421a5650(arg1, 0, (rcx_7 - 2).b, arg5)
        
        if (arg1[0xc1].d s> 0)
            int64_t* rdi_3 = nullptr
            
            do
                int64_t* rcx_11 = *(rdi_3 + arg1[0xc0])
                
                if (rcx_11 != 0)
                    (*(*rcx_11 + 0xf0))(rcx_11, 0)
                
                rsi = zx.q(rsi.d + 1)
                rdi_3 = &rdi_3[1]
            while (rsi.d s< arg1[0xc1].d)
        
        r12.b = 0
else
    r12.b = 1
    
    if (arg3 != 0 && arg1[0xc1].d s> 0)
        int64_t* r14_1 = arg1[0xc0]
        uint64_t r15_2 = sx.q(arg1[0xc1].d) << 3 u>> 3
        
        if (r14_1 u> &r14_1[arg1[0xc1]])
            r15_2 = 0
        
        if (r15_2 != 0)
            do
                int64_t* rdi_1 = *r14_1
                
                if (rdi_1 == 0)
                    rbp += 1
                else
                    void* rax_3 = rdi_1[2]
                    char r8 = *(rax_3 + 0x35)
                    char rdx = r8
                    char rcx_2 = *(*(rax_3 + 0x20) + 0xb7)
                    
                    if (rcx_2 u<= r8)
                        rdx = rcx_2
                    
                    if (rdx u>= *(arg1 + 0x43e))
                        rdi_1[0x1c].d |= 1
                        (*(*rdi_1 + 0xf8))(rdi_1, 0)
                        rdi_1[0x1c].d &= 0xfffffbff
                        rbp += 1
                
                r14_1 = &r14_1[1]
                rsi += 1
            while (rsi != r15_2)
        
        arg1[0xcc].d = rbp

uint8_t result = arg1[0x86].b u>> 4 & 1
r12.b |= result

if (rax_1 == r12.b)
    return result

int64_t rax_16 = *arg1

if (r13 == 0)
    return (*(rax_16 + 0x340))(arg1, zx.q(r12.b))

jump(*(rax_16 + 0x348))
