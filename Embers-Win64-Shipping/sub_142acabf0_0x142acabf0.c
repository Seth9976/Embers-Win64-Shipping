// 函数: sub_142acabf0
// 地址: 0x142acabf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_48 = -2
int32_t rbp = *(arg3 + 8)
int32_t rsi = -1
sub_142a4ab40(arg4)
int32_t rdi = 0
int32_t arg_8 = 0
int64_t* rcx_1 = *(arg1 + 0x230)
int64_t* rax_1 = (*(*rcx_1 + 0x70))(rcx_1, arg2, zx.q(rbp), 0x40, &arg_8)
int64_t* arg_18 = rax_1

if (arg_8 s> 0)
    *(arg3 + 0xc) = rbp
else
    int32_t r15_1 = -1
    
    if (rax_1 != 0 && sub_142ac69b0(rax_1) s> 0)
        int32_t rax_6
        
        do
            if (sub_142ac67c0(rax_1, rdi) + rbp s> rsi)
                r15_1 = rdi
                rsi = sub_142ac67c0(rax_1, rdi) + rbp
            
            rdi += 1
            rax_6 = sub_142ac69b0(rax_1)
        while (rdi s< rax_6)
        
        if (rsi s> 0)
            *(arg3 + 8) = rsi
            sub_142ac8fb0(arg1, rax_1, r15_1, arg4)
    
    int16_t rax_7 = *(arg4 + 8)
    int32_t rax_9
    
    if (rax_7 s< 0)
        rax_9 = *(arg4 + 0xc)
    else
        rax_9 = sx.d(rax_7) s>> 5
    
    if (rax_9 == 0)
        *(arg3 + 0xc) = rbp

if (rax_1 != 0)
    (**rax_1)(rax_1, 1)

return arg4
