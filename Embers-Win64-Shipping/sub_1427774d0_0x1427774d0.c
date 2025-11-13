// 函数: sub_1427774d0
// 地址: 0x1427774d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t* var_28 = __security_cookie ^ &var_88
int32_t i_1 = arg4
int128_t* rsi = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 0x10
    int32_t i
    
    do
        int64_t rax_1 = *(rbx_1 - 0x10)
        int128_t* rdi_1 = rsi
        rsi = &rsi[4]
        int64_t var_68 = rax_1
        int128_t* var_58 = nullptr
        
        if (rax_1 != 0)
            void* rax_2 = *rbx_1
            void* rcx = rbx_1 + 0x10
            
            if (rax_2 != 0)
                rcx = rax_2
            
            (**rcx)(rcx, &var_58)
        
        int128_t var_48
        
        if (rdi_1 != &var_68)
            int128_t zmm2 = *rdi_1
            int128_t zmm3 = rdi_1[1]
            int128_t zmm4 = rdi_1[2]
            int128_t zmm5 = rdi_1[3]
            int128_t zmm1 = var_58.o
            *rdi_1 = var_68.o
            int128_t zmm0 = var_48
            rdi_1[1] = zmm1
            rdi_1[2] = zmm0
            int128_t var_38
            rdi_1[3] = var_38
            var_68.o = zmm2
            var_58.o = zmm3
            var_48 = zmm4
            var_38 = zmm5
        
        if (var_68 != 0)
            int128_t* rax_4 = var_58
            int128_t* rcx_1 = &var_48
            
            if (rax_4 != 0)
                rcx_1 = rax_4
            
            (*(*rcx_1 + 0x10))(rcx_1)
        
        rbx_1 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
__security_check_cookie(var_28 ^ &var_88)
return result
