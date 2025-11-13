// 函数: sub_142320950
// 地址: 0x142320950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x8b0)
char rax

if (rcx != 0)
    rax = (*(*rcx + 0x38))(rcx)

int64_t r14

if (rcx == 0 || rax == 0)
    r14.b = 0
else
    r14.b = 1

int64_t* rcx_1 = *(arg1 + 0x8b0)

if (rcx_1 != 0)
    (*(*rcx_1 + 0x70))(rcx_1)

if ((*(arg1 + 0x71b) & 2) != 0)
    sub_14230c1e0(arg1)

if (*(arg1 + 0x8d0) s> 0)
    void* i = *(arg1 + 0x8c8)
    void* rsi_3 = (sx.q(*(arg1 + 0x8d0)) << 6) + i
    int64_t var_48
    __builtin_memset(&var_48, 0, 0x40)
    
    for (; i != rsi_3; i += 0x40)
        void* rax_3 = sub_140d3c6e0(i)
        void* rax_4 = sub_140d3c6e0(i + 8)
        
        if (rax_3 != 0 && rax_4 != 0)
            sub_14230e0c0(rax_3, rax_4, arg1, &var_48, i)
    
    int64_t* rcx_6 = *(arg1 + 0x8b0)
    (*(*rcx_6 + 0x68))(rcx_6, &var_48)
    int64_t var_18
    
    if (var_18 != 0)
        sub_140a74f90(var_18)
    
    int64_t var_28
    sub_1405ded70(&var_28)
    int64_t var_38
    
    if (var_38 != 0)
        sub_140a74f90(var_38)
    
    int64_t rcx_10 = var_48
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

if ((*(arg1 + 0x71b) & 1) != 0 && r14.b != 0)
    sub_14231a120(arg1)
