// 函数: sub_1424d7210
// 地址: 0x1424d7210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &arg_10, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_18 = 0
int64_t r14
r14.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_18, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_18)

bool cond:1 = arg_18 != 0
int32_t arg_20 = 0
int64_t rbp
rbp.b = cond:1

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

bool cond:2 = arg_20 != 0
int32_t var_48 = 0
int64_t rdi
rdi.b = cond:2

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_48, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_48)

int64_t rax_5 = *(arg2 + 0x20)
bool cond:3 = var_48 != 0
int64_t rcx_4
rcx_4.b = rax_5 != 0
*(arg2 + 0x20) = rcx_4 + rax_5
int64_t* var_40
int64_t* result = sub_1420c3d10(&var_40, r14.b, rbp.b, rdi.b, cond:3)
int64_t* result_1 = result

if (arg3 != result)
    int32_t i_2 = arg3[1].d
    int64_t* rbx_1 = *arg3
    
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_7 = *rbx_1
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rbx_1 = &rbx_1[2]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rbx_1 = *arg3
    
    if (rbx_1 != 0)
        sub_140a74f90(rbx_1)
    
    *arg3 = *result_1
    *result_1 = 0
    arg3[1].d = result_1[1].d
    result = zx.q(*(result_1 + 0xc))
    *(arg3 + 0xc) = result.d
    result_1[1] = 0

int32_t i_4
int32_t i_3 = i_4
int64_t* rbx_2 = var_40

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_9 = *rbx_2
        
        if (rcx_9 != 0)
            result = sub_140a74f90(rcx_9)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_40

if (rbx_2 == 0)
    return result

return sub_140a74f90(rbx_2)
