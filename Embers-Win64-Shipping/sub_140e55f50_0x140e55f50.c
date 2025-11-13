// 函数: sub_140e55f50
// 地址: 0x140e55f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
*arg2 = 0
*(arg2 + 8) = 0
*(arg2 + 0x10) = 0
arg2[0x20] = 0
__builtin_memset(&arg2[0x28], 0, 0x88)
*(arg2 + 0xb4) &= 0xffffff00
*(arg2 + 0xb0) = 0x20702
void var_f8

if (**arg1 == 0)
    int64_t rdi
    rdi.b = 1
    
    if (*(arg4 + 0x5c) != 0)
        void* rdx_3 = &var_f8
        int64_t* rcx_10 = *(arg3 + 0x38)
        int64_t rax_11 = *rcx_10
        
        if (*(arg4 + 0x69) != 0)
            sub_1405979f0(arg2, (*(rax_11 + 0x100))(rcx_10, rdx_3))
            sub_140597700(&var_f8)
            rdi.b = 0
        else if (*(arg4 + 0x6a) == 0)
            sub_1405979f0(arg2, (*(rax_11 + 0xf0))(rcx_10, rdx_3))
            sub_140597700(&var_f8)
        else
            sub_1405979f0(arg2, (*(rax_11 + 0x108))(rcx_10, rdx_3))
            sub_140597700(&var_f8)
            rdi.b = 0
    
    if (*arg2 == 0 && rdi.b != 0)
        int64_t* rcx_17 = *(arg3 + 0x38)
        sub_1405979f0(arg2, (*(*rcx_17 + 0x70))(rcx_17, &var_f8, arg3, arg4))
        sub_140597700(&var_f8)
else
    int64_t* rax_3 = arg1[1]
    int64_t* r14_1 = *(arg3 + 0x38)
    int64_t* rdi_1 = rax_3[1]
    int64_t r15_1 = *rax_3
    
    if (rdi_1 != 0)
        rdi_1[1].d += 1
    
    void** var_178
    sub_140e51390(&var_178, arg4)
    int64_t var_108_1 = r15_1
    var_178 = &data_142ed7318
    
    if (rdi_1 != 0)
        int32_t rax_4 = rdi_1[1].d
        rdi_1[1].d = rax_4
        
        if (rax_4 == 0)
            (**rdi_1)(rdi_1)
            int32_t temp1_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    sub_1405979f0(arg2, (*(*r14_1 + 0xd0))(r14_1, &var_f8, arg3, &var_178))
    sub_140597700(&var_f8)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t temp3_1 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)
    
    int64_t* var_130
    
    if (var_130 != 0)
        var_130[1].d -= 1
        
        if (var_130[1].d == 1)
            (**var_130)(var_130)
            int32_t temp4_1 = *(var_130 + 0xc)
            *(var_130 + 0xc) -= 1
            
            if (temp4_1 == 1)
                int64_t r8_2 = *var_130
                (*(r8_2 + 8))(var_130, 1, r8_2)
__security_check_cookie(rax_1 ^ &var_198)
return arg2
