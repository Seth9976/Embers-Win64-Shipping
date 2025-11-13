// 函数: sub_1426688d0
// 地址: 0x1426688d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
uint64_t result = __security_cookie ^ &var_78
uint64_t result_1 = result
void* rdi = *arg2
int64_t rcx = *(arg1 + 0x60)

if (rcx != rdi)
    void* rax_1 = rdi
    
    if (rcx != 0)
        sub_1405c2d80(rcx + 0x80, *(arg1 + 0x80))
        rax_1 = *arg2
    
    int64_t* rcx_2 = arg2[1]
    void* var_58 = rax_1
    int64_t* var_50_1 = rcx_2
    
    if (rcx_2 != 0)
        rcx_2[1].d += 1
        rcx_2 = var_50_1
    
    if (&var_58 != arg1 + 0x60)
        int128_t zmm1 = var_58.o
        int128_t var_30_1 = zmm1
        var_58.o = *(arg1 + 0x60)
        rcx_2 = var_50_1
        *(arg1 + 0x60) = zmm1
    
    if (rcx_2 != 0)
        rcx_2[1].d -= 1
        
        if (rcx_2[1].d == 1)
            (**var_50_1)(var_50_1)
            int32_t rax_4 = *(var_50_1 + 0xc)
            *(var_50_1 + 0xc) -= 1
            
            if (rax_4 == 1)
                (*(*var_50_1 + 8))(var_50_1, 1)
    
    if (rdi == 0)
        *(arg1 + 0x40) = 0
        
        if (*(arg1 + 0x44) s<= 0xffffffff)
            sub_140638cc0(arg1 + 0x38, 0)
    else
        int64_t var_48 = 0
        int32_t var_40_1 = 0
        
        if (arg1 + 0x70 != &var_48 && *(arg1 + 0x78) != 0)
            int64_t* rcx_5 = *(arg1 + 0x70)
            
            if (rcx_5 != 0)
                (*(*rcx_5 + 0x40))(rcx_5, &var_48)
        
        int64_t var_38
        sub_14091e890(rdi + 0x80, &var_38, &var_48)
        sub_140745b20(&var_48)
        char rcx_8 = *(arg1 + 0x48)
        *(arg1 + 0x80) = var_38
        
        if (rcx_8 != 0)
            *(rdi + 0x98) &= 0xffffffef
            int32_t rax_9 = 0
            
            if (rcx_8 == 1)
                rax_9 = 0x10
            
            *(rdi + 0x98) |= rax_9
        
        sub_142668ac0(arg1, rdi)
    
    int32_t rbx_2
    rbx_2.b = rdi != 0
    result = sub_142660540(arg1, rdi)

int64_t* rbx_3 = arg2[1]

if (rbx_3 != 0)
    result = zx.q(rbx_3[1].d)
    rbx_3[1].d -= 1
    
    if (result.d == 1)
        result = (**rbx_3)(rbx_3)
        int32_t rsi_1 = *(rbx_3 + 0xc)
        *(rbx_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            result = (*(*rbx_3 + 8))(rbx_3, zx.q(rsi_1))

__security_check_cookie(result_1 ^ &var_78)
return result
