// 函数: sub_1414f8240
// 地址: 0x1414f8240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_20 = arg4
int32_t r14 = 0
void*** r10 = arg1
int32_t* rbp = arg4
void* rsi = &arg1[0xf]
void* var_68 = rsi
*arg1 = &data_142fbb3b8
void* r13 = arg2
*(arg1 + 8) = *arg4
*(arg1 + 0x18) = arg4[1]
*(arg1 + 0x28) = arg4[2]
uint128_t zmm1 = zx.o(arg4[3].q)
void* r9 = &arg1[0x11]
arg1[8].d = arg6
*(arg1 + 0x44) = arg7
arg1[9].d = arg8
*(arg1 + 0x4c) = arg9
arg1[0xa].d = arg10
*arg1 = &data_142fbb5b0
arg1[7] = zmm1.q
*(arg1 + 0x54) = 1
arg1[0xb].d = 0xffffffff
*(arg1 + 0x5c) = 0
arg1[0xc].d = 0xffffffff
arg1[0xd].d = 1
*(arg1 + 0x6c) = arg3.d
__builtin_memset(&arg1[0xe], 0, 0x38)
int32_t i = 0
arg6 = 0
void* var_70 = r9

if (*(r10 + 0x11) u> 0)
    do
        uint64_t i_2 = zx.q(i)
        void* rdi_1 = *(arg5 + (i_2 << 3))
        
        if (rdi_1 != 0 || (*(r10 + 0x3c) & 2) == 0)
            int32_t rcx = r10[0x10].d
            uint64_t rbx_1 = 0
            
            if (rcx s<= 0)
            label_1414f83b2:
                rbx_1 = sx.q(*(rsi + 8))
                int32_t rax_6 = (rbx_1 + 1).d
                *(rsi + 8) = rax_6
                
                if (rax_6 s> *(rsi + 0xc))
                    sub_1405a4d70(rsi)
                    r10 = arg1
                
                uint64_t r9_1 = rbx_1 << 3
                int32_t rdx_2 = 0
                *(r9_1 + *rsi) = 0
                
                if (rdi_1 != 0)
                    int32_t rax_8 = *(r10 + 0x44)
                    int32_t r8 = *(rdi_1 + 0x18)
                    
                    if (r10[8].d u>= rax_8)
                        rax_8 = r10[8].d
                    
                    int32_t temp3_1 = *(rdi_1 + 0x14)
                    bool cond:3_1 = temp3_1 == r8
                    
                    if (temp3_1 u>= r8)
                        r8 = *(rdi_1 + 0x14)
                    
                    uint32_t temp0_1 = divu.dp.d(0:rax_8, r8)
                    uint64_t rflags_1
                    int32_t temp0_2
                    temp0_2, rflags_1 = _bit_scan_reverse(temp0_1)
                    int32_t rcx_2
                    
                    rcx_2 = cond:3_1 ? 0x20 : 0x1f - temp0_2
                    
                    uint64_t rflags_2
                    int32_t temp0_3
                    temp0_3, rflags_2 = _bit_scan_reverse(temp0_1 - 1)
                    int32_t rax_11
                    
                    if (temp0_1 == 1)
                        rax_11 = 0x20
                    else
                        rax_11 = 0x1f - temp0_3
                    
                    rdx_2 = (0x20 - rax_11) & not.d(rcx_2 << 0x1a s>> 0x1f)
                    int32_t rcx_7 = zx.d(*(rdi_1 + 0x25)) + rdx_2
                    
                    if (*(r10 + 0x5c) u>= rcx_7)
                        rcx_7 = *(r10 + 0x5c)
                    
                    *(r10 + 0x5c) = rcx_7
                
                *(r9_1 + *rsi) = rbp[i_2 + 3]
                *(r9_1 + *rsi + 4) = rdx_2.b
                r9 = &r10[0x11]
            else
                int32_t* rax_5 = *rsi
                
                while (*rax_5 != rbp[i_2 + 3])
                    rbx_1 = zx.q(rbx_1.d + 1)
                    rax_5 = &rax_5[2]
                    
                    if (rbx_1.d s>= rcx)
                        goto label_1414f83b2
            
            arg3 = zx.q(*(i_2 + rbp + 0x2c))
            uint64_t rbp_1 = 0
            void* j = nullptr
            
            if (rdi_1 != 0)
                rbp_1 = zx.q(*(arg3 + rdi_1 + 0x30))
                j = *(*(rdi_1 + 0x38) + (rbp_1 << 3))
            
            int32_t rdx_6
            int64_t rdi_2
            
            if ((*(r10 + 0x3c) & 2) != 0)
                rdx_6 = r10[0x12].d
                rdi_2 = 0
            
            if ((*(r10 + 0x3c) & 2) == 0 || rdx_6 s<= 0)
            label_1414f84d3:
                rdi_2 = sx.q(*(r9 + 8))
                int32_t rax_17 = (rdi_2 + 1).d
                *(r9 + 8) = rax_17
                
                if (rax_17 s> *(r9 + 0xc))
                    sub_1405a4f90(r9)
                    r10 = arg1
                    arg3 = zx.q(arg3.d)
                    r9 = var_70
                
                int64_t rcx_13 = rdi_2 * 2
                *(*r9 + (rcx_13 << 3)) = 0
                int64_t rax_19 = *r9
                void* rdx_8 = *(rax_19 + (rcx_13 << 3))
                *(rax_19 + (rcx_13 << 3)) = j
                
                if (j != 0)
                    *(j + 0x1bc) += 1
                
                if (rdx_8 != 0)
                    *(rdx_8 + 0x1bc) -= 1
                
                *(*r9 + (rcx_13 << 3) + 8) = rbx_1.b
                *(*r9 + (rcx_13 << 3) + 9) = rbp_1.b
                *(*r9 + (rcx_13 << 3) + 0xa) = 0
                *(*r9 + (rcx_13 << 3) + 0xc) = 0
            else
                char* rcx_10 = *r9 + 9
                
                while (*(rcx_10 - 9) != j || zx.d(rcx_10[-1]) != rbx_1.d
                        || zx.d(*rcx_10) != rbp_1.d)
                    rdi_2 = zx.q(rdi_2.d + 1)
                    rcx_10 = &rcx_10[0x10]
                    
                    if (rdi_2.d s>= rdx_6)
                        goto label_1414f84d3
            
            int64_t rcx_14 = *r9
            rsi = &r10[0xf]
            rbp = arg_20
            int64_t rdx_10 = sx.q(rdi_2.d) << 4
            *(rcx_14 + rdx_10 + 0xa) |= (1 << (arg3.d u% 0x20)).w
            void* rcx_16 = *r9 + rdx_10
            char rdx_11 = *(rcx_16 + 0xc)
            *(rcx_16 + 0xc) = rdx_11 + 1
            i = arg6
            *(r10 + (i_2 << 1) + 0x98) = rdi_2.b
            *(r10 + (i_2 << 1) + 0x99) = rdx_11
        
        i += 1
        arg6 = i
    while (i u< zx.d(*(r10 + 0x11)))
    
    r13 = arg2

int32_t rdx_13 = *(r10 + 0x4c) * *(r10 + 0x44)
int32_t rax_29 = r10[9].d * r10[8].d
bool cond:0 = rax_29 == rdx_13

if (rax_29 u>= rdx_13)
    rdx_13 = rax_29

uint64_t rflags_3
int32_t temp0_4
temp0_4, rflags_3 = _bit_scan_reverse(rdx_13)
int32_t rcx_17

rcx_17 = cond:0 ? 0x20 : 0x1f - temp0_4

int32_t rcx_19 = rcx_17 << 0x1a s>> 0x1f
uint64_t rflags_4
int32_t temp0_5
temp0_5, rflags_4 = _bit_scan_reverse(rdx_13 - 1)
int32_t r11

if (rcx_19 == 0)
    r11 = 0x20
else
    r11 = 0x1f - temp0_5

arg7 = 0
int32_t rax_32 = 0xb
int32_t r12_1 = (0x20 - r11) & not.d(rcx_19)
int32_t i_1 = 0

if (*(r10 + 0x5c) u<= r12_1)
    r12_1 = *(r10 + 0x5c)

if (r12_1 u<= 0xb)
    rax_32 = r12_1

*(r10 + 0x5c) = rax_32

if (r10[0x10].d s> 0)
    int64_t rcx_21 = 0
    int64_t var_70_1 = 0
    
    do
        int32_t* rcx_22 = rcx_21 + *rsi
        int32_t rbx_2 = *rcx_22
        uint64_t rax_34 = zx.q(rbx_2) & 0x3fffff
        arg9 = rbx_2
        void* const r9_4
        
        if (rax_34.d u< *(r13 + 0xa0))
            r9_4 = rax_34 * 0x60 + *(r13 + 0x98)
        
        if (rax_34.d u>= *(r13 + 0xa0) || *(r9_4 + 0x5c) != (rbx_2 u>> 0x16).w)
            r9_4 = nullptr
        
        if (r9_4 != 0 && *(r9_4 + 8) != 0)
            int32_t r11_2 = *(r10 + 0x5c) - zx.d(rcx_22[1].b)
            arg6 = 0
            int32_t r12_2 = 0
            arg3 = zx.q(1 << r11_2.b)
            arg10 = r11_2
            uint32_t temp0_6 =
                divu.dp.d(0:(zx.d(*(r9_4 + 0x20)) * *(r9_4 + 0x14) - 1 + arg3.d), arg3.d)
            uint32_t rax_45 =
                divu.dp.d(0:((arg3 - 1).d + zx.d(*(r9_4 + 0x22)) * *(r9_4 + 0x18)), arg3.d)
            uint32_t arg_18 = rax_45
            
            if (rax_45 != 0)
                do
                    int32_t rbp_2 = 0
                    
                    if (temp0_6 != 0)
                        uint32_t rcx_26 = zx.d(r12_2.w)
                        int32_t var_78 = rbx_2
                        
                        do
                            uint32_t rax_46 = zx.d(rbp_2.w)
                            int32_t rcx_30 = (rax_46 << 8 ^ rax_46) & 0xff00ff
                            uint64_t rax_50 = (zx.q(rcx_30 << 4) ^ zx.q(rcx_30)) & 0xf0f0f0f
                            int32_t rdx_18 = ((rax_50 << 2).d ^ rax_50.d) & 0x33333333
                            int32_t rax_54 = (rcx_26 << 8 ^ rcx_26) & 0xff00ff
                            uint64_t rcx_34 = (zx.q(rax_54 << 4) ^ zx.q(rax_54)) & 0xf0f0f0f
                            int32_t rax_57 = ((rcx_34 << 2).d ^ rcx_34.d) & 0x33333333
                            int32_t var_74_1 = (((((rax_57 * 2) ^ rax_57) & 0x555555)
                                | (zx.d(r11_2.b) & 0xf) << 0x17) * 2)
                                | (((rdx_18 * 2) ^ rdx_18) & 0x555555)
                            char rax_61
                            rax_61, arg3 = sub_14150b610(r13 + 0x1c8, &var_78)
                            
                            if (rax_61 != 0)
                                int64_t rsi_1 = sx.q(*(r13 + 0x1c0))
                                int32_t rax_62 = (rsi_1 + 1).d
                                *(r13 + 0x1c0) = rax_62
                                
                                if (rax_62 s> *(r13 + 0x1c4))
                                    sub_1405a4d70(r13 + 0x1b8)
                                
                                *(*(r13 + 0x1b8) + (rsi_1 << 3)) = var_78.q
                            
                            rbp_2 += 1
                        while (rbp_2 u< temp0_6)
                        
                        rbx_2 = arg9
                        r14 = 0
                        r12_2 = arg6
                        r11_2 = arg10
                        rax_45 = arg_18
                    
                    r12_2 += 1
                    arg6 = r12_2
                while (r12_2 u< rax_45)
                
                r10 = arg1
                rsi = var_68
                i_1 = arg7
        
        i_1 += 1
        rcx_21 = var_70_1 + 8
        arg7 = i_1
        var_70_1 = rcx_21
    while (i_1 s< r10[0x10].d)
    
    r9 = &r10[0x11]

int32_t rdx_21 = r10[0x12].d
arg3.b = 0

if (rdx_21 s> 0)
    int64_t* rcx_45 = *r9
    
    while (true)
        if (*(*rcx_45 + 0x1b8) u> 0x40)
            arg3.b = 1
            break
        
        r14 += 1
        rcx_45 = &rcx_45[2]
        
        if (r14 s>= rdx_21)
            arg3.b = 0
            break

char var_56 = rdx_21.b
char var_57 = arg3.b
char var_58 = arg_20[2].b
int32_t var_60 = *arg_20
int32_t var_5c = arg_20[1]
char var_55
char var_55_1 = var_55 ^ ((arg_20[0xd].b ^ var_55) & 1)
void*** rax_69 = sub_1414fd3a0(r13, &var_60, r10)
arg1[0xe] = rax_69
arg1[0xb].d = zx.d(*(rax_69 + 0x69c))
*(arg1 + 0x54) = *(rax_69 + 0x19)
return arg1
