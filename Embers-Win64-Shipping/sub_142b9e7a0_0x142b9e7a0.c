// 函数: sub_142b9e7a0
// 地址: 0x142b9e7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r15 = arg1[0xc]
void* r14_1 = &arg1[0x10 + sx.q(arg2) * 0xc]

if (r15 == 0)
    return sub_142b9e470(arg1, arg2) __tailcall

int32_t arg_20 = arg1[0xf]
int32_t r13 = 0
int32_t r12 = 0
int32_t rdi = 0
int32_t rcx_1 = 0
uint32_t rax_3
rax_3.b = r15 == 1
char arg_10 = rax_3.b

if (r15 == 1)
    goto label_142b9e87f

int32_t rax_4 = sub_142b91560(*arg1, arg1[1])
rdi = *arg1

if (rax_4 != 0xb40000)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rax_4)
    int32_t rax_7 = (temp1_1 - temp0_1) s>> 1
    r12 = rax_7
    rdi = rdi + 0x5a0000 - arg2 * 0xb40000 + rax_7
else
    r12 = 0x5a0000 - arg2 * 0xb40000

int32_t rax_8 = sub_142b91760(r12)
int32_t rcx_4 = arg1[0xe]
int32_t arg_8 = rax_8
int32_t rax_9 = sub_142b93e80(rcx_4, rax_8)
r13 = rax_9

if (rax_9 s< 0x10000)
    if (r15 != 2)
        goto label_142b9e89b
    
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r12)
    
    if ((temp5_1 ^ temp4_1) - temp4_1 s> 0x39)
        goto label_142b9e887
    
    goto label_142b9e878

label_142b9e878:
rax_3 = zx.d(arg_10)
rcx_1 = arg_8
label_142b9e87f:
int32_t result
int32_t rdx_14

if (rax_3.b == 0)
    sub_142b97220(&arg_8, sub_142b91790(arg1[0xf], rcx_1), rdi)
    arg_8 += arg1[2]
    arg4 += arg1[3]
    result = sub_142b9e3b0(r14_1, &arg_8, 0)
    
    if (result == 0 && arg3 == result)
        rdx_14 = arg1[0xf]
    label_142b9e9b5:
        sub_142b97220(&arg_8, rdx_14, arg1[1] + 0x5a0000 - arg2 * 0xb40000)
        arg_8 += arg1[2]
        arg4 += arg1[3]
        return sub_142b9e3b0(r14_1, &arg_8, 0)
else
label_142b9e887:
    
    if (r15 != 2)
    label_142b9e89b:
        sub_142b97220(&arg_8, arg_20, arg1[1] + 0x5a0000 - arg2 * 0xb40000)
        arg_8 += arg1[2]
        int32_t rax_15 = arg1[3]
        *(r14_1 + 0x18) = 0
        arg4 += rax_15
        return sub_142b9e3b0(r14_1, &arg_8, 0)
    
    int32_t r15_1 = arg_20
    sub_142b97220(&arg_20, sub_142b93e80(r15_1, arg1[0xe]), rdi)
    arg_20 += arg1[2]
    arg5 += arg1[3]
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(sub_142b964b0(r12))
    uint32_t rax_23 = sub_142b93dd0(r15_1, 0x10000 - r13, (temp3_1 ^ temp2_1) - temp2_1)
    sub_142b97220(&arg_8, rax_23, 0x5a0000 - arg2 * 0xb40000 + rdi)
    arg_8 += arg_20
    arg4 += arg5
    result = sub_142b9e3b0(r14_1, &arg_8, 0)
    
    if (result == 0)
        sub_142b97220(&arg_8, rax_23, rdi - (0x5a0000 - arg2 * 0xb40000))
        arg_8 += arg_20
        arg4 += arg5
        result = sub_142b9e3b0(r14_1, &arg_8, 0)
        
        if (result == 0 && arg3 == result)
            rdx_14 = r15_1
            goto label_142b9e9b5
return result
