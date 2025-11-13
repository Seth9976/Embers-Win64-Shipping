// 函数: sub_140fbe660
// 地址: 0x140fbe660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = nullptr

if (*(arg1 + 0x88) != 0)
    int64_t* rcx = *(arg1 + 0x80)
    
    if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
        int64_t* rcx_1
        
        if (*(arg1 + 0x88) == 0)
            rcx_1 = nullptr
        else
            rcx_1 = *(arg1 + 0x80)
        
        (*(*rcx_1 + 0x50))(rcx_1)

int64_t* rbx = *(arg1 + 0x60)
int64_t rbp

if (rbx == 0)
    rbp.b = 0
else
    int32_t rax_4 = rbx[1].d
    
    if (rax_4 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_4 + 1
    
    if (rbx == 0 || *(arg1 + 0x58) == 0 || *(arg1 + 0x90) != 0)
        rbp.b = 0
    else
        rbp.b = 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if (rbp.b != 0)
    int64_t* rbx_1 = *(arg1 + 0x60)
    int128_t var_28 = *(arg1 + 0x40)
    
    if (rbx_1 != 0)
        int32_t rax_8 = rbx_1[1].d
        
        if (rax_8 != 0)
            rbx_1[1].d = rax_8 + 1
            rax_8.b = 1
        
        if (rax_8.b == 0)
            rbx_1 = nullptr
        
        if (rbx_1 != 0)
            rsi = *(arg1 + 0x58)
    
    sub_140f9f6f0(rsi, &var_28, *(arg1 + 0x68))
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t temp3_1 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)

return j_sub_140d9cd40(arg1) __tailcall
