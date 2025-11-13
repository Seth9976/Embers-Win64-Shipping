// 函数: sub_140f5cdb0
// 地址: 0x140f5cdb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = *arg2
int64_t* r15 = nullptr
int64_t rax = arg2[1]
int32_t arg_8 = 0
int64_t var_40
int64_t* var_38
int32_t var_30
int64_t* rbx
int64_t* rdi
int32_t r14

if (*(arg1 + 0x428) == 0)
    rbx = arg2[2]
    
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t var_48_1 = r13
    var_40 = rax
    var_38 = rbx
    
    if (rbx != 0)
        rbx[1].d += 1
    
    var_30 &= 0xfffffff0
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    rdi = var_38
    r14 = 2
else
    rdi = arg2[2]
    
    if (rdi != 0)
        rdi[1].d += 1
    
    int64_t var_48 = r13
    var_40 = rax
    var_38 = rdi
    
    if (rdi != 0)
        rdi[1].d += 1
    
    var_30 = (((((zx.d(arg6) * 2) | zx.d(arg5)) * 2) | zx.d(arg4)) * 2) | (var_30 & 0xfffffff0)
        | zx.d(arg3)
    
    if (rdi != 0)
        rdi[1].d -= 1
        
        if (rdi[1].d == 1)
            (**rdi)(rdi)
            int32_t temp3_1 = *(rdi + 0xc)
            *(rdi + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi + 8))(rdi, 1)
    
    rbx = var_38
    r14 = 1

int64_t var_68 = r13
int64_t var_60 = var_40

if (var_38 != 0)
    var_38[1].d += 1

if ((r14.b & 2) != 0)
    r14 &= 0xfffffffd
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp6_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*rbx + 8))(rbx, 1)

if ((r14.b & 1) != 0 && rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp7_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int32_t result

if (*(arg1 + 0x3c8) == 0)
label_140f5cf8c:
    
    if (*(arg1 + 0x3c8) != 0)
        int64_t* rcx_19 = *(arg1 + 0x3c0)
        
        if (rcx_19 != 0)
            (*(*rcx_19 + 0x38))(rcx_19, 0)
            int64_t rcx_20 = *(arg1 + 0x3c0)
            
            if (rcx_20 != 0)
                *(arg1 + 0x3c0) = sub_140a84c80(rcx_20, 0, 0)
            
            *(arg1 + 0x3c8) = 0
    
    sub_140627710(arg1 + 0x398, &var_68)
    *(arg1 + 0x3b0) &= 0xfffffff0
    int32_t var_50
    result = (var_50 ^ ((var_50 ^ var_30) & 0xf)) & 0xf
    *(arg1 + 0x3b0) |= result
    *(arg1 + 0x3b8) = 1
else
    int64_t* rcx_18 = *(arg1 + 0x3c0)
    
    if (rcx_18 == 0)
        goto label_140f5cf8c
    
    result = (*(*rcx_18 + 0x28))(rcx_18)
    
    if (result.b == 0)
        goto label_140f5cf8c

if (*(arg1 + 0x448) != 0)
    int64_t* rcx_22 = *(arg1 + 0x440)
    
    if (rcx_22 != 0)
        result = (*(*rcx_22 + 0x28))(rcx_22)
        
        if (result.b != 0)
            if (*(arg1 + 0x448) != 0)
                r15 = *(arg1 + 0x440)
            
            result = (*(*r15 + 0x50))(r15, &var_68)

if (var_38 != 0)
    var_38[1].d -= 1
    
    if (var_38[1].d == 1)
        result = (**var_38)(var_38)
        int32_t temp10_1 = *(var_38 + 0xc)
        *(var_38 + 0xc) -= 1
        
        if (temp10_1 == 1)
            result = (*(*var_38 + 8))(var_38, 1)

int64_t* rbx_3 = arg2[2]

if (rbx_3 != 0)
    rbx_3[1].d -= 1
    
    if (rbx_3[1].d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t temp11_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (temp11_1 == 1)
            return (*(*rbx_3 + 8))(rbx_3, 1)

return result
