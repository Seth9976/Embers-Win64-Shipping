// 函数: sub_141c8d640
// 地址: 0x141c8d640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8

if (*(arg1 + 0x1b8) != 0)
    sub_141c8c670(arg1)
    *(arg1 + 0x1b8) = 0

if (**(arg1 + 0x1d8) != 0)
    int64_t var_98 = 0
    int128_t* var_88_1 = nullptr
    int128_t var_78
    
    while (true)
        void* rcx_1 = **(arg1 + 0x1d8)
        
        if (rcx_1 == 0)
            break
        
        int128_t zmm2
        int128_t zmm3
        int128_t zmm4
        int128_t zmm5
        
        if (&var_98 != rcx_1 + 0x10)
            zmm2 = var_98.o
            zmm3 = var_88_1.o
            zmm4 = var_78
            int128_t var_68
            zmm5 = var_68
            var_98.o = *(rcx_1 + 0x10)
            var_88_1.o = *(rcx_1 + 0x20)
            var_78 = *(rcx_1 + 0x30)
            var_68 = *(rcx_1 + 0x40)
            *(rcx_1 + 0x10) = zmm2
            *(rcx_1 + 0x20) = zmm3
            *(rcx_1 + 0x30) = zmm4
            *(rcx_1 + 0x40) = zmm5
        
        void* rbx_1 = *(arg1 + 0x1d8)
        *(arg1 + 0x1d8) = rcx_1
        int64_t var_58 = 0
        int128_t* var_48_1 = nullptr
        
        if (rcx_1 + 0x10 != &var_58)
            zmm5 = *(rcx_1 + 0x10)
            zmm2 = *(rcx_1 + 0x20)
            zmm3 = *(rcx_1 + 0x30)
            zmm4 = *(rcx_1 + 0x40)
            *(rcx_1 + 0x10) = var_58.o
            *(rcx_1 + 0x20) = var_48_1.o
            int128_t var_38
            *(rcx_1 + 0x30) = var_38
            int128_t var_28
            *(rcx_1 + 0x40) = var_28
            var_58.o = zmm5
            var_48_1.o = zmm2
            var_38 = zmm3
            var_28 = zmm4
            
            if (zmm5.q != 0)
                int128_t* rcx_2 = &var_38
                
                if (var_48_1 != 0)
                    rcx_2 = var_48_1
                
                (*(*rcx_2 + 0x10))(rcx_2)
        
        if (rbx_1 != 0)
            if (*(rbx_1 + 0x10) != 0)
                void* rax_6 = *(rbx_1 + 0x20)
                void* rcx_3 = rbx_1 + 0x30
                
                if (rax_6 != 0)
                    rcx_3 = rax_6
                
                (*(*rcx_3 + 0x10))(rcx_3)
            
            j_sub_140a74f90(rbx_1)
        
        int128_t* rcx_5 = &var_78
        
        if (var_88_1 != 0)
            rcx_5 = var_88_1
        
        var_98((*(*rcx_5 + 8))(rcx_5))
    
    if (var_98 != 0)
        int128_t* rcx_7 = &var_78
        
        if (var_88_1 != 0)
            rcx_7 = var_88_1
        
        (*(*rcx_7 + 0x10))(rcx_7)

int64_t* result
result.b = 1
__security_check_cookie(rax_1 ^ &var_b8)
return result
