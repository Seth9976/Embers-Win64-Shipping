// 函数: sub_140b1e060
// 地址: 0x140b1e060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_98
int64_t rax_1 = __security_cookie ^ &var_98
int64_t var_68 = arg2
int64_t var_78 = 0
int64_t var_70 = 0
int64_t rax_2 = -1

do
    rax_2 += 1
while (*(arg2 + (rax_2 << 1)) != 0)

int64_t rcx = arg2 + (sx.q(rax_2.d) << 1)

if (arg2 == rcx)
label_140b1e0f0:
    arg4 = var_78.o
    arg1[3].b = 0
    int64_t var_50_1 = 0
    arg1[4] = arg4.q
    int64_t var_48_1 = 0
    var_78.o = var_50_1.o
    uint128_t temp0_1 = _mm_bsrli_si128(arg4, 0xc)
    arg1[5].d = _mm_bsrli_si128(arg4, 8).d
    *(arg1 + 0x2c) = temp0_1.d
    arg1[6].b = 1
else
    while (true)
        int64_t var_40
        arg4 = sub_140b11230(arg3, &var_40, &var_78, arg4.q)
        char var_28
        
        if (var_28 != 0)
            int64_t* var_38
            int64_t* rbx_1 = var_38
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                int32_t rax_6 = rbx_1[1].d
                rbx_1[1].d -= 1
                int32_t rax_8
                
                if (rax_6 == 1)
                    (**var_38)(var_38)
                    rax_8 = *(var_38 + 0xc)
                    *(var_38 + 0xc) -= 1
                
                if (rax_6 != 1 || rax_8 != 1)
                    rbx_1 = var_38
                else
                    rbx_1 = var_38
                    (*(*rbx_1 + 8))(rbx_1, 1)
            
            *arg1 = var_40
            arg1[1] = rbx_1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                rbx_1 = var_38
            
            int32_t var_30
            arg1[2].d = var_30
            arg1[3].b = 1
            arg1[6].b = 0
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**var_38)(var_38)
                    int32_t rsi_1 = *(var_38 + 0xc)
                    *(var_38 + 0xc) -= 1
                    
                    if (rsi_1 == 1)
                        int64_t r8_1 = *var_38
                        (*(r8_1 + 8))(var_38, zx.q(rsi_1), r8_1)
            
            break
        
        if (arg2 == rcx)
            goto label_140b1e0f0

sub_140b0b5e0(&var_78)
__security_check_cookie(rax_1 ^ &var_98)
return arg1
