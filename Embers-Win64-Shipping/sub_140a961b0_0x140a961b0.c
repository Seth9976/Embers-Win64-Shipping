// 函数: sub_140a961b0
// 地址: 0x140a961b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rax = j_sub_140a82f30(0xb0)
char* rdi = rax

if (rax == 0)
    rdi = nullptr
else
    int64_t rax_1 = *arg3
    int64_t* rsi_1 = arg3[1]
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    *rdi = 1
    *(rdi + 8) = rax_1
    *(rdi + 0x10) = rsi_1
    
    if (rsi_1 != 0)
        rsi_1[1].d += 1
    
    uint128_t zmm1_1 = sub_1405d9400()
    *(rdi + 0x18) = data_143cd6fd8
    void* rcx_1 = data_143cd6fe0
    *(rdi + 0x20) = rcx_1
    
    if (rcx_1 != 0)
        *(rcx_1 + 8) += 1
    
    *(rdi + 0x28) = 0
    InitializeCriticalSection(&rdi[0x30])
    SetCriticalSectionSpinCount(&rdi[0x30], 0xfa0)
    *(rdi + 0x58) = 0
    *(rdi + 0x58) = *arg2
    *arg2 = 0
    *(rdi + 0x60) = arg2[1].d
    *(rdi + 0x64) = *(arg2 + 0xc)
    arg2[1] = 0
    __builtin_memset(&rdi[0x68], 0, 0x28)
    *(rdi + 0x98) = 0
    *(rdi + 0xa0) = 0
    sub_140aa3cd0(rdi, zmm1_1)
    
    if (rsi_1 != 0)
        rsi_1[1].d -= 1
        
        if (rsi_1[1].d == 1)
            (**rsi_1)(rsi_1)
            int32_t rax_7 = *(rsi_1 + 0xc)
            *(rsi_1 + 0xc) -= 1
            
            if (rax_7 == 1)
                (*(*rsi_1 + 8))(rsi_1, 1)

*arg1 = rdi
void*** rax_9 = j_sub_140a82f30(0x18)

if (rax_9 == 0)
    rax_9 = nullptr
else
    rax_9[1].d = 1
    *rax_9 = &data_142e66838
    *(rax_9 + 0xc) = 1
    rax_9[2] = rdi

arg1[1] = rax_9
int64_t* rbx = arg3[1]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t r15_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (r15_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(r15_1))

return arg1
