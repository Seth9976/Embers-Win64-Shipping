// 函数: sub_1428a1980
// 地址: 0x1428a1980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void* rdi = *(arg1 + 0xb8)
int32_t rbx = 0
void* rsi = nullptr
int32_t var_78 = 0
void* var_58 = rdi
int32_t rbp = 0
int32_t r14 = *arg5
int64_t var_60 = 0
int64_t var_68 = 0

if (sub_142898c70(arg7) s> 0)
    int64_t r15_2
    int32_t rax_8
    
    do
        void* rax_2 = sub_142898ea0(arg7, rbp)
        int32_t var_74 = *arg6
        int32_t rax_4 = sub_1428a17e0(arg1, &var_60, &var_74, rax_2, rdi)
        
        if (rax_4 s< r14 || rax_4 == 0)
            r15_2 = var_68
        else
            int32_t var_70
            int32_t var_6c
            int32_t rax_7
            
            if (rax_4 == r14 && rsi != 0)
                int32_t* rax_5 = sub_1427ec4a0(rax_2)
                rax_7 = sub_1428e5760(&var_70, &var_6c, sub_1427ec4a0(rsi), rax_5)
            
            if (rax_4 == r14 && rsi != 0 && (rax_7 == 0 || (var_70 s<= 0 && var_6c s<= 0)))
                rbx = var_78
                r15_2 = var_68
            else
                rbx = var_74
                rsi = rax_2
                r15_2 = var_60
                r14 = rax_4
                var_68 = r15_2
                var_78 = rbx
        
        rbp += 1
        rax_8 = sub_142898c70(arg7)
        rdi = var_58
    while (rbp s< rax_8)
    
    if (rsi != 0)
        sub_1428e4430(*arg2)
        *arg2 = rsi
        *arg4 = r15_2
        *arg5 = r14
        *arg6 = rbx
        sub_1428e46f0(rsi)
        sub_1428e4430(*arg3)
        *arg3 = 0
        sub_1428a1b60(arg1, arg3, arg5, rsi, arg7)

int32_t r13
r13.b = r14 s>= 0x1c0
return zx.q(r13)
