// 函数: sub_142682c80
// 地址: 0x142682c80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx
uint64_t var_8 = rbx
uint64_t r15 = 0
uint64_t arg_8 = 0
int128_t var_68
__builtin_memset(&var_68, 0, 0x2c)
sub_1426929c0(arg1 + 0x2c0, 0)
char rax
int64_t r9
rax, r9 = sub_142677b10(arg1, arg2, &var_68)

if (rax != 0)
    if (*(arg1 + 0x2f8) s> 0)
        int64_t r13_1 = 0
        int64_t arg_18 = 0
        
        do
            int64_t* rsi_2 = *(arg1 + 0x2f0) + r13_1
            
            if (rsi_2[5].d s<= 0)
                r9 = sub_14268fa10(arg1, arg2, rsi_2, &rsi_2[2], (rsi_2[6].d).b, &var_68)
            else
                int128_t* rbp_1 = rsi_2[4]
                void* r14_3 = &rbp_1[sx.q(rsi_2[5].d) * 3]
                
                if (rbp_1 != r14_3)
                    do
                        rbx = zx.q(rsi_2[6].d)
                        sub_14268fd10(arg1, rsi_2, rbp_1)
                        r9 = sub_14268fa10(arg1, arg2, arg1 + 0x2e0, &rsi_2[2], rbx.b, &var_68)
                        rbp_1 = &rbp_1[3]
                    while (rbp_1 != r14_3)
                    
                    r15 = arg_8
                    r13_1 = arg_18
            
            r15 = zx.q(r15.d + 1)
            r13_1 += 0x38
            arg_8 = r15
            arg_18 = r13_1
        while (r15.d s< *(arg1 + 0x2f8))
    
    int32_t* rdx_4 = var_68.q
    
    if (rdx_4 == 0 || *(rdx_4 + 0x30) == 0)
        sub_14262d160(arg2, 2, "GenerateCompressedLayers: empty tile - aborting", r9)
        rbx.b = 1
    else
        if ((*(arg1 + 0x12c) & 1) != 0 && (*(arg1 + 0x14) & 2) == 0)
            sub_142674740(arg1, rdx_4, _mm_cvtepi32_ps(zx.o(*(arg1 + 0x104))))
        
        sub_142683c80(arg1, arg2, &var_68)
        
        if (sub_142676000(arg1, arg2, &var_68) == 0)
            rbx.b = 0
        else if (sub_1426912a0(arg1, arg2, &var_68) == 0)
            rbx.b = 0
        else if (sub_142690d30(arg1, arg2, &var_68) == 0)
            rbx.b = 0
        else
            rbx = zx.q(sub_142690e60(arg1, arg2, &var_68))
else
    rbx.b = 0

sub_142632530(var_68.q)
sub_1426325c0(var_68:8.q)
int128_t var_58
sub_1426324d0(var_58.q)
sub_142671860(&var_58:8)
return zx.q(rbx.b)
