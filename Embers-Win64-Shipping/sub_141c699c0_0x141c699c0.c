// 函数: sub_141c699c0
// 地址: 0x141c699c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t var_98 = 0
int128_t* var_88 = nullptr
int128_t var_78
int64_t* result
void* rdx_1

while (true)
    result = *(arg1 + 0x2d8)
    rdx_1 = *result
    
    if (rdx_1 == 0)
        break
    
    int128_t zmm2
    int128_t zmm3
    int128_t zmm4
    int128_t zmm5
    
    if (&var_98 != rdx_1 + 0x10)
        zmm2 = var_98.o
        zmm3 = var_88.o
        zmm4 = var_78
        int128_t var_68
        zmm5 = var_68
        var_98.o = *(rdx_1 + 0x10)
        var_88.o = *(rdx_1 + 0x20)
        var_78 = *(rdx_1 + 0x30)
        var_68 = *(rdx_1 + 0x40)
        *(rdx_1 + 0x10) = zmm2
        *(rdx_1 + 0x20) = zmm3
        *(rdx_1 + 0x30) = zmm4
        *(rdx_1 + 0x40) = zmm5
    
    void* rbx_1 = *(arg1 + 0x2d8)
    *(arg1 + 0x2d8) = rdx_1
    int64_t var_58 = 0
    int128_t* var_48_1 = nullptr
    
    if (rdx_1 + 0x10 != &var_58)
        zmm5 = *(rdx_1 + 0x10)
        zmm2 = *(rdx_1 + 0x20)
        zmm3 = *(rdx_1 + 0x30)
        zmm4 = *(rdx_1 + 0x40)
        *(rdx_1 + 0x10) = var_58.o
        *(rdx_1 + 0x20) = var_48_1.o
        int128_t var_38
        *(rdx_1 + 0x30) = var_38
        int128_t var_28
        *(rdx_1 + 0x40) = var_28
        var_58.o = zmm5
        var_48_1.o = zmm2
        var_38 = zmm3
        var_28 = zmm4
        
        if (zmm5.q != 0)
            int128_t* rcx = &var_38
            
            if (var_48_1 != 0)
                rcx = var_48_1
            
            (*(*rcx + 0x10))(rcx)
    
    if (rbx_1 != 0)
        if (*(rbx_1 + 0x10) != 0)
            void* rax_6 = *(rbx_1 + 0x20)
            void* rcx_1 = rbx_1 + 0x30
            
            if (rax_6 != 0)
                rcx_1 = rax_6
            
            (*(*rcx_1 + 0x10))(rcx_1)
        
        j_sub_140a74f90(rbx_1)
    
    int128_t* rcx_3 = &var_78
    
    if (var_88 != 0)
        rcx_3 = var_88
    
    var_98((*(*rcx_3 + 8))(rcx_3))

if (var_98 != 0)
    int128_t* rcx_5 = &var_78
    
    if (var_88 != 0)
        rcx_5 = var_88
    
    result = (*(*rcx_5 + 0x10))(rcx_5, rdx_1)

__security_check_cookie(rax_1 ^ &var_b8)
return result
