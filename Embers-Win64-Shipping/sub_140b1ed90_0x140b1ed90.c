// 函数: sub_140b1ed90
// 地址: 0x140b1ed90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg1)
sub_140b18fc0()

if (rbx.d s< 0 || rbx.d s>= data_143de6880)
    int64_t rax
    rax.b = 0
    return &data_143de6800

int64_t var_58 = 0
int64_t var_50 = 0
int64_t rax_1 = data_143de6878
int64_t rsi_1 = rbx << 4
int16_t* const rbx_1

if (*(rsi_1 + rax_1 + 8) == 0)
    rbx_1 = &data_142d40450
else
    rbx_1 = *(rsi_1 + rax_1)

sub_140a464c0()
char const (* r9)[0x4] = data_14399ea08
int64_t* rax_2 = (*(r9 + 0x18))(&data_14399ea08, rbx_1, 0, r9)
char rax_3

if (rax_2 != 0)
    rax_3 = sub_140b1f110(&var_58, rax_2, 0)
    int64_t r9_1 = *rax_2
    (*r9_1)(rax_2, 1, arg4, r9_1)

int64_t* rbx_2

if (rax_2 == 0 || rax_3 == 0)
    rbx_2.b = 0
else
    sub_140afbb70(arg2, &var_58)
    int64_t var_48
    char rax_5 = sub_140a32a50(rsi_1 + data_143de6878, sub_140b13d10(&var_48), 1)
    int64_t rcx_5 = var_48
    
    if (rcx_5 != 0)
        sub_140a74f90(rcx_5)
    
    int64_t* rdx_5 = data_143de6878 + rsi_1
    int64_t rcx_16
    int64_t var_38
    int64_t var_28
    
    if (rax_5 == 0)
        sub_140597da0(arg3, sub_140b187e0(&var_28, sub_140b1a780(&var_38, rdx_5)))
        int64_t rcx_15 = var_28
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        rcx_16 = var_38
    else
        sub_140597da0(arg3, 
            sub_140b187e0(&var_48, sub_140b1a660(&var_38, sub_140b1a780(&var_28, rdx_5))))
        int64_t rcx_10 = var_48
        
        if (rcx_10 != 0)
            sub_140a74f90(rcx_10)
        
        int64_t rcx_11 = var_38
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        rcx_16 = var_28
    
    if (rcx_16 != 0)
        sub_140a74f90(rcx_16)
    
    rbx_2.b = 1

int64_t rcx_17 = var_58

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

return zx.q(rbx_2.b)
