// 函数: sub_141f45340
// 地址: 0x141f45340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x86]

if (rcx == 0 || arg1[sx.q(*(arg1 + 0x494)) * 2 + 0x8b].d == 0)
    return 

if (*(arg1 + 0x71c) s< 0)
    void* rax_2 = *(rcx + 0x60)
    
    if (rax_2 != 0 && arg1[0xe4].w != *(rax_2 + 0x268))
        sub_141f45220(arg1)
else
    sub_141f450c0(arg1, arg1[0xab].d)

int64_t rbp

if (sub_141f73df0(arg1) == 0 || arg1[0xc6] == 0)
    rbp.b = 0
else
    rbp.b = 1

uint64_t rax_5
rax_5.b = *(arg1 + 0x5a9) & 0x24
char arg_18
uint64_t r14
int64_t r15

if (rax_5.b == 0x24)
label_141f45421:
    r14.b = 1
    int32_t rcx_4 = arg1[0xd0].d
    arg_18 = 1
    int64_t rcx_5
    
    if (rcx_4 == *(arg1[0x86] + 0x1b0) && rcx_4 == arg1[0xdb].d)
        rcx_5 = sx.q(*(arg1 + 0x494))
    
    if (rcx_4 != *(arg1[0x86] + 0x1b0) || rcx_4 != arg1[0xdb].d
            || arg1[rcx_5 * 2 + 0x8b].d != arg1[0xdd].d)
        r15.b = 1
    else
        r15.b = 0
else
    if (rbp.b != 0)
        rax_5 = arg1[0xc6]
    
    if (rbp.b != 0 && (*rax_5 == 1 || *(rax_5 + 8) s> 1))
        goto label_141f45421
    
    r14.b = 0
    arg_18 = 0
    r15.b = 0

int64_t* rcx_7 = arg1[0xca]
char arg_20 = r15.b
int32_t rsi_1
int64_t* rdi_1

if (rcx_7 != 0)
label_141f4549e:
    rdi_1 = sub_141e048f0(rcx_7) + 0xc0
    
    if (rdi_1 == 0)
        rsi_1 = 0
    else
        int64_t i_1 = sx.q(rdi_1[1].d)
        rsi_1 = 0
        
        if (i_1 s> 0)
            int64_t rcx_8 = *rdi_1
            int64_t i
            
            do
                rax_5 = zx.q(rsi_1 + 1)
                
                if (*rcx_8 == 0xffff)
                    rax_5 = zx.q(rsi_1)
                
                rcx_8 += 2
                rsi_1 = rax_5.d
                i = i_1
                i_1 -= 1
            while (i != 1)
else
    rcx_7 = arg1[0xcb]
    
    if (rcx_7 != 0 && (*(arg1 + 0x719) & 1) == 0)
        goto label_141f4549e
    
    rdi_1 = nullptr
    rsi_1 = 0

if (r14.b == 0 || rdi_1 == 0 || (arg1[0xe0] == rdi_1 && arg1[0xdf].d == rsi_1))
    rax_5.b = 0
else
    rax_5.b = 1

char var_58_1 = rax_5.b
char rcx_9

if (r14.b == 0 || r15.b != 0 || rax_5.b != 0)
    rcx_9 = *(arg1 + 0x5a9)
    rax_5.b = 1
else
    rcx_9 = *(arg1 + 0x5a9)
    rax_5.b = rcx_9 & 0x14
    
    if (rax_5.b == 0x14 || (rbp.b != 0 && (*(arg1[0xc6] + 2) & 0x10) == 0))
        rcx_9 = *(arg1 + 0x5a9)
        rax_5.b = 1
    else
        rax_5.b = 0

char arg_8 = rax_5.b

if ((rcx_9 & 0xc) == 0xc || (rbp.b != 0 && (*(arg1[0xc6] + 2) & 1) != 0))
    rax_5.b = 1
else
    rax_5.b = 0

void* const r13

if (arg2 == 0 || r14.b == 0 || r15.b != 0 || rax_5.b == 0 || rdi_1 == 0)
    r13 = nullptr
    r15.b = 0
else
    r13.b = 1
    
    if (*data_143f3b590 != 1)
        r15.b = 0
    else
        r15 = 1

int32_t* rax_7

if (*data_143f3b528 != 0)
    rax_7 = sub_140b011d0()

if (*data_143f3b528 == 0 || rax_7.b == 0)
    r14.b = 0
else
    r14.b = 1

int64_t* rcx_10 = arg1[0xca]

if (rcx_10 != 0)
    rax_7 = (*(*rcx_10 + 0x278))(rcx_10)

if (rcx_10 == 0 || rax_7.b != 0)
    rbp.b = 1
else
    rbp.b = 0

int64_t* rcx_11 = arg1[0xcb]

if (rcx_11 != 0)
    rax_7 = (*(*rcx_11 + 0x278))(rcx_11)

if (rcx_11 == 0 || rax_7.b != 0)
    rax_7.b = 1

char rbp_1

if (arg1[0xca] != 0 || arg1[0xcb] != 0)
    rbp_1 = arg_8
    
    if (rbp.b == 0 || rax_7.b == 0 || r14.b == 0 || (rbp_1 == 0 && r15.b == 0) || arg2 == 0)
        r14.b = 0
    else
        void* rdx_1 = *(arg2 + 0x20)
        void* rcx_12 = rdx_1 + 1
        
        if (rdx_1 == 0)
            rcx_12 = arg2 + 8
        
        if (*rcx_12 != *(arg2 + 8) || rdx_1 == 0 || *(rdx_1 + 0x10) == 0)
            r14.b = 0
        else
            r14.b = 1
else
    rbp_1 = arg_8
    r14.b = 0

if (sub_141f3e990(arg1, r14.b ^ 1, 1).b != 0)
    return 

arg1[0x140] = arg1[0x86]
arg1[0x13e] = arg1[0xca]
int64_t rax_15 = arg1[0xcb]
char rcx_14

if (rax_15 == 0 || (*(arg1 + 0x719) & 1) != 0)
    rcx_14 = 0
else
    rcx_14 = 1

if (rcx_14 == 0)
    rax_15 = 0

arg1[0x13f] = rax_15

if (rdi_1 == 0)
    sub_141f39ba0(&arg1[0xd4])
else if (arg1[0xd6] != rdi_1 || arg1[0xd5].d != rsi_1)
    sub_141f3f6d0(&arg1[0xd4], rdi_1)

*(arg1 + 0xa55) = rbp_1
*(arg1 + 0xa54) = r13.b

if (arg_20 != 0 || (arg_18 != 0 && rbp_1 != 0 && r13.b == 0))
    rax_15.b = 1
else
    rax_15.b = 0

*(arg1 + 0xa56) = rax_15.b

if (var_58_1 != 0 || (arg_18 != 0 && rbp_1 != 0 && r13.b == 0 && rdi_1 != 0))
    rax_15.b = 1
else
    rax_15.b = 0

*(arg1 + 0xa57) = rax_15.b

if (arg_18 == 0)
    arg1[0xdb].d = 0
    
    if (*(arg1 + 0x6dc) s<= 0xffffffff)
        sub_1405a5220(&arg1[0xda], 0)
    
    int32_t rax_16 = *(arg1 + 0x6ec)
    arg1[0xdd].d = 0
    
    if (rax_16 s< 0 && rax_16 != 0)
        sub_1405a5220(&arg1[0xdc], 0)
    
    sub_141f39ba0(&arg1[0xde])

if (rbp_1 != 0)
    void* rcx_21 = arg1[0xca]
    
    if (rcx_21 == 0)
    label_141f457e3:
        
        if (sub_141f4ac40(arg1) != 0)
            int64_t* rax_20 = sub_141e04eb0(arg1[0xcb])
            
            if (rax_20[1].w == 0xffff || *rax_20 == -1)
                sub_141f4b670(arg1, zx.o(0), 0)
    else
        if (sub_141e07c90(rcx_21) != 0)
            goto label_141f457e3
        
        int64_t* rax_18 = sub_141e04eb0(arg1[0xca])
        
        if (rax_18[1].w != 0xffff && *rax_18 != -1)
            goto label_141f457e3
        
        sub_141f4b670(arg1, zx.o(0), 0)
    
    int64_t* rcx_26 = arg1[0xca]
    
    if (rcx_26 != 0)
        sub_141e0a140(rcx_26)
        int64_t rsi_2 = 0
        int64_t* rdi_2 = arg1[0xd8]
        uint64_t r14_2 = sx.q(arg1[0xd9].d) << 3 u>> 3
        
        if (rdi_2 u> &rdi_2[arg1[0xd9]])
            r14_2 = 0
        
        if (r14_2 != 0)
            do
                sub_141e0a140(*rdi_2)
                rsi_2 += 1
                rdi_2 = &rdi_2[1]
            while (rsi_2 != r14_2)
        
        r14 = zx.q(r14.b)
    
    int64_t* rcx_28 = arg1[0xcb]
    
    if (rcx_28 != 0 && (*(arg1 + 0x719) & 1) == 0)
        sub_141e0a140(rcx_28)

void* rdi_3

if (r14.b == 0)
    if (*(arg1 + 0xa55) != 0 || *(arg1 + 0xa54) != 0)
        sub_141f4b550(arg1)
        sub_141f43e60(arg1)
        sub_141f4b550(arg1)
    else
        if (arg1[0xdb].d != 0)
            int32_t rax_23 = *(arg1 + 0x684)
            arg1[0xd0].d = 0
            
            if (rax_23 s< 0 && rax_23 != 0)
                sub_1405a5220(&arg1[0xcf], 0)
            
            sub_141f2b4a0(&arg1[0xcf], &arg1[0xda])
        
        if (arg1[0xdd].d != 0)
            int64_t* rdi_7 = &arg1[(sx.q(arg1[0x92].d) + 0x45) * 2]
            int32_t rax_24 = *(rdi_7 + 0xc)
            rdi_7[1].d = 0
            
            if (rax_24 s< 0 && rax_24 != 0)
                sub_1405a5220(rdi_7, 0)
            
            sub_141f2b4a0(rdi_7, &arg1[0xdc])
        
        if (arg1[0xe0] != 0 && arg1[0xdf].d == zx.d(arg1[0xe1].w))
            sub_141f38350(&arg1[0xd4], &arg1[0xde])
        
        void* rcx_35 = arg1[0xca]
        
        if (rcx_35 != 0 && sub_141e07c90(rcx_35) != 0)
            sub_141e08380(arg1[0xca])
        
        if (sub_141f4ac40(arg1) != 0)
            sub_141e08380(arg1[0xcb])
    
    sub_141f445b0(arg1, &arg1[0x13e])
    rdi_3 = arg2
    __builtin_memset(&arg1[0x13e], 0, 0x18)
else
    rdi_3 = arg2
    sub_141f395f0(arg1, rdi_3)

if (rdi_3 == 0 && sub_142253600(arg1).b != 0)
    (*(*arg1 + 0x908))(arg1)
