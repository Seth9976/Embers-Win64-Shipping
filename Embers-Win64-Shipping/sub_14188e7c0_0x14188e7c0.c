// 函数: sub_14188e7c0
// 地址: 0x14188e7c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
int64_t* r13 = arg4
sub_141889890(arg1, rbx.d)
int32_t* r12_3

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_14188e841:
    r12_3 = nullptr
else
    void* rdx_1 = *(arg1 + 0x48)
    void* r8 = arg1 + 0x40
    
    if (rdx_1 != 0)
        r8 = rdx_1
    
    int32_t rax_1 = *(r8 + (((sx.q(*(arg1 + 0x50)) - 1) & rbx) << 2))
    
    if (rax_1 == 0xffffffff)
    label_14188e841_1:
        r12_3 = nullptr
    else
        while (true)
            r12_3 = (sx.q(rax_1) << 5) + *(arg1 + 8)
            
            if (*r12_3 == rbx.d)
                break
            
            rax_1 = r12_3[6]
            
            if (rax_1 == 0xffffffff)
                goto label_14188e841_2
        
        if (rax_1 == 0xffffffff)
        label_14188e841_2:
            r12_3 = nullptr

int32_t* rdx_8

if (*(arg1 + 0x60) == *(arg1 + 0x8c))
label_14188e89d:
    rdx_8 = nullptr
else
    void* r8_1 = arg1 + 0x90
    void* rcx_3 = *(r8_1 + 8)
    
    if (rcx_3 != 0)
        r8_1 = rcx_3
    
    int32_t rax_3 = *(r8_1 + (((sx.q(*(arg1 + 0xa0)) - 1) & rbx) << 2))
    
    if (rax_3 == 0xffffffff)
    label_14188e89d_1:
        rdx_8 = nullptr
    else
        while (true)
            rdx_8 = (sx.q(rax_3) << 5) + *(arg1 + 0x58)
            
            if (*rdx_8 == rbx.d)
                break
            
            rax_3 = rdx_8[6]
            
            if (rax_3 == 0xffffffff)
                goto label_14188e89d_2
        
        if (rax_3 == 0xffffffff)
        label_14188e89d_2:
            rdx_8 = nullptr

int128_t zmm0 = *arg3
void* r14 = &rdx_8[2]
int128_t zmm1 = arg3[1]
void* var_88 = r14
int128_t* var_80 = nullptr
int64_t var_78 = 1
void var_50
sub_14181d6d0(&var_50, r13)
sub_1405c4f50(&var_80)
int128_t* r15 = var_80
*r15 = zmm0
r15[1] = zmm1
sub_14181d6d0(&r15[2], &var_50)
sub_1418221b0(&var_50)
int32_t i = var_78.d
bool cond:0 = i == 0

if (i s> 0)
    char rbx_1 = arg5
    
    do
        int64_t j = *r15
        uint64_t r10_1 = zx.q(*(r15 + 0x18))
        int64_t rsi_1 = sx.q(r12_3[4])
        int32_t r13_1
        
        if (rsi_1.d s> 0)
            r13_1 = (rsi_1 - 1).d
            
            if (r13_1 s>= 0)
                int64_t rdx_12 = sx.q(r13_1)
                int64_t* r8_5 = rdx_12 * 0x30 + *(r12_3 + 8)
                
                while (*r8_5 u> j)
                    int64_t rax_4 = rdx_12
                    r8_5 = &r8_5[-6]
                    rdx_12 -= 1
                    r13_1 -= 1
                    
                    if (rax_4 s<= 0)
                        r13_1 = 0
                        break
        
        int128_t* rcx_14
        
        if (rsi_1.d s<= 0 || r13_1 s>= rsi_1.d)
        label_14188e9b2:
            int32_t rax_8 = (rsi_1 + 1).d
            r12_3[4] = rax_8
            
            if (rax_8 s> r12_3[5])
                sub_1405c4f50(&r12_3[2])
            
            rcx_14 = rsi_1 * 0x30 + *(r12_3 + 8)
        label_14188e9df:
            *rcx_14 = *r15
            rcx_14[1] = r15[1]
            sub_14181d6d0(&rcx_14[2], &r15[2])
            sub_1418221b0(&r15[2])
            
            if (i != 1)
                memmove(r15, &r15[3], (i - 1) * 0x30)
            
            var_78.d = i - 1
            sub_1407c4120(&var_80)
            r15 = var_80
            i = var_78.d
        else
            int64_t* rcx_10 = sx.q(r13_1) * 0x30 + *(r12_3 + 8)
            uint64_t rdx_13
            int64_t r8_6
            
            while (true)
                r8_6 = *rcx_10
                rdx_13 = zx.q(rcx_10[3].d)
                
                if (j u<= r8_6 - 1 + rdx_13)
                    break
                
                r13_1 += 1
                rcx_10 = &rcx_10[6]
                
                if (r13_1 s>= rsi_1.d)
                    goto label_14188e9b2
            
            if (j - 1 + r10_1 u< r8_6)
                int32_t rax_18 = (rsi_1 + 1).d
                r12_3[4] = rax_18
                
                if (rax_18 s> r12_3[5])
                    sub_1405c4f50(&r12_3[2])
                
                int64_t r14_4 = sx.q(r13_1) * 0x30
                int64_t rdx_33 = *(r12_3 + 8) + r14_4
                memmove(rdx_33 + 0x30, rdx_33, (rsi_1.d - r13_1) * 0x30)
                void* rax_21 = *(r12_3 + 8)
                *(r14_4 + rax_21) = *r15
                *(r14_4 + rax_21 + 0x10) = r15[1]
                sub_14181d6d0(rax_21 + 0x20 + r14_4, &r15[2])
                sub_1418221b0(&r15[2])
                
                if (i != 1)
                    memmove(r15, &r15[3], (i - 1) * 0x30)
                
                var_78.d = i - 1
                sub_1407c4120(&var_80)
                r14 = var_88
                r15 = var_80
                i = var_78.d
            else
                int64_t rax_7
                
                if (r10_1 u> rdx_13 || (r10_1 == rdx_13 && j u< r8_6))
                    rax_7.b = 1
                else
                    rax_7.b = 0
                
                if (rax_7.b == 0)
                    int64_t rsi_5 = sx.q(*(r14 + 8))
                    int32_t rax_17 = (rsi_5 + 1).d
                    *(r14 + 8) = rax_17
                    
                    if (rax_17 s> *(r14 + 0xc))
                        sub_1405c4f50(r14)
                    
                    rcx_14 = rsi_5 * 0x30 + *r14
                    goto label_14188e9df
                
                int128_t var_70_1 = *r15
                int128_t var_60_1 = r15[1]
                sub_14181d6d0(&var_50, &r15[2])
                void* rax_12 = *(r12_3 + 8)
                int64_t rsi_3 = sx.q(r13_1) * 0x30
                *r15 = *(rsi_3 + rax_12)
                r15[1] = *(rsi_3 + rax_12 + 0x10)
                sub_141823dd0(&r15[2], rax_12 + 0x20 + rsi_3)
                void* rax_13 = *(r12_3 + 8)
                *(rsi_3 + rax_13) = var_70_1
                *(rsi_3 + rax_13 + 0x10) = var_60_1
                sub_141823dd0(rax_13 + 0x20 + rsi_3, &var_50)
                int32_t r8_10 = r12_3[4]
                int32_t rax_14 = r13_1 + 1
                arg5.d = rax_14
                bool cond:2_1 = rax_14 s<= r8_10
                bool cond:3_1 = rax_14 s>= r8_10
                
                if (rax_14 s< r8_10)
                    void* r14_2 = sx.q(rax_14) * 0x30
                    int32_t rcx_34
                    
                    do
                        int128_t* r13_2 = *(r12_3 + 8)
                        int64_t i_2 = sx.q(i)
                        i = (i_2 + 1).d
                        var_78.d = i
                        
                        if (i s> var_78:4.d)
                            sub_1405c4f50(&var_80)
                            i = var_78.d
                            r15 = var_80
                        
                        void* rcx_31 = &r15[i_2 * 3]
                        *rcx_31 = *(r13_2 + r14_2)
                        *(rcx_31 + 0x10) = *(r13_2 + r14_2 + 0x10)
                        sub_14181d6d0(rcx_31 + 0x20, r14_2 + 0x20 + r13_2)
                        r14_2 += 0x30
                        r8_10 = r12_3[4]
                        rcx_34 = arg5.d + 1
                        arg5.d = rcx_34
                    while (rcx_34 s< r8_10)
                    cond:2_1 = rax_14 s<= r8_10
                    cond:3_1 = rax_14 s>= r8_10
                
                if (not(cond:2_1))
                    r12_3[4] = rax_14
                    
                    if (rax_14 s> r12_3[5])
                        sub_1405c4f50(&r12_3[2])
                else if (not(cond:3_1))
                    sub_141893460(&r12_3[2], rax_14, r8_10 - rax_14, 0)
                
                r14 = var_88
                int64_t rsi_4 = sx.q(*(r14 + 8))
                
                if (rsi_4.d != 0)
                    int32_t rdx_28 = i + rsi_4.d
                    
                    if (rdx_28 s> var_78:4.d)
                        sub_1405a5220(&var_80, rdx_28)
                        i = var_78.d
                        r15 = var_80
                    
                    memmove(&r15[sx.q(i) * 3], *r14, (rsi_4 * 0x30).d)
                    i += rsi_4.d
                    *(r14 + 8) = 0
                    var_78.d = i
                
                sub_1418221b0(&var_50)
        sub_14185de60(r15, i, 0, rbx_1)
        cond:0 = i == 0
    while (i s> 0)
    
    r13 = arg4

if (not(cond:0))
    void* rbx_2 = &r15[2]
    int32_t i_1
    
    do
        sub_1418221b0(rbx_2)
        rbx_2 += 0x30
        i_1 = i
        i -= 1
    while (i_1 != 1)

if (r15 != 0)
    sub_140a74f90(r15)

return sub_1418221b0(r13) __tailcall
