// 函数: sub_1406e6b50
// 地址: 0x1406e6b50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_68 = 0
int32_t var_60 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_68, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_68)

int64_t var_78 = 0
int32_t var_70 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_3 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_3[4]
    sub_140d30490(arg2, &var_78, r8_3)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_78)

int64_t rax_3 = *(arg2 + 0x20)
int64_t rdi = var_78
int64_t var_58 = 0
int64_t rcx_2
rcx_2.b = rax_3 != 0
*(arg2 + 0x20) = rcx_2 + rax_3
int32_t var_50 = var_70

if (var_70 != 0)
    sub_1405a4c70(&var_58, var_70, 0)
    memcpy(var_58, rdi, var_70 * 2)
else
    int32_t var_4c_1 = 0

int64_t rdi_1 = var_68
int16_t* var_48 = nullptr
int32_t var_40 = var_60

if (var_60 != 0)
    sub_1405a4c70(&var_48, var_60, 0)
    memcpy(var_48, rdi_1, var_60 * 2)
else
    int32_t var_3c_1 = 0

void var_38
int64_t* rax_4 = sub_1406dc360(&var_38, &var_48, &var_58)

if (arg3 != rax_4)
    void* rdi_2 = *arg3
    int32_t i_1 = arg3[1].d
    
    if (i_1 != 0)
        void* rbx_3 = rdi_2 + 0x60
        int32_t i
        
        do
            *(rbx_3 + 8) = 0
            int64_t rcx_9 = *rbx_3
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            sub_14062ca00(rbx_3 - 0x40, 0)
            int64_t rcx_11 = *(rbx_3 - 0x20)
            
            if (rcx_11 != 0)
                sub_140a74f90(rcx_11)
            
            int64_t rcx_12 = *(rbx_3 - 0x40)
            
            if (rcx_12 != 0)
                sub_140a74f90(rcx_12)
            
            int64_t rcx_13 = *(rbx_3 - 0x50)
            
            if (rcx_13 != 0)
                sub_140a74f90(rcx_13)
            
            int64_t rcx_14 = *rdi_2
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            rdi_2 += 0x70
            rbx_3 += 0x70
            i = i_1
            i_1 -= 1
        while (i != 1)
    
    sub_1406e3a80(arg3, *rax_4, rax_4[1].d, *(arg3 + 0xc), 0)

int64_t result = sub_1406da1e0(&var_38)
int64_t rcx_17 = var_78

if (rcx_17 != 0)
    result = sub_140a74f90(rcx_17)

int64_t rcx_18 = var_68

if (rcx_18 == 0)
    return result

return sub_140a74f90(rcx_18)
