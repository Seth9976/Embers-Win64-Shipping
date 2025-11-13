// 函数: sub_1423ad750
// 地址: 0x1423ad750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t var_28 = __security_cookie ^ &var_d8
int64_t result

if (*(arg1 + 0x54) != 0 || *(arg1 + 0x100) != 0 || *arg2 == 0)
    result.b = 0
else
    void* rsi_1 = arg2[1]
    
    if (rsi_1 == 0)
        result.b = 0
    else
        void* rsi_2 = *(rsi_1 + 0xe8)
        void* rax_1 = rsi_2
        void* var_88 = rax_1
        
        if (rsi_2 != 0)
            *(rsi_2 + 8) += 1
            rax_1 = var_88
        
        if ((*(rax_1 + 0x40) & 0x400000) == 0)
            sub_1405d1550(&var_88)
            result.b = 0
        else
            void* rdx = arg2[1]
            int128_t zmm0 = data_143dbb1e0
            void* rbx_1 = *(*arg2 + 0xd0)
            char rcx_2 = (data_1439c7a34).b
            int32_t r11_2 = *(*(rdx + 0xe8) + 0x40) & 0xffbfffff
            int64_t var_68 = *(rdx + 0x50)
            int64_t r8_2 = sx.q(*(arg1 + 8))
            int64_t var_60_1 = 0
            int32_t var_44_1 = (1 << rcx_2) - 1
            int32_t var_58_1 = 1
            int128_t var_54_1 = zmm0
            char var_40_1 = 0
            int64_t var_38_1 = 0
            int32_t var_30_1 = 0
            int32_t* r9_1 = *(*(rbx_1 + 0x18) + (r8_2 << 3))
            int64_t* rcx_4 = data_143f0f180
            void var_80
            (*(*rcx_4 + 0x560))(rcx_4, &var_80, &data_143f02b98, zx.q(*r9_1), r9_1[1], 
                *(rax_1 + 0x3c), *(rbx_1 + 0x20) - r8_2.d, 1, r11_2, &var_68)
            sub_1405d1600(arg1 + 0x100, &var_80)
            sub_1405d1550(&var_80)
            int64_t rax_3 = *(arg1 + 0x100)
            *(rax_3 + 8) += 1
            *(rsi_2 + 8) += 1
            bool cond:1_1 = data_143f02ba8 == 0
            int64_t var_78 = rax_3
            void* var_70_1 = rsi_2
            
            if (cond:1_1)
                void*** rcx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                void* rax_4 = &rcx_10[4]
                
                if (rax_4 u> data_143f02bd0)
                    sub_140b0e3d0(&data_143f02bc8, 0x28)
                    rcx_10 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                    rax_4 = &rcx_10[4]
                
                data_143f02bac += 1
                int128_t zmm0_1 = var_78.o
                data_143f02bc8 = rax_4
                *data_143f02ba0 = rcx_10
                data_143f02ba0 = &rcx_10[1]
                rcx_10[1] = 0
                *rcx_10 = &data_143339448
                *(rcx_10 + 0x10) = zmm0_1
            else
                sub_1423a66c0(&var_78)
            
            sub_1405d1550(&var_88)
            result.b = 1

__security_check_cookie(var_28 ^ &var_d8)
return result
