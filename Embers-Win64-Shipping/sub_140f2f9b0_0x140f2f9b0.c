// 函数: sub_140f2f9b0
// 地址: 0x140f2f9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140f46840(arg1)

if (rax != 0)
    char* rbx_2 = *(rax + 0x10) + 0x1a8
    char arg_20
    
    if (*(rbx_2 + 0x10) != 0)
        int64_t* rcx = *(rbx_2 + 8)
        
        if (rcx != 0 && (*(*rcx + 0x28))(rcx) != 0)
            int64_t* rcx_1
            
            if (*(rbx_2 + 0x10) == 0)
                rcx_1 = nullptr
            else
                rcx_1 = *(rbx_2 + 8)
            
            (*(*rcx_1 + 0x48))(rcx_1, &arg_20)
            *rbx_2 = arg_20
    
    if (*rbx_2 != data_1439ae51d)
        int128_t* rax_6 = sub_140eff690(rax + 0x28)
        int128_t zmm6 = *(rax_6 + 8)
        int128_t zmm7 = *rax_6
        int128_t zmm8 = *(rax_6 + 0xc)
        int128_t zmm9 = *(rax_6 + 4)
        int64_t* rax_7 = sub_140e13cf0(*(rax + 0x10), &arg_20)
        zmm7.d = zmm7.d f+ zmm6.d
        zmm9.d = zmm9.d f+ zmm8.d
        zmm7.d = zmm7.d f+ *rax_7
        zmm9.d = zmm9.d f+ *(rax_7 + 4)
        *arg2 = zmm7.d
        arg2[1] = zmm9.d
        return arg2

*arg2 = data_143dbb1f0
return arg2
