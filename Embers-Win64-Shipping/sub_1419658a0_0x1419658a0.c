// 函数: sub_1419658a0
// 地址: 0x1419658a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = *(arg1 + 8)
int64_t* rbx = *(rbp + 0x38)
int64_t* rdi = *(rbp + 0x30)

if (rbx != 0)
    rbx[1].d += 1

uint64_t result

if (arg2 f>= 0.0)
    if (*(rdi + 0x61) == 0)
    label_141965921:
        arg2.d = fconvert.s(arg2)
        (*(*rdi + 8))(rdi, arg2)
        
        if (*(rdi + 0x61) == 0)
            goto label_1419658db
        
        goto label_14196592e
    
label_14196592e:
    *(rbp + 0x1c) = 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rdi_2 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rdi_2 == 1)
                (*(*rbx + 8))(rbx, zx.q(rdi_2))
    
    result.b = 1
else
    if (*(rdi + 0x61) != 0)
        if (arg2 f< 0.0 || *(rdi + 0x61) != 0)
            goto label_14196592e
        
        goto label_141965921
    
label_1419658db:
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t rdi_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (rdi_1 == 1)
                (*(*rbx + 8))(rbx, zx.q(rdi_1))
    
    result.b = 0

return result
