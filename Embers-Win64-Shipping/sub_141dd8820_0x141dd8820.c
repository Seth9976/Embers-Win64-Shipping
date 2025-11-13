// 函数: sub_141dd8820
// 地址: 0x141dd8820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t result = __security_cookie ^ &var_c8
uint64_t result_1 = result
bool cond:0 = arg1[0x1e].b == 3
*(arg1 + 0x94) = arg2.d

if (cond:0 || (arg1[0xb].b & 0x40) != 0)
    int32_t rax_1 = *(arg1 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_2 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_2
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_2) * 0x18
    
    result = zx.q(*(rax_8 + 8) u>> 0x1d)
    
    if ((result.b & 1) == 0)
        int512_t zmm0
        zmm0.o = zx.o(0)
        int64_t rdx_4 = *(*arg1 + 0x150)
        
        if (arg2.d f<= 0f)
            void* rax_18 = rdx_4(arg1, zmm0)
            void* rbx_2 = *(rax_18 + 0x188)
            void* rbx_3
            
            if (rbx_2 == 0)
                rbx_3 = *(rax_18 + 0x300)
            else
                rbx_3 = *(rbx_2 + 0xc0)
            
            result = sub_1423dce10(rbx_3, &arg1[0x29])
            
            if (result != 0)
                result = sub_1423e60e0(rbx_3, arg1[0x29])
            
            arg1[0x29] = 0
        else
            void* rax_11 = rdx_4(arg1, zmm0)
            void* rcx_5 = *(rax_11 + 0x188)
            void* rsi_1
            
            if (rcx_5 == 0)
                rsi_1 = *(rax_11 + 0x300)
            else
                rsi_1 = *(rcx_5 + 0xc0)
            
            void*** rax_12 = sub_140a84c80(0, 0x30, 0)
            
            if (rax_12 != 0)
                *rax_12 = &data_142d57800
                sub_140d3a3a0(&rax_12[1], arg1)
                rax_12[2] = sub_141db9230
                rax_12[4] = sub_140a387b0()
                *rax_12 = &data_142d57858
            
            int64_t var_98 = 0
            int32_t var_90_1 = 0
            
            if (rax_12 != 0)
                (*rax_12)[8](rax_12, &var_98)
            
            void var_88
            sub_140d3a3a0(&var_88, nullptr)
            int64_t var_80_1 = 0
            int64_t var_78_1 = 0
            void* var_68_1 = nullptr
            sub_1423e6200(rsi_1, &arg1[0x29], &var_98, arg2, 0, 0xbf800000)
            
            if (var_78_1 != 0)
                void var_58
                void* rcx_10 = &var_58
                
                if (var_68_1 != 0)
                    rcx_10 = var_68_1
                
                (*(*rcx_10 + 0x10))(rcx_10)
            
            result = sub_140745b20(&var_98)
            
            if (rax_12 != 0)
                (*rax_12)[7](rax_12, 0)
                result = sub_140a84c80(rax_12, 0, 0)
                
                if (result != 0)
                    result = sub_140a74f90(result)

__security_check_cookie(result_1 ^ &var_c8)
return result
