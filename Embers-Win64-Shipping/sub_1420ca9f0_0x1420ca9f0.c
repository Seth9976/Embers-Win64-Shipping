// 函数: sub_1420ca9f0
// 地址: 0x1420ca9f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool rdx = sub_140b5b8a0(*(arg1 + 8), 0).b == 0
int64_t rax
rax.b = *(arg1 + 0xc) != 0
rax.b |= rdx

if (rax.b != 0)
    rax = sub_140d3c6e0(arg1)
    
    if (rax != 0 && sub_140d1fd20(rax, *(arg1 + 8)) != 0)
        int64_t* rax_1 = sub_140d3c6e0(arg1)
        rax = sub_1423de540(data_143f5b298, rax_1, 1)
        
        if (rax != 0)
            void* rcx_5 = *(rax + 0x188)
            void* rdi
            
            if (rcx_5 == 0)
                rdi = *(rax + 0x300)
            else
                rdi = *(rcx_5 + 0xc0)
            
            int128_t var_18 = *arg1
            int64_t arg_8
            sub_1423e6b10(rdi, &arg_8, &var_18)
            int64_t arg_10 = arg_8
            void* rax_3
            rax_3.b = sub_1423dce10(rdi, &arg_10) != 0
            return rax_3

rax.b = 0
return rax
