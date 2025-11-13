// 函数: sub_14271f290
// 地址: 0x14271f290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t result = __security_cookie ^ &var_c8
uint64_t result_1 = result

if (arg2 == arg1[0x1e].d)
    uint16_t rcx = *arg3
    result.b = rcx.b & 0x88
    
    if (result.b != 0x88 || ((rcx u>> 8).b & 1) != 0)
        arg1[0x1e].d = data_143b57f9c
        
        if ((*(arg1 + 0x109) & 1) == 0 || ((arg1[0x16].d u>> 1).b & 1) == 0 || (*arg3 & 1) == 0)
            result = sub_14271cf20(arg1, zx.d(arg3[1].b))
        else
            int64_t (* var_a8_1)(int64_t* arg1) = sub_141b8bb04
            int32_t var_a0_1 = 0
            void* rax_5 = (*(*arg1 + 0x150))(arg1)
            void* rsi_1 = *(rax_5 + 0x188)
            void* rsi_2
            
            if (rsi_1 == 0)
                rsi_2 = *(rax_5 + 0x300)
            else
                rsi_2 = *(rsi_1 + 0xc0)
            
            void*** rax_6 = sub_140a84c80(0, 0x30, 0)
            
            if (rax_6 != 0)
                *rax_6 = &data_142e33ea8
                sub_140d3a3a0(&rax_6[1], arg1)
                *(rax_6 + 0x10) = var_a8_1.o
                rax_6[5] = sub_140a387b0()
                *rax_6 = &data_142e33f00
            
            int64_t var_88 = 0
            int32_t var_80_1 = 0
            
            if (rax_6 != 0)
                (*rax_6)[8](rax_6, &var_88)
            
            void var_78
            sub_140d3a3a0(&var_78, nullptr)
            int64_t var_70_1 = 0
            int64_t var_68_1 = 0
            void* var_58_1 = nullptr
            int64_t var_98[0x2]
            sub_1423e6520(rsi_2, &var_98, &var_88)
            
            if (var_68_1 != 0)
                void var_48
                void* rcx_6 = &var_48
                
                if (var_58_1 != 0)
                    rcx_6 = var_58_1
                
                (*(*rcx_6 + 0x10))(rcx_6)
            
            result = sub_140745b20(&var_88)
            
            if (rax_6 != 0)
                (*rax_6)[7](rax_6, 0)
                result = sub_140a84c80(rax_6, 0, 0)
                
                if (result != 0)
                    result = sub_140a74f90(result)

__security_check_cookie(result_1 ^ &var_c8)
return result
