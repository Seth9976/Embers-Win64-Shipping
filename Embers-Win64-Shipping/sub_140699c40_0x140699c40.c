// 函数: sub_140699c40
// 地址: 0x140699c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool r8 = sub_140b5b8a0(arg1[2], 0).b == 0
int64_t rax
rax.b = arg1[3] != 0
rax.b |= r8

if (rax.b != 0)
    rax = sub_140d3c6e0(arg1)
    
    if (rax != 0 && sub_140d1fd20(rax, *(arg1 + 8)) != 0)
        uint64_t var_18 = 0
        int64_t var_10 = 0
        
        if (&var_18 != arg2)
            int32_t rbx_1 = arg2[1].d
            int64_t rsi_1 = *arg2
            var_10.d = rbx_1
            
            if (rbx_1 != 0)
                sub_1405a4c70(&var_18, rbx_1, 0)
                memcpy(var_18, rsi_1, rbx_1 * 2)
        
        int64_t* rax_1 = sub_140d3c6e0(arg1)
        int64_t rax_2 = sub_140d1fd30(rax_1, *(arg1 + 8))
        int64_t r9 = *rax_1
        (*(r9 + 0x210))(rax_1, rax_2, &var_18, r9)
        uint64_t rcx_8 = var_18
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        int64_t rax_3
        rax_3.b = 1
        return rax_3

rax.b = 0
return rax
