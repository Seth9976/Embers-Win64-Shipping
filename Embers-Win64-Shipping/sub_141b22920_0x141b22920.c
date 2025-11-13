// 函数: sub_141b22920
// 地址: 0x141b22920
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t rax_1 = __security_cookie ^ &var_88
int32_t r9 = 0
void* rdx = arg1[2]
int32_t r8 = -1
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t rbx

if (rdx == 0)
    rbx = var_68.q
else
    sub_140d3a3a0(&var_68, rdx)
    rbx = var_68.q
    var_68.q = rbx
    r9 = var_64
    r8 = var_68

int64_t* r10 = *arg1
int32_t* rax_2 = r10[3]
void* rcx_3 = &rax_2[sx.q(r10[4].d) * 0x10]
int128_t zmm0

if (rax_2 == rcx_3)
label_141b229c0:
    int128_t var_58
    (*(*r10 + 0x28))(r10, &var_58, arg1[2], arg1[3])
    int128_t var_48
    int128_t var_38
    
    if (arg1[3] != 0)
        void* rsi_1 = *arg1
        int64_t rbp_1 = sx.q(*(rsi_1 + 0x20))
        int32_t rax_4 = (rbp_1 + 1).d
        *(rsi_1 + 0x20) = rax_4
        
        if (rax_4 s> *(rsi_1 + 0x24))
            sub_1405c4fe0(rsi_1 + 0x18)
        
        int64_t* rax_7 = (rbp_1 << 6) + *(rsi_1 + 0x18)
        *rax_7 = rbx
        *(rax_7 + 0x10) = var_58
        *(rax_7 + 0x20) = var_48
        *(rax_7 + 0x30) = var_38
    
    *arg2 = var_58
    zmm0 = var_38
    arg2[1] = var_48
else
    while (*rax_2 != r8 || rax_2[1] != r9)
        rax_2 = &rax_2[0x10]
        
        if (rax_2 == rcx_3)
            goto label_141b229c0
    
    *arg2 = *(rax_2 + 0x10)
    arg2[1] = *(rax_2 + 0x20)
    zmm0 = *(rax_2 + 0x30)

arg2[2] = zmm0
__security_check_cookie(rax_1 ^ &var_88)
return arg2
