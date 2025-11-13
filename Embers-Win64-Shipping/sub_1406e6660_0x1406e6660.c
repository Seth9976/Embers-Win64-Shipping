// 函数: sub_1406e6660
// 地址: 0x1406e6660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_60 = nullptr
int32_t i_2 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_60, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_60)

int32_t arg_10 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &arg_10, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_10)

bool cond:0 = arg_10 != 0
int32_t arg_20 = 0
int64_t rsi
rsi.b = cond:0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_5 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_5[4]
    sub_140d30490(arg2, &arg_20, r8_5)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &arg_20)

int64_t rdi
rdi.b = arg_20 != 0
int128_t var_50

if (*(arg2 + 0x20) == 0)
    int64_t* r8_7 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_7[4]
    sub_140d30490(arg2, &var_50, r8_7)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_50)

int32_t var_68 = (zx.o(0)).d

if (*(arg2 + 0x20) == 0)
    int64_t* r8_9 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_9[4]
    sub_140d30490(arg2, &var_68, r8_9)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t rax_6 = *(arg2 + 0x20)
void* rdx_10 = var_60
int64_t rcx_5
rcx_5.b = rax_6 != 0
int128_t var_28 = var_50
int64_t var_40 = 0
*(arg2 + 0x20) = rcx_5 + rax_6
sub_1406e3a80(&var_40, rdx_10, i_2, 0, 0)
int64_t result = sub_1406db2b0(&var_40, rsi.b, zx.q(rdi.b), &var_28, var_68)
int32_t i_1 = i_2

if (i_1 != 0)
    void* rbx_2 = var_60 + 0x60
    int32_t i
    
    do
        *(rbx_2 + 8) = 0
        int64_t rcx_9 = *rbx_2
        
        if (rcx_9 != 0)
            sub_140a74f90(rcx_9)
        
        result = sub_14062ca00(rbx_2 - 0x40, 0)
        int64_t rcx_11 = *(rbx_2 - 0x20)
        
        if (rcx_11 != 0)
            result = sub_140a74f90(rcx_11)
        
        int64_t rcx_12 = *(rbx_2 - 0x40)
        
        if (rcx_12 != 0)
            result = sub_140a74f90(rcx_12)
        
        int64_t rcx_13 = *(rbx_2 - 0x50)
        
        if (rcx_13 != 0)
            result = sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = *(rbx_2 - 0x60)
        
        if (rcx_14 != 0)
            result = sub_140a74f90(rcx_14)
        
        rbx_2 += 0x70
        i = i_1
        i_1 -= 1
    while (i != 1)

void* rcx_15 = var_60

if (rcx_15 == 0)
    return result

return sub_140a74f90(rcx_15)
