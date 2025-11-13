// 函数: sub_140d19090
// 地址: 0x140d19090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t arg_10 = arg2
char rbx = 0
int32_t arg_8 = 0

if (*(arg1 + 0x12) != 0)
    return 

void* rcx = *arg1
int16_t* const rsi_1 = &data_142d40450
int64_t var_18
int16_t* const rdi_1

if (rcx == 0)
    rdi_1 = u"NULL"
else
    int64_t* rax_1 = sub_140d21830(rcx, &var_18, 0, 0)
    
    if (rax_1[1].d == 0)
        rdi_1 = &data_142d40450
        rbx = 1
    else
        rdi_1 = *rax_1
        rbx = 1

int64_t var_28
int16_t** rax_2 = sub_140b5e690(&arg_10, &var_28)

if (rax_2[1].d != 0)
    rsi_1 = *rax_2

int16_t* const var_38_1 = rsi_1
sub_140af98a0("Unknown", 0xc2a, 
    %s.%s: Subobject class setup is only allowed in base class constructor call (in the initialization "
"list)", rdi_1)
int64_t rcx_2 = var_28

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

if ((rbx & 1) != 0)
    int64_t rcx_3 = var_18
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

sub_140afbb40()
