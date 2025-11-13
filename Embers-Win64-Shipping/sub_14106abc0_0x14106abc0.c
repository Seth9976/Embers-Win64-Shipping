// 函数: sub_14106abc0
// 地址: 0x14106abc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t* result = __security_cookie ^ &var_108
int64_t* result_1 = result
void* var_e8 = nullptr
int64_t* var_e0 = nullptr

if (*arg2 != 0)
    void** const rax_1 = j_sub_140a82f30(0x90)
    void*** rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        *rbx_1 = &data_142d56fb8
        rbx_1[1] = 0
        rbx_1[2] = 0
        rbx_1[3].b = 3
        *(rbx_1 + 0x1c) = 0
        rbx_1[4].b = 1
        rbx_1[6] = 0
        rbx_1[8] = 0
        __builtin_memset(&rbx_1[0xe], 0, 0x18)
    
    if (&rbx_1[0xe] != arg2)
        int64_t* rcx = rbx_1[0xe]
        rbx_1[0xe] = *arg2
        *arg2 = 0
        
        if (rcx != 0)
            (**rcx)(rcx, 1)
    
    uint32_t rcx_1 = zx.d(arg1[2].b)
    
    if (rcx_1 == 0)
        rax_1.b = 0
    else if (rcx_1 == 1)
        rax_1.b = 1
    else if (rcx_1 == 2 || rcx_1 != 3)
        rax_1.b = 3
    else
        rax_1.b = 5
    
    rbx_1[3].b = rax_1.b
    int64_t rax_3 = arg1[4]
    int128_t* rdx_1 = nullptr
    int64_t var_b8 = rax_3
    int128_t* var_a8 = nullptr
    
    if (rax_3 != 0)
        void* rax_4 = arg1[6]
        void* rcx_4 = &arg1[8]
        
        if (rax_4 != 0)
            rcx_4 = rax_4
        
        (**rcx_4)(rcx_4, &var_a8)
        rdx_1 = var_a8
    
    int128_t var_98
    
    if (&rbx_1[6] != &var_b8)
        int128_t zmm5_1 = *(rbx_1 + 0x30)
        int128_t zmm4_1 = *(rbx_1 + 0x40)
        arg4 = *(rbx_1 + 0x50)
        arg3 = *(rbx_1 + 0x60)
        arg5 = var_a8.o
        *(rbx_1 + 0x30) = var_b8.o
        int128_t zmm0_1 = var_98
        *(rbx_1 + 0x40) = arg5
        int128_t var_88
        arg5 = var_88
        *(rbx_1 + 0x50) = zmm0_1
        var_a8.o = zmm4_1
        rdx_1 = var_a8
        *(rbx_1 + 0x60) = arg5
        int128_t var_78_1 = zmm5_1
        int128_t var_68_1 = zmm4_1
        int128_t var_58_1 = arg4
        int128_t var_48_1 = arg3
        var_b8.o = zmm5_1
        var_98 = arg4
        int128_t var_88_1 = arg3
    
    if (var_b8 != 0)
        int128_t* rcx_5 = &var_98
        
        if (rdx_1 != 0)
            rcx_5 = rdx_1
        
        (*(*rcx_5 + 0x10))(rcx_5, rdx_1, arg3, arg4)
    
    sub_140597df0(&rbx_1[1], arg1)
    rbx_1[4].b = arg1[3].b
    int64_t r9_1
    r9_1.b = 1
    *(rbx_1 + 0x1c) = *(arg1 + 0x14)
    int64_t* rcx_7 = arg1[0xc]
    void*** var_d8 = rbx_1
    void var_d0
    result = (*(*rcx_7 + 8))(rcx_7, &var_d0, &var_d8, r9_1)
    
    if (&var_e8 != result)
        var_e8 = *result
        *result = 0
        result = sub_1405aeff0(&var_e0, &result[1])
    
    int64_t* var_c8
    
    if (var_c8 != 0)
        result = zx.q(var_c8[1].d)
        var_c8[1].d -= 1
        
        if (result.d == 1)
            (**var_c8)(var_c8)
            result = zx.q(*(var_c8 + 0xc))
            *(var_c8 + 0xc) -= 1
            
            if (result.d == 1)
                result = (*(*var_c8 + 8))(var_c8, 1)
    
    void*** rcx_12 = var_d8
    
    if (rcx_12 != 0)
        result = (**rcx_12)(rcx_12, 1)

if (*(arg1 + 0x19) == 0)
    void* rbx_3 = var_e8
    
    if (rbx_3 != 0)
        char i
        
        do
            int64_t* rcx_13 = *(rbx_3 + 0x70)
            i = (*(*rcx_13 + 0x20))(rcx_13, 0xffffffff, 0)
        while (i == 0)
    
    CRITICAL_SECTION* rcx_14 = *arg1[0xd]
    rcx_14->__offset(0x80).d = 0
    result = sub_1405fc0f0(rcx_14, arg5, arg3, arg4)

int64_t* rcx_15 = var_e0

if (rcx_15 != 0)
    result = zx.q(rcx_15[1].d)
    rcx_15[1].d -= 1
    
    if (result.d == 1)
        int64_t* rbx_4 = var_e0
        result = (**rbx_4)(rbx_4)
        int32_t rsi_1 = *(rbx_4 + 0xc)
        *(rbx_4 + 0xc) -= 1
        
        if (rsi_1 == 1)
            int64_t* rcx_17 = var_e0
            result = (*(*rcx_17 + 8))(rcx_17, zx.q(rsi_1))

__security_check_cookie(result_1 ^ &var_108)
return result
