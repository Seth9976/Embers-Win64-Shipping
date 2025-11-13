// 函数: sub_140f00d10
// 地址: 0x140f00d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t var_28
int64_t rax_4
int64_t* rcx_1
int64_t* rbx_1
int32_t rsi

if (*(arg1 + 0x528) == 0)
label_140f00d89:
    rbx_1 = 0.q
    rcx_1 = &var_28
    rsi = 4
    var_28 = zx.o(0)
    rax_4 = 0
else
    rbx_1 = *(arg1 + 0x530)
    
    if (rbx_1 == 0)
        goto label_140f00d89
    
    int32_t rax_1 = rbx_1[1].d
    
    if (rax_1 s<= 0)
        goto label_140f00d89
    
    void* r8_1 = nullptr
    
    if (rbx_1 == 0)
        goto label_140f00d5e
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        rbx_1[1].d = rax_1 + 1
    label_140f00d5e:
        
        if (rbx_1 != 0)
            r8_1 = *(arg1 + 0x528)
    
    void var_18
    int64_t* rax_3 = sub_140ebe530(r8_1, &var_18)
    rcx_1 = rax_3
    rsi = 3
    rax_4 = *rax_3

*arg2 = rax_4
arg2[1] = rcx_1[1]
rcx_1[1] = 0
*rcx_1 = 0

if ((rsi.b & 4) != 0)
    int64_t* rdi_1 = var_28:8.q
    rsi &= 0xfffffffb
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp2_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

if ((rsi.b & 2) != 0)
    rsi &= 0xfffffffd
    int64_t* var_10
    
    if (var_10 != 0)
        var_10[1].d -= 1
        
        if (var_10[1].d == 1)
            (**var_10)(var_10)
            int32_t temp4_1 = *(var_10 + 0xc)
            *(var_10 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_10 + 8))(var_10, 1)

if ((rsi.b & 1) != 0 && rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp5_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

return arg2
