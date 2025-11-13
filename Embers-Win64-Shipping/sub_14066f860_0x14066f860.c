// 函数: sub_14066f860
// 地址: 0x14066f860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
sub_140d19010(arg1, 
    NewObject with empty name can't be used to create default subobjects (inside of UObject derived "
"class constructor) as it produces incon")
int64_t arg_20 = 0
void* result_1 = sub_140d2dfc0(sub_140680840(), arg1, 0, 0, 0, 0, 0, 0, 0)
int64_t var_48 = 0
void* result = result_1
int64_t var_40 = 0
int64_t var_68
int64_t var_38
int64_t* rax_5
int32_t rbx_2
uint64_t rdi_1
uint64_t var_58

if (arg3 == 0)
    int32_t rbx_3 = arg2[1].d
    rdi_1 = 0
    int64_t r14_1 = *arg2
    var_58 = 0
    int32_t var_50_1 = rbx_3
    
    if (rbx_3 != 0)
        sub_1405a4c70(&var_58, rbx_3, 0)
        rdi_1 = var_58
        memcpy(rdi_1, r14_1, rbx_3 * 2)
    else
        int32_t var_4c_1 = 0
    
    rax_5 = &var_58
    rbx_2 = 4
else
    int64_t* rax_1 = sub_140b25050(&var_38)
    int32_t rcx_2 = arg2[1].d
    int32_t rbx_1 = rcx_2 - 1
    
    if (rcx_2 == 0)
        rbx_1 = 0
    
    int32_t rcx_4
    
    if (rax_1[1].d == 0)
        rcx_4 = 2
    
    if (rax_1[1].d != 0 || rbx_1 == 0xffffffff)
        rcx_4 = 1
    
    var_68 = *rax_1
    *rax_1 = 0
    int32_t rax_3 = rax_1[1].d
    int32_t rax_4 = *(rax_1 + 0xc)
    rax_1[1] = 0
    int32_t rdx_3 = rbx_1 + rcx_4 + rax_3
    
    if (rdx_3 s> rax_4)
        sub_1405947f0(&var_68, rdx_3)
    
    sub_140a2cf70(&var_68, *arg2, rbx_1)
    rdi_1 = var_58
    rax_5 = &var_68
    rbx_2 = 3
int16_t* const rdx_7

if (rax_5[1].d == 0)
    rdx_7 = &data_142d40450
else
    rdx_7 = *rax_5

char rax_6 = sub_140b1f370(&var_48, rdx_7, 0, 0)

if ((rbx_2.b & 4) != 0)
    rbx_2 &= 0xfffffffb
    
    if (rdi_1 != 0)
        sub_140a74f90(rdi_1)

if ((rbx_2.b & 2) != 0)
    int64_t rcx_11 = var_68
    rbx_2 &= 0xfffffffd
    
    if (rcx_11 != 0)
        sub_140a74f90(rcx_11)

if ((rbx_2.b & 1) != 0)
    int64_t rcx_12 = var_38
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)

char rax_7

if (rax_6 != 0)
    rax_7 = sub_14066c4c0(result, &var_48, 1)

if (rax_6 == 0 || rax_7 == 0)
    result = nullptr

int64_t rcx_14 = var_48

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return result
