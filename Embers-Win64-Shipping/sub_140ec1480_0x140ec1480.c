// 函数: sub_140ec1480
// 地址: 0x140ec1480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdi = 0
void* var_48
sub_140ec1650(arg1, &var_48, arg3, arg4)
void* var_38
sub_140f022f0(var_48, &var_38)
int64_t* rbx
int64_t rbp

if (sub_140f03770(var_48) == 0)
    if (var_38 != 0)
        goto label_140ec14d9
    
    rbx = 0.q
    rbp.b = 0
else if (sub_140f03770(var_48) != 2 || var_38 == 0)
    rbx = 0.q
    rbp.b = 0
else
label_140ec14d9:
    sub_140ebd660()
    void* rcx_3 = data_143e2a070
    rbx = *(rcx_3 + 0x1c0)
    int64_t* rax_2 = rbx
    
    if (rbx != 0)
        int32_t rax_3 = rbx[1].d
        
        if (rax_3 == 0)
            rbx = nullptr
            rax_2 = nullptr
        else
            rbx[1].d = rax_3 + 1
            rax_2 = rbx
    
    int64_t rdx_2 = 0
    
    if (rax_2 != 0)
        rdx_2 = *(rcx_3 + 0x1b8)
    
    rdi = 1
    
    if (var_38 == rdx_2)
        rbp.b = 0
    else
        rbp = 1

if ((rdi & 1) != 0 && rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rbp.b != 0)
    void var_28
    sub_140edadd0(var_38, sub_140f035f0(var_48, &var_28))
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rdi_1 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*var_20 + 8))(var_20, zx.q(rdi_1))

int64_t* var_40
int64_t* rbx_3 = var_40
*arg2 = var_48
arg2[1] = rbx_3

if (rbx_3 != 0)
    rbx_3[1].d += 1
    rbx_3 = var_40

int64_t* var_30

if (var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t temp5_1 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_30 + 8))(var_30, 1)
    
    rbx_3 = var_40

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        (**rbx_3)(rbx_3)
        int32_t temp6_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_3 + 8))(rbx_3, 1)

return arg2
