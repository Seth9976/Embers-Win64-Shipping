// 函数: sub_1418b3cb0
// 地址: 0x1418b3cb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* var_20
int128_t var_18
int64_t rax_3
int64_t* rcx
int32_t rsi

if (*(arg1 + 0x50) == 0)
label_1418b3d1e:
    rcx = &var_18
    var_18 = zx.o(0)
    rsi = 2
    rax_3 = 0
else
    int64_t* rdx = *(arg1 + 0x58)
    
    if (rdx == 0)
        goto label_1418b3d1e
    
    int32_t rax_1 = rdx[1].d
    
    if (rax_1 s<= 0)
        goto label_1418b3d1e
    
    int64_t var_28 = 0
    var_20 = rdx
    
    if (rdx != 0)
        if (rax_1 == 0)
            var_20 = nullptr
            rdx = nullptr
        else
            rdx[1].d = rax_1 + 1
    
    rax_3 = 0
    
    if (rdx != 0)
        rax_3 = *(arg1 + 0x50)
        var_28 = rax_3
    
    rcx = &var_28
    rsi = 1

*arg2 = rax_3
int64_t rax_4 = rcx[1]
rcx[1] = 0
arg2[1] = rax_4
*rcx = 0

if ((rsi.b & 2) != 0)
    int64_t* rbx_1 = var_18:8.q
    rsi &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if ((rsi.b & 1) != 0 && var_20 != 0)
    var_20[1].d -= 1
    
    if (var_20[1].d == 1)
        (**var_20)(var_20)
        int32_t temp3_1 = *(var_20 + 0xc)
        *(var_20 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_20 + 8))(var_20, 1)

return arg2
