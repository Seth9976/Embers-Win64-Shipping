// 函数: sub_140aacb40
// 地址: 0x140aacb40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* var_68 = *arg2
int64_t* rax_1 = arg2[1]
int64_t* var_60 = rax_1

if (rax_1 != 0)
    rax_1[1].d += 1

if (*(arg3 + 0x15) != 0)
    int64_t* var_28
    sub_140ab1ed0(arg2, &var_28)
    
    if (*(arg3 + 0x14) != 0)
        sub_140abd990(&var_28)
    
    int64_t var_58 = *(var_68 + 8)
    void* rax_3 = *(var_68 + 0x10)
    void* var_50_1 = rax_3
    
    if (rax_3 != 0)
        *(rax_3 + 8) += 1
    
    int64_t* rcx_3 = var_28
    int64_t* rax_5 = (*(*rcx_3 + 0x28))(rcx_3)
    int64_t r8 = *rax_5
    int64_t var_48
    (*(r8 + 0x18))(rax_5, &var_48, r8)
    char* var_38
    void** rax_6 = sub_140a961b0(&var_38, &var_48, &var_58)
    char* rdx_3 = var_68
    var_68 = *rax_6
    *rax_6 = rdx_3
    int64_t* rdx_4 = var_60
    var_60 = rax_6[1]
    rax_6[1] = rdx_4
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rax_9 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rax_9 == 1)
                (*(*var_30 + 8))(var_30, 1)
    
    int64_t rcx_10 = var_48
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)
    
    int64_t* var_20
    
    if (var_20 != 0)
        var_20[1].d -= 1
        
        if (var_20[1].d == 1)
            (**var_20)(var_20)
            int32_t rax_13 = *(var_20 + 0xc)
            *(var_20 + 0xc) -= 1
            
            if (rax_13 == 1)
                (*(*var_20 + 8))(var_20, 1)

EnterCriticalSection(&var_68[0x30])
sub_140aad970(var_68, arg1, arg3)

if (var_68 != -0x30)
    LeaveCriticalSection(&var_68[0x30])

if (var_60 != 0)
    var_60[1].d -= 1
    
    if (var_60[1].d == 1)
        (**var_60)(var_60)
        int32_t rsi_1 = *(var_60 + 0xc)
        *(var_60 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*var_60 + 8))(var_60, zx.q(rsi_1))

return arg1
