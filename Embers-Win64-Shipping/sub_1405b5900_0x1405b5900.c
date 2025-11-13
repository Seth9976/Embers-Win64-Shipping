// 函数: sub_1405b5900
// 地址: 0x1405b5900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int128_t* r14 = arg3
int32_t arg_20 = 0xffffffff
int32_t arg_24 = 0

if (arg2 != 0)
    int64_t var_a8
    sub_140d3a3a0(&var_a8, arg2)
    arg_20.q = var_a8

int32_t arg_8
sub_1405ba7b0(arg1 + 8, &arg_8, &arg_20)
int64_t rax_2 = sx.q(arg_8)
void* const rcx_4

if (rax_2.d == 0xffffffff)
    rcx_4 = nullptr
else
    rcx_4 = (rax_2 << 6) + *(arg1 + 8)

int64_t* r12 = rcx_4 + 8

if (rcx_4 == 0)
    r12 = nullptr

if (r12 == 0)
    int32_t* var_a0 = &arg_20
    int32_t arg_10
    sub_1405a7870(arg1 + 8, &arg_10, &var_a0, nullptr)
    r12 = *(arg1 + 8) + (sx.q(arg_10) << 6) + 8
    void*** rax_3 = sub_140a84c80(0, 0x30, 0)
    void*** var_70_1 = rax_3
    
    if (rax_3 != 0)
        rax_3[1] = arg1
        *rax_3 = &data_142d3fe58
        rax_3[2] = sub_1405be840
        rax_3[4] = sub_140a387b0()
        *rax_3 = &data_142d3feb0
    
    int64_t rbx_1 = 0
    
    if (rax_3 != 0)
        sub_140599630(&arg2[0x59], 1)
        void var_90
        int64_t* rax_6 = (*rax_3)[6](rax_3, &var_90)
        int64_t r13_1 = sx.q(arg2[0x5a].d)
        rbx_1 = *rax_6
        int32_t rax_7 = (r13_1 + 1).d
        arg2[0x5a].d = rax_7
        
        if (rax_7 s> *(arg2 + 0x2d4))
            sub_1405a4f90(&arg2[0x59])
        
        void** rax_10 = (r13_1 << 4) + arg2[0x59]
        *rax_10 = rax_3
        rax_10[1].d = 3
    
    *r12 = rbx_1
    void*** rax_11 = sub_140a84c80(0, 0x30, 0)
    void*** var_60_1 = rax_11
    
    if (rax_11 != 0)
        rax_11[1] = arg1
        *rax_11 = &data_142d3fe58
        rax_11[2] = sub_1405be8e0
        rax_11[4] = sub_140a387b0()
        *rax_11 = &data_142d3feb0
    
    int64_t rbx_2 = 0
    
    if (rax_11 != 0)
        sub_140599630(&arg2[0x56], 1)
        void var_88
        int64_t* rax_14 = (*rax_11)[6](rax_11, &var_88)
        int64_t r13_2 = sx.q(arg2[0x57].d)
        rbx_2 = *rax_14
        int32_t rax_15 = (r13_2 + 1).d
        arg2[0x57].d = rax_15
        
        if (rax_15 s> *(arg2 + 0x2bc))
            sub_1405a4f90(&arg2[0x56])
        
        void** rax_18 = (r13_2 << 4) + arg2[0x56]
        *rax_18 = rax_11
        rax_18[1].d = 3
    
    r12[1] = rbx_2
    void* rax_19 = *(arg1 + 0x58)
    void* const rcx_15
    
    if (rax_19 == 0)
        rcx_15 = nullptr
    else
        rcx_15 = *(rax_19 + 0x10)
    
    void var_80
    int64_t* rax_20 = sub_1405beb90(rcx_15, &var_80, arg2)
    
    if (&r12[2] != rax_20)
        int32_t i_4 = r12[3].d
        void* rcx_16 = r12[2]
        
        if (i_4 != 0)
            int64_t* rsi_3 = rcx_16 + 8
            int32_t i
            
            do
                int64_t* rbx_3 = *rsi_3
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t rax_23 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (rax_23 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                rsi_3 = &rsi_3[2]
                i = i_4
                i_4 -= 1
            while (i != 1)
            rcx_16 = r12[2]
        
        if (rcx_16 != 0)
            sub_140a74f90(rcx_16)
        
        r12[2] = *rax_20
        *rax_20 = 0
        r12[3].d = rax_20[1].d
        *(r12 + 0x1c) = *(rax_20 + 0xc)
        rax_20[1] = 0
    
    sub_140596e10(&var_80)
    r14 = arg3

int32_t i_5 = r12[5].d
int32_t i_1 = i_5
int64_t rcx_20 = *r14
void* rbx_4 = r12[4]
int32_t r9 = rcx_20:4.d

if (i_5 s> 0)
    do
        int32_t r8_4 = i_1 & 0x80000001
        
        if (r8_4 s< 0)
            r8_4 = ((r8_4 - 1) | 0xfffffffe) + 1
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(i_1)
        int32_t i_3 = (temp4_1 - temp3_1) s>> 1
        i_1 = i_3
        int32_t rax_31 = i_3 + rdi
        int32_t* r8_7 = sx.q(rax_31) * 0x1c
        int32_t rax_33 = *(r8_7 + rbx_4)
        int32_t rax_34 = rax_33 - rcx_20.d
        
        if (rax_33 == rcx_20.d)
            rax_34 = *(r8_7 + rbx_4 + 4) - r9
        
        if (rax_34 s< 0)
            rdi = rax_31 + r8_4
    while (i_1 s> 0)

int32_t rcx_21
int32_t* rdx_10

if (rdi s< i_5)
    rdx_10 = sx.q(rdi) * 0x1c
    rcx_21 = rcx_20.d - *(rdx_10 + rbx_4)
    
    if (rcx_20.d == *(rdx_10 + rbx_4))
        rcx_21 = r9 - *(rdx_10 + rbx_4 + 4)

if (rdi s>= i_5 || rcx_21 s< 0 || rdi == 0xffffffff || rbx_4 + 8 == neg.q(rdx_10))
    sub_1405a7640(&r12[4], r14, r14)

int32_t rbx_5 = *(r14 + 4)
int64_t result = sub_140b5b8a0(*r14, 0)
int32_t rcx_23
rcx_23.b = rbx_5 == 0

if ((rcx_23.b & result.b) != 0)
    int64_t* i_2 = r12[2]
    
    for (void* rsi_6 = &i_2[sx.q(r12[3].d) * 2]; i_2 != rsi_6; i_2 = &i_2[2])
        int64_t* rbx_6 = i_2[1]
        result = *i_2
        
        if (rbx_6 != 0)
            rbx_6[1].d += 1
        
        *(result + 8) += 1
        
        if (rbx_6 != 0)
            result = zx.q(rbx_6[1].d)
            rbx_6[1].d -= 1
            
            if (result.d == 1)
                (**rbx_6)(rbx_6)
                result = zx.q(*(rbx_6 + 0xc))
                *(rbx_6 + 0xc) -= 1
                
                if (result.d == 1)
                    result = (*(*rbx_6 + 8))(rbx_6, 1)

return result
