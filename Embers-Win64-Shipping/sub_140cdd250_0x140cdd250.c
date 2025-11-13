// 函数: sub_140cdd250
// 地址: 0x140cdd250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const rbx = arg4

if ((arg5 & 8) == 0)
label_140cdd2d0:
    rbx = nullptr
    
    if ((arg5.d & 0x2000) != 0 && arg3 != 0)
        rbx = sub_140d21d80(arg3)
else
    if (rbx == 0)
        if (arg3 != 0)
            rbx = sub_140d21d80(arg3)
        
        if (rbx == 0)
            goto label_140cdd2b8
        
        goto label_140cdd297
    
label_140cdd297:
    
    if (sub_140d23d40(arg2, rbx) == 0)
        rbx = *(rbx + 0x20)
        
        if (rbx == 0)
            goto label_140cdd2d0
        
        if (sub_140d23d40(arg2, rbx) == 0)
            goto label_140cdd2d0
    
label_140cdd2b8:
    
    if (arg3 != 0 && sub_140d23d40(arg2, arg3) != 0)
        rbx = arg3

int16_t* var_48
sub_140d21e10(arg2, &var_48, rbx)
int16_t* const rdi_1 = &data_142d40450
int16_t* var_38
int32_t var_30

if ((arg5 & 2) != 0)
    int64_t var_28
    int64_t* rax_6 = sub_140a30a20(&var_48, &var_28)
    int16_t* const r8_1
    
    if (rax_6[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_6
    
    sub_140a2e390(&var_38, u""%s"", r8_1)
    int16_t* rcx_8 = var_48
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    int64_t rcx_9 = var_28
    var_48 = var_38
    int32_t var_40 = var_30
    int32_t var_2c
    int32_t var_3c_1 = var_2c
    var_30.q = 0
    var_38 = nullptr
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

int64_t arg_8 = *(*(arg2 + 0x10) + 0x18)
sub_140b63b70(&arg_8, &var_38)

if (var_30 != 0)
    rdi_1 = var_38

sub_140a2e390(arg1, u"%s'%s'", rdi_1)
int16_t* rcx_13 = var_38

if (rcx_13 != 0)
    sub_140a74f90(rcx_13)

int16_t* rcx_14 = var_48

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

return arg1
