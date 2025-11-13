// 函数: sub_140e68680
// 地址: 0x140e68680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx_3

if (*(arg1 + 0x138) == *(arg1 + 0x164))
label_140e68702:
    rcx_3 = nullptr
else
    void* r11_1 = arg1 + 0x168
    void* r9_1 = *(r11_1 + 8)
    
    if (r9_1 != 0)
        r11_1 = r9_1
    
    int32_t rax_2 = *(r11_1 + (((sx.q(*(arg1 + 0x178)) - 1) & sx.q(arg3)) << 2))
    
    if (rax_2 == 0xffffffff)
    label_140e68702_1:
        rcx_3 = nullptr
    else
        while (true)
            rcx_3 = sx.q(rax_2) * 0x30 + *(arg1 + 0x130)
            
            if (*rcx_3 == arg3)
                break
            
            rax_2 = rcx_3[0xa]
            
            if (rax_2 == 0xffffffff)
                goto label_140e68702_2
        
        if (rax_2 == 0xffffffff)
        label_140e68702_2:
            rcx_3 = nullptr

void* rax_3 = &rcx_3[2]

if (rcx_3 == 0)
    rax_3 = nullptr

int64_t* var_30
int128_t var_28
int64_t rax_5
int64_t* rcx_8
int32_t rsi_1
int64_t* rdi

if (rax_3 == 0)
    rdi = 0.q
    rcx_8 = &var_28
    rsi_1 = 4
    var_28 = zx.o(0)
    rax_5 = 0
else
    int64_t rax_4 = *rax_3
    int64_t rcx_5 = sx.q(*(rax_3 + 8)) * 2
    rdi = *(rax_4 + (rcx_5 << 3) - 8)
    int64_t rsi = *(rax_4 + (rcx_5 << 3) - 0x10)
    int64_t* rcx_6 = rdi
    
    if (rdi != 0)
        *(rdi + 0xc) += 1
    
    int64_t var_38 = 0
    rax_5 = 0
    var_30 = rcx_6
    
    if (rcx_6 != 0)
        int32_t rax_6 = rdi[1].d
        int64_t* rbx_1
        
        if (rax_6 == 0)
            var_30 = nullptr
            rcx_6 = nullptr
            rbx_1 = nullptr
        else
            rbx_1 = rcx_6
            rdi[1].d = rax_6 + 1
        
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)
            rcx_6 = rbx_1
        
        rdi = nullptr
        rax_5 = 0
        
        if (rcx_6 != 0)
            var_38 = rsi
            rax_5 = rsi
    
    rcx_8 = &var_38
    rsi_1 = 3

*arg2 = rax_5
int64_t rax_9 = rcx_8[1]
rcx_8[1] = 0
*rcx_8 = 0
arg2[1] = rax_9

if ((rsi_1.b & 4) != 0)
    int64_t* rbx_2 = var_28:8.q
    rsi_1 &= 0xfffffffb
    
    if (rbx_2 != 0)
        rbx_2[1].d -= 1
        
        if (rbx_2[1].d == 1)
            (**rbx_2)(rbx_2)
            int32_t temp2_1 = *(rbx_2 + 0xc)
            *(rbx_2 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx_2 + 8))(rbx_2, 1)

if ((rsi_1.b & 2) != 0)
    rsi_1 &= 0xfffffffd
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t temp5_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_30 + 8))(var_30, 1)

if ((rsi_1.b & 1) != 0 && rdi != 0)
    int32_t temp4_1 = *(rdi + 0xc)
    *(rdi + 0xc) -= 1
    
    if (temp4_1 == 1)
        (*(*rdi + 8))(rdi, 1)

return arg2
