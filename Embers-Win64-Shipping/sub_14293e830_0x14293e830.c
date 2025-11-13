// 函数: sub_14293e830
// 地址: 0x14293e830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xea8)
void var_ec8
int64_t rax_1 = __security_cookie ^ &var_ec8
int32_t* r14 = arg1
int32_t var_e58
sub_142940400(&var_e58, arg2, 5)
int32_t var_be8
sub_142940400(&var_be8, arg4, 3)
void var_858
sub_1429400c0(&var_858, arg3, 3)
int32_t rbx_1 = var_be8
void* const result

if (rbx_1 s>= 0)
    int32_t rax_2 = var_e58
    int32_t* r12_1
    void* r13_1
    int32_t var_e54
    int32_t var_be4
    void var_bdc
    
    if (rbx_1 s<= rax_2)
        if (rbx_1 != rax_2)
            rbx_1 = rax_2
            sub_14293fae0(r14, (sx.q(var_e54) s>> 1) * 0xc0 + data_143b868f8)
            r13_1 = &var_be4
        else
            sub_14293fb90(r14, &var_858 + (sx.q(var_be4) s>> 1 << 8))
            sub_14293e1b0(r14, (sx.q(var_e54) s>> 1) * 0xc0 + data_143b868f8, rbx_1)
            r13_1 = &var_bdc
        
        void var_e4c
        r12_1 = &var_e4c
    else
        sub_14293fb90(r14, &var_858 + (sx.q(var_be4) s>> 1 << 8))
        r12_1 = &var_e54
        r13_1 = &var_bdc
    int32_t rbx_2 = rbx_1 - 1
    
    if (rbx_1 - 1 s>= 0)
        int32_t temp2_1
        
        do
            int32_t rdi_1 = *(r13_1 - 4)
            int32_t r15_1 = r12_1[-1]
            int32_t r8_1
            
            if (rbx_2 == 0 || rbx_2 == rdi_1 || rbx_2 == r15_1)
                r8_1 = 0
            else
                r8_1 = 1
            
            sub_14293fc50(r14, r14, r8_1)
            
            if (rbx_2 == rdi_1)
                int64_t rax_13 = sx.q(*r13_1)
                
                if (rax_13.d s<= 0)
                    int32_t var_ea8_1
                    
                    if (rbx_2 != 0)
                        var_ea8_1 = 1
                    
                    if (rbx_2 == 0 || rbx_2 == r15_1)
                        var_ea8_1 = 0
                    
                    void* rsi_1 = &var_858 + (sx.q(neg.d(rax_13.d)) s>> 1 << 8)
                    int128_t var_e98
                    sub_14296dcf0(&var_e98, &r14[0x20], rsi_1 + 0xc0)
                    *(r14 + 0x80) = var_e98
                    int128_t var_e88
                    *(r14 + 0x90) = var_e88
                    int128_t var_e78
                    *(r14 + 0xa0) = var_e78
                    int128_t var_e68
                    *(r14 + 0xb0) = var_e68
                    sub_1429405c0(r14, rsi_1, var_ea8_1)
                else
                    int32_t r8_2
                    
                    if (rbx_2 == 0 || rbx_2 == r15_1)
                        r8_2 = 0
                    else
                        r8_2 = 1
                    
                    sub_14293e790(r14, &var_858 + (rax_13 s>> 1 << 8), r8_2)
                
                r13_1 += 8
            
            if (rbx_2 == r15_1)
                int64_t rax_20 = sx.q(*r12_1)
                
                if (rax_20.d s<= 0)
                    sub_1429405c0(r14, (sx.q(neg.d(rax_20.d)) s>> 1) * 0xc0 + data_143b868f8, rbx_2)
                else
                    sub_14293e1b0(r14, (rax_20 s>> 1) * 0xc0 + data_143b868f8, rbx_2)
                
                r12_1 = &r12_1[2]
            
            temp2_1 = rbx_2
            rbx_2 -= 1
        while (temp2_1 - 1 s>= 0)
    
    sub_1428b8960(&var_be8, 0x390)
    sub_1428b8960(&var_e58, 0x268)
    result = sub_1428b8960(&var_858, 0x800)
else
    result = &data_14353ded0
    int64_t i_1 = 2
    int64_t i
    
    do
        r14 = &r14[0x20]
        int128_t zmm0_1 = *result
        result += 0x80
        *(r14 - 0x80) = zmm0_1
        *(r14 - 0x70) = *(result - 0x70)
        *(r14 - 0x60) = *(result - 0x60)
        *(r14 - 0x50) = *(result - 0x50)
        *(r14 - 0x40) = *(result - 0x40)
        *(r14 - 0x30) = *(result - 0x30)
        *(r14 - 0x20) = *(result - 0x20)
        *(r14 - 0x10) = *(result - 0x10)
        i = i_1
        i_1 -= 1
    while (i != 1)

__security_check_cookie(rax_1 ^ &var_ec8)
return result
