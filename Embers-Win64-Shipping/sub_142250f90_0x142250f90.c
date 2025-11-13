// 函数: sub_142250f90
// 地址: 0x142250f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1[5].d)
arg1[0x15].d = 0

if (*(arg1 + 0xac) != rbx.d)
    sub_1413f6f70(&arg1[0x14], rbx.d)

arg1[0x17].d = 0

if (*(arg1 + 0xbc) != rbx.d)
    sub_1405c55e0(&arg1[0x16], rbx.d)

arg1[0x19].d = 0

if (*(arg1 + 0xcc) != rbx.d)
    sub_1405c5570(&arg1[0x18], rbx.d)

arg1[0x1b].d = 0

if (*(arg1 + 0xdc) != rbx.d)
    sub_1405dadb0(&arg1[0x1a], rbx.d)

void* rsi = &arg1[0x1e]
*(rsi + 8) = 0

if (*(rsi + 0xc) != rbx.d)
    sub_1405dadb0(rsi, rbx.d)

arg1[0x1d].d = 0

if (*(arg1 + 0xec) != rbx.d)
    sub_14083ad30(&arg1[0x1c], rbx.d)

*(arg1 + 0x174) = 0
int32_t rcx_6 = 0
int32_t arg_8 = 0
int64_t var_98 = 1
int32_t i_1
int32_t arg_18
int64_t* arg_20

if (rbx.d s> 0)
    int64_t rdx_7 = 0
    i_1 = 1
    int32_t i_2 = 1
    int64_t var_90_1 = 0
    void* r9_1 = &arg1[0x3b]
    int64_t* r14_1 = nullptr
    arg_20 = nullptr
    
    do
        int64_t rbx_1 = arg1[4]
        
        if (*sub_1408296b0(r9_1, &arg_18, *(*arg1 + (rdx_7 << 3))) == 0xffffffff)
            int32_t* r14_2 = *(r14_1 + rbx_1)
            void* rax_6 = &r14_2[sx.q(*(arg_20 + rbx_1 + 8)) * 0x18]
            
            if (r14_2 == rax_6)
                rcx_6 = arg_8
            else
                void* rdi_1 = &r14_2[6]
                
                do
                    int64_t rbx_2 = sx.q(arg1[0x15].d)
                    int32_t rax_7 = (rbx_2 + 1).d
                    arg1[0x15].d = rax_7
                    
                    if (rax_7 s> *(arg1 + 0xac))
                        sub_1405c50f0(&arg1[0x14])
                    
                    int32_t* rcx_10 = rbx_2 * 0x1c + arg1[0x14]
                    *rcx_10 = *r14_2
                    rcx_10[1] = *(rdi_1 - 0x14)
                    rcx_10[2] = *(rdi_1 - 0x10)
                    rcx_10[3] = *(rdi_1 - 0xc)
                    rcx_10[4] = *(rdi_1 - 8)
                    rcx_10[5] = *(rdi_1 - 4)
                    rcx_10[6] = *rdi_1
                    int128_t* rax_15 = *(rdi_1 + 8)
                    int128_t* rsi_1
                    
                    if (rax_15 == 0)
                        int32_t var_78
                        __builtin_strncpy(&var_78, "333?333?", 8)
                        rsi_1 = &var_78
                        int32_t var_70_1 = 0x3e99999a
                    else
                        int128_t var_64
                        rsi_1 = &var_64
                        int32_t var_54_1 = rax_15[1].d
                        var_64 = *rax_15
                    
                    int64_t rbx_3 = sx.q(arg1[0x17].d)
                    int32_t rax_17 = (rbx_3 + 1).d
                    arg1[0x17].d = rax_17
                    
                    if (rax_17 s> *(arg1 + 0xbc))
                        sub_1405c4d20(&arg1[0x16])
                    
                    int64_t rcx_12 = arg1[0x16]
                    int64_t rdx_11 = rbx_3 * 5
                    int32_t rax_18 = rsi_1[1].d
                    *(rcx_12 + (rdx_11 << 2)) = *rsi_1
                    *(rcx_12 + (rdx_11 << 2) + 0x10) = rax_18
                    int64_t rbx_4 = sx.q(arg1[0x19].d)
                    int32_t rax_19 = (rbx_4 + 1).d
                    arg1[0x19].d = rax_19
                    
                    if (rax_19 s> *(arg1 + 0xcc))
                        sub_1405a4d70(&arg1[0x18])
                    
                    *(arg1[0x18] + (rbx_4 << 3)) = *(rdi_1 + 0x28)
                    int64_t rbx_5 = sx.q(arg1[0x1b].d)
                    int32_t rax_21 = (rbx_5 + 1).d
                    arg1[0x1b].d = rax_21
                    
                    if (rax_21 s> *(arg1 + 0xdc))
                        sub_1406105e0(&arg1[0x1a])
                    
                    *(arg1[0x1a] + (rbx_5 << 2)) = *(rdi_1 + 0x3c)
                    int64_t rbx_6 = sx.q(arg1[0x1d].d)
                    int32_t rax_23 = (rbx_6 + 1).d
                    arg1[0x1d].d = rax_23
                    
                    if (rax_23 s> *(arg1 + 0xec))
                        sub_14083a7e0(&arg1[0x1c])
                    
                    int64_t rdx_15 = rbx_6 * 3
                    int64_t rcx_18 = arg1[0x1c]
                    rsi = &arg1[0x1e]
                    *(rcx_18 + (rdx_15 << 2)) = *(rdi_1 + 0x30)
                    *(rcx_18 + (rdx_15 << 2) + 4) = *(rdi_1 + 0x34)
                    *(rcx_18 + (rdx_15 << 2) + 8) = *(rdi_1 + 0x38)
                    int64_t rbx_7 = sx.q(*(rsi + 8))
                    int32_t rax_27 = (rbx_7 + 1).d
                    *(rsi + 8) = rax_27
                    
                    if (rax_27 s> *(rsi + 0xc))
                        sub_1405a4cf0(rsi)
                    
                    r14_2 = &r14_2[0x18]
                    rcx_6 = arg_8 + 1
                    rdi_1 += 0x60
                    arg_8 = rcx_6
                    *(*rsi + (rbx_7 << 2)) = i_1 - 1
                while (r14_2 != rax_6)
                
                i_2 = i_1
            
            r14_1 = arg_20
        else
            rcx_6 = arg_8
        
        if (i_2 == arg1[0x2d].d)
            *(arg1 + 0x174) = rcx_6
        
        r9_1 = &arg1[0x3b]
        rdx_7 = var_90_1 + 1
        i_2 += 1
        r14_1 = &r14_1[3]
        i_1 = i_2
        var_90_1 = rdx_7
        arg_20 = r14_1
    while (rdx_7 s< rbx)

int32_t r14_3 = 0
arg1[0x47].d = 0

if (*(arg1 + 0x23c) != rcx_6)
    sub_1405dadb0(&arg1[0x46], rcx_6)
    rcx_6 = arg_8

i_1 = 0
int64_t r13_1 = sx.q(rcx_6)

if (*(arg1 + 0x174) s> 0)
    void* rcx_22 = nullptr
    void* rdi_2 = &arg1[0x31]
    void* var_90_2 = nullptr
    int32_t i
    
    do
        int64_t r12_1 = sx.q(*(rcx_22 + *rsi))
        sub_140ba6ab0(rdi_2, &arg_18, *(*arg1 + (r12_1 << 3)))
        int64_t rax_30 = sx.q(arg_18)
        void* const rax_33
        
        if (rax_30.d == 0xffffffff)
            rax_33 = nullptr
        else
            rax_33 = rax_30 * 0x60 + *rdi_2
        
        int64_t* rbp_1 = rax_33 + 8
        
        if (rax_33 == 0)
            rbp_1 = nullptr
        
        int64_t rax_34 = var_98
        int64_t rdi_3 = rax_34
        
        if (rax_34 s< r13_1)
            do
                int64_t rcx_24 = sx.q(*(*rsi + (rdi_3 << 2)))
                
                if (r12_1.d == rcx_24.d)
                label_1422513f2:
                    int64_t rsi_2 = sx.q(arg1[0x47].d)
                    int32_t rax_37 = (rsi_2 + 1).d
                    arg1[0x47].d = rax_37
                    
                    if (rax_37 s> *(arg1 + 0x23c))
                        sub_1405a4cf0(&arg1[0x46])
                    
                    *(arg1[0x46] + (rsi_2 << 2)) = r14_3
                    rsi = &arg1[0x1e]
                else if (rbp_1 != 0)
                    sub_1408296b0(rbp_1, &arg_20, *(*arg1 + (rcx_24 << 3)))
                    int64_t rax_36 = sx.q(arg_20.d)
                    
                    if (rax_36.d != 0xffffffff)
                        *rbp_1
                        
                        if (rax_36 << 4 != neg.q(*rbp_1))
                            goto label_1422513f2
                
                r14_3 += 1
                rdi_3 += 1
            while (rdi_3 s< r13_1)
            
            rax_34 = var_98
        
        i = i_1 + 1
        rcx_22 = var_90_2 + 4
        i_1 = i
        rdi_2 = &arg1[0x31]
        var_90_2 = rcx_22
        var_98 = rax_34 + 1
    while (i s< *(arg1 + 0x174))
    rcx_6 = arg_8

int32_t rsi_3 = 0
arg1[0x21].d = 0
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q((rcx_6 - 1) * rcx_6)
int64_t rdi_5 = sx.q((temp1 - temp0) s>> 1)

if (*(arg1 + 0x10c) != rdi_5.d)
    sub_1405a51b0(&arg1[0x20], rdi_5.d)
    rsi_3 = arg1[0x21].d

int32_t rax_45 = rsi_3 + rdi_5.d
arg1[0x21].d = rax_45

if (rax_45 s> *(arg1 + 0x10c))
    sub_1405c4e40(&arg1[0x20])

int64_t result = memset((sx.q(rsi_3) << 5) + arg1[0x20], 0, rdi_5 << 5)
arg1[0x45].b = 0
return result
