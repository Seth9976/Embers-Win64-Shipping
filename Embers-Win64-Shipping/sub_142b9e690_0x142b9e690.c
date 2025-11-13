// 函数: sub_142b9e690
// 地址: 0x142b9e690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp_1 = sx.q(arg2) * 6
int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(sub_142b91560(*arg1, arg1[1]))
int32_t rax_5 = (temp1 - temp0) s>> 1
int32_t rax_10

if (arg1[rbp_1 * 2 + 0x16].b != 0 && arg3 != 0 && rax_5 + 0x59c000 u<= 0xb38000)
    uint32_t rax_6 = sub_142b971b0(rax_5)
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(sub_142b93e80(arg1[0xf], rax_6))
    int32_t rax_9 = temp3_1 ^ temp2_1
    rax_10 = rax_9 - temp2_1
    
    if (rax_9 == temp2_1 || arg1[4] s< rax_10 || arg3 s< rax_10)
        rax_10.b = 0
    else
        rax_10.b = 1

int32_t arg_8
int32_t rax_14

if (arg1[rbp_1 * 2 + 0x16].b == 0 || arg3 == 0 || rax_5 + 0x59c000 u> 0xb38000 || rax_10.b == 0)
    sub_142b97220(&arg_8, arg1[0xf], arg1[1] + 0x5a0000 - arg2 * 0xb40000)
    arg_8 += arg1[2]
    rax_14 = arg1[3]
    arg1[rbp_1 * 2 + 0x16].b = 0
else
    int32_t rbx_2 = *arg1 + rax_5
    int32_t rax_11 = sub_142b91760(rax_5)
    sub_142b97220(&arg_8, sub_142b91790(arg1[0xf], rax_11), rbx_2 + 0x5a0000 - arg2 * 0xb40000)
    arg_8 += arg1[2]
    rax_14 = arg1[3]

arg4 += rax_14
return sub_142b9e3b0(&arg1[0x10 + rbp_1 * 2], &arg_8, 0)
