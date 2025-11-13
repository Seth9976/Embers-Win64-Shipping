// 函数: sub_1426aceb0
// 地址: 0x1426aceb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x30)
int32_t arg_8 = 0
uint64_t var_48
uint64_t var_38
uint64_t* rcx_2
int32_t rbx_1

if (rcx == 0)
    var_48 = 0
    int32_t var_40_1 = 0
    sub_1405947f0(&var_48, 9)
    int32_t rax_2 = var_40_1 + 9
    var_40_1 = rax_2
    
    if (rax_2 s> 0)
        sub_140594770(&var_48)
    
    sub_1405a7220(var_48, 9, "UNKNOWN!", 9, 0x3f)
    rcx_2 = &var_48
    rbx_1 = 4
else
    void var_28
    int64_t* rax_1 = sub_140ac6680(sub_140bddc50(rcx, &var_28, sx.q(arg3)))
    var_38 = 0
    int32_t rbx = rax_1[1].d
    int64_t rsi_1 = *rax_1
    int32_t var_30_1 = rbx
    
    if (rbx != 0)
        sub_1405a4c70(&var_38, rbx, 0)
        memcpy(var_38, rsi_1, rbx * 2)
        rcx_2 = &var_38
        rbx_1 = 3
    else
        int32_t var_2c_1 = 0
        rcx_2 = &var_38
        rbx_1 = 3

*arg2 = *rcx_2
*rcx_2 = 0
arg2[1].d = rcx_2[1].d
int32_t rax_5 = *(rcx_2 + 0xc)
rcx_2[1] = 0
*(arg2 + 0xc) = rax_5

if ((rbx_1.b & 4) != 0)
    uint64_t rcx_8 = var_48
    rbx_1 &= 0xfffffffb
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)

if ((rbx_1.b & 2) != 0)
    uint64_t rcx_9 = var_38
    rbx_1 &= 0xfffffffd
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

int64_t* var_20

if ((rbx_1.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t rsi_2 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (rsi_2 == 1)
            (*(*var_20 + 8))(var_20, zx.q(rsi_2))

return arg2
