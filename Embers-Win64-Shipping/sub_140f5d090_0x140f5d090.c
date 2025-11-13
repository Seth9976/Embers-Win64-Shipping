// 函数: sub_140f5d090
// 地址: 0x140f5d090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg2

if (arg1[0x57].d != 0)
    int64_t* rcx = arg1[0x56]
    
    if (rcx != 0)
        int32_t rax
        rax, arg2 = (*(*rcx + 0x28))(rcx)
        
        if (rax.b != 0)
            int64_t* rcx_1
            
            if (arg1[0x57].d == 0)
                rcx_1 = nullptr
            else
                rcx_1 = arg1[0x56]
            
            rax, arg2 = (*(*rcx_1 + 0x48))(rcx_1)
            arg1[0x55].d = rax

if (arg1[0x55].d == rsi)
    return 

arg2.b = 8
sub_140e19ef0(arg1, arg2.b)
void* rax_3 = sub_140f46840(arg1)

if (rax_3 != 0)
    sub_140e1a0b0(arg1, *(rax_3 + 0x10))

int32_t var_28_1 = rsi
char var_24_1 = 1
int64_t var_20 = 0
int32_t var_18_1 = 0
arg1[0x55].d = rsi
*(arg1 + 0x2ac) = 1
sub_1407473e0(&arg1[0x56], &var_20)
sub_140745b20(&var_20)
