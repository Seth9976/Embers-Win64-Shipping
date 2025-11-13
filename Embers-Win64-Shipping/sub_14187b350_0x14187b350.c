// 函数: sub_14187b350
// 地址: 0x14187b350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t r15 = sx.q(arg4)

if (r15.d s< *(arg1 + 0x10))
    int64_t r12_1 = r15 << 3
    
    do
        if (arg3[1].d - *(arg3 + 0x34) s> 0)
            int64_t* r14_1 = *(r12_1 + *(arg1 + 8))
            int64_t var_100
            __builtin_memset(&var_100, 0, 0x2c)
            int32_t var_d4_1 = 0x80
            int32_t var_d0_1 = 0xffffffff
            int32_t var_cc_1 = 0
            int64_t var_c0_1 = 0
            int32_t var_b8_1 = 0
            sub_140780e10(&var_100, arg3)
            int64_t rsi_1 = arg3[8]
            void var_c8
            
            if (rsi_1 == 0)
                memmove(&var_c8, &arg3[7], (rsi_1 + 4).d)
            
            if (var_c0_1 != 0)
                sub_140a74f90(var_c0_1)
                rsi_1 = arg3[8]
            
            int64_t var_c0_2 = rsi_1
            arg3[8] = 0
            int32_t var_b8_2 = arg3[9].d
            arg3[9].d = 0
            int64_t var_a8
            int64_t* rax_7 = (*(*r14_1 + 0x10))(r14_1, &var_a8, &var_100)
            
            if (arg3 != rax_7)
                sub_140780e10(arg3, rax_7)
                
                if (rax_7[8] == 0)
                    memmove(&arg3[7], &rax_7[7], 4)
                
                int64_t rcx_6 = arg3[8]
                
                if (rcx_6 != 0)
                    sub_140a74f90(rcx_6)
                
                arg3[8] = rax_7[8]
                rax_7[8] = 0
                arg3[9].d = rax_7[9].d
                rax_7[9].d = 0
            
            int32_t var_60_1 = 0
            int64_t var_68
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            int32_t var_a0_1 = 0
            int32_t var_9c
            
            if (var_9c != 0)
                sub_1405a5130(&var_a8, 0)
            
            int32_t var_78_1 = 0xffffffff
            int32_t var_74_1 = 0
            void var_98
            sub_14059a8e0(&var_98, 0)
            int64_t var_88
            
            if (var_88 != 0)
                sub_140a74f90(var_88)
            
            int64_t rcx_11 = var_a8
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
        
        r15 = zx.q(r15.d + 1)
        r12_1 += 8
    while (r15.d s< *(arg1 + 0x10))

sub_14077e140(arg2, arg3)
arg3[9].d = 0
int64_t rcx_13 = arg3[8]

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_1405a5130(arg3, 0)

arg3[6].d = 0xffffffff
*(arg3 + 0x34) = 0
sub_14059a8e0(&arg3[2], 0)
int64_t rcx_16 = arg3[4]

if (rcx_16 != 0)
    sub_140a74f90(rcx_16)

int64_t rcx_17 = *arg3

if (rcx_17 != 0)
    sub_140a74f90(rcx_17)

__security_check_cookie(rax_1 ^ &var_128)
return arg2
