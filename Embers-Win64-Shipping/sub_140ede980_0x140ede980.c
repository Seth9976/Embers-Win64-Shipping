// 函数: sub_140ede980
// 地址: 0x140ede980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t result = __security_cookie ^ &var_118
int64_t result_1 = result

if (*(arg1 + 0x398) != 2)
    int64_t* rax_1 = *(arg1 + 0x6e0)
    
    if (rax_1 != 0)
        int64_t var_d8
        __builtin_memset(&var_d8, 0, 0x2c)
        int32_t i = 0
        int32_t var_a4_1 = 0
        void* var_98_1 = nullptr
        int32_t var_90_1 = 0
        int32_t var_ac_1 = 0x80
        int32_t var_a8_1 = 0xffffffff
        
        if (rax_1[1].d s> 0)
            int64_t rsi_1 = 0
            
            do
                int64_t* rbx_1 = *rax_1
                int64_t* rbx_2 = *(rbx_1 + rsi_1 + 8)
                int64_t var_f0 = *(rbx_1 + rsi_1)
                int64_t* var_e8_1 = rbx_2
                
                if (rbx_2 != 0)
                    rbx_2[1].d += 1
                
                int32_t var_f8
                sub_140e10ae0(arg1 + 0x620, &var_f8, &var_f0)
                int64_t rax_4 = sx.q(var_f8)
                void var_f4
                
                if (rax_4.d != 0xffffffff && *(arg1 + 0x620) + rax_4 * 0x18 != 0)
                    sub_140e903b0(&var_d8, &var_f4, &var_f0, nullptr)
                
                if (rbx_2 != 0)
                    rbx_2[1].d -= 1
                    
                    if (rbx_2[1].d == 1)
                        (**rbx_2)(rbx_2)
                        int32_t temp1_1 = *(rbx_2 + 0xc)
                        *(rbx_2 + 0xc) -= 1
                        
                        if (temp1_1 == 1)
                            (*(*rbx_2 + 8))(rbx_2, 1)
                
                rax_1 = *(arg1 + 0x6e0)
                i += 1
                rsi_1 += 0x10
            while (i s< rax_1[1].d)
        
        int64_t var_88
        sub_140eb6c90(arg1 + 0x620, &var_88, &var_d8)
        
        if (arg1 + 0x620 != &var_d8)
            int64_t rdi_1 = sx.q(var_90_1)
            void* rbx_3 = arg1 + 0x658
            sub_1405a4aa0(rbx_3, 0, rdi_1.d, 4)
            void var_a0
            void* rdx_5 = &var_a0
            void* r9_1 = *(rbx_3 + 8)
            
            if (var_98_1 != 0)
                rdx_5 = var_98_1
            
            if (r9_1 != 0)
                rbx_3 = r9_1
            
            memcpy(rbx_3, rdx_5, (rdi_1 << 2).d)
            *(arg1 + 0x668) = rdi_1.d
            sub_140e999f0(arg1 + 0x620, &var_d8)
        
        int32_t var_40_1 = 0
        int64_t var_48
        
        if (var_48 != 0)
            sub_140a74f90(var_48)
        
        sub_140a720d0(&var_88, 0)
        int64_t var_68
        
        if (var_68 != 0)
            sub_140a74f90(var_68)
        
        int64_t rcx_13 = var_88
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int32_t var_90_2 = 0
        
        if (var_98_1 != 0)
            sub_140a74f90(var_98_1)
        
        result = sub_140a720d0(&var_d8, 0)
        int64_t var_b8
        
        if (var_b8 != 0)
            result = sub_140a74f90(var_b8)
        
        int64_t rcx_17 = var_d8
        
        if (rcx_17 != 0)
            result = sub_140a74f90(rcx_17)
        
        int32_t var_80
        int32_t var_54
        
        if (var_80 - var_54 s> 0)
            result = (*(*(arg1 + 0x4e8) + 0x40))(arg1 + 0x4e8, 3)
    else
        (*(*(arg1 + 0x4e8) + 0x30))(arg1 + 0x4e8)
        result = (*(*(arg1 + 0x4e8) + 0x40))(arg1 + 0x4e8, 3)

__security_check_cookie(result_1 ^ &var_118)
return result
