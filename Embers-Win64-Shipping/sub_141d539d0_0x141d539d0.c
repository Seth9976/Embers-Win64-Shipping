// 函数: sub_141d539d0
// 地址: 0x141d539d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x1b] != 0)
    void arg_8
    int64_t rbx_1 = *sub_140b58170(&arg_8, "Media", 1)
    j_sub_140b3db50()
    int64_t* rax_2 = sub_140b407e0(&data_143de7d78, rbx_1)
    
    if (rax_2 != 0)
        int64_t* rbx_2 = arg1[0x1c]
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int64_t var_78 = arg1[0x1b]
        
        if (rbx_2 != 0)
            rbx_2[1].d += 1
        
        int64_t* rax_4 = (*(*rax_2 + 0x78))(rax_2)
        int64_t r8_1 = *rax_4
        (*(r8_1 + 0x18))(rax_4, &var_78, r8_1)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_7 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_7 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t rax_11 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (rax_11 == 1)
                    (*(*rbx_2 + 8))(rbx_2, 1)
    
    int64_t* var_90 = nullptr
    int64_t var_98
    
    if (&arg1[0x1b] != &var_98)
        arg1[0x1b] = 0
        var_98 = 0
        sub_1405aeff0(&arg1[0x1c], &var_90)
        int64_t* rcx_9 = var_90
        
        if (rcx_9 != 0)
            rcx_9[1].d -= 1
            
            if (rcx_9[1].d == 1)
                int64_t* rbx_3 = var_90
                (**rbx_3)(rbx_3)
                int32_t rax_15 = *(rbx_3 + 0xc)
                *(rbx_3 + 0xc) -= 1
                
                if (rax_15 == 1)
                    int64_t* rcx_11 = var_90
                    (*(*rcx_11 + 8))(rcx_11, 1)

int32_t var_88
(*(*arg1 + 0x348))(arg1, &var_88)
int32_t var_84
int32_t var_80
int32_t var_7c

if ((var_7c | var_80 | var_88 | var_84) != 0)
    int128_t var_68 = var_88.o
    
    if (sub_140a80f40() == 0)
        uint32_t rax_24
        
        if (data_143f138f4 == 0 && data_143de5480 != 0)
            rax_24.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_24.b == 0))
            void var_48
            int64_t* rax_26 = sub_141d56aa0(&var_48, nullptr, 0xff)
            *(*rax_26 + 0x10) = var_68
            void* rcx_17 = *rax_26
            int32_t r8_2 = rax_26[2].d
            int64_t* rdx_8 = rax_26[1]
            int64_t* rbx_4 = *(rcx_17 + 0x28)
            int64_t* arg_10 = rbx_4
            int32_t* rsi_2 = &rbx_4[9]
            
            if (rbx_4 != 0)
                *rsi_2 += 1
                rbx_4 = arg_10
            
            sub_1405e48c0(rcx_17, rdx_8, r8_2, 1)
            
            if (rbx_4 != 0)
                int32_t rdi_1 = *rsi_2
                *rsi_2 -= 1
                
                if (rdi_1 == 1)
                    sub_140a2f6e0(arg_10)
        else
            int128_t var_58 = var_68
            sub_142012610(sub_142003380(), &var_58)
    else
        sub_142012610(sub_142003380(), &var_68)

return sub_1423bccc0(arg1)
