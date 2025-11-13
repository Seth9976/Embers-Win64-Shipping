// 函数: sub_1421577a0
// 地址: 0x1421577a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rcx = *(arg1 + 0x40)
char r13 = arg2
int32_t i_1 = 0
int64_t var_e8 = 0
int32_t temp1
int32_t temp2
temp1:temp2 = sx.q(rcx + 3)
int64_t var_e0 = 0
int64_t rdi = 0
int32_t r8 = 0
int32_t rax_3 = (temp2 + (temp1 & 3)) s>> 2

if (rax_3 != neg.d(*(arg1 + 0x50)))
    sub_1405a5410(&var_e8, rax_3 + *(arg1 + 0x50))
    rcx = *(arg1 + 0x40)
    r8 = var_e0.d
    rdi = var_e8

int32_t i = 0
int64_t arg_8

if (rcx s> 0)
    int64_t r13_1 = 0
    int128_t zmm6
    int128_t var_58_1 = zmm6
    
    do
        int64_t r9_1 = *(arg1 + 0x38)
        arg_8 = r9_1
        int32_t rbx_2 = i & 0x80000003
        
        if (rbx_2 s< 0)
            rbx_2 = ((rbx_2 - 1) | 0xfffffffc) + 1
        
        if (rbx_2 == 0)
            int64_t r14_1 = sx.q(r8)
            r8 = (r14_1 + 1).d
            var_e0.d = r8
            
            if (r8 s> var_e0:4.d)
                sub_1405a4f90(&var_e8)
                r8 = var_e0.d
                r9_1 = arg_8
                rdi = var_e8
            
            *(rdi + r14_1 * 0x10) = zx.o(0)
        
        i += 1
        int32_t rax_9 = *(r9_1 + r13_1 + 0x18)
        r13_1 += 0x1c
        *(rdi + ((sx.q(rbx_2) + (sx.q(r8 - 1) << 2)) << 2)) = rax_9
    while (i s< *(arg1 + 0x40))
    
    r13 = arg2

int64_t var_d8

if (*(arg1 + 0x50) s> 0)
    int64_t rbx_5 = 0
    
    do
        int64_t r14_2 = sx.q(r8)
        r8 = (r14_2 + 1).d
        var_e0.d = r8
        var_d8.o = *(rbx_5 + *(arg1 + 0x48) + 0x18)
        
        if (r8 s> var_e0:4.d)
            sub_1405a4f90(&var_e8)
            r8 = var_e0.d
            rdi = var_e8
        
        i_1 += 1
        rbx_5 += 0x28
        *(rdi + r14_2 * 0x10) = var_d8.o
    while (i_1 s< *(arg1 + 0x50))

int64_t* rcx_5 = *(arg1 + 0x68)
var_d8 = *(arg1 + 0x18)
sub_142147ba0(rcx_5, arg1 + 0x28, &var_e8, &var_d8, r13)
int128_t zmm0_1 = *(arg1 + 0x28)
int64_t var_b8 = *(arg1 + 0x68)
int128_t var_c8 = zmm0_1
int32_t result

if (sub_140a80f40() == 0)
    uint32_t rax_16
    
    if (data_143f138f4 == 0 && data_143de5480 != 0)
        rax_16.b = GetCurrentThreadId() == data_143de5470
    
    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_16.b == 0))
        void var_78
        int64_t* rax_17 = sub_1421408c0(&var_78, nullptr, 0xff)
        void* rcx_7 = *rax_17
        *(rcx_7 + 0x10) = var_c8
        *(rcx_7 + 0x20) = var_b8
        void* rcx_8 = *rax_17
        int32_t r8_4 = rax_17[2].d
        int64_t* rdx_9 = rax_17[1]
        int64_t* rbx_6 = *(rcx_8 + 0x30)
        int64_t* arg_20 = rbx_6
        int32_t* rsi_1 = &rbx_6[9]
        
        if (rbx_6 != 0)
            *rsi_1 += 1
            rdi = var_e8
            rbx_6 = arg_20
        
        result = sub_140778000(rcx_8, rdx_9, r8_4, 1)
        
        if (rbx_6 != 0)
            result = *rsi_1
            *rsi_1 -= 1
            
            if (result == 1)
                result = sub_140a2f6e0(arg_20)
            
            rdi = var_e8
    else
        int64_t zmm1_1 = var_b8
        int128_t var_90 = var_c8
        int64_t var_80 = zmm1_1
        int128_t* var_a0 = &var_90
        int64_t* var_98_1 = &var_80
        int32_t arg_18
        result = sub_142136290(&data_143a2eb00, &arg_18, &var_a0, nullptr)
else
    int128_t* var_b0 = &var_c8
    int64_t* var_a8_1 = &var_b8
    result = sub_142136290(&data_143a2eb00, &arg_8, &var_b0, nullptr)

if (rdi == 0)
    return result

return sub_140a74f90(rdi)
