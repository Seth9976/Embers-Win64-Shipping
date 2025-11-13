// 函数: sub_142bddde0
// 地址: 0x142bddde0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdx = *(arg1 + 0x78)
int16_t r15 = 0
char rcx = (*arg1).b
int32_t* rdi = nullptr
int32_t* rsi = nullptr
int32_t* var_70
__builtin_memset(&var_70, 0, 0x20)
int32_t* r14 = nullptr
int16_t r8_1 = (arg1[0x18] s>> rcx).w
int16_t i_20 = (arg1[0x19] s>> rcx).w
int16_t arg_10 = r8_1
int16_t i_15 = i_20
int32_t* var_60
int32_t* var_58_1
void** rax

if (rdx != 0)
    while (true)
        int16_t i_21 = rdx[8].w
        int32_t* r10_1 = *(rdx + 8)
        int16_t rcx_1 = rdx[7].w - 1 + i_21
        
        if (i_20 s> i_21)
            i_20 = i_21
        
        i_15 = i_20
        rax = &var_60
        
        if (r8_1 s< rcx_1)
            r8_1 = rcx_1
        
        arg_10 = r8_1
        *rdx = 0
        
        if (rdi != 0)
            while (*rdi s<= 0)
                rax = &rdi[2]
                rdi = *(rdi + 8)
                
                if (rdi == 0)
                    break
        
        *(rdx + 8) = rdi
        *rax = rdx
        rdx = r10_1
        rdi = var_60
        
        if (r10_1 == 0)
            break
        
        r8_1 = arg_10
        i_20 = i_15
    
    var_58_1 = rdi

if (arg1[0xf] == 0)
    arg1[0xe] = 0x14
    rax.b = 1
    return rax

(*(arg1 + 0xe8))(arg1, &i_15, &arg_10)
int32_t* i = rdi

if (rdi != 0)
    do
        i[9] = i[8] - sx.d(i_15)
        i = *(i + 8)
    while (i != 0)

int64_t rdx_2 = sx.q(arg1[0xf])
int16_t r9_1 = 0
int16_t i_13 = i_15
int16_t i_16 = i_13

if (rdx_2.d s> 0 && *(*(arg1 + 0x20) - (rdx_2 << 2)) == sx.d(i_13))
    arg1[0xf] = (rdx_2 - 1).d

uint64_t j_2

while (arg1[0xf] s> 0)
    int32_t* i_17 = rdi
    uint64_t var_68
    
    if (rdi != 0)
        int32_t r9_2 = sx.d(r9_1)
        int32_t* i_1
        
        do
            int32_t temp0_1 = i_17[9]
            i_17[9] -= r9_2
            i_1 = *(i_17 + 8)
            
            if (temp0_1 == r9_2)
                void** rdx_3 = &var_60
                int32_t* j = rdi
                
                if (rdi != 0)
                    do
                        if (j == i_17)
                            *rdx_3 = *(j + 8)
                            rdi = var_60
                            break
                        
                        rdx_3 = &j[2]
                        j = *(j + 8)
                    while (j != 0)
                
                int32_t j_1 = *i_17
                
                if ((i_17[6].b & 8) == 0)
                    void* rax_5 = &var_68
                    
                    if (r14 != 0)
                        while (j_1 s>= *r14)
                            rax_5 = &r14[2]
                            r14 = *(r14 + 8)
                            
                            if (r14 == 0)
                                break
                    
                    *(i_17 + 8) = r14
                    *rax_5 = i_17
                    r14 = var_68
                else
                    int32_t** rax_4 = &var_70
                    
                    if (rsi != 0)
                        while (j_1 s>= *rsi)
                            rax_4 = &rsi[2]
                            rsi = *(rsi + 8)
                            
                            if (rsi == 0)
                                break
                    
                    *(i_17 + 8) = rsi
                    *rax_4 = i_17
                    rsi = var_70
            
            i_17 = i_1
        while (i_1 != 0)
        var_58_1 = rdi
    
    int32_t* i_2 = rsi
    
    if (rsi != 0)
        do
            int32_t* rcx_7 = *(i_2 + 0x10)
            bool cond:1_1 = (i_2[6].b & 8) != 0
            *i_2 = *rcx_7
            void* const rax_7 = -fffffffffffffffc
            
            if (cond:1_1)
                rax_7 = 4
            
            i_2[7] -= 1
            *(i_2 + 0x10) = rax_7 + rcx_7
            i_2 = *(i_2 + 8)
        while (i_2 != 0)
    
    int32_t** r9_3 = &var_70
    int32_t* rdx_4 = rsi
    
    if (rsi != 0)
        int32_t* i_3 = *(rsi + 8)
        void* r8_3 = &rsi[2]
        
        while (i_3 != 0)
            if (*rdx_4 s> *i_3)
                *r9_3 = i_3
                r9_3 = &var_70
                rsi = var_70
                *r8_3 = *(i_3 + 8)
                *(i_3 + 8) = rdx_4
                rdx_4 = rsi
            else
                rdx_4 = *r8_3
                r9_3 = r8_3
                
                if (rdx_4 == 0)
                    break
            
            i_3 = *(rdx_4 + 8)
            r8_3 = &rdx_4[2]
    
    int32_t* i_4 = r14
    
    if (r14 != 0)
        do
            int32_t* rcx_8 = *(i_4 + 0x10)
            bool cond:4_1 = (i_4[6].b & 8) != 0
            *i_4 = *rcx_8
            void* const rax_12 = -fffffffffffffffc
            
            if (cond:4_1)
                rax_12 = 4
            
            i_4[7] -= 1
            *(i_4 + 0x10) = rax_12 + rcx_8
            i_4 = *(i_4 + 8)
        while (i_4 != 0)
    
    uint64_t* r9_4 = &var_68
    int32_t* rdx_5 = r14
    
    if (r14 != 0)
        int32_t* i_5 = *(r14 + 8)
        void* r8_4 = &r14[2]
        
        while (i_5 != 0)
            if (*rdx_5 s> *i_5)
                *r9_4 = i_5
                r9_4 = &var_68
                r14 = var_68
                *r8_4 = *(i_5 + 8)
                *(i_5 + 8) = rdx_5
                rdx_5 = r14
            else
                rdx_5 = *r8_4
                r9_4 = r8_4
                
                if (rdx_5 == 0)
                    break
            
            i_5 = *(rdx_5 + 8)
            r8_4 = &rdx_5[2]
    
    int64_t rdx_6 = sx.q(arg1[0xf])
    int16_t r13_1 = *(*(arg1 + 0x20) - (rdx_6 << 2))
    int16_t arg_20 = r13_1
    r9_1 = r13_1 - i_13
    arg1[0xf] = (rdx_6 - 1).d
    
    if (i_13 s< r13_1)
        while (true)
            int32_t* i_6 = rsi
            int32_t* rdi_1 = r14
            
            if (rsi != 0)
                do
                    int32_t r8_5 = *i_6
                    int32_t r9_5 = *rdi_1
                    
                    if (r8_5 s> r9_5)
                        int32_t rax_18 = r8_5
                        r8_5 = r9_5
                        r9_5 = rax_18
                    
                    int32_t r10_2 = arg1[1]
                    int32_t rax_20 = neg.d(r10_2)
                    int32_t rcx_12 = rax_20 & r8_5
                    int32_t rdx_9 = (r10_2 - 1 + r9_5) & rax_20
                    
                    if (r9_5 - r8_5 s> r10_2 || rcx_12 == r8_5 || rdx_9 == r9_5
                            || (rcx_12 s<= rdx_9 && rdx_9 != r10_2 + rcx_12))
                        int32_t* var_80_1 = rdi_1
                        int32_t* i_14 = i_6
                        (*(arg1 + 0xf0))(arg1, zx.q(i_16))
                    else if ((i_6[6].b & 7) != 2)
                        *i_6 = r8_5
                        r15 += 1
                        *rdi_1 = r9_5
                        i_6[9] = 1
                    
                    i_6 = *(i_6 + 8)
                    rdi_1 = *(rdi_1 + 8)
                while (i_6 != 0)
                
                r13_1 = arg_20
                
                if (r15 s> 0)
                    int32_t* i_7 = rsi
                    int32_t* rdi_2 = r14
                    
                    do
                        if (i_7[9] != 0)
                            uint64_t r8_6 = zx.q(*i_7)
                            i_7[9] = 0
                            (*(arg1 + 0xf8))(arg1, zx.q(i_16), r8_6, zx.q(*rdi_2), i_7, rdi_2, r9_1)
                        
                        i_7 = *(i_7 + 8)
                        rdi_2 = *(rdi_2 + 8)
                    while (i_7 != 0)
            
            (*(arg1 + 0x100))(arg1)
            i_13 = i_16 + 1
            i_16 = i_13
            
            if (i_13 s>= r13_1)
                break
            
            int32_t* i_8 = rsi
            
            if (rsi != 0)
                do
                    int32_t* rcx_16 = *(i_8 + 0x10)
                    bool cond:8_1 = (i_8[6].b & 8) != 0
                    *i_8 = *rcx_16
                    void* const rax_26 = -fffffffffffffffc
                    
                    if (cond:8_1)
                        rax_26 = 4
                    
                    i_8[7] -= 1
                    *(i_8 + 0x10) = rax_26 + rcx_16
                    i_8 = *(i_8 + 8)
                while (i_8 != 0)
            
            int32_t** r9_7 = &var_70
            int32_t* rdx_12 = rsi
            
            if (rsi != 0)
                int32_t* i_9 = *(rsi + 8)
                void* r8_7 = &rsi[2]
                
                while (i_9 != 0)
                    if (*rdx_12 s> *i_9)
                        *r9_7 = i_9
                        r9_7 = &var_70
                        rsi = var_70
                        *r8_7 = *(i_9 + 8)
                        *(i_9 + 8) = rdx_12
                        rdx_12 = rsi
                    else
                        rdx_12 = *r8_7
                        r9_7 = r8_7
                        
                        if (rdx_12 == 0)
                            break
                    
                    i_9 = *(rdx_12 + 8)
                    r8_7 = &rdx_12[2]
            
            int32_t* i_10 = r14
            
            if (r14 != 0)
                do
                    int32_t* rcx_17 = *(i_10 + 0x10)
                    bool cond:9_1 = (i_10[6].b & 8) != 0
                    *i_10 = *rcx_17
                    void* const rax_31 = -fffffffffffffffc
                    
                    if (cond:9_1)
                        rax_31 = 4
                    
                    i_10[7] -= 1
                    *(i_10 + 0x10) = rax_31 + rcx_17
                    i_10 = *(i_10 + 8)
                while (i_10 != 0)
            
            void* r9_8 = &var_68
            int32_t* rdx_13 = r14
            r15 = 0
            
            if (r14 != 0)
                int32_t* rcx_18 = *(r14 + 8)
                void* r8_8 = &r14[2]
                
                if (rcx_18 != 0)
                    while (true)
                        if (*rdx_13 s> *rcx_18)
                            *r9_8 = rcx_18
                            r9_8 = &var_68
                            r14 = var_68
                            *r8_8 = *(rcx_18 + 8)
                            *(rcx_18 + 8) = rdx_13
                            rdx_13 = r14
                        else
                            rdx_13 = *r8_8
                            r9_8 = r8_8
                            r15 = 0
                            
                            if (rdx_13 == 0)
                                break
                        
                        rcx_18 = *(rdx_13 + 8)
                        r8_8 = &rdx_13[2]
                        
                        if (rcx_18 == 0)
                            r15 = 0
                            break
        
        r15 = 0
    
    int32_t* i_18 = rsi
    
    if (rsi != 0)
        int32_t* i_11
        
        do
            i_11 = *(i_18 + 8)
            
            if (i_18[7] == 0)
                int32_t** rcx_19 = &var_70
                j_2 = rsi
                
                if (rsi != 0)
                    do
                        if (j_2 == i_18)
                            *rcx_19 = *(j_2 + 8)
                            rsi = var_70
                            break
                        
                        rcx_19 = j_2 + 8
                        j_2 = *(j_2 + 8)
                    while (j_2 != 0)
            
            i_18 = i_11
        while (i_11 != 0)
    
    int32_t* i_19 = r14
    
    if (r14 != 0)
        int32_t* i_12
        
        do
            i_12 = *(i_19 + 8)
            
            if (i_19[7] == 0)
                uint64_t* rcx_20 = &var_68
                j_2 = r14
                
                if (r14 != 0)
                    do
                        if (j_2 == i_19)
                            *rcx_20 = *(j_2 + 8)
                            r14 = var_68
                            break
                        
                        rcx_20 = j_2 + 8
                        j_2 = *(j_2 + 8)
                    while (j_2 != 0)
            
            i_19 = i_12
        while (i_12 != 0)
    
    rdi = var_58_1

for (; i_13 s<= arg_10; i_13 += 1)
    (*(arg1 + 0x100))(arg1)

j_2.b = 0
return j_2
