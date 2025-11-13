// 函数: sub_140ebe990
// 地址: 0x140ebe990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x4c8)
int64_t* r14 = nullptr

if (rbx != 0)
    int32_t rax_1 = rbx[1].d
    
    if (rax_1 == 0)
        rbx = nullptr
    else
        rbx[1].d = rax_1 + 1
        r14 = *(arg1 + 0x4c0)

void* rsi = *(arg1 + 0x4e0)
void* rax_11

if (*(arg1 + 0x4d4) == 0 || r14 == 0)
    *arg2 = *(rsi + 0x4d0)
    arg2[1].b = *(rsi + 0x4e0)
    *(arg2 + 0x18) = *(rsi + 0x4e8)
    rax_11 = *(rsi + 0x4f0)
    arg2[2].q = rax_11
else
    if (rbx != 0)
        rbx[1].d += 1
    
    int64_t rax_4 = (*(*r14 + 0x48))(r14, arg1)
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp3_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rbx + 8))(rbx, 1)
    
    if (rax_4 == 0)
        *arg2 = *(rsi + 0x4d0)
        arg2[1].b = *(rsi + 0x4e0)
        *(arg2 + 0x18) = *(rsi + 0x4e8)
        rax_11 = *(rsi + 0x4f0)
        arg2[2].q = rax_11
    else
        int128_t* rcx_4 = 0x4d0
        
        if ((*(*r14 + 0x10))(r14, rax_4) != 0)
            rcx_4 = 0x4f8
        
        *arg2 = *(rcx_4 + rsi)
        arg2[1].b = *(rcx_4 + rsi + 0x10)
        *(arg2 + 0x18) = *(rcx_4 + rsi + 0x18)
        rax_11 = *(rcx_4 + rsi + 0x20)
        arg2[2].q = rax_11

if (rax_11 != 0)
    *(rax_11 + 8) += 1

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return arg2
