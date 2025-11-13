// 函数: sub_14101cf50
// 地址: 0x14101cf50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x34f0) == 2
void* rax_1 = *(arg1 + 0x32c8)
int64_t var_128 = *(*(arg1 + 0x32c0) + 0x58)
int64_t var_120 = *(rax_1 + 0x58)

if (not(cond:0))
    *(arg1 + 0x3200) = 1
    *(arg1 + 0xa30) = 1
    *(arg1 + 0x34f0) = 2

int64_t* rcx = *(*(arg1 + 0x1c8) + 0x30)
(*(*rcx + 0xe8))(rcx, *(arg3 + 0x778))
void* r12 = *(*(arg3 + 0x18) + (sx.q(arg4) << 3))
void* arg_28
void* rbx_1 = arg_28
int64_t* r14_1

if (rbx_1 != 0)
    r14_1 = *(rbx_1 + 0x70)

if (rbx_1 == 0 || r14_1 == 0)
    void* rax_6 = *(arg1 + 0x138)
    void* var_118 = rax_6
    void* var_110 = rax_6
    void* var_c8 = rax_6
    int64_t var_f0
    __builtin_memset(&var_f0, 0, 0x24)
    int64_t var_108
    __builtin_memset(&var_108, 0, 0x14)
    int32_t var_cc_1 = 4
    int64_t var_c0
    __builtin_memset(&var_c0, 0, 0x14)
    int64_t var_a8
    __builtin_memset(&var_a8, 0, 0x24)
    int64_t var_84_1 = 4
    int128_t var_78
    __builtin_memset(&var_78, 0, 0x1d)
    int32_t var_58_1 = 0
    int32_t var_50_1 = 0
    int128_t var_48
    __builtin_memset(&var_48, 0, 0x1d)
    int32_t var_28_1 = 0
    sub_141025280(&var_110, 0x50, 0)
    sub_141025280(&var_c8, 0x10, 1)
    int64_t* rcx_8 = *(*(var_110 + 0x38) + 0xe8)
    int64_t rax_9 = (*(*rcx_8 + 0x18))(rcx_8)
    int64_t var_d8
    
    if (var_d8 u>= rax_9)
        rax_9 = var_d8
    
    int64_t var_d8_1 = rax_9
    int64_t* rcx_10 = *(*(var_c8 + 0x38) + 0xe8)
    int64_t rax_12 = (*(*rcx_10 + 0x18))(rcx_10)
    int128_t var_98
    
    if (var_98:8.q u>= rax_12)
        rax_12 = var_98:8.q
    
    var_98:8.q = rax_12
    int64_t var_138 = var_108
    int64_t var_130_1 = var_c0
    int64_t* rcx_11 = *(*(arg1 + 0x1c8) + 0x30)
    (*(*rcx_11 + 0xe0))(rcx_11, 2, &var_138)
    arg_28 = arg1
    void** var_140_1 = &arg_28
    sub_141002d60(arg1, r12, 0x20, arg2, 0x40, arg2 + 0x100, 0x10, arg2 + 0x300, 0x10, 
        arg2 + 0x380, 0x10, arg2 + 0x400, 0, nullptr, &var_118)
    sub_14100f420(&var_118)
else
    sub_141035380(r14_1, arg1)
    arg_28 = arg1
    void** var_140 = &arg_28
    sub_141002d60(arg1, r12, 0x20, arg2, 0x40, arg2 + 0x100, 0x10, arg2 + 0x300, 0x10, 
        arg2 + 0x380, 0x10, arg2 + 0x400, 0, nullptr, r14_1)
    sub_141037ee0(rbx_1, arg1)

if (rbx_1 != 0)
    sub_1410373d0(rbx_1, arg1)

void* rbx_2 = *(arg1 + 0x1c8)
int32_t rdx_7 = *(rbx_2 + 0x128)
int64_t* rcx_16 = *(rbx_2 + 0x30)

if (rdx_7 != 0)
    (*(*rcx_16 + 0xd0))(rcx_16, rdx_7, *(rbx_2 + 0x120))
    *(rbx_2 + 0x128) = 0
    rbx_2 = *(arg1 + 0x1c8)

int64_t* rbx_3 = *(rbx_2 + 0x48)
(*(*rbx_3 + 0x258))(rbx_3, *(arg3 + 0x780))
(*(*rbx_3 + 0x260))(rbx_3, arg5)

if (*(arg1 + 0x135) != 0)
    void* rax_22 = *(*(arg1 + 0x138) + 0x20)
    
    if (*(rax_22 + 0x838) != 0)
        void* rcx_19 = *(rax_22 + 0x850)
        
        if (rcx_19 != 0)
            *(rcx_19 + 0x10) += 1
            void* rax_23 = *(rax_22 + 0x850)
            *(rax_23 + 0x14) += 1

int64_t* rcx_20 = *(*(arg1 + 0x1c8) + 0x30)
return (*(*rcx_20 + 0xe0))(rcx_20, 2, &var_128)
