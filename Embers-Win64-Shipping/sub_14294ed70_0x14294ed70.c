// 函数: sub_14294ed70
// 地址: 0x14294ed70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t rbp = 0
int32_t var_28 = 0
int64_t rsi = arg2
int64_t var_20 = 0
int64_t rdi = 0
int64_t r10 = *(*(arg6 + 8) + 0x58)

if (r10 != 0)
    void* var_30_1 = arg6
    int32_t* var_38_1 = arg5
    return r10()

int32_t rbx_1

if (arg1 == 0x72)
    if (arg3 != 0x24)
        sub_1428a5670(arg1 - 0x6e, arg1 + 3, arg1 + 0x11, "crypto\rsa\rsa_sign.c", 0x58)
        return 0
    
    rbx_1 = 0x24
    goto label_14294ee3c

int64_t var_38
var_38.d = arg3
int32_t rax_3 = sub_14294ef20(&var_20, &var_28, arg1, arg2.d)
rdi = var_20
rbx_1 = var_28

if (rax_3 != 0)
    rsi = rdi
label_14294ee3c:
    
    if (rbx_1 s<= sub_142897860(arg6) - 0xb)
        int32_t rax_6 = sub_142897580(zx.q(rbx_1), rsi, arg4, arg6, 1)
        
        if (rax_6 s> 0)
            rbp = 1
            *arg5 = rax_6
    else
        sub_1428a5670(4, 0x75, 0x70, "crypto\rsa\rsa_sign.c", 0x64)

sub_1428a6890(rdi, sx.q(rbx_1), "crypto\rsa\rsa_sign.c", 0x70)
return zx.q(rbp)
