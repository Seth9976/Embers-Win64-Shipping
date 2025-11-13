// 函数: sub_140f68870
// 地址: 0x140f68870
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = nullptr
int64_t* rdi = *(arg1 + 0x10)
int64_t* rsi = rdi

if (rdi != 0)
    int32_t rax_1 = rdi[1].d
    
    if (rax_1 != 0)
        rdi[1].d = rax_1 + 1
        rax_1.b = 1
    
    if (rax_1.b == 0)
        rdi = nullptr
        rsi = nullptr

if (rsi != 0)
    rcx = *(arg1 + 8)

char rax_2

if (rcx != 0)
    rax_2 = sub_140e19840(rcx, arg3)

if (rcx == 0 || rax_2 == 0)
    *arg2 = 0
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    arg2[0x20] = 0
    __builtin_memset(&arg2[0x28], 0, 0x88)
    *(arg2 + 0xb4) &= 0xffffff00
    *(arg2 + 0xb0) = 0x20702
    
    if (rsi != 0)
        rsi[1].d -= 1
        
        if (rsi[1].d == 1)
            (**rsi)(rsi)
            int32_t temp1_1 = *(rsi + 0xc)
            *(rsi + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rsi + 8))(rsi, 1)
else
    char var_c8 = 1
    int64_t var_c0_1 = 0
    int64_t var_b8_1 = 0
    char var_a8_1 = 0
    int32_t var_14
    int32_t var_14_1 = (var_14 & 0xffffff01) | 1
    int64_t var_a0
    __builtin_memset(&var_a0, 0, 0x88)
    int32_t var_18_1 = 0x20702
    sub_140596b00(arg2, &var_c8)
    sub_140597700(&var_c8)
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi + 8))(rdi, 1)

return arg2
