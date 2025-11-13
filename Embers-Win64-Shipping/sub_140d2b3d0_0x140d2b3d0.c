// 函数: sub_140d2b3d0
// 地址: 0x140d2b3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* const r15 = &data_142d40450
int64_t* r12 = arg3

if (arg3 == 0)
    int16_t* const rcx
    
    if (arg2[1].d == arg3.d)
        rcx = &data_142d40450
    else
        rcx = *arg2
    
    if (sub_140a546e0(rcx, u"engine-ini:", 0xb) != 0)
        int16_t* const rcx_3
        
        if (arg2[1].d == 0)
            rcx_3 = &data_142d40450
        else
            rcx_3 = *arg2
        
        if (sub_140a546e0(rcx_3, u"game-ini:", 9) != 0)
            int16_t* const rcx_4
            
            if (arg2[1].d == 0)
                rcx_4 = &data_142d40450
            else
                rcx_4 = *arg2
            
            if (sub_140a546e0(rcx_4, u"input-ini:", 0xa) != 0)
                int16_t* const rcx_5
                
                if (arg2[1].d == 0)
                    rcx_5 = &data_142d40450
                else
                    rcx_5 = *arg2
                
                if (sub_140a546e0(rcx_5, u"editor-ini:", 0xb) != 0)
                    sub_140596d10(arg1, arg2)
                    return arg1
                
                r12 = &data_143de5790
            else
                r12 = &data_143de5820
        else
            r12 = &data_143de5830
    else
        r12 = &data_143de5780

int32_t rax_2 = sub_140a23cf0(arg2, &data_142d84ee0, 0, 0, 0xffffffff)
int32_t r8 = arg2[1].d
int16_t* var_58 = nullptr
int32_t rdi_1 = r8 - 1

if (r8 == 0)
    rdi_1 = 0

int32_t rcx_2

if (rax_2 + 1 s>= 0)
    rcx_2 = rdi_1
    
    if (rax_2 + 1 s< rdi_1)
        rcx_2 = rax_2 + 1
else
    rcx_2 = 0

int64_t r9 = sx.q(rcx_2)

if (sx.q(rax_2 + 1) + 0x7fffffff s< r9)
    rdi_1 = rcx_2
else if (sx.q(rax_2 + 1) + 0x7fffffff s< sx.q(rdi_1))
    rdi_1 = rax_2 - -0x80000000

int16_t* const rax_9

if (r8 == 0)
    rax_9 = &data_142d40450
else
    rax_9 = *arg2

int16_t* r13 = &rax_9[r9]
int16_t* var_48 = nullptr
int32_t rdi_2 = rdi_1 - rcx_2
int32_t var_3c = 0
int32_t rbx_1 = 0
int16_t* rsi = nullptr
int32_t var_40 = 0
int32_t r14 = 0

if (r13 != 0 && *r13 != 0 && rdi_2 s> 0)
    if (rdi_2 + 1 s> 0)
        sub_1405947f0(&var_48, rdi_2 + 1)
        r14 = var_3c
        rbx_1 = var_40
        rsi = var_48
    
    rbx_1 += rdi_2 + 1
    
    if (rbx_1 s> r14)
        sub_140594770(&var_48)
        r14 = var_3c
        rsi = var_48
    
    UnDecorator::getReferenceType(rsi, r13, rdi_2 * 2)
    rsi[sx.q(rbx_1) - 1] = 0
    int16_t* rcx_10 = var_58
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

var_58 = rsi
int32_t var_4c = r14
int32_t var_68 = 0xffffffff
int32_t rax_11 = sub_140a23cf0(&var_58, &data_142d404c4, 0, 1, 0xffffffff)
int32_t rcx_12 = rbx_1
int16_t* rsi_1 = nullptr
int32_t rdi_3 = 0
int16_t* r10

if (rax_11 == 0xffffffff)
    r10 = var_58
else
    int32_t rbx_3 = rcx_12 - 1
    
    if (rcx_12 == 0)
        rbx_3 = 0
    
    int32_t rdx_6
    
    if (rax_11 + 1 s>= 0)
        rdx_6 = rbx_3
        
        if (rax_11 + 1 s< rbx_3)
            rdx_6 = rax_11 + 1
    else
        rdx_6 = 0
    
    int64_t r9_1 = sx.q(rdx_6)
    
    if (sx.q(rax_11 + 1) + 0x7fffffff s< r9_1)
        rbx_3 = rdx_6
    else if (sx.q(rax_11 + 1) + 0x7fffffff s< sx.q(rbx_3))
        rbx_3 = rax_11 - -0x80000000
    
    r10 = var_58
    int16_t* rax_13 = &data_142d40450
    var_48 = nullptr
    
    if (rcx_12 != 0)
        rax_13 = r10
    
    int32_t var_40_2 = 0
    int32_t rbx_4 = rbx_3 - rdx_6
    void* r13_1 = &rax_13[r9_1]
    int32_t rax_14 = 0
    int32_t var_3c_1 = 0
    
    if (r13_1 != 0 && *r13_1 != 0 && rbx_4 s> 0)
        if (rbx_4 + 1 s> 0)
            sub_1405947f0(&var_48, rbx_4 + 1)
            rax_14 = var_3c_1
            rdi_3 = var_40_2
            rsi_1 = var_48
        
        rdi_3 = rdi_3 + 1 + rbx_4
        
        if (rdi_3 s> rax_14)
            sub_140594770(&var_48)
            rsi_1 = var_48
        
        UnDecorator::getReferenceType(rsi_1, r13_1, rbx_4 * 2)
        rsi_1[sx.q(rdi_3) - 1] = 0
        rcx_12 = rbx_1
        r10 = var_58
    
    int32_t rax_16 = rcx_12 - 1
    
    if (rcx_12 == 0)
        rax_16 = 0
    
    int32_t r9_2
    
    if (rax_11 s>= 0)
        r9_2 = rax_16
        
        if (rax_11 s< rax_16)
            r9_2 = rax_11
    else
        r9_2 = 0
    
    int32_t rax_17 = rax_16 - r9_2
    int32_t rbx_5 = rcx_12 - 1
    
    if (rcx_12 == 0)
        rbx_5 = 0
    
    int32_t rbx_6 = rbx_5 - r9_2
    
    if (rax_17 s>= 0)
        if (rax_17 s< rbx_6)
            rbx_6 = rax_17
        
        if (rbx_6 != 0)
            int32_t rax_19 = rcx_12 - r9_2
            
            if (rax_19 != rbx_6)
                memmove(&r10[sx.q(r9_2)], &r10[sx.q(r9_2 + rbx_6)], (rax_19 - rbx_6) * 2)
                rcx_12 = rbx_1
                r10 = var_58
            
            rcx_12 -= rbx_6
            int32_t var_50_1 = rcx_12

var_68.q = r12
uint64_t var_38 = 0
int16_t* r8_10 = &data_142d40450
int64_t var_30 = 0

if (rdi_3 != 0)
    r8_10 = rsi_1

if (rcx_12 != 0)
    r15 = r10

sub_140af5b90(data_143ddb400, r15, r8_10, &var_38, 0xffffffff)
uint64_t rax_23 = var_38
var_38 = 0
*arg1 = rax_23
arg1[1].d = var_30.d
int64_t var_30_1 = 0
*(arg1 + 0xc) = var_30:4.d

if (rsi_1 != 0)
    sub_140a74f90(rsi_1)

int16_t* rcx_20 = var_58

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

return arg1
