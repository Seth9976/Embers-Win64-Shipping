// 函数: sub_141d59dc0
// 地址: 0x141d59dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x708)
int64_t* var_20 = nullptr
int64_t var_28

if (arg1 + 0x758 != &var_28)
    *(arg1 + 0x758) = 0
    var_28 = 0
    sub_1405aeff0(arg1 + 0x760, &var_20)
    int64_t* rcx_3 = var_20
    
    if (rcx_3 != 0)
        rcx_3[1].d -= 1
        
        if (rcx_3[1].d == 1)
            int64_t* rdi_1 = var_20
            (**rdi_1)(rdi_1)
            int32_t rax_3 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_3 == 1)
                int64_t* rcx_5 = var_20
                (*(*rcx_5 + 8))(rcx_5, 1)

if (arg1 != -0x708)
    LeaveCriticalSection(arg1 + 0x708)

void var_18

if (arg1 + 0x738 != &var_18)
    *(arg1 + 0x738) = 0
    int64_t* rcx_7 = *(arg1 + 0x740)
    *(arg1 + 0x740) = 0
    
    if (rcx_7 != 0)
        int32_t rsi_1 = *(rcx_7 + 0xc)
        *(rcx_7 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rcx_7 + 8))(rcx_7, zx.q(rsi_1))

return sub_141c67360(arg1) __tailcall
