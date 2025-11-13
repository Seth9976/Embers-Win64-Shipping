// 函数: sub_140fb5e90
// 地址: 0x140fb5e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = data_143e2b778

if (rbx == 0)
    goto label_140fb5f5a

int32_t rax_1 = rbx[1].d

if (rax_1 == 0)
    rbx = nullptr
label_140fb5f5a:
    *arg2 = data_1439ae51e
    
    if (rbx != 0)
    label_140fb5f61:
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    return arg2

rbx[1].d = rax_1 + 1
int64_t rcx = data_143e2b770

if (rcx == 0)
    goto label_140fb5f5a

void* var_18
sub_140fb2f00(rcx, &var_18)
void* rax_3 = var_18
int64_t* var_10

if (rax_3 == 0 || *(rax_3 + 0x18) != 0)
    if (var_10 == 0)
        goto label_140fb5f5a
    
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp3_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*var_10 + 8))(var_10, 1)
    
    goto label_140fb5f5a

*arg2 = data_1439ae51f

if (var_10 != 0)
    var_10[1].d -= 1
    
    if (var_10[1].d == 1)
        (**var_10)(var_10)
        int32_t temp5_1 = *(var_10 + 0xc)
        *(var_10 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*var_10 + 8))(var_10, 1)

goto label_140fb5f61
