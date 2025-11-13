// 函数: sub_1428b45f0
// 地址: 0x1428b45f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void var_88
int64_t rax_1 = __security_cookie ^ &var_88
void* rax_2 = sub_142890ec0(arg1)
uint64_t result

if (arg2 != arg3 || arg4 u< sx.q(*(rax_2 + 0x12c)) + 8)
    result = 0xffffffff
else
    if (sub_142890eb0(arg1) != 0)
        *arg2 = *sub_142890ea0(arg1)
    
    void* rax_5 = sub_1406219d0(arg1)
    *(rax_5 + 4) = *arg3
    void* rdi_1 = arg4 - sx.q(*(rax_2 + 0x12c) + 8)
    int32_t rax_11
    int512_t zmm0_1
    rax_11, zmm0_1 =
        sub_1428d3b90(rax_2 + 0x138, sub_1406219d0(arg1), sx.q(0xf - *(rax_2 + 0x128)), rdi_1)
    
    if (rax_11 != 0)
        result = 0xffffffff
    else
        sub_1428d3020(rax_2 + 0x138, sub_142890ea0(arg1), sx.q(*(rax_2 + 0x130)), zmm0_1)
        int32_t rax_13 = sub_142890eb0(arg1)
        int64_t rcx_12 = *(rax_2 + 0x170)
        
        if (rax_13 == 0)
            int32_t rax_18
            
            if (rcx_12 == 0)
                rax_18 = sub_1428d31b0(rax_2 + 0x138, &arg3[1], &arg2[1], rdi_1, zmm0_1)
            else
                rax_18 = sub_1428d3390(rax_2 + 0x138, &arg3[1], &arg2[1], rdi_1, zmm0_1, rcx_12)
            
            int32_t rcx_18
            rcx_18.b = rax_18 == 0
            void var_58
            
            if (rcx_18 == 0)
                sub_1428b8960(&arg2[1], rdi_1)
                result = 0xffffffff
            else if (sub_1428d3c40(rax_2 + 0x138, &var_58, sx.q(*(rax_2 + 0x12c))) == 0)
                sub_1428b8960(&arg2[1], rdi_1)
                result = 0xffffffff
            else if (sub_1428bc500(&var_58, rdi_1 + &arg3[1], sx.q(*(rax_2 + 0x12c))) != 0)
                sub_1428b8960(&arg2[1], rdi_1)
                result = 0xffffffff
            else
                result = zx.q(rdi_1.d)
        else
            int32_t rax_14
            
            if (rcx_12 == 0)
                rax_14 = sub_1428d3560(rax_2 + 0x138, &arg3[1], &arg2[1], rdi_1, zmm0_1.o)
            else
                rax_14 = sub_1428d3870(rax_2 + 0x138, &arg3[1], &arg2[1], rdi_1, zmm0_1.o, rcx_12)
            
            if (rax_14 != 0)
                result = 0xffffffff
            else if (sub_1428d3c40(rax_2 + 0x138, rdi_1 + &arg2[1], sx.q(*(rax_2 + 0x12c))) == 0)
                result = 0xffffffff
            else
                result = zx.q(*(rax_2 + 0x12c) + 8 + rdi_1.d)

__security_check_cookie(rax_1 ^ &var_88)
return result
