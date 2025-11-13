// 函数: sub_142a8cbd0
// 地址: 0x142a8cbd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_88 = -2
void var_a8
int64_t rax_1 = __security_cookie ^ &var_a8
uint64_t rbx = zx.q(arg3)
int64_t* result

if (*arg4 s> 0)
    result = arg1
else if (rbx.d s< 0xffffffff || (arg2 == 0 && rbx.d != 0))
    *arg4 = 1
    result = arg1
else
    int32_t temp0_1 = rbx.d
    bool cond:0_1 = temp0_1 s<= 0
    
    if (temp0_1 s< 0)
        rbx = -1
        
        do
            rbx += 1
        while (*(arg2 + rbx) != 0)
        
        cond:0_1 = rbx.d s<= 0
    
    if (cond:0_1)
        result = arg1
    else
        int64_t rdx = *arg1
        int64_t rcx = sx.q(arg1[7].d)
        
        if (arg2 == rcx + rdx)
            if (rbx.d s< arg1[1].d - rcx.d)
                int32_t rax_5 = (rcx + rbx).d
                arg1[7].d = rax_5
                *(sx.q(rax_5) + rdx) = 0
            else
                *arg4 = 5
            
            result = arg1
        else if (rdx u> arg2 || arg2 u>= rcx + rdx || rbx.d s< arg1[1].d - rcx.d)
            if (sub_142a8ce60(arg1, (rcx + 1).d + rbx.d, 0, arg4) != 0)
                memcpy(sx.q(arg1[7].d) + *arg1, arg2, rbx.d)
                arg1[7].d += rbx.d
                *(sx.q(arg1[7].d) + *arg1) = 0
            
            result = arg1
        else
            int16_t var_6c
            void* var_78 = &var_6c:1
            int32_t var_70_1 = 0x28
            var_6c = 0
            int32_t var_40_1 = 0
            sub_142a8cbd0(&var_78, arg2, zx.q(rbx.d))
            int64_t* result_1 = sub_142a8cbd0(arg1, var_78, zx.q(var_40_1), arg4, var_88)
            
            if (var_6c.b != 0)
                sub_142a7dcd0(var_78)
            
            result = result_1

__security_check_cookie(rax_1 ^ &var_a8)
return result
