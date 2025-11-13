// 函数: sub_142050b90
// 地址: 0x142050b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2[1].d)
int64_t rbp = *arg2
int64_t var_f8 = 0
int32_t var_f0 = rbx.d

if (rbx.d != 0)
    sub_140638750(&var_f8, rbx.d, 0)
    memcpy(var_f8, rbp, (rbx << 2).d)
else
    int32_t var_ec_1 = 0

int64_t rbx_1 = sx.q(arg1[1].d)
int64_t rsi_1 = *arg1
int64_t var_e8 = 0
int32_t var_e0 = rbx_1.d

if (rbx_1.d != 0)
    sub_1407c35c0(&var_e8, rbx_1.d, 0)
    memcpy(var_e8, rsi_1, (rbx_1 << 6).d)
else
    int32_t var_dc_1 = 0

void var_d8
sub_142047e40(&var_d8, &var_e8, &var_f8, arg3, arg4, arg9, 0x3f800000, 1, arg10)
sub_14204ebe0(&var_d8)
int64_t* var_28
int64_t* rbx_2 = var_28
*arg8 = rbx_2[6].d

if (arg5 != rbx_2)
    int64_t rcx_7 = *arg5
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    *arg5 = *rbx_2
    *rbx_2 = 0
    arg5[1].d = rbx_2[1].d
    *(arg5 + 0xc) = *(rbx_2 + 0xc)
    rbx_2[1] = 0
    rbx_2 = var_28

if (arg7 != &rbx_2[4])
    int64_t rcx_8 = *arg7
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    *arg7 = rbx_2[4]
    rbx_2[4] = 0
    arg7[1].d = rbx_2[5].d
    *(arg7 + 0xc) = *(rbx_2 + 0x2c)
    rbx_2[5] = 0
    rbx_2 = var_28

if (arg6 != &rbx_2[2])
    int64_t rcx_9 = *arg6
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    *arg6 = rbx_2[2]
    rbx_2[2] = 0
    arg6[1].d = rbx_2[3].d
    *(arg6 + 0xc) = *(rbx_2 + 0x1c)
    rbx_2[3] = 0

return sub_142049690(&var_d8)
