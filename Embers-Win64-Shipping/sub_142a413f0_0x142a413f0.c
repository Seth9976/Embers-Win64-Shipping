// 函数: sub_142a413f0
// 地址: 0x142a413f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r12 = arg5
int64_t* r15 = &arg5
arg5.b = 0

if (arg4 != 0)
    r15 = arg4

int64_t rbx = arg1
*arg6 = -1
*r12 = 0

if (arg1 u> 0x4000000 || arg2 u> 0x400000)
    *r12 = 1
    
    if (rbx u<= -1 - sub_142a42370())
        int64_t rax_13 = sub_142a42370()
        int64_t r9_3 = rax_13 - 1 + rbx
        
        if ((rax_13 & (rax_13 - 1)) != 0)
            rbx = r9_3 - modu.dp.q(0:r9_3, rax_13)
        else
            rbx = not.q(rax_13 - 1) & r9_3
    
    return sub_142a41e20(rbx, arg2, *arg3, r15, arg7)

int64_t rax_1 = sub_142a42390()
int64_t r8 = rax_1 - 1 + rbx
int64_t rdi_2

if ((rax_1 & (rax_1 - 1)) != 0)
    rdi_2 = r8 - modu.dp.q(0:r8, rax_1)
else
    rdi_2 = not.q(rax_1 - 1) & r8

int64_t result_3 = data_144015380
int64_t result = 0
uint64_t r13_1 = (rdi_2 + 0x3fffff) u>> 0x16
int64_t rsi_1 = 0
int64_t result_1 = 0
int64_t result_2 = *arg7

if (result_3 == 0)
label_142a41531:
    result_2 = result_3
    
    if (result_3 u>= data_144015380 + 8)
    label_142a415b6:
        sub_142a43740("unable to allocate from region: size %zu\n", rdi_2)
        *r12 = 1
        return sub_142a41e20(rdi_2, arg2, arg3 != 0, r15, arg7)
    
    while (true)
        if (result_2 u>= 0x400)
            goto label_142a415b6
        
        if (sub_142a41bd0(result_2, r13_1, rdi_2, arg3, r15, r12, &result_1, arg6, arg7) == 0)
            return 0
        
        result = result_1
        
        if (result != 0)
            break
        
        result_2 += 1
        
        if (result_2 u>= data_144015380 + 8)
            goto label_142a415b6
else
    while (true)
        if (result_2 u>= result_3)
            result_2 = result
        
        if (sub_142a41bd0(result_2, r13_1, rdi_2, arg3, r15, r12, &result_1, arg6, arg7) == 0)
            return 0
        
        result = result_1
        
        if (result != 0)
            break
        
        rsi_1 += 1
        result_2 += 1
        
        if (rsi_1 u>= result_3)
            goto label_142a41531

*arg7 = result_2
return result
