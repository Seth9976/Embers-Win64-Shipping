// 函数: sub_140edb040
// 地址: 0x140edb040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = nullptr
int32_t rbp = 0
int32_t arg_8 = 0
int64_t* rbx
int64_t* rdi_1

if (*(arg1 + 0x3e0) == 0)
label_140edb10a:
    rdi_1 = arg_8.q
    rbx = arg_8.q
    rsi.b = 0
else
    rdi_1 = *(arg1 + 0x3e8)
    
    if (rdi_1 == 0)
        goto label_140edb10a
    
    int32_t rax_1 = rdi_1[1].d
    
    if (rax_1 s<= 0)
        goto label_140edb10a
    
    void* rdx_1 = nullptr
    
    if (rdi_1 == 0)
        goto label_140edb09c
    
    if (rax_1 == 0)
        rdi_1 = nullptr
    else
        rdi_1[1].d = rax_1 + 1
    label_140edb09c:
        
        if (rdi_1 != 0)
            rdx_1 = *(arg1 + 0x3e0)
    
    rbp = 1
    
    if (sub_140f4a730(rdx_1) == 0)
        rbx = arg_8.q
        rsi.b = 0
    else
        rbx = *(arg1 + 0x3a0)
        int64_t* rax_4 = rbx
        
        if (rbx != 0)
            int32_t rax_5 = rbx[1].d
            
            if (rax_5 == 0)
                rbx = nullptr
                rax_4 = nullptr
            else
                rbx[1].d = rax_5 + 1
                rax_4 = rbx
        
        if (rax_4 != 0)
            rsi = *(arg1 + 0x398)
        
        rbp = 3
        
        if ((*(*rsi + 0x1c8))(rsi) != 0)
            rsi.b = 0
        else
            rsi.b = 1

if ((rbp.b & 2) != 0)
    rbp &= 0xfffffffd
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp2_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*rbx + 8))(rbx, 1)

if ((rbp.b & 1) != 0 && rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        int64_t r8_1 = *rdi_1
        (*r8_1)(rdi_1, arg2, r8_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            int64_t r8_2 = *rdi_1
            (*(r8_2 + 8))(rdi_1, 1, r8_2)

return zx.q(rsi.b)
