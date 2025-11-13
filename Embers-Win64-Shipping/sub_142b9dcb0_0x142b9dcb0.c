// 函数: sub_142b9dcb0
// 地址: 0x142b9dcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9_1 = arg1[4] - arg1[6]
int32_t r8_1 = arg1[5] - arg1[7]
int32_t rbx_1 = arg1[2] - arg1[4]
int32_t rbp_1 = arg1[3] - arg1[5]
int32_t r15_1 = *arg1 - arg1[2]
int32_t r13_1 = arg1[1] - arg1[3]
int32_t rcx = 1
int32_t r10

if (r9_1 + 1 u> 2 || r8_1 + 1 u> 2)
    r10 = 0
else
    r10 = 1

int32_t rdx

if (rbx_1 + 1 u> 2 || rbp_1 + 1 u> 2)
    rdx = 0
else
    rdx = 1

if (r15_1 + 1 u> 2 || r13_1 + 1 u> 2)
    rcx = 0

if (r10 == 0)
    if (rdx == 0)
        if (rcx == 0)
            *arg2 = sub_142b915d0(r9_1, r8_1)
            *arg3 = sub_142b915d0(rbx_1, rbp_1)
            *arg4 = sub_142b915d0(r15_1, r13_1)
        else
            *arg2 = sub_142b915d0(r9_1, r8_1)
            int32_t rax_18 = sub_142b915d0(rbx_1, rbp_1)
            *arg4 = rax_18
            *arg3 = rax_18
    else if (rcx == 0)
        *arg2 = sub_142b915d0(r9_1, r8_1)
        int32_t rax_11 = sub_142b915d0(r15_1, r13_1)
        *arg4 = rax_11
        int32_t rbx_2 = *arg2
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(sub_142b91560(rbx_2, rax_11))
        *arg3 = ((temp1_1 - temp0_1) s>> 1) + rbx_2
    else
        int32_t rax_9 = sub_142b915d0(r9_1, r8_1)
        *arg4 = rax_9
        *arg3 = rax_9
        *arg2 = rax_9
else if (rdx == 0)
    if (rcx == 0)
        int32_t rax_8 = sub_142b915d0(rbx_1, rbp_1)
        *arg3 = rax_8
        *arg2 = rax_8
        *arg4 = sub_142b915d0(r15_1, r13_1)
    else
        int32_t rax_7 = sub_142b915d0(rbx_1, rbp_1)
        *arg4 = rax_7
        *arg3 = rax_7
        *arg2 = rax_7
else if (rcx == 0)
    int32_t rax_6 = sub_142b915d0(r15_1, r13_1)
    *arg4 = rax_6
    *arg3 = rax_6
    *arg2 = rax_6

int32_t rax_22 = sub_142b91560(*arg2, *arg3)
int32_t rax_23 = sub_142b91560(*arg3, *arg4)
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(rax_22)
int32_t temp4_1
int32_t temp5_1

if ((temp3 ^ temp2) - temp2 s< 0x168000)
    temp4_1:temp5_1 = sx.q(rax_23)

int32_t result

if ((temp3 ^ temp2) - temp2 s>= 0x168000 || (temp5_1 ^ temp4_1) - temp4_1 s>= 0x168000)
    result.b = 0
else
    result.b = 1

return result
