// 函数: sub_1418b3a20
// 地址: 0x1418b3a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int16_t* rdx

if (arg3[1].d == 0)
    rdx = &data_142d40450
else
    rdx = *arg3

void arg_10
int64_t rbx = *sub_140b58260(&arg_10, rdx, 1)
arg_8.q = rbx
int64_t* rdx_6

if (*(arg1 + 0xc8) == *(arg1 + 0xf4))
label_1418b3ace:
    rdx_6 = nullptr
else
    int32_t rax_3 = sub_140b5ead0(rbx.d) + arg4
    void* r8 = arg1 + 0xf8
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_5 = *(r8 + (((sx.q(*(arg1 + 0x108)) - 1) & sx.q(rax_3)) << 2))
    
    if (rax_5 == 0xffffffff)
    label_1418b3ace_1:
        rdx_6 = nullptr
    else
        while (true)
            rdx_6 = (sx.q(rax_5) << 5) + *(arg1 + 0xc0)
            
            if (*rdx_6 == rbx)
                break
            
            rax_5 = rdx_6[3].d
            
            if (rax_5 == 0xffffffff)
                goto label_1418b3ace_2
        
        if (rax_5 == 0xffffffff)
        label_1418b3ace_2:
            rdx_6 = nullptr

void* rax_6 = &rdx_6[1]

if (rdx_6 == 0)
    rax_6 = nullptr

int64_t* var_30
int128_t var_28
int64_t* rcx_4
int64_t rdx_7
int32_t rsi_1

if (rax_6 == 0)
    rcx_4 = &var_28
    var_28 = zx.o(0)
    rsi_1 = 2
    rdx_7 = 0
else
    int64_t* rcx_3 = *(rax_6 + 8)
    rdx_7 = *rax_6
    int64_t var_38 = rdx_7
    var_30 = rcx_3
    
    if (rcx_3 != 0)
        rcx_3[1].d += 1
    
    rcx_4 = &var_38
    rsi_1 = 1

int64_t rax_7 = rcx_4[1]
rcx_4[1] = 0
*arg2 = rdx_7
arg2[1] = rax_7
*rcx_4 = 0

if ((rsi_1.b & 2) != 0)
    int64_t* rbx_1 = var_28:8.q
    rsi_1 &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if ((rsi_1.b & 1) != 0 && var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp3_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

return arg2
