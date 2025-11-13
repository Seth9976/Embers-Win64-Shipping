// 函数: sub_142917220
// 地址: 0x142917220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa8)
void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int32_t* rbx = *(arg1 + 0x28)
int32_t* rsi = *(rbx + 8)
uint64_t result

if (rsi != 0)
    int64_t rdx_1 = *(rbx + 0x20)
    
    if (rdx_1 != 0)
        int32_t rcx_1 = *rbx
        int32_t var_a8
        int32_t result_1
        
        if (rcx_1 == 0)
            uint64_t r14_1 = *arg3
            int64_t r15_1 = *(rbx + 0x430)
            var_a8.q = *(rbx + 0x28)
            int32_t var_88
            void var_78
            int64_t rbx_1
            
            if (sub_1428bdd50(rsi, *(rbx + 0x10), rbx[6], rdx_1, var_a8, &var_78, &var_88) == 0)
                rbx_1 = 0
            else
                uint64_t var_98_4 = r14_1
                var_a8.q = r15_1
                rbx_1 = sub_142917400(rsi, &var_78, var_88, &rbx[0xc], var_a8, arg2)
                sub_1428b8960(&var_78, 0x40)
            
            result_1.b = rbx_1 != 0
            result = zx.q(result_1)
        else if (rcx_1 == 1)
            if (arg2 != 0)
                var_a8.q = *(rbx + 0x28)
                result_1.b =
                    sub_1429175d0(rsi, *(rbx + 0x10), (*(rbx + 0x18)).d, rdx_1, var_a8, arg2, arg3)
                    != 0
                result = zx.q(result_1)
            else
                result = zx.q((arg2 + 1).d)
                *arg3 = sx.q(sub_1428916c0(rsi))
        else if (rcx_1 != 2)
            result = 0
        else
            uint64_t var_98_1 = *arg3
            var_a8.q = *(rbx + 0x430)
            result_1.b = sub_142917400(rsi, rdx_1, (*(rbx + 0x28)).d, &rbx[0xc], var_a8, arg2) != 0
            result = zx.q(result_1)
    else
        sub_1428a5670(0x34, 0x66, 0x68, "crypto\kdf\hkdf.c", 0xbc)
        result = 0
else
    sub_1428a5670((&rsi[0xd]).d, (rsi + 0x66).d, (rsi + 0x69).d, "crypto\kdf\hkdf.c", 0xb8)
    result = 0

__security_check_cookie(rax_1 ^ &var_c8)
return result
