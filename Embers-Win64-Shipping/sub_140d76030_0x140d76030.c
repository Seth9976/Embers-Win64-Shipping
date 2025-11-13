// 函数: sub_140d76030
// 地址: 0x140d76030
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_888
int64_t rax_1 = __security_cookie ^ &var_888
int64_t* rax_2 = arg2[1]

if (rax_2 != 0)
    rax_2[1].d += 1

int64_t var_860

if (arg1 + 0x50 == &var_860)
label_140d760ac:
    
    if (rax_2 != 0)
        rax_2[1].d -= 1
        
        if (rax_2[1].d == 1)
            (**rax_2)(rax_2)
            int32_t temp1_1 = *(rax_2 + 0xc)
            *(rax_2 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rax_2 + 8))(rax_2, 1)
else
    *(arg1 + 0x50) = *arg2
    int64_t* rbx_1 = *(arg1 + 0x58)
    
    if (rax_2 == rbx_1)
        goto label_140d760ac
    
    *(arg1 + 0x58) = rax_2
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

int64_t* rbx_2 = arg2[1]
var_860 = *arg2
int64_t* var_858 = rbx_2

if (rbx_2 != 0)
    *(rbx_2 + 0xc) += 1

int32_t var_868
sub_140d7a930(arg1 + 0x60, &var_868, &var_860)
int64_t rax_7 = sx.q(var_868)
int16_t* param0 = nullptr
void* const rdi_2

if (rax_7.d == 0xffffffff)
    rdi_2 = nullptr
else
    rdi_2 = rax_7 * 0x38 + *(arg1 + 0x60)

if (rbx_2 != 0)
    int32_t temp4_1 = *(rbx_2 + 0xc)
    *(rbx_2 + 0xc) -= 1
    
    if (temp4_1 == 1)
        (*(*rbx_2 + 8))(rbx_2, 1)

int64_t* rcx_6 = *arg2
int64_t* var_850
int16_t* result = (*(*rcx_6 + 0x58))(rcx_6, &var_850)
int64_t* rcx_7 = var_850

if (rcx_7 != 0)
    result = (*(*rcx_7 + 0xc0))(rcx_7)
    param0 = result

*(rdi_2 + 0x10) = param0

if (param0 != 0)
    *(rdi_2 + 0x20) = 0
    ImmAssociateContext(param0, *(arg1 + 0x40))
    int64_t* rcx_9 = *(arg1 + 0x20)
    result = (*(*rcx_9 + 0x48))(rcx_9, *(rdi_2 + 0x10), *(*(rdi_2 + 0x18) + 0x60), &var_868)
    void var_838
    
    if (result.d s< 0)
        result = sub_140b6cae0(&var_838, 0x400, result.d)

int64_t* var_848

if (var_848 != 0)
    var_848[1].d -= 1
    
    if (var_848[1].d == 1)
        result = (**var_848)(var_848)
        int32_t temp6_1 = *(var_848 + 0xc)
        *(var_848 + 0xc) -= 1
        
        if (temp6_1 == 1)
            result = (*(*var_848 + 8))(var_848, 1)

__security_check_cookie(rax_1 ^ &var_888)
return result
