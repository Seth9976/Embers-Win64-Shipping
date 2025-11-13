// 函数: sub_1422778f0
// 地址: 0x1422778f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* i = *arg2
int64_t result = sx.q(arg2[1].d)

for (void* r14 = i + result * 0x14; i != r14; i += 0x14)
    int64_t* rsi_1 = arg1[0x53]
    
    if (rsi_1 != 0)
        void* rax = sub_14254f450()
        void* rdx_1 = rsi_1[2]
        result = sx.q(*(rax + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38))
            int64_t result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) == rax + 0x30)
                int32_t var_28_1 = i[1].d
                int128_t var_38 = *i
                int64_t arg_10 = var_38.q
                int16_t* var_48
                sub_140b63b70(&arg_10, &var_48)
                int64_t rdi_1 = *data_143f5b298
                int64_t rax_4
                int64_t r9_1
                rax_4, r9_1 = sub_141dc9ff0(arg1)
                r9_1.b = 1
                (*(rdi_1 + 0x400))(data_143f5b298, rax_4, &var_48, r9_1)
                int16_t* const rdx_4 = &data_142d40450
                int32_t var_40
                
                if (var_40 != 0)
                    rdx_4 = var_48
                
                int64_t arg_18
                sub_140b58260(&arg_18, rdx_4, 1)
                int16_t* rcx_4 = var_48
                
                if (rcx_4 != 0)
                    sub_140a74f90(rcx_4)
                
                var_38.q = arg_18
                result = sub_142157ac0(rsi_1, &var_38)

return result
