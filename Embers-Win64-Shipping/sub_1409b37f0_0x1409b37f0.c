// 函数: sub_1409b37f0
// 地址: 0x1409b37f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int32_t i = 0
void*** var_78 = arg1
int32_t rdx = arg2[1].d
arg3[1].d = 0
void*** r13 = arg1

if (rdx s> *(arg3 + 0xc))
    sub_1405dadb0(arg3, rdx)

void* rcx_1 = r13[5]
sub_1409d93a0(rcx_1 + 0x70, *(rcx_1 + 0x78) - *(rcx_1 + 0xa4) + arg2[1].d)
void* r12 = *arg2
int64_t rdx_4 = sx.q(arg2[1].d)
void* rax_4 = (rdx_4 << 5) + r12
uint64_t var_98

if (r12 != rax_4)
    do
        void* rcx_3 = r13[5]
        int32_t rax_5 = data_143a1c6b4
        int32_t rbx_1 = *(r12 + 0x18)
        int32_t rdi_1 = *(r12 + 4)
        int32_t rsi_1 = *r12
        bool cond:2_1 = rbx_1 == data_143a1c6bc
        int32_t var_60 = rax_5
        int32_t var_5c_1 = rax_5
        
        if (cond:2_1)
            int64_t var_58_1 = 0
            int64_t var_50_1 = 0
            rbx_1 = sub_1409af2d0(rcx_3 + 0x70, &var_60)
            
            if (var_58_1 != 0)
                sub_140a74f90(var_58_1)
        else
            int64_t* rcx_5 = *(sub_1409ca9d0(rcx_3 + 0x70, &var_98, rbx_1) + 8)
            
            if (rcx_5 != 0)
                *rcx_5 = var_60.q
                rcx_5[1] = 0
                rcx_5[2] = 0
        
        sub_141cda530(rcx_3, rbx_1, rsi_1, rdi_1)
        int64_t rdi_2 = sx.q(arg3[1].d)
        int32_t rax_9 = (rdi_2 + 1).d
        arg3[1].d = rax_9
        
        if (rax_9 s> *(arg3 + 0xc))
            sub_1405a4cf0(arg3)
        
        r12 += 0x20
        *(*arg3 + (rdi_2 << 2)) = rbx_1
    while (r12 != rax_4)
    
    rdx_4 = zx.q(arg2[1].d)

__builtin_memset(&var_98, 0, 0x11)
int32_t rbx_2 = 0
uint64_t rsi_2 = 0
int32_t rdi_3 = 0
int32_t var_8c

if (rdx_4.d s> 0)
    sub_1405dadb0(&var_98, rdx_4.d)
    int32_t var_90
    rbx_2 = var_90
    rsi_2 = var_98
    rdi_3 = var_8c

int32_t rax_12 = arg3[1].d
int64_t r12_1 = sx.q(rax_12 - 1)

if (rax_12 - 1 s>= 0)
    int32_t r13_1 = var_8c
    int64_t temp1_1
    
    do
        uint64_t rax_14 = *arg3
        int64_t rdi_4 = sx.q(rbx_2)
        rbx_2 = (rdi_4 + 1).d
        
        if (rbx_2 s> r13_1)
            sub_1405a4cf0(&var_98)
            rsi_2 = var_98
            r13_1 = var_8c
        
        int32_t rax_15 = *(rax_14 + (r12_1 << 2))
        temp1_1 = r12_1
        r12_1 -= 1
        *(rsi_2 + (rdi_4 << 2)) = rax_15
    while (temp1_1 - 1 s>= 0)
    r13 = var_78
    rdi_3 = var_8c

void*** rax_16 = j_sub_140a82f30(0x20)

if (rax_16 == 0)
    rax_16 = nullptr
else
    *rax_16 = &data_142e3f638
    rax_16[1] = rsi_2
    rsi_2 = 0
    rax_16[2].d = rbx_2
    *(rax_16 + 0x14) = rdi_3
    char var_88
    rax_16[3].b = var_88

var_78 = rax_16
sub_1409afc10(r13, &var_78)

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

int64_t rdi_5 = 0
int64_t* rbx_3 = r13[0x77]
void* result = &rbx_3[r13[0x78]]
uint64_t rsi_4 = sx.q(r13[0x78].d) << 3 u>> 3

if (rbx_3 u> result)
    rsi_4 = 0

if (rsi_4 != 0)
    do
        int64_t* rcx_14 = *rbx_3
        result = (*(*rcx_14 + 0x308))(rcx_14, r13, arg3)
        rdi_5 += 1
        rbx_3 = &rbx_3[1]
    while (rdi_5 != rsi_4)

if (arg3[1].d s> 0)
    int64_t r12_2 = 0
    
    do
        int64_t rax_20 = *arg2
        int64_t* j = *(rax_20 + r12_2 + 8)
        result = sx.q(*(rax_20 + r12_2 + 0x10))
        
        for (void* rdi_8 = &j[result * 0xc]; j != rdi_8; j = &j[0xc])
            result = sub_1409dbfb0(r13, *((sx.q(i) << 2) + *arg3), j)
        
        i += 1
        r12_2 += 0x20
    while (i s< arg3[1].d)

__security_check_cookie(rax_1 ^ &var_b8)
return result
