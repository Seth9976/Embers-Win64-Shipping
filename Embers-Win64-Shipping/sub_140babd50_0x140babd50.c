// 函数: sub_140babd50
// 地址: 0x140babd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38
sub_140bb20e0(&var_38, arg3)

if (sub_140a237d0(&var_38, &data_142d5a024, 0) == 0)
    sub_140a20ba0(&var_38, &data_142d5a024, 1)

int64_t var_28
sub_140596d10(&var_28, arg2)
int32_t rdi = 0
int64_t rsi = var_38
int64_t var_18 = 0
int32_t var_30
int32_t var_10 = var_30

if (var_30 != 0)
    sub_1405a4c70(&var_18, var_30, 0)
    memcpy(var_18, rsi, var_30 * 2)
else
    int32_t var_c_1 = 0

EnterCriticalSection(&data_143e1a450)
int64_t rsi_1 = sx.q(*(arg1 + 0x138))
int32_t rax_1 = (rsi_1 + 1).d
*(arg1 + 0x138) = rax_1

if (rax_1 s> *(arg1 + 0x13c))
    sub_1405c4e40(arg1 + 0x130)

int64_t rdx_5 = *(arg1 + 0x130)
memmove(rdx_5 + 0x20, rdx_5, (rsi_1 << 5).d)
int64_t* rbx_2 = *(arg1 + 0x130)
sub_140596d10(rbx_2, &var_28)
sub_140596d10(&rbx_2[2], &var_18)
int64_t rsi_2 = sx.q(*(arg1 + 0x148))
int32_t rax_2 = (rsi_2 + 1).d
*(arg1 + 0x148) = rax_2

if (rax_2 s> *(arg1 + 0x14c))
    sub_1405c4e40(arg1 + 0x140)

int64_t rdx_9 = *(arg1 + 0x140)
memmove(rdx_9 + 0x20, rdx_9, (rsi_2 << 5).d)
int64_t* rbx_4 = *(arg1 + 0x140)
sub_140596d10(rbx_4, &var_28)
sub_140596d10(&rbx_4[2], &var_18)
int64_t rsi_3 = sx.q(*(arg1 + 0x68))
int32_t rax_3 = (rsi_3 + 1).d
*(arg1 + 0x68) = rax_3

if (rax_3 s> *(arg1 + 0x6c))
    sub_1405a4f90(arg1 + 0x60)

sub_140596d10((rsi_3 << 4) + *(arg1 + 0x60), arg2)
LeaveCriticalSection(&data_143e1a450)
void* rbp
rbp.b = 0
int32_t rdx_14 = data_1439a9668
int32_t rcx_19 = data_1439a9674 + 1
data_1439a9674 = rcx_19
uint64_t result = zx.q(rdx_14 - 1)
int64_t rsi_4 = sx.q(result.d)

if (result.d s>= 0)
    int64_t rbx_6 = rsi_4 << 4
    int64_t temp0_1
    
    do
        result = data_1439a9660
        
        if (*(rbx_6 + result + 8) == 0)
            rbp.b = 1
        else
            int64_t* rcx_20 = *(rbx_6 + result)
            
            if (rcx_20 == 0)
                rbp.b = 1
            else
                result = (*(*rcx_20 + 0x50))(rcx_20, arg2, &var_38)
                
                if (result.b == 0)
                    rbp.b = 1
        
        rbx_6 -= 0x10
        temp0_1 = rsi_4
        rsi_4 -= 1
    while (temp0_1 - 1 s>= 0)
    rcx_19 = data_1439a9674
    rdx_14 = data_1439a9668

data_1439a9674 = rcx_19 - 1

if (rbp.b != 0 && rcx_19 - 1 s<= 0)
    int32_t rsi_5 = rdx_14
    
    if (rdx_14 s> 0)
        int64_t* rbx_7 = nullptr
        
        do
            int64_t rax_5 = data_1439a9660
            
            if (*(rbx_7 + rax_5 + 8) == 0)
                sub_1405a4880(&data_1439a9660, rdi, 1, 1)
            else
                int64_t* rcx_22 = *(rbx_7 + rax_5)
                
                if (rcx_22 == 0)
                    sub_1405a4880(&data_1439a9660, rdi, 1, 1)
                else if ((*(*rcx_22 + 0x20))(rcx_22) != 0)
                    sub_1405a4880(&data_1439a9660, rdi, 1, 1)
                else
                    rdi += 1
                    rbx_7 = &rbx_7[2]
            
            rdx_14 = data_1439a9668
        while (rdi s< rdx_14)
    
    result = zx.q(rdx_14 * 2)
    
    if (result.d s<= 2)
        result = 2
    
    data_1439a9670 = result.d
    
    if (rsi_5 s> result.d && data_1439a966c != rdx_14)
        result = sub_1405a5410(&data_1439a9660, rdx_14)

int64_t rcx_23 = var_18

if (rcx_23 != 0)
    result = sub_140a74f90(rcx_23)

int64_t rcx_24 = var_28

if (rcx_24 != 0)
    result = sub_140a74f90(rcx_24)

int64_t rcx_25 = var_38

if (rcx_25 == 0)
    return result

return sub_140a74f90(rcx_25)
