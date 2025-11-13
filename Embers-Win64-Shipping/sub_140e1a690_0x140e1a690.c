// 函数: sub_140e1a690
// 地址: 0x140e1a690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg1 + 0x9f8)
int64_t* rax = rsi

if (rsi != 0)
    int32_t rax_1 = rsi[1].d
    
    if (rax_1 == 0)
        rsi = nullptr
        rax = nullptr
    else
        rsi[1].d = rax_1 + 1
        rax = rsi

int64_t* rbx
int64_t* arg_8 = rbx
void* i

if (rax != 0)
    i = *(arg1 + 0x9f0)

if (rax == 0 || i == 0)
label_140e1a77f:
    rbx.b = 0
else
    while (i != *arg2)
        int64_t* rcx = i + 0x9f0
        i = nullptr
        rbx = rcx[1]
        
        if (rbx != 0)
            int32_t rax_3 = rbx[1].d
            
            if (rax_3 == 0)
                rbx = nullptr
            else
                rbx[1].d = rax_3 + 1
                
                if (rbx != 0)
                    i = *rcx
        
        int64_t* rdi_1 = rsi
        
        if (rbx != rsi)
            rsi = rbx
            
            if (rdi_1 != 0)
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t temp5_1 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (temp5_1 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
        else if (rbx != 0)
            rbx[1].d -= 1
            
            if (rbx[1].d == 1)
                (**rbx)(rbx)
                int32_t temp4_1 = *(rbx + 0xc)
                *(rbx + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*(*rbx + 8))(rbx, 1)
        
        if (i == 0)
            goto label_140e1a77f
    
    rbx.b = 1

if (rsi != 0)
    rsi[1].d -= 1
    
    if (rsi[1].d == 1)
        int64_t r8_1 = *rsi
        (*r8_1)(rsi, arg3, r8_1)
        int32_t temp1_1 = *(rsi + 0xc)
        *(rsi + 0xc) -= 1
        
        if (temp1_1 == 1)
            int64_t r8_2 = *rsi
            (*(r8_2 + 8))(rsi, 1, r8_2)

return zx.q(rbx.b)
