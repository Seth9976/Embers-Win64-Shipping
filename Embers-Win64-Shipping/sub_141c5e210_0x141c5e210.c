// 函数: sub_141c5e210
// 地址: 0x141c5e210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL rax
rax.b = TryEnterCriticalSection(arg1 + 0x90) != 0
CRITICAL_SECTION* lpCriticalSection = nullptr

if (rax.b != 0)
    lpCriticalSection = arg1 + 0x90

if (lpCriticalSection != 0)
    int64_t* rax_1 = *(arg1 + 0x48)
    int128_t var_28 = zx.o(0)
    void* rsi_1 = *rax_1
    
    if (rsi_1 != 0)
        if (&var_28 != rsi_1 + 8)
            var_28.q = *(rsi_1 + 8)
            *(rsi_1 + 8) = 0
            sub_1405aeff0(&var_28:8, rsi_1 + 0x10)
        
        void* r14_1 = *(arg1 + 0x48)
        *(arg1 + 0x48) = rsi_1
        int64_t* var_30 = nullptr
        int64_t var_38
        
        if (rsi_1 + 8 != &var_38)
            *(rsi_1 + 8) = 0
            var_38 = 0
            sub_1405aeff0(rsi_1 + 0x10, &var_30)
            int64_t* rcx_3 = var_30
            
            if (rcx_3 != 0)
                rcx_3[1].d -= 1
                
                if (rcx_3[1].d == 1)
                    int64_t* rbx_2 = var_30
                    (**rbx_2)(rbx_2)
                    int32_t rax_5 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_5 == 1)
                        int64_t* rcx_5 = var_30
                        (*(*rcx_5 + 8))(rcx_5, 1)
        
        if (r14_1 != 0)
            int64_t* rbx_3 = *(r14_1 + 0x10)
            
            if (rbx_3 != 0)
                rbx_3[1].d -= 1
                
                if (rbx_3[1].d == 1)
                    (**rbx_3)(rbx_3)
                    int32_t rsi_2 = *(rbx_3 + 0xc)
                    *(rbx_3 + 0xc) -= 1
                    
                    if (rsi_2 == 1)
                        (*(*rbx_3 + 8))(rbx_3, zx.q(rsi_2))
            
            j_sub_140a74f90(r14_1)
    
    *(arg1 + 8) -= 1
    *arg2 = var_28.q
    arg2[1] = var_28:8.q
    LeaveCriticalSection(lpCriticalSection)
else
    *arg2 = 0
    arg2[1] = 0

return arg2
