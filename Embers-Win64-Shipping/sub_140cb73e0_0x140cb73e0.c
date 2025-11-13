// 函数: sub_140cb73e0
// 地址: 0x140cb73e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12 = sx.q(arg2)
int64_t r15_1 = r12 << 7
int32_t* rdi_1 = *(arg1 + 0x18) + r15_1
int16_t* const rbx = &data_142d40450
int16_t* var_58
int32_t var_50
int64_t var_48
int64_t var_38
int64_t arg_8
void arg_18

if (sub_140d23de0(*(rdi_1 + 0x40)) == 0)
    int64_t* rax_1 = sub_140b63b70(rdi_1, &var_38)
    int16_t* const rsi_1
    
    if (rax_1[1].d == 0)
        rsi_1 = &data_142d40450
    else
        rsi_1 = *rax_1
    
    arg_8 = *(*(arg1 + 0xa0) + 0x18)
    sub_140b63b70(&arg_8, &var_58)
    int16_t* const r14_1 = &data_142d40450
    
    if (var_50 != 0)
        r14_1 = var_58
    
    int64_t* rax_4 = sub_140b63b70(sub_140cbb7c0(arg1, &arg_18, r12.d), &var_48)
    int16_t* const r9_1
    
    if (rax_4[1].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *rax_4
    
    int16_t* const var_60_1 = rsi_1
    int16_t* const var_68_1 = r14_1
    sub_140af98a0("Unknown", 0x12ff, u"Linker object %s %s.%s is invalid", r9_1)
    int64_t rcx_6 = var_48
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    int16_t* rcx_7 = var_58
    
    if (rcx_7 != 0)
        sub_140a74f90(rcx_7)
    
    int64_t rcx_8 = var_38
    
    if (rcx_8 != 0)
        sub_140a74f90(rcx_8)
    
    sub_140afbb40()

int64_t rax_5 = sub_140d3cb50(*(rdi_1 + 0x40))
int64_t r9_2 = rax_5

if (rax_5 != 0)
    rax_5.b = 0
else
    rax_5 = *(rdi_1 + 0x40)
    int32_t r8_2 = *(rax_5 + 8)
    
    if (((r8_2 u>> 0x1a).b & 1) != 0
            || (((*(*(rax_5 + 0x10) + 8) u>> 0x1a).b & 1) != 0 && ((r8_2 u>> 4).b & 1) != 0))
        rax_5.b = 1
    else
        rax_5.b = 0

if (r9_2 != arg1 && rax_5.b == 0)
    int64_t* rax_6 = sub_140b63b70(rdi_1, &var_48)
    int16_t* const rsi_2
    
    if (rax_6[1].d == 0)
        rsi_2 = &data_142d40450
    else
        rsi_2 = *rax_6
    
    arg_8 = *(*(arg1 + 0xa0) + 0x18)
    sub_140b63b70(&arg_8, &var_58)
    int16_t* r14_2 = &data_142d40450
    
    if (var_50 != 0)
        r14_2 = var_58
    
    int16_t** rax_9 = sub_140b63b70(sub_140cbb7c0(arg1, &arg_18, r12.d), &var_38)
    
    if (rax_9[1].d != 0)
        rbx = *rax_9
    
    int16_t* const var_60_2 = rsi_2
    int16_t* var_68_2 = r14_2
    sub_140af98a0("Unknown", 0x130f, u"Linker object %s %s.%s mislinked!", rbx)
    int64_t rcx_18 = var_38
    
    if (rcx_18 != 0)
        sub_140a74f90(rcx_18)
    
    int16_t* rcx_19 = var_58
    
    if (rcx_19 != 0)
        sub_140a74f90(rcx_19)
    
    int64_t rcx_20 = var_48
    
    if (rcx_20 != 0)
        sub_140a74f90(rcx_20)
    
    sub_140afbb40()

sub_140d3cbe0(*(rdi_1 + 0x40))
return sub_140d3e8d0(*(*(arg1 + 0x18) + r15_1 + 0x40), nullptr, 0xffffffff, 1) __tailcall
