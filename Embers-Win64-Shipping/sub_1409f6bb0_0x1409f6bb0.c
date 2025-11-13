// 函数: sub_1409f6bb0
// 地址: 0x1409f6bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint128_t zmm6 = zx.o(0)
int64_t* rcx = *(arg1 + 0x78)

if (rcx != 0)
    int64_t rdx_1 = *(arg1 + 0x38)
    
    if (rdx_1 == 0)
        zmm6.q = float.d((*(*rcx + 0x58))(rcx, rdx_1))
    else
        int64_t* rax_3 = *(arg1 + 0x40)
        int32_t var_48_1 = 0xffffffff
        int64_t var_78
        __builtin_memset(&var_78, 0, 0x2c)
        int32_t var_4c_1 = 0x80
        int32_t var_44_1 = 0
        int64_t var_38_1 = 0
        int32_t var_30_1 = 0
        int64_t var_88 = rdx_1
        
        if (rax_3 != 0)
            rax_3[1].d += 1
        
        zmm6.q = float.d((*(*rcx + 0x68))(rcx, &var_78, &var_88))
        
        if (rax_3 != 0)
            rax_3[1].d -= 1
            
            if (rax_3[1].d == 1)
                (**rax_3)(rax_3)
                int32_t rdi_1 = *(rax_3 + 0xc)
                *(rax_3 + 0xc) -= 1
                
                if (rdi_1 == 1)
                    (*(*rax_3 + 8))(rax_3, zx.q(rdi_1))
        
        int32_t var_30_2 = 0
        
        if (var_38_1 != 0)
            sub_140a74f90(var_38_1)
        
        sub_14059ad90(&var_78, 0)
        int64_t var_58
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        int64_t rcx_6 = var_78
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)

int64_t result
result.d = fconvert.s(sub_1409f5b40(zmm6, 0x22, 0x24))
__security_check_cookie(rax_1 ^ &var_a8)
return result
