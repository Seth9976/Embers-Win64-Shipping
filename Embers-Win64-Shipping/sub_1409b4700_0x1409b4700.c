// 函数: sub_1409b4700
// 地址: 0x1409b4700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t arg_10 = arg2
int32_t rdx = arg2[1].d
arg3[1].d = 0

if (rdx s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, rdx)

void* rcx_1 = *(arg1 + 0x28)
sub_1409d96c0(rcx_1 + 0x118, *(rcx_1 + 0x120) - *(rcx_1 + 0x14c) + arg2[1].d)
void* r14 = *arg2
void* r12 = r14 + sx.q(arg2[1].d) * 0x18
void* var_88
int64_t var_80
int64_t var_68

while (r14 != r12)
    void* rdi_1 = *(arg1 + 0x28)
    int32_t rbx_1 = *(r14 + 0x10)
    int32_t rsi_1
    
    if (rbx_1 == data_143a1c6c4)
        var_88 = nullptr
        var_80 = 0
        int32_t rax_2 = sub_14090b210(rdi_1 + 0x118, &var_88)
        void* rcx_6 = var_88
        rbx_1 = rax_2
        rsi_1 = rax_2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
    else
        int32_t var_78[0x4]
        int64_t* rcx_5 = *(sub_1409cacd0(rdi_1 + 0x118, &var_78, rbx_1) + 8)
        
        if (rcx_5 != 0)
            *rcx_5 = 0
            rcx_5[1] = 0
        
        rsi_1 = rbx_1
    
    sub_14090bdf0(rdi_1 + 0x308, rsi_1)
    void* i = *r14
    
    for (void* rsi_4 = sx.q(*(r14 + 8)) * 0x60 + i; i != rsi_4; i += 0x60)
        void* i_1 = i
        var_68 = *(arg1 + 0x28) + 0x308
        int32_t var_58_1 = rbx_1
        sub_14099cf40(i + 0x10, &var_68)
    
    int64_t rdi_2 = sx.q(arg3[1].d)
    int32_t rax_6 = (rdi_2 + 1).d
    arg3[1].d = rax_6
    
    if (rax_6 s> *(arg3 + 0xc))
        sub_1405a4cf0(arg3)
    
    r14 += 0x18
    *(*arg3 + (rdi_2 << 2)) = rbx_1

int64_t* rbx_2 = *(arg1 + 0x3b8)
int64_t rdi_3 = 0
uint64_t rsi_6 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3

if (rbx_2 u> &rbx_2[sx.q(*(arg1 + 0x3c0))])
    rsi_6 = 0

if (rsi_6 != 0)
    do
        int64_t* rcx_10 = *rbx_2
        (*(*rcx_10 + 0x348))(rcx_10, arg1, arg3)
        rdi_3 += 1
        rbx_2 = &rbx_2[1]
    while (rdi_3 != rsi_6)

int32_t rax_23 = arg3[1].d
int32_t rdx_10 = 0
int32_t arg_8 = 0

if (rax_23 s> 0)
    int64_t rcx_11 = 0
    int64_t* arg_20 = nullptr
    int64_t arg_18 = 0
    int64_t* r8_2 = nullptr
    
    do
        int64_t rax_12 = *arg_10
        void* r14_1 = *(r8_2 + rax_12)
        void* rax_16 = sx.q(*(r8_2 + rax_12 + 8)) * 0x60 + r14_1
        var_88 = rax_16
        
        if (r14_1 != rax_16)
            do
                void* var_60_1 = r14_1
                int32_t rbx_3 = *(rcx_11 + *arg3)
                int32_t var_58_2 = rbx_3
                var_68 = *(arg1 + 0x28) + 0x308
                sub_14099cf40(r14_1 + 0x10, &var_68)
                int64_t* rdi_4 = *(arg1 + 0x3b8)
                int64_t rsi_7 = 0
                uint64_t r12_2 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3
                
                if (rdi_4 u> &rdi_4[sx.q(*(arg1 + 0x3c0))])
                    r12_2 = 0
                
                if (r12_2 != 0)
                    do
                        int64_t* rcx_13 = *rdi_4
                        (*(*rcx_13 + 0x358))(rcx_13, arg1, zx.q(rbx_3), r14_1)
                        rsi_7 += 1
                        rdi_4 = &rdi_4[1]
                    while (rsi_7 != r12_2)
                
                rcx_11 = arg_18
                r14_1 += 0x60
            while (r14_1 != var_88)
            
            rdx_10 = arg_8
            r8_2 = arg_20
        
        rax_23 = arg3[1].d
        rdx_10 += 1
        r8_2 = &r8_2[3]
        arg_8 = rdx_10
        rcx_11 += 4
        arg_20 = r8_2
        arg_18 = rcx_11
    while (rdx_10 s< rax_23)

var_88 = nullptr
int32_t rbx_4 = 0
var_80.d = 0
void* rsi_8 = nullptr
var_80:4.d = 0
int32_t r12_3 = 0

if (rax_23 s> 0)
    sub_1405dadb0(&var_88, rax_23)
    rax_23 = arg3[1].d
    r12_3 = var_80:4.d
    rbx_4 = var_80.d
    rsi_8 = var_88

int64_t r14_2 = sx.q(rax_23 - 1)

if (rax_23 - 1 s>= 0)
    int64_t temp1_1
    
    do
        uint64_t rax_25 = *arg3
        int64_t rdi_5 = sx.q(rbx_4)
        arg_10 = rax_25
        rbx_4 = (rdi_5 + 1).d
        var_80.d = rbx_4
        
        if (rbx_4 s> r12_3)
            sub_1405a4cf0(&var_88)
            rax_25 = arg_10
            r12_3 = var_80:4.d
            rbx_4 = var_80.d
            rsi_8 = var_88
        
        int32_t rax_26 = *(rax_25 + (r14_2 << 2))
        temp1_1 = r14_2
        r14_2 -= 1
        *(rsi_8 + (rdi_5 << 2)) = rax_26
    while (temp1_1 - 1 s>= 0)

void*** rax_27 = j_sub_140a82f30(0x18)

if (rax_27 != 0)
    *rax_27 = &data_142e3f9b8
    rax_27[1] = rsi_8
    rsi_8 = nullptr
    rax_27[2].d = rbx_4
    *(rax_27 + 0x14) = r12_3

arg_10 = rax_27
int64_t result = sub_1409afc10(arg1, &arg_10)

if (rsi_8 == 0)
    return result

return sub_140a74f90(rsi_8)
