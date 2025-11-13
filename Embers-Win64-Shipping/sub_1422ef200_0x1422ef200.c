// 函数: sub_1422ef200
// 地址: 0x1422ef200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = nullptr
int64_t rax = *arg1
int64_t* rsi = arg3
int64_t var_188 = 0
int32_t var_180 = 0
(*(rax + 0x2b8))(arg1, arg2, &var_188, zx.q(arg6))

if (var_180 != 0)
    void** const var_168
    memset(&var_168, 0, 0x90)
    sub_140b4c2a0(&var_168)
    int64_t var_d8_1 = 0
    var_168 = &data_142d6b230
    int64_t* var_d0_1 = &var_188
    int64_t var_c8_1 = 0x7fffffffffffffff
    sub_140b55290(&var_168, 1)
    var_168[0x1b](&var_168, 1)
    int64_t* var_160
    int32_t* rdx_1 = *var_160
    int32_t arg_8
    
    if (&rdx_1[1] u> var_160[1])
        int32_t* rdx_2 = &arg_8
        void** const* rcx_5 = &var_168
        char var_13f
        
        if ((var_13f & 0x20) != 0)
            sub_140b54070(rcx_5, rdx_2, arg5)
        else
            var_168[0x2a](rcx_5, rdx_2, 4)
    else
        arg_8 = *rdx_1
        *var_160 += 4
    
    if (arg_8 == arg4)
        void** var_b8
        sub_140b4c130(&var_b8, &var_168)
        char var_20_1 = 0
        var_b8 = &data_14325c860
        uint64_t var_178_1 = 0
        
        if (rsi == 0)
            rsi = nullptr
        else
            void* rax_5 = sub_140d41340()
            
            if (rax_5 == 0)
                rsi = nullptr
            else
                int64_t rax_6 = sx.q(*(rax_5 + 0x38))
                
                if (rax_6.d s> rsi[7].d || *(rsi[6] + (rax_6 << 3)) != rax_5 + 0x30)
                    rsi = nullptr
        
        void* rax_8 = sub_140cde0b0()
        uint32_t rax_11
        rax_11.b = (var_178_1 u>> 0x20).d == 0
        
        if ((rax_11.b & sub_140b5b8a0(0, 0)) != 0)
            sub_140d19010(rax_8, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* result_1 = sub_140d2dfc0(rsi, rax_8, var_178_1, 0, 0, 0, 0, 0, 0)
        result = result_1
        (*(*result_1 + 0xa0))(result, &var_b8)
        sub_140b4cb40(&var_b8)
    
    sub_140b4cb40(&var_168)

int64_t rcx_14 = var_188

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return result
