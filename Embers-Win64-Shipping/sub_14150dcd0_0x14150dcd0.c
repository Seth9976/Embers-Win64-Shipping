// 函数: sub_14150dcd0
// 地址: 0x14150dcd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
void*** r12 = arg1
int32_t i_4 = 0
void** var_58

if (arg1[0x10].d s> 0)
    void* rcx = nullptr
    var_58 = nullptr
    
    do
        int32_t* rcx_1 = rcx + r12[0xf]
        int32_t rbx_1 = *rcx_1
        uint64_t rax_2 = zx.q(rbx_1) & 0x3fffff
        void* const rbp_3
        
        if (rax_2.d u< arg2[0x28])
            rbp_3 = rax_2 * 0x60 + *(arg2 + 0x98)
        
        if (rax_2.d u>= arg2[0x28] || *(rbp_3 + 0x5c) != (rbx_1 u>> 0x16).w)
            rbp_3 = nullptr
        
        if (rbp_3 != 0 && *(rbp_3 + 8) != 0)
            int32_t r9_2 = *(r12 + 0x5c) - zx.d(rcx_1[1].b)
            int32_t r13_1 = 0
            int32_t r8_1 = 1 << r9_2.b
            int32_t var_68_1 = r9_2
            int32_t arg_10 = 0
            uint32_t temp0_1 =
                divu.dp.d(0:(zx.d(*(rbp_3 + 0x20)) * *(rbp_3 + 0x14) - 1 + r8_1), r8_1)
            uint32_t rax_13 =
                divu.dp.d(0:(r8_1 - 1 + zx.d(*(rbp_3 + 0x22)) * *(rbp_3 + 0x18)), r8_1)
            uint32_t var_64_1 = rax_13
            
            if (rax_13 != 0)
                do
                    int32_t rdi_1 = 0
                    
                    if (temp0_1 != 0)
                        uint32_t r12_1 = zx.d(r13_1.w)
                        
                        do
                            uint32_t rax_14 = zx.d(rdi_1.w)
                            int32_t var_60 = rbx_1
                            int32_t rcx_8 = (rax_14 << 8 ^ rax_14) & 0xff00ff
                            uint64_t rax_18 = (zx.q(rcx_8 << 4) ^ zx.q(rcx_8)) & 0xf0f0f0f
                            int32_t rdx_3 = ((rax_18 << 2).d ^ rax_18.d) & 0x33333333
                            int32_t rax_22 = (r12_1 << 8 ^ r12_1) & 0xff00ff
                            uint64_t rcx_12 = (zx.q(rax_22 << 4) ^ zx.q(rax_22)) & 0xf0f0f0f
                            int32_t rax_25 = ((rcx_12 << 2).d ^ rcx_12.d) & 0x33333333
                            int32_t var_5c_1 = (((((rax_25 * 2) ^ rax_25) & 0x555555)
                                | (zx.d(r9_2.b) & 0xf) << 0x17) * 2)
                                | (((rdx_3 * 2) ^ rdx_3) & 0x555555)
                            
                            if (sub_14151bdc0(&arg2[0x72], &var_60) != 0)
                                sub_1409d7d20(&arg2[0x6e], &var_60)
                                int32_t r9_3 = *arg2
                                int32_t arg_20 = var_60
                                sub_14151bf40(&arg_20, rbp_3, &var_60, r9_3)
                            
                            rdi_1 += 1
                        while (rdi_1 u< temp0_1)
                        
                        r13_1 = arg_10
                        r9_2 = var_68_1
                        rax_13 = var_64_1
                    
                    r13_1 += 1
                    arg_10 = r13_1
                while (r13_1 u< rax_13)
                
                r12 = arg1
                i = i_4
        
        i += 1
        rcx = &var_58[1]
        i_4 = i
        var_58 = rcx
    while (i s< r12[0x10].d)

int32_t rdx_8 = r12[0x12].d
void** r13_2 = nullptr
int32_t r8_3 = 0
var_58 = nullptr
int32_t rcx_23 = 0
int32_t var_4c = 0
int32_t rbp_4 = 0

if (rdx_8 s> 0)
    int64_t* rdi_2 = nullptr
    
    do
        int64_t r14_4 = *(rdi_2 + r12[0x11])
        
        if (r14_4 != 0)
            int64_t rbx_2 = sx.q(rcx_23)
            rcx_23 = (rbx_2 + 1).d
            
            if (rcx_23 s> r8_3)
                sub_1405a4d70(&var_58)
                r8_3 = var_4c
                r13_2 = var_58
            
            r13_2[rbx_2] = r14_4
        
        rdx_8 = r12[0x12].d
        rbp_4 += 1
        rdi_2 = &rdi_2[2]
    while (rbp_4 s< rdx_8)

void** r15_2 = r13_2
void* rax_34 = &r13_2[sx.q(rcx_23)]

if (r13_2 != rax_34)
    do
        void* rdi_3 = *r15_2
        char rbp_5 = *(r12[0xe] + 0x69c)
        int32_t i_1 = *(rdi_3 + 0xb0) + 1
        
        if (i_1 s< *(rdi_3 + 0xa8))
            int64_t r14_6 = sx.q(i_1) * 0xc
            
            do
                int64_t rax_37 = *(rdi_3 + 0xa0)
                
                if (*(r14_6 + rax_37 + 0xb) != 0xff && (*(r14_6 + rax_37) u>> 0x1c).b == rbp_5)
                    sub_14151c430(rdi_3 + 0x20, arg2, i_1, 0)
                
                i_1 += 1
                r14_6 += 0xc
            while (i_1 s< *(rdi_3 + 0xa8))
        
        rdx_8 = r12[0x12].d
        r15_2 = &r15_2[1]
    while (r15_2 != rax_34)
    
    r13_2 = var_58

int32_t i_2 = 0

if (rdx_8 s> 0)
    int64_t* r9_4 = nullptr
    
    do
        int64_t rax_38 = r12[0x11]
        void* rdx_10 = *(r9_4 + rax_38)
        *(r9_4 + rax_38) = 0
        
        if (rdx_10 != 0)
            *(rdx_10 + 0x1bc) -= 1
        
        i_2 += 1
        r9_4 = &r9_4[2]
    while (i_2 s< r12[0x12].d)

if (r13_2 != 0)
    sub_140a74f90(r13_2)

sub_141507a70(&r12[0xe][4], r12)
int64_t rcx_31 = sx.q(arg2[0xbe])

if (rcx_31.d != 0)
    int32_t r15_3 = 0
    int32_t rdi_4 = 0
    r13_2.b = **(arg2 + 0x2f0) != r12
    int64_t rbx_4 = 0
    
    do
        int64_t r9_5 = sx.q(rdi_4)
        rbx_4 += 1
        rdi_4 += 1
        
        if (rbx_4 s< rcx_31)
            int64_t* rcx_32 = *(arg2 + 0x2f0) + (rbx_4 << 3)
            
            do
                int32_t rax_41
                rax_41.b = *rcx_32 != r12
                
                if (zx.d(r13_2.b) != rax_41)
                    break
                
                rdi_4 += 1
                rbx_4 += 1
                rcx_32 = &rcx_32[1]
            while (rbx_4 s< rcx_31)
        
        int32_t r14_8 = rdi_4 - r9_5.d
        
        if (r13_2.b != 0)
            if (r15_3 != r9_5.d)
                int64_t rcx_33 = *(arg2 + 0x2f0)
                memmove(rcx_33 + (sx.q(r15_3) << 3), rcx_33 + (r9_5 << 3), r14_8 << 3)
            
            r15_3 += r14_8
        
        r13_2.b ^= 1
    while (rbx_4 s< rcx_31)
    
    arg2[0xbe] = r15_3

sub_14150ea80(&arg2[0x3e], &r12[1])
int64_t* rbx_5 = r12[0xe]
rbx_5[0xd3].d -= 1

if (rbx_5[0xd3].d == 1 && (*(rbx_5 + 0x1b) & 1) != 0)
    sub_14198bce0(rbx_5)
    int64_t rcx_38 = zx.q(*(rbx_5 + 0x69c)) + 1
    void*** rdx_15 = *(arg2 + (rcx_38 << 3))
    void* rcx_39 = &arg2[rcx_38 * 2]
    
    if (rdx_15 != 0)
        *rcx_39 = 0
        sub_1414fcbe0(rcx_39, rdx_15)

*r12 = &data_142fbb5b0
int32_t i_5 = r12[0x12].d
int64_t* rcx_40 = r12[0x11]

if (i_5 != 0)
    int32_t i_3
    
    do
        void* rax_43 = *rcx_40
        
        if (rax_43 != 0)
            *(rax_43 + 0x1bc) -= 1
        
        rcx_40 = &rcx_40[2]
        i_3 = i_5
        i_5 -= 1
    while (i_3 != 1)
    rcx_40 = r12[0x11]

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

int64_t rcx_41 = r12[0xf]

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

*r12 = &data_142fbb3b8
return j_sub_140a74f90(r12) __tailcall
