// 函数: sub_142a34e50
// 地址: 0x142a34e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
void* r9 = data_143cc7150
int32_t r8 = *(arg1 + 8)
int32_t r10 = *(arg1 + 0xc)
int32_t r14 = arg2[3]
int32_t rsi = arg2[2]
int64_t var_60 = *(arg1 + 0x38)
int64_t var_58 = *(arg1 + 0x40)
int64_t var_50 = *(arg1 + 0x48)
int32_t var_98 = *(arg1 + 0x10)
int32_t rax_6 = *(arg1 + 0x24)
int32_t var_94 = rax_6
int32_t var_90 = rax_6
int64_t var_78 = *(arg2 + 0x38)
int64_t var_70 = *(arg2 + 0x40)
int64_t var_68 = *(arg2 + 0x48)
int32_t var_88 = arg2[4]
int32_t rax_11 = arg2[9]
int32_t var_84 = rax_11
int32_t var_80 = rax_11
int64_t i = 0
int64_t i_1 = 0
int32_t var_108 = r8
int32_t var_fc = r10
int32_t var_e8 = r14
void* var_e0 = r9

do
    int32_t r13_1
    
    if (i != 0)
        r13_1 = 2
    
    if (i == 0 || i == 3)
        r13_1 = 1
    
    int32_t r15_1 = (&var_98)[i]
    int32_t rdi_1 = 0
    int32_t r11_1 = (&var_88)[i]
    int32_t var_104_1 = r15_1
    int32_t var_100_1 = r11_1
    int32_t var_f8_1 = 0
    
    if (r14 s> 0)
        int32_t rbp_1 = 0
        int32_t var_f4_1 = 0
        uint32_t temp0_1 = divu.dp.d(0:0x10, r13_1)
        int32_t rax_15 = (temp0_1 * r10) << 4
        
        do
            int32_t rbx_1 = 0
            
            if (rsi s> 0)
                int64_t r11_2 = sx.q(r11_1)
                int64_t var_a8_1 = r11_2
                int32_t temp0_4 = divs.dp.d(sx.q(r8 << 4), rsi)
                int32_t r10_1 = temp0_4
                int32_t temp0_5 = divs.dp.d(sx.q(rdi_1), r13_1)
                int32_t r15_2 = 0
                
                do
                    int64_t rcx_7 = sx.q(divs.dp.d(sx.q(rbx_1), r13_1))
                    data_144021020(
                        sx.q(divs.dp.d(sx.q(rcx_7.d * var_108), rsi))
                            + sx.q(divs.dp.d(sx.q(temp0_5 * var_fc), r14) * r15_1) + (&var_60)[i], 
                        sx.q(var_104_1), rcx_7 + sx.q(temp0_5 * var_100_1) + (&var_78)[i], r11_2, 
                        ((zx.q(divs.dp.d(sx.q(r15_2), rsi)) & 0xf) << 4) + var_e0, r10_1, 
                        r9 + (zx.q(divs.dp.d(sx.q(rbp_1), r14)) & 0xf) * 0x10, 
                        divs.dp.d(sx.q(r10 << 4), r14), temp0_1, temp0_1, var_108, var_100_1, 
                        var_f8_1)
                    r10_1 = temp0_4
                    rbx_1 += 0x10
                    r11_2 = var_a8_1
                    r15_2 += (temp0_1 * r8) << 4
                while (rbx_1 s< rsi)
                
                rdi_1 = var_f8_1
                rbp_1 = var_f4_1
                r14 = var_e8
                r8 = var_108
                r9 = var_e0
                r15_1 = var_104_1
                r11_1 = var_100_1
                r10 = var_fc
            
            rbp_1 += rax_15
            rdi_1 += 0x10
            var_f8_1 = rdi_1
            var_f4_1 = rbp_1
        while (rdi_1 s< r14)
        
        i = i_1
    
    i += 1
    i_1 = i
while (i s< 3)

int64_t result = sub_142a218c0(arg2)
__security_check_cookie(rax_1 ^ &var_158)
return result
