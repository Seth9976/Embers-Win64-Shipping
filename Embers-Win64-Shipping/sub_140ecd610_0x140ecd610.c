// 函数: sub_140ecd610
// 地址: 0x140ecd610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140dc1680(arg1, arg2, arg3)
int64_t* rbx = *(arg1 + 0x3a8)
void* rbp = *(arg1 + 0x3a0)

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d += 1
        
        if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp1_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp1_1 == 1)
                    (*(*rbx + 8))(rbx, 1)

int64_t* rsi = *(arg1 + 0x398)
int64_t* r14 = nullptr
void* r15 = nullptr

if (rsi != 0)
    int32_t rax_3 = rsi[1].d
    
    if (rax_3 == 0)
        rsi = nullptr
    else
        rsi[1].d = rax_3 + 1
        
        if (rsi != 0)
            r15 = *(arg1 + 0x390)

void* var_58
int64_t* result = sub_140f47ce0(r15, &var_58)
void* rcx_3 = var_58

if (rcx_3 != 0)
    result = sub_140f4a730(rcx_3)

char arg_8
int64_t* rdi
int64_t r12

if (rcx_3 == 0 || result.b == 0)
    r12.b = 0
    rdi.b = 0
else
    r12.b = 1
    sub_140f478e0(var_58, &arg_8)
    rdi.b = arg_8.d f> arg3[3].d
    result.b = 0f f> arg3[5].d
    rdi.b ^= result.b

arg_8 = rdi.b

if (*(rbp + 0x120) == 0)
label_140ecd749:
    int64_t* rcx_6
    
    if (*(rbp + 0x130) != 0)
        rcx_6 = *(rbp + 0x128)
    
    if (*(rbp + 0x130) != 0 && rcx_6 != 0)
        result = (*(*rcx_6 + 0x28))(rcx_6)
        
        if (result.b != 0 || *(rbp + 0x138) != 0)
            goto label_140ecd787
    else if (*(rbp + 0x138) != 0)
        goto label_140ecd787
    
    if (r12.b != 0)
        result = sub_140ed5c60(arg1 - 8, 0, rdi.b)
else
    int64_t* rcx_5 = *(rbp + 0x118)
    
    if (rcx_5 == 0)
        goto label_140ecd749
    
    result = (*(*rcx_5 + 0x28))(rcx_5)
    
    if (result.b == 0)
        goto label_140ecd749
    
label_140ecd787:
    int64_t* rdi_1 = *(arg1 + 0x3e0)
    
    if (rdi_1 != 0)
        result = zx.q(rdi_1[1].d)
        
        if (result.d == 0)
            rdi_1 = nullptr
        else
            result = zx.q(result.d + 1)
            rdi_1[1].d = result.d
            
            if (rdi_1 != 0)
                r14 = *(arg1 + 0x3d8)
    
    int64_t* var_48
    
    if (*(rbp + 0x148) == 0)
        if (r12.b != 0 && var_58 != r14)
            int64_t r8_2
            result, r8_2 = sub_140f2d7d0(r15)
            
            if (r14 != 0)
                r8_2.b = 1
                (*(*r14 + 0x248))(r14, 1, r8_2, 0)
                var_48 = r14
                int64_t* var_40_1 = rdi_1
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                
                result = sub_140eda6e0(r15, &var_48)
    else if (*(rbp + 0x149) == 0)
        result = sub_140f47ce0(r15, &var_48)
        int64_t rbp_1 = *result
        int64_t* var_40
        
        if (var_40 != 0)
            var_40[1].d -= 1
            
            if (var_40[1].d == 1)
                result = (**var_40)(var_40)
                int32_t temp10_1 = *(var_40 + 0xc)
                *(var_40 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    result = (*(*var_40 + 8))(var_40, 1)
        
        if (rbp_1 != r14)
            if (r12.b == 0 || arg_8 == 0)
                result = sub_140ed5c60(arg1 - 8, 1, 0)
            else
                result = sub_140ed5c60(arg1 - 8, 1, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            result = (**rdi_1)(rdi_1)
            int32_t temp9_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp9_1 == 1)
                result = (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* var_50

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        result = (**var_50)(var_50)
        int32_t temp4_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*var_50 + 8))(var_50, 1)

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        result = (**rsi)(rsi)
        int32_t temp8_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp8_1 == 1)
            result = (*(*rsi + 8))(rsi, 1)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp11_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp11_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
