// 函数: sub_140ebe3d0
// 地址: 0x140ebe3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = nullptr
int128_t var_28
int64_t** rax_3
int64_t* rbx_1
int32_t rsi

if (*(arg1 + 0x390) == 0)
label_140ebe44d:
    rbx_1 = 0.q
    rax_3 = &var_28
    rsi = 4
    var_28 = zx.o(0)
else
    rbx_1 = *(arg1 + 0x398)
    
    if (rbx_1 == 0)
        goto label_140ebe44d
    
    int32_t r8_1 = rbx_1[1].d
    
    if (r8_1 s<= 0)
        goto label_140ebe44d
    
    int64_t* rax = rbx_1
    
    if (rbx_1 != 0)
        if (r8_1 == 0)
            rbx_1 = nullptr
            rax = nullptr
        else
            rbx_1[1].d = r8_1 + 1
            rax = rbx_1
    
    if (rax != 0)
        rcx = *(arg1 + 0x390)
    
    void var_18
    rax_3 = (*(*rcx + 0x258))(rcx, &var_18)
    rsi = 3
    rcx = *rax_3

*arg2 = rcx
void* rax_4 = rax_3[1]
arg2[1] = rax_4

if (rax_4 != 0)
    *(rax_4 + 8) += 1

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
