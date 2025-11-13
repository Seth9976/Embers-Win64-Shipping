// 函数: sub_140b0f760
// 地址: 0x140b0f760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int64_t r8
int64_t var_50 = r8
int64_t var_60 = 0
int64_t var_58 = 0
int32_t var_68 = 0
int64_t* var_48 = arg2
int32_t rdx = arg2[1].d

if (rdx s> 0)
    sub_1405fdf40(&var_60, rdx)

int64_t var_40
sub_140b0f890(&var_68, &var_40, nullptr, nullptr)
char var_28

if (var_28 == 0)
    arg1[3].b = 0
    arg1[4] = var_60
    arg1[5].d = var_58.d
    *(arg1 + 0x2c) = var_58:4.d
    arg1[6].b = 1
    var_60 = 0
    int64_t var_58_1 = 0
else
    int64_t* var_38
    int64_t* rcx_2 = var_38
    *arg1 = var_40
    arg1[1] = rcx_2
    
    if (rcx_2 != 0)
        rcx_2[1].d += 1
        rcx_2 = var_38
    
    int32_t var_30
    arg1[2].d = var_30
    arg1[3].b = 1
    arg1[6].b = 0
    
    if (rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            (**var_38)(var_38)
            int32_t rsi_1 = *(var_38 + 0xc)
            *(var_38 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_38 + 8))(var_38, zx.q(rsi_1))

sub_140b0b4e0(&var_60)
sub_140b0b5e0(arg2)
__security_check_cookie(rax_1 ^ &var_88)
return arg1
