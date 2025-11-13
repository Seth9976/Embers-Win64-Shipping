// 函数: sub_140ebaa70
// 地址: 0x140ebaa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rdx_5

if (*(arg1 + 0x20) == *(arg1 + 0x4c))
label_140ebaaee:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = arg1 + 0x50
    void* rcx_1 = *(r8 + 8)
    
    if (rcx_1 != 0)
        r8 = rcx_1
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x60)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140ebaaee_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + *(arg1 + 0x18)
            
            if (*rdx_5 == arg3)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_140ebaaee_2
        
        if (rax_4 == 0xffffffff)
        label_140ebaaee_2:
            rdx_5 = nullptr

void* rax_5 = &rdx_5[1]

if (rdx_5 == 0)
    rax_5 = nullptr

int64_t* var_30
int128_t var_28
int128_t* rcx_4
int64_t rdx_12
int32_t rsi_2

if (rax_5 != 0)
label_140ebac1d:
    int64_t* rcx_9 = *(rax_5 + 8)
    rdx_12 = *rax_5
    int64_t var_38 = rdx_12
    var_30 = rcx_9
    
    if (rcx_9 != 0)
        rcx_9[1].d += 1
    
    rcx_4 = &var_38
    rsi_2 = 1
else
    int64_t* rsi_1 = *(arg1 + 0x68)
    
    if (rsi_1[1].d != *(rsi_1 + 0x34))
        int32_t rax_8 = sub_140b5ead0(arg3.d) + arg3:4.d
        void* r8_2 = &rsi_1[7]
        void* rcx_3 = *(r8_2 + 8)
        
        if (rcx_3 != 0)
            r8_2 = rcx_3
        
        int32_t rax_10 = *(r8_2 + (((sx.q(rsi_1[9].d) - 1) & sx.q(rax_8)) << 2))
        
        if (rax_10 == 0xffffffff)
            goto label_140ebab61
        
        int64_t* rdx_11
        
        while (true)
            rdx_11 = (sx.q(rax_10) << 5) + *rsi_1
            
            if (*rdx_11 == arg3)
                break
            
            rax_10 = rdx_11[3].d
            
            if (rax_10 == 0xffffffff)
                goto label_140ebab61
        
        if (rax_10 == 0xffffffff || rdx_11 == 0)
            goto label_140ebab61
        
        rax_5 = &rdx_11[1]
        
        if (rax_5 == 0)
            goto label_140ebab61
        
        goto label_140ebac1d
    
label_140ebab61:
    rcx_4 = &var_28
    var_28 = zx.o(0)
    rsi_2 = 2
    rdx_12 = 0

int64_t rax_11 = *(rcx_4 + 8)
*(rcx_4 + 8) = 0
*arg2 = rdx_12
arg2[1] = rax_11
*rcx_4 = 0

if ((rsi_2.b & 2) != 0)
    int64_t* rbx_1 = var_28:8.q
    rsi_2 &= 0xfffffffd
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp2_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

if ((rsi_2.b & 1) != 0 && var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp3_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_30 + 8))(var_30, 1)

return arg2
