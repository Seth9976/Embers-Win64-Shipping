// 函数: sub_140ed0660
// 地址: 0x140ed0660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702

if (*(arg1 + 0x56a) == 0)
    return arg2

int64_t* rsi = nullptr
*(arg1 + 0x56a) = 0
int64_t* rdi = *(arg1 + 0x4c0)

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
    
    if (rdi != 0)
        rsi = *(arg1 + 0x4b8)

int64_t* rax_3 = (*(*rsi + 0x48))(rsi, arg1 - 8)

if (rax_3 != 0)
    int64_t rdx_1 = *(arg1 - 8)
    int32_t rax_4 = (*(rdx_1 + 0x70))(arg1 - 8, rdx_1)
    int64_t var_e8
    char var_d8
    int32_t var_24
    
    if (rax_4 != 0)
        int64_t r8_1 = *rsi
        char rax_5
        int64_t r9_1
        rax_5, r9_1 = (*(r8_1 + 0x10))(rsi, rax_3, r8_1)
        
        if (rax_5 == 0)
            if (rax_4 != 3)
                (*(*rsi + 0x30))(rsi)
            
            goto label_140ed07a6
        
        if (rax_4 - 2 u<= 1)
        label_140ed07a6:
            var_e8 = *rax_3
            void* rax_9 = rax_3[1]
            void* var_e0_1 = rax_9
            
            if (rax_9 != 0)
                *(rax_9 + 8) += 1
            
            r9_1.b = 1
            (*(*rsi + 0x28))(rsi, &var_e8, 1, r9_1)
            (*(*rsi + 0x40))(rsi, 2)
            var_24 &= 0xffffff00
            var_d8 = 1
            int64_t var_d0_1 = 0
            int64_t var_c8_1 = 0
            char var_b8_1 = 0
            int64_t var_b0
            __builtin_memset(&var_b0, 0, 0x88)
            int32_t var_28_1 = 0x20702
            sub_1405979f0(arg2, &var_d8)
            sub_140597700(&var_d8)
    
    var_e8 = *rax_3
    void* rax_13 = rax_3[1]
    void* var_e0_2 = rax_13
    
    if (rax_13 != 0)
        *(rax_13 + 8) += 1
    
    if ((*(*rsi + 0xa8))(rsi, &var_e8) != 0)
        int32_t var_24_1 = var_24 & 0xffffff00
        var_d8 = 1
        int64_t var_d0_2 = 0
        int64_t var_c8_2 = 0
        char var_b8_2 = 0
        int64_t var_b0_1
        __builtin_memset(&var_b0_1, 0, 0x88)
        int32_t var_28_2 = 0x20702
        sub_1405979f0(arg2, &var_d8)
        sub_140597700(&var_d8)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

return arg2
