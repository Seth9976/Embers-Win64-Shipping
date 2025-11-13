// 函数: sub_1407769d0
// 地址: 0x1407769d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg3
int64_t r14 = 0

if (rax != 0)
    int64_t rdx = sx.q(*(rax + 0x10c))
    int64_t r14_1 = rdx << 3
    int64_t* rbx_1 = *(arg3[1] + 0x10)
    int64_t rax_2 = rbx_1[3]
    
    if (*(r14_1 + rax_2) == 0)
        sub_1419ccf30(rbx_1, rdx.d)
        rax_2 = rbx_1[3]
    
    r14 = *(r14_1 + rax_2)

void* rsi_1 = arg3[2]
void* var_68 = rsi_1
int64_t var_58 = r14

if (sub_140a80f40() == 0)
    uint32_t rax_4
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_4.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_4.b == 0))
        void var_50
        void** rax_5 = sub_140750b90(&var_50, nullptr, 0xff)
        *(*rax_5 + 0x10) = rsi_1
        void* rcx_5 = *rax_5
        int32_t r8 = rax_5[2].d
        int64_t* rdx_3 = rax_5[1]
        int64_t* rbx_2 = *(rcx_5 + 0x20)
        int64_t* arg_20 = rbx_2
        int32_t* rdi_1 = &rbx_2[9]
        
        if (rbx_2 != 0)
            *rdi_1 += 1
            rbx_2 = arg_20
        
        sub_1405a5630(rcx_5, rdx_3, r8, 1)
        
        if (rbx_2 != 0)
            int32_t rax_6 = *rdi_1
            *rdi_1 -= 1
            
            if (rax_6 == 1)
                sub_140a2f6e0(arg_20)
    else
        void* var_60 = rsi_1
        sub_1407478c0(&var_60)
else
    sub_1407478c0(&var_68)

int32_t rax_7 = 0

if (0 == *(rsi_1 + 0x210))
    *(rsi_1 + 0x210) = 0
else
    rax_7 = *(rsi_1 + 0x210)

int32_t arg_8 = rax_7
sub_140741e30(arg2, &var_58, arg1 + 8, &arg_8, 0)
int64_t rdi_2 = *(rsi_1 + 0x200)
uint32_t rsi_2 = zx.d(*(arg1 + 0xe))
void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_10[5]

if (rax_8 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_10[5]

*(arg2 + 0x30) = rax_8
void**** rax_9 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_9 = rcx_10
*(arg2 + 8) = &rcx_10[1]
rcx_10[1] = 0
*rcx_10 = &data_142d99560
rcx_10[2] = r14
rcx_10[3].d = rsi_2
rcx_10[4] = rdi_2
return &data_142d99560
