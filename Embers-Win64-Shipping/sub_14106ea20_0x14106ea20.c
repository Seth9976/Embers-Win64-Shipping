// 函数: sub_14106ea20
// 地址: 0x14106ea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_88
int64_t* var_28 = __security_cookie ^ &var_88
int32_t i_1 = arg4
char* rbp = arg2

if (arg4 != 0)
    void* rbx_1 = arg3 + 0x30
    int32_t i
    
    do
        char rax_1 = *(rbx_1 - 0x30)
        char* rcx = rbp
        rbp = &rbp[0x60]
        int128_t* var_58 = nullptr
        *rcx = rax_1
        *(rcx + 4) = *(rbx_1 - 0x2c)
        *(rcx + 0xc) = *(rbx_1 - 0x24)
        *(rcx + 0x14) = *(rbx_1 - 0x1c)
        rcx[0x18] = *(rbx_1 - 0x18)
        rcx[0x19] = *(rbx_1 - 0x17)
        int64_t rax_7 = *(rbx_1 - 0x10)
        int64_t var_68 = rax_7
        
        if (rax_7 != 0)
            void* rax_8 = *rbx_1
            void* rcx_1 = rbx_1 + 0x10
            
            if (rax_8 != 0)
                rcx_1 = rax_8
            
            (**rcx_1)(rcx_1, &var_58)
        
        int128_t var_48
        
        if (&rcx[0x20] != &var_68)
            int128_t zmm2 = *(rcx + 0x20)
            int128_t zmm3 = *(rcx + 0x30)
            int128_t zmm4 = *(rcx + 0x40)
            int128_t zmm5 = *(rcx + 0x50)
            int128_t zmm1 = var_58.o
            *(rcx + 0x20) = var_68.o
            int128_t zmm0 = var_48
            *(rcx + 0x30) = zmm1
            *(rcx + 0x40) = zmm0
            int128_t var_38
            *(rcx + 0x50) = var_38
            var_68.o = zmm2
            var_58.o = zmm3
            var_48 = zmm4
            var_38 = zmm5
        
        if (var_68 != 0)
            int128_t* rax_10 = var_58
            int128_t* rcx_2 = &var_48
            
            if (rax_10 != 0)
                rcx_2 = rax_10
            
            (*(*rcx_2 + 0x10))(rcx_2)
        
        rbx_1 += 0x60
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
__security_check_cookie(var_28 ^ &var_88)
return result
