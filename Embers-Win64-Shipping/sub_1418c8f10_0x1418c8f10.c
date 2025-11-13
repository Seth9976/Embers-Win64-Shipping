// 函数: sub_1418c8f10
// 地址: 0x1418c8f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 0x10) u>> 2)

if ((result.b & 1) == 0)
    result = *(arg1 + 8)
    
    if (*(result + 0x220) == 0)
        EnterCriticalSection(&data_143efb198)
        int32_t arg_8
        sub_1405ba450(&data_1439c71e0, &arg_8, arg1)
        int64_t rdx_1 = sx.q(arg_8)
        uint128_t var_38_1
        uint128_t var_28
        uint64_t var_18
        
        if (rdx_1.d == 0xffffffff)
            arg_8.q = var_18
            var_38_1 = var_28
        else
            int64_t r9_1 = data_1439c71e0
            int64_t rcx = rdx_1 * 5
            uint128_t zmm0 = *(r9_1 + (rcx << 3) + 8)
            void* r10_1 = r9_1 + (rcx << 3)
            bool cond:0_1 = data_1439c71e8 == data_1439c7214
            var_38_1 = zmm0
            var_28 = zmm0
            zmm0 = zx.o(*(r10_1 + 0x18))
            arg_8.q = zmm0.q
            var_18 = zmm0.q
            
            if (not(cond:0_1))
                void* rcx_1 = data_1439c7220
                int64_t r8_3 = sx.q(data_1439c7228 - 1) & sx.q(*(r10_1 + 0x24))
                void* rax_5 = &data_1439c7218
                
                if (rcx_1 != 0)
                    rax_5 = rcx_1
                
                void* rcx_2 = rax_5 + (r8_3 << 2)
                int32_t i = *(rax_5 + (r8_3 << 2))
                
                while (i != 0xffffffff)
                    if (i == rdx_1.d)
                        *rcx_2 = *(r10_1 + 0x20)
                        break
                    
                    int64_t i_1 = sx.q(i)
                    int64_t rcx_4 = i_1 + ((i_1 + 1) << 2)
                    i = *(r9_1 + (rcx_4 << 3))
                    rcx_2 = r9_1 + (rcx_4 << 3)
            
            sub_1405c3590(&data_1439c71e0, rdx_1.d, 1)
        
        LeaveCriticalSection(&data_143efb198)
        void* rcx_5 = *(var_38_1.q + 0x10)
        sub_1418be950(*(rcx_5 + 0x28), zx.q(*(rcx_5 + 0x1c)), zx.q(*(rcx_5 + 0x18)))
        result = zx.q(var_18.d)
        
        if (result.d == 1)
            if (arg2 == 0 || data_143f01c92 == 0)
                return sub_1418c2220(*(*(arg1 + 8) + 0x1a50), &var_28, arg1, *(arg1 + 0x1c))
            
            void*** r8_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
            void* rax_8 = &r8_7[8]
            
            if (rax_8 u> data_143f02bd0)
                sub_140b0e3d0(&data_143f02bc8, 0x48)
                r8_7 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
                rax_8 = &r8_7[8]
            
            data_143f02bac += 1
            data_143f02bc8 = rax_8
            *data_143f02ba0 = r8_7
            data_143f02ba0 = &r8_7[1]
            int32_t rdx_3 = *(arg1 + 0x1c)
            int64_t rcx_7 = *(arg1 + 8)
            *(r8_7 + 0x10) = var_38_1
            r8_7[1] = 0
            uint128_t zmm0_1 = zx.o(arg_8.q)
            *r8_7 = &data_142fec7d8
            r8_7[4] = zmm0_1.q
            r8_7[5] = arg1
            r8_7[6] = rcx_7
            r8_7[7].d = rdx_3
            return &data_142fec7d8
        
        if (result.d == 0)
            return sub_1418c5270(*(arg1 + 8) + 0x3f0, nullptr, &var_28)

return result
