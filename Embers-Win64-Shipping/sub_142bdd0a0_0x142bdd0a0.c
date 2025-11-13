// 函数: sub_142bdd0a0
// 地址: 0x142bdd0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_e8
int64_t rax_1 = __security_cookie ^ &var_e8
int32_t rax_2 = *(arg1 + 0x20)
int64_t r12 = *(arg1 + 0x10)
int32_t rbx = 0
int32_t result_2 = 0
int32_t rdi = 0
uint64_t result
int32_t result_1

if (arg2[0xc].d == rax_2)
    if (arg3 == 2)
        if ((*(arg2[0x1e] + 8) & 1) != 0)
            sub_142b99980(r12, arg2[0xf])
            arg2[0xf] = 0
            void* rax_6 = arg2[0x1e]
            *(rax_6 + 8) &= 0xfffffffe
        
        if (sub_142b98f20(arg2, 2, arg4) != 0)
            result_1 = 0x62
            goto label_142bdd0f7
        
        int64_t rax_8 = sub_142b99a90(r12, arg2[0xe].d, 0, arg2[0xd].d, 0, &result_2)
        result_1 = result_2
        arg2[0xf] = rax_8
        
        if (result_1 != 0)
            goto label_142bdd102
        
        void* rax_9 = arg2[0x1e]
        *(rax_9 + 8) |= 1
        rbx = neg.d(arg2[0x12].d) << 6
        rdi = (arg2[0xd].d - *(arg2 + 0x94)) << 6
        
        if (arg4 != 0)
            rbx += *arg4
            rdi += arg4[1]
        
        if (rbx != 0 || rdi != 0)
            sub_142b95270(&arg2[0x13], rbx, rdi)
        
        int64_t rcx_8 = *(arg1 + 0x60)
        int32_t* var_a8 = &arg2[0xd]
        void* var_a0_1 = &arg2[0x13]
        int32_t var_98_1 = 0
        int32_t result_3 = (*(arg1 + 0x68))(rcx_8, &var_a8)
        result_1 = result_3
        result_2 = result_3
        
        if (result_3 != 0)
            goto label_142bdd102
        
        __builtin_strncpy(&arg2[0xc], "stib", 4)
        goto label_142bdd131
    
    result = 0x13
else
    result_1 = 6
label_142bdd0f7:
    result_2 = result_1
label_142bdd102:
    
    if ((*(arg2[0x1e] + 8) & 1) == 0)
        goto label_142bdd131
    
    sub_142b99980(r12, arg2[0xf])
    arg2[0xf] = 0
    void* rax_4 = arg2[0x1e]
    *(rax_4 + 8) &= 0xfffffffe
    result_1 = result_2
label_142bdd131:
    
    if (rbx != 0 || rdi != 0)
        sub_142b95270(&arg2[0x13], neg.d(rbx), neg.d(rdi))
        result_1 = result_2
    
    result = zx.q(result_1)
__security_check_cookie(rax_1 ^ &var_e8)
return result
