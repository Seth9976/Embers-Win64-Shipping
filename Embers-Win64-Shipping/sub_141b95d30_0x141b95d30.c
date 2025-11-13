// 函数: sub_141b95d30
// 地址: 0x141b95d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8 = 0
int64_t* rbx = arg2[1]

if (rbx != 0)
    rbx[1].d += 1

void var_58

if (arg1 + 0x50 == &var_58)
label_141b95da4:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
else
    *(arg1 + 0x50) = *arg2
    int64_t* rdi_1 = *(arg1 + 0x58)
    
    if (rbx == rdi_1)
        goto label_141b95da4
    
    *(arg1 + 0x58) = rbx
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

void* rcx_3 = *(arg1 + 0x50)
char var_38 = 1
int128_t var_48 = *(arg1 + 0x38)
int64_t var_30 = 0
int32_t var_28 = 0
sub_140f605b0(rcx_3, &var_48)
sub_140745b20(&var_30)
sub_140f5e590(*(arg1 + 0x50), zx.d(*(arg1 + 0x48)))
sub_140f61790(*(arg1 + 0x50), zx.d(*(arg1 + 0x49)))
int64_t* rcx_7 = *(arg1 + 0x30)
int64_t* var_70
void* rdx_4
int32_t rdi_2

if (rcx_7 == 0)
    int64_t var_78 = data_143e244b0
    int64_t* rax_5 = data_143e244b8
    var_70 = rax_5
    
    if (rax_5 != 0)
        rax_5[1].d += 1
    
    rdx_4 = &var_78
    rdi_2 = 2
else
    arg_8.b = 0
    int32_t* var_60_1 = &arg_8
    void** (* var_68)(void** arg1, int64_t arg2, int64_t* arg3, int64_t* arg4) = sub_141b970e0
    sub_141befea0(rcx_7, &var_58, &var_68)
    rdx_4 = &var_58
    rdi_2 = 1

int64_t result = sub_140f5dc20(*(arg1 + 0x50), rdx_4)

if ((rdi_2.b & 2) != 0)
    rdi_2 &= 0xfffffffd
    
    if (var_70 != 0)
        var_70[1].d -= 1
        
        if (var_70[1].d == 1)
            result = (**var_70)(var_70)
            int32_t temp7_1 = *(var_70 + 0xc)
            *(var_70 + 0xc) -= 1
            
            if (temp7_1 == 1)
                result = (*(*var_70 + 8))(var_70, 1)

int64_t* var_50

if ((rdi_2.b & 1) != 0 && var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        result = (**var_50)(var_50)
        int32_t temp9_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp9_1 == 1)
            result = (*(*var_50 + 8))(var_50, 1)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp8_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp8_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
