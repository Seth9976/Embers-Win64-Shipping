// 函数: sub_140de9860
// 地址: 0x140de9860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x4e]
int64_t* rax = rbx

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
        rax = nullptr
    else
        rbx[1].d = rax_1 + 1
        rax = rbx

int64_t* rsi = nullptr

if (rax != 0)
    rsi = arg1[0x4d]

void** rdi

if (rsi != arg2)
    rdi.b = 0
else
    void var_18
    int64_t* r8
    
    if (&arg1[0x4d] != &var_18)
        arg1[0x4d] = 0
        int64_t* rcx = arg1[0x4e]
        arg1[0x4e] = 0
        
        if (rcx != 0)
            int32_t temp1_1 = *(rcx + 0xc)
            *(rcx + 0xc) -= 1
            
            if (temp1_1 == 1)
                arg2, r8 = (*(*rcx + 8))(rcx, 1)
    
    void* rdi_1 = data_143e20d08
    
    if (rdi_1 != 0)
        int64_t* rdi_2 = *(rdi_1 + 0xb0)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        *(*(rdi_1 + 0xa8) + 0x78) = 1
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                arg2, r8 = (**rdi_2)(rdi_2)
                int32_t temp4_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    arg2, r8 = (*(*rdi_2 + 8))(rdi_2, 1)
    
    if (rsi != 0)
        arg2.b = 8
        sub_140e19ef0(rsi, arg2.b)
    
    if (sub_140db3510(&arg1[3]) != 0)
        r8.b = 1
        sub_140e27210(arg1, 0, r8.b, *(arg1[3] + 0x370))
    
    rdi.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            int64_t r8_2 = *rbx
            (*(r8_2 + 8))(rbx, 1, r8_2)

return zx.q(rdi.b)
