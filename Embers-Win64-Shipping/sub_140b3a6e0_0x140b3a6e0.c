// 函数: sub_140b3a6e0
// 地址: 0x140b3a6e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
EnterCriticalSection(arg1 + 0x3a8)
int64_t* rdx_5

if (*(arg1 + 0x10) == *(arg1 + 0x3c))
label_140b3a77e:
    rdx_5 = nullptr
else
    int32_t rax_2 = sub_140b5ead0(arg3.d) + arg3:4.d
    void* r8 = arg1 + 0x40
    void* rcx_2 = *(r8 + 8)
    
    if (rcx_2 != 0)
        r8 = rcx_2
    
    int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x50)) - 1) & sx.q(rax_2)) << 2))
    
    if (rax_4 == 0xffffffff)
    label_140b3a77e_1:
        rdx_5 = nullptr
    else
        while (true)
            rdx_5 = (sx.q(rax_4) << 5) + *(arg1 + 8)
            
            if (*rdx_5 == arg3)
                break
            
            rax_4 = rdx_5[3].d
            
            if (rax_4 == 0xffffffff)
                goto label_140b3a77e_2
        
        if (rax_4 == 0xffffffff)
        label_140b3a77e_2:
            rdx_5 = nullptr

void* rax_5 = &rdx_5[1]

if (rdx_5 == 0)
    rax_5 = nullptr

if (rax_5 != 0)
    int64_t* rdx_6 = *(rax_5 + 8)
    int64_t r8_2 = *rax_5
    int64_t var_28 = r8_2
    int64_t* var_20 = rdx_6
    
    if (rdx_6 != 0)
        rdx_6[1].d += 1
        rdx_6 = var_20
    
    if (arg2 != &var_28)
        *arg2 = r8_2
        var_28 = 0
        sub_1405aeff0(&arg2[1], &var_20)
        rdx_6 = var_20
    
    if (rdx_6 != 0)
        rdx_6[1].d -= 1
        
        if (rdx_6[1].d == 1)
            int64_t* rbx_1 = var_20
            (**rbx_1)(rbx_1, rdx_6)
            int32_t rsi_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                int64_t* rcx_5 = var_20
                (*(*rcx_5 + 8))(rcx_5, zx.q(rsi_1))

if (arg1 != -0x3a8)
    LeaveCriticalSection(arg1 + 0x3a8)

return arg2
