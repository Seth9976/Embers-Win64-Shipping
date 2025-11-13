// 函数: sub_141c69b70
// 地址: 0x141c69b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_98 = 0
int128_t* var_88 = nullptr
int128_t var_78

while (true)
    void* rcx = *arg1[0xd7]
    
    if (rcx == 0)
        break
    
    int128_t zmm2
    int128_t zmm3
    int128_t zmm4
    int128_t zmm5
    
    if (&var_98 != rcx + 0x10)
        zmm2 = var_98.o
        zmm3 = var_88.o
        zmm4 = var_78
        int128_t var_68
        zmm5 = var_68
        var_98.o = *(rcx + 0x10)
        var_88.o = *(rcx + 0x20)
        var_78 = *(rcx + 0x30)
        var_68 = *(rcx + 0x40)
        *(rcx + 0x10) = zmm2
        *(rcx + 0x20) = zmm3
        *(rcx + 0x30) = zmm4
        *(rcx + 0x40) = zmm5
    
    void* rdi_1 = arg1[0xd7]
    arg1[0xd7] = rcx
    int64_t var_58 = 0
    int128_t* var_48_1 = nullptr
    
    if (rcx + 0x10 != &var_58)
        zmm5 = *(rcx + 0x10)
        zmm2 = *(rcx + 0x20)
        zmm3 = *(rcx + 0x30)
        zmm4 = *(rcx + 0x40)
        *(rcx + 0x10) = var_58.o
        *(rcx + 0x20) = var_48_1.o
        int128_t var_38
        *(rcx + 0x30) = var_38
        int128_t var_28
        *(rcx + 0x40) = var_28
        var_58.o = zmm5
        var_48_1.o = zmm2
        var_38 = zmm3
        var_28 = zmm4
        
        if (zmm5.q != 0)
            int128_t* rcx_1 = &var_38
            
            if (var_48_1 != 0)
                rcx_1 = var_48_1
            
            (*(*rcx_1 + 0x10))(rcx_1)
    
    if (rdi_1 != 0)
        if (*(rdi_1 + 0x10) != 0)
            void* rax_7 = *(rdi_1 + 0x20)
            void* rcx_2 = rdi_1 + 0x30
            
            if (rax_7 != 0)
                rcx_2 = rax_7
            
            (*(*rcx_2 + 0x10))(rcx_2)
        
        j_sub_140a74f90(rdi_1)
    
    int128_t* rcx_4 = &var_78
    
    if (var_88 != 0)
        rcx_4 = var_88
    
    var_98((*(*rcx_4 + 8))(rcx_4))

int64_t* result
void* rdx_2

while (true)
    result = arg1[0xd9]
    rdx_2 = *result
    
    if (rdx_2 == 0)
        break
    
    uint32_t rdi_2 = zx.d(*(rdx_2 + 8))
    int64_t rcx_6 = arg1[0xd9]
    arg1[0xd9] = rdx_2
    *(rdx_2 + 8) = 0
    j_sub_140a74f90(rcx_6)
    
    if (rdi_2 == 1)
        arg1[0xd4].b = 1
        (*(*arg1 + 0x528))(arg1)
    else if (rdi_2 == 2)
        arg1[0xd4].b = 0
        (*(*arg1 + 0x530))(arg1)

if (var_98 != 0)
    int128_t* rcx_11 = &var_78
    
    if (var_88 != 0)
        rcx_11 = var_88
    
    result = (*(*rcx_11 + 0x10))(rcx_11, rdx_2)

__security_check_cookie(rax_1 ^ &var_b8)
return result
