// 函数: sub_141942af0
// 地址: 0x141942af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** rdi = nullptr
*arg2 = 0
int128_t var_38
void*** rax_4

if ((*(*arg3 + 8))(arg3) == 0)
    if ((*(*arg3 + 0x10))(arg3) == 0)
        if ((*(*arg3 + 0x20))(arg3) != 0)
            void*** rax_11 = j_sub_140a82f30(0xf0)
            
            if (rax_11 != 0)
                int32_t rdx_4 = *(arg3 + 0x3c)
                int32_t r10_3 = arg3[0xd].d
                char r8_2 = (arg3[7].d).b
                int32_t r9_5 = *(arg3 + 0x34)
                
                if (r10_3 u<= 1)
                    r10_3 = 0
                
                int32_t r11_3 = arg3[0xc].d
                int128_t* var_40_3 = &var_38
                int64_t var_48_3 = 0
                int32_t var_28_3 = arg3[6].d
                int32_t var_50_3 = arg3[8].d
                char var_58_1 = 0
                int32_t r9_6 = *(arg3 + 0x84)
                var_38 = *(arg3 + 0x20)
                rax_4 = sub_141929410(rax_11, arg1, 0, r9_6, 0xffffffff, r11_3, r11_3, r10_3, r9_5, 
                    r8_2, 1, 1, rdx_4, 1)
                goto label_141942d75
            
            sub_141941880(arg1, rdi, arg3)
            sub_1408c8cf0(arg2, rdi)
    else
        void*** rax_7 = j_sub_140a82f30(0xf0)
        
        if (rax_7 != 0)
            char rdx_2 = (*(arg3 + 0x3c)).b
            int32_t r8_1 = arg3[7].d
            int32_t r9_3 = *(arg3 + 0x34)
            int32_t r10_2 = arg3[0xd].d
            int32_t r11_2 = *(arg3 + 0x64)
            int32_t rax_8 = arg3[0xc].d
            int128_t* var_40_2 = &var_38
            int64_t var_48_2 = 0
            int32_t var_28_2 = arg3[6].d
            int32_t rcx_6 = arg3[8].d
            int32_t r9_4 = *(arg3 + 0x84)
            var_38 = *(arg3 + 0x20)
            rax_4 = sub_141928f70(rax_7, arg1, 0, r9_4, 0xffffffff, rax_8, r11_2, r10_2, r9_3, 
                r8_1, 1, 1, rdx_2, 0, 0, rcx_6)
            goto label_141942d75
        
        sub_141941880(arg1, rdi, arg3)
        sub_1408c8cf0(arg2, rdi)
else
    void*** rax_2 = j_sub_140a82f30(0xf0)
    
    if (rax_2 == 0)
        sub_141941880(arg1, rdi, arg3)
        sub_1408c8cf0(arg2, rdi)
    else
        char rdx = (*(arg3 + 0x3c)).b
        int32_t r8 = *(arg3 + 0x6c)
        int32_t r9_1 = arg3[0xd].d
        int32_t r10_1 = *(arg3 + 0x34)
        int32_t r11_1 = *(arg3 + 0x64)
        int32_t rax_3 = arg3[0xc].d
        int128_t* var_40_1 = &var_38
        int64_t var_48_1 = 0
        int32_t var_28_1 = arg3[6].d
        int32_t rcx_2 = arg3[8].d
        int32_t r9_2 = *(arg3 + 0x84)
        var_38 = *(arg3 + 0x20)
        rax_4 = sub_141928d30(rax_2, arg1, 0, r9_2, 0xffffffff, rax_3, r11_1, 0, r10_1, r9_1, r8, 
            1, rdx, 0, 0, rcx_2)
    label_141942d75:
        sub_141941880(arg1, rax_4, arg3)
        sub_1408c8cf0(arg2, rax_4)
int64_t* rbx_1 = *arg2

if (rbx_1 != 0)
    (*(*rbx_1 + 0x48))(rbx_1)
    
    if (data_143f01c92 != 0)
        sub_140a80f40()
    
    void* rax_14 = (*(*rbx_1 + 0x48))(rbx_1)
    *(rax_14 + 0x28) &= 0xc0000000
    *(rax_14 + 0x2c) |= 1

return arg2
