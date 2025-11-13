// 函数: sub_142684630
// 地址: 0x142684630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg3
void* rcx = arg1[1]
int64_t* rsi = arg2

if (rcx == 0 || i_1 s>= sub_1405f8990(rcx).d)
    return 

void* r12_1 = arg1[1]
int32_t r15_1

if (i_1 != 0xffffffff)
    r15_1 = i_1 + 1
else
    r15_1 = sub_1405f8990(r12_1)

void* rdx = *arg1
int32_t r13_1 = 0
int32_t r14_1 = 0

if (i_1 == 0xffffffff)
    i_1 = 0

int16_t arg_20
int64_t rdi_1

if ((rsi[0x114].b & 4) == 0)
    rdi_1 = 0
    arg_20 = 0
else
    void* rcx_2 = *(*(rdx + 0x338) + 0x10)
    int16_t* rax_3 = rcx_2 + 0x21a
    
    if (rcx_2 == 0)
        rax_3 = 0x212
    
    rdi_1 = 0
    arg_20 = *rax_3

void* rbp_1 = *(rdx + 0x2e0)
uint64_t rax

if (rbp_1 == 0 || ((*(rbp_1 + 0x28c) u>> 1).b & 1) == 0 || *(rbp_1 + 0x118) s<= 0)
    int32_t i_4 = i_1
    
    if (i_1 s< r15_1)
        do
            rax = sub_142610d00(r12_1, i_4)
            void* rdx_17 = *(rax + 8)
            
            if (rdx_17 != 0)
                int32_t r9_5 = 0
                int32_t r10_2 = 0
                int64_t rsi_3 = sx.q(*(rdx_17 + 0x18))
                r13_1 += *(rdx_17 + 0x28) + *(rdx_17 + 0x1c)
                int64_t r11_2 = 0
                
                if (rsi_3 s>= 2)
                    void* rdx_19 = *(rax + 0x28) + 0x15
                    int64_t i_5 = ((rsi_3 - 2) u>> 1) + 1
                    r11_2 = i_5 * 2
                    int64_t i
                    
                    do
                        uint64_t rcx_20 = zx.q(*(rdx_19 - 0xc))
                        rdx_19 += 0x18
                        r9_5 = r9_5 + rcx_20.d + (rcx_20 << 1).d
                        uint64_t rcx_21 = zx.q(*(rdx_19 - 0x18))
                        r10_2 = r10_2 + rcx_21.d + (rcx_21 << 1).d
                        i = i_5
                        i_5 -= 1
                    while (i != 1)
                
                if (r11_2 s< rsi_3)
                    uint64_t rdx_20 = zx.q(*(*(rax + 0x28) + r11_2 * 0xc + 9))
                    r14_1 = r14_1 + rdx_20.d + (rdx_20 << 1).d
                
                r14_1 += r10_2 + r9_5
            
            i_4 += 1
        while (i_4 s< r15_1)
        
        rsi = arg2
    
    int32_t rdx_22 = rsi[1].d + r13_1
    
    if (rdx_22 s> *(rsi + 0xc))
        sub_140638cc0(rsi, rdx_22)
    
    int32_t rdx_24 = rsi[3].d + r14_1
    
    if (rdx_24 s> *(rsi + 0x1c))
        sub_1405dadb0(&rsi[2], rdx_24)
    
    int32_t rdx_26 = rsi[0x85].d + r14_1
    
    if (rdx_26 s> *(rsi + 0x42c))
        sub_1405dadb0(&rsi[0x84], rdx_26)
    
    int32_t rdi_2 = rsi[1].d
    
    for (; i_1 s< r15_1; i_1 += 1)
        rax = sub_142610d00(r12_1, i_1)
        
        if (rax != 0 && *(rax + 8) != 0)
            rdi_2 += sub_142688bf0(arg1, rbp_1, rax, zx.q(rdi_2), rsi, i_1, arg_20).d
else
    int32_t* i_2 = *(rbp_1 + 0x110)
    
    for (void* rax_6 = &i_2[sx.q(*(rbp_1 + 0x118)) * 2]; i_2 != rax_6; i_2 = &i_2[2])
        int32_t rax_7 = sub_142610f80(r12_1, *i_2, i_2[1])
        int32_t rbx = 0
        
        if (rax_7 s> 0)
            do
                void* rax_8 = sub_142610ea0(r12_1, *i_2, i_2[1], rbx)
                
                if (rax_8 != 0)
                    void* rdx_3 = *(rax_8 + 8)
                    
                    if (rdx_3 != 0)
                        int32_t r9_2 = 0
                        int32_t r10_1 = 0
                        int64_t rsi_1 = sx.q(*(rdx_3 + 0x18))
                        r13_1 += *(rdx_3 + 0x28) + *(rdx_3 + 0x1c)
                        
                        if (rsi_1 s>= 2)
                            void* rax_10 = *(rax_8 + 0x28) + 0x15
                            int64_t j_1 = ((rsi_1 - 2) u>> 1) + 1
                            rdi_1 = j_1 * 2
                            int64_t j
                            
                            do
                                uint64_t rdx_4 = zx.q(*(rax_10 - 0xc))
                                rax_10 += 0x18
                                r9_2 = r9_2 + rdx_4.d + (rdx_4 << 1).d
                                uint64_t rdx_5 = zx.q(*(rax_10 - 0x18))
                                r10_1 = r10_1 + rdx_5.d + (rdx_5 << 1).d
                                j = j_1
                                j_1 -= 1
                            while (j != 1)
                        
                        if (rdi_1 s< rsi_1)
                            uint64_t rdx_6 = zx.q(*(*(rax_8 + 0x28) + rdi_1 * 0xc + 9))
                            r14_1 = r14_1 + rdx_6.d + (rdx_6 << 1).d
                        
                        r14_1 += r10_1 + r9_2
                        rdi_1 = 0
                
                rbx += 1
            while (rbx s< rax_7)
    
    int32_t rdx_8 = arg2[1].d + r13_1
    
    if (rdx_8 s> *(arg2 + 0xc))
        sub_140638cc0(arg2, rdx_8)
    
    int32_t rdx_10 = arg2[3].d + r14_1
    
    if (rdx_10 s> *(arg2 + 0x1c))
        sub_1405dadb0(&arg2[2], rdx_10)
    
    int32_t rdx_12 = arg2[0x85].d + r14_1
    
    if (rdx_12 s> *(arg2 + 0x42c))
        sub_1405dadb0(&arg2[0x84], rdx_12)
    
    int32_t rsi_2 = arg2[1].d
    int32_t* i_3 = *(rbp_1 + 0x110)
    void* r14_2 = &i_3[sx.q(*(rbp_1 + 0x118)) * 2]
    void* var_50_2 = r14_2
    
    for (; i_3 != r14_2; i_3 = &i_3[2])
        rax = sub_142610f80(r12_1, *i_3, i_3[1])
        int32_t rbx_1 = 0
        int32_t rbp_3 = rax.d
        
        if (rax.d s> 0)
            do
                rax = sub_142610ea0(r12_1, *i_3, i_3[1], rbx_1)
                
                if (rax != 0 && *(rax + 8) != 0)
                    rsi_2 +=
                        sub_142688bf0(arg1, rbp_1, rax, zx.q(rsi_2), arg2, 0xffffffff, arg_20).d
                
                rbx_1 += 1
            while (rbx_1 s< rbp_3)
            
            r14_2 = var_50_2
