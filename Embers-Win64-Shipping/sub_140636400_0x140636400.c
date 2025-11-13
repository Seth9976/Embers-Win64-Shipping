// 函数: sub_140636400
// 地址: 0x140636400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_108 = 0xffffffff
int64_t var_118 = 0
int32_t var_110 = 0
int32_t var_138 = 0
sub_140d3cc80(sub_14256a090(), &var_118, 1, 0x10, 0)
int32_t rcx_2 = var_108 + 1
int64_t rdx_1 = var_118
int32_t var_108_1 = rcx_2

if (rcx_2 s< var_110)
    while (*(rdx_1 + (sx.q(rcx_2) << 3)) == 0)
        int32_t rax_2 = rcx_2 + 1
        var_108_1 = rax_2
        rcx_2 = rax_2
        
        if (rax_2 s>= var_110)
            break

if (rcx_2 s< 0 || rcx_2 s>= var_110)
    *arg1 = data_143dbb1f0
    
    if (rdx_1 != 0)
        sub_140a74f90(rdx_1)
else
    int64_t* rdi_1 = *(*(rdx_1 + (sx.q(rcx_2) << 3)) + 0x298)
    
    if (rdi_1 == 0)
        goto label_14063668a
    
    void* rax_4 = sub_142531230()
    void* rdx_2 = rdi_1[2]
    int64_t rax_5 = sx.q(*(rax_4 + 0x38))
    
    if (rax_5.d s> *(rdx_2 + 0x38) || *(*(rdx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
        goto label_14063667d
    
    void* rsi_1 = rdi_1[0xe]
    
    if (rsi_1 == 0 || *(rsi_1 + 0xb8) == 0)
        goto label_14063667d
    
    int64_t* rcx_6 = *(var_118 + (sx.q(var_108_1) << 3))
    void* rax_9 = (*(*rcx_6 + 0x150))(rcx_6)
    uint128_t zmm0_1 = data_142d3f660
    int64_t* rdx_3 = *(rax_9 + 0x1b0)
    int64_t var_100 = *(rdi_1[0xe] + 0xb8)
    int64_t* var_f8_1 = rdx_3
    int64_t var_f0_1 = *(rsi_1 + 0xac)
    int32_t var_e8_1 = 0xffffffff
    int32_t var_cc
    int32_t rax_14 = (var_cc & 0xffffffe8) | 8
    int64_t var_e4_1 = 0
    uint128_t var_dc_1 = zmm0_1
    
    if (rdx_3 != 0)
        void* rax_16 = (*(*rdx_3 + 0x240))(rdx_3)
        
        if (rax_16 != 0)
            bool rcx_9
            
            if (data_143de5480 != 0)
                rcx_9 = GetCurrentThreadId() == data_143de5470
            
            if (data_143de5480 == 0 || rcx_9 != 0)
                var_dc_1.d = (*(rax_16 + 0x520)).d
                rax_14 |= 0x10
                var_dc_1:4.d = *(rax_16 + 0x530)
                var_dc_1:8.d = (*(rax_16 + 0x528)).d
    
    int32_t var_cc_2 = rax_14 | 2
    void var_a8
    sub_1422d9ba0(&var_a8, &var_100)
    var_138.q = *(rdi_1[0xe] + 0xb8)
    void var_c8
    void var_b8
    void* rax_22 = (*(*rdi_1 + 0x270))(rdi_1, &var_a8, &var_b8, &var_c8, 0, 0, 0)
    
    if (rax_22 == 0)
        sub_1422dbba0(&var_a8)
    label_14063667d:
        rdx_1 = var_118
    label_14063668a:
        *arg1 = data_143dbb1f0
        
        if (rdx_1 != 0)
            sub_140a74f90(rdx_1)
    else
        int64_t arg_18
        sub_1422f9aa0(rax_22, arg2, &arg_18)
        *arg1 = arg_18
        sub_1422dbba0(&var_a8)
        int64_t rcx_14 = var_118
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)

return arg1
