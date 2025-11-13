// 函数: sub_141da10e0
// 地址: 0x141da10e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
uint64_t var_28 = __security_cookie ^ &var_68
uint64_t result

if (*(arg1 + 0x190) != 0 || *(arg1 + 0x188) s<= 0)
    result.b = 0
else
    int64_t* rax_1 = *(arg1 + 0x180)
    int64_t* rdi_1 = rax_1[1]
    int64_t* rbx_1 = *rax_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    sub_140a18a40(arg1 + 0x180, 0, 1, 1)
    int64_t* var_48 = rbx_1
    int64_t* rcx_1 = rdi_1
    int64_t* var_40_1 = rcx_1
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
        rcx_1 = var_40_1
    
    if (&var_48 != arg1 + 0x190)
        arg2 = var_48.o
        int128_t var_38_1 = arg2
        var_48.o = *(arg1 + 0x190)
        rcx_1 = var_40_1
        *(arg1 + 0x190) = arg2
    
    if (rcx_1 != 0)
        rcx_1[1].d -= 1
        
        if (rcx_1[1].d == 1)
            (**var_40_1)(var_40_1, arg2)
            int32_t rax_4 = *(var_40_1 + 0xc)
            *(var_40_1 + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*var_40_1 + 8))(var_40_1, 1)
    
    int64_t* rcx_4 = *(arg1 + 0x190)
    char rax_7 = (*(*rcx_4 + 8))(rcx_4, arg2)
    int64_t* rcx_5 = *(arg1 + 0x190)
    int64_t rdx_1 = *rcx_5
    
    if (rax_7 == 0)
        (*(rdx_1 + 0x10))(rcx_5, rdx_1)
        rbx_1.b = 1
    else
        (*(rdx_1 + 0x18))(rcx_5, rdx_1)
        rbx_1 = zx.q(sub_141da10e0(arg1))
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rsi_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, zx.q(rsi_1))
    
    result = zx.q(rbx_1.b)

__security_check_cookie(var_28 ^ &var_68)
return result
