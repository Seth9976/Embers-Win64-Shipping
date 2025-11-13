// 函数: sub_1419097b0
// 地址: 0x1419097b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = data_143eff590
bool cond:0 = data_143de5480 == 0
int64_t* var_28 = nullptr
int32_t i_4 = 0
int64_t rdx

if (cond:0)
    rdx = 0
else
    rdx.b = GetCurrentThreadId() != data_143de5470

int64_t* rdx_2 = (rdx << 4) + rbx
int64_t var_18 = 0
int32_t rbx_1 = rdx_2[1].d
int64_t rdi = *rdx_2
int32_t var_10 = rbx_1

if (rbx_1 != 0)
    sub_1405a4c70(&var_18, rbx_1, 0)
    memcpy(var_18, rdi, rbx_1 * 2)
else
    int32_t var_c_1 = 0

sub_140a2ccb0(&var_18, &var_28, U",", 1)
int64_t* rbx_2 = var_28
void* rdi_3 = &rbx_2[sx.q(i_4) * 2]

if (rbx_2 != rdi_3)
    do
        _DeleteExceptionPtr(rbx_2)
        int16_t* rdx_6
        
        if (rbx_2[1].d == 0)
            rdx_6 = &data_142d40450
        else
            rdx_6 = *rbx_2
        
        sub_140a306e0(arg1, rdx_6, &data_142d40450, 1)
        rbx_2 = &rbx_2[2]
    while (rbx_2 != rdi_3)
    
    rbx_2 = var_28

int64_t rcx_5 = var_18

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)
    rbx_2 = var_28

int32_t i_2 = i_4

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_6 = *rbx_2
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        rbx_2 = &rbx_2[2]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rbx_2 = var_28

if (rbx_2 != 0)
    sub_140a74f90(rbx_2)

bool cond:2 = data_143de5480 == 0
int64_t rbx_3 = data_143eff5a8
var_28 = nullptr
int32_t i_5 = 0
int64_t rcx_8

if (cond:2)
    rcx_8 = 0
else
    rcx_8.b = GetCurrentThreadId() != data_143de5470

int64_t* rcx_10 = (rcx_8 << 4) + rbx_3
var_18 = 0
int32_t rbx_4 = rcx_10[1].d
int64_t rdi_4 = *rcx_10
int32_t var_10_1 = rbx_4

if (rbx_4 != 0)
    sub_1405a4c70(&var_18, rbx_4, 0)
    memcpy(var_18, rdi_4, rbx_4 * 2)
else
    int32_t var_c_2 = 0

int32_t result = sub_140a2ccb0(&var_18, &var_28, U",", 1)
int64_t* rbx_5 = var_28
void* rdi_7 = &rbx_5[sx.q(i_5) * 2]

if (rbx_5 != rdi_7)
    do
        _DeleteExceptionPtr(rbx_5)
        int16_t* rdx_10
        
        if (rbx_5[1].d == 0)
            rdx_10 = &data_142d40450
        else
            rdx_10 = *rbx_5
        
        result = sub_140a23cf0(arg1, rdx_10, 1, 0, 0xffffffff)
        
        if (result == 0xffffffff)
            sub_140a20ba0(arg1, &data_142d404d4, result + 2)
            int32_t rax_3 = rbx_5[1].d
            int32_t r8_6 = rax_3 - 1
            
            if (rax_3 == 0)
                r8_6 = 0
            
            result = sub_140a20ba0(arg1, *rbx_5, r8_6)
        
        rbx_5 = &rbx_5[2]
    while (rbx_5 != rdi_7)
    
    rbx_5 = var_28

int64_t rcx_18 = var_18

if (rcx_18 != 0)
    result = sub_140a74f90(rcx_18)
    rbx_5 = var_28

int32_t i_3 = i_5

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_19 = *rbx_5
        
        if (rcx_19 != 0)
            result = sub_140a74f90(rcx_19)
        
        rbx_5 = &rbx_5[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_5 = var_28

if (rbx_5 == 0)
    return result

return sub_140a74f90(rbx_5)
