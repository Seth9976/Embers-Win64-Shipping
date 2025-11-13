// 函数: sub_140cdadd0
// 地址: 0x140cdadd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t arg_8 = 0
void* rax_1 = (*(*arg1 + 0x140))(arg1, arg3)
int16_t* var_68
int16_t* var_58
int16_t* var_38
int64_t result
int16_t* rcx_29

if (not(test_bit(arg5, 0x1c)))
    if (rax_1 == 0)
        return sub_140a20ba0(arg2, u"None", 4)
    
    int64_t* rax_11
    
    if (not(test_bit(arg5, 0x15)))
        if (arg4 != 0 && ((*(arg4 + 8) u>> 4).b & 1) == 0)
            if (sub_140d23cf0(rax_1) == 0)
                goto label_140cdb0e8
            
            int32_t* rcx_22 = &arg_8
            arg_8.q = *(rax_1 + 0x18)
            int32_t var_60
            
            if ((arg5.b & 2) == 0)
                sub_140b63b70(rcx_22, &var_68)
                
                if (var_60 != 0)
                    rdi = var_60 - 1
                
                result = sub_140a20ba0(arg2, var_68, rdi)
                rcx_29 = var_68
            else
                sub_140b63b70(rcx_22, &var_58)
                int64_t* rax_16 = sub_140a30a20(&var_58, &var_38)
                int16_t* const r14_3
                
                if (rax_16[1].d == 0)
                    r14_3 = &data_142d40450
                else
                    r14_3 = *rax_16
                
                sub_140a2e390(&var_68, u""%s"", r14_3)
                
                if (var_60 != 0)
                    rdi = var_60 - 1
                
                result = sub_140a20ba0(arg2, var_68, rdi)
                int16_t* rcx_26 = var_68
                
                if (rcx_26 != 0)
                    result = sub_140a74f90(rcx_26)
                
                int16_t* rcx_27 = var_38
                
                if (rcx_27 != 0)
                    result = sub_140a74f90(rcx_27)
                
                rcx_29 = var_58
            goto label_140cdb109
        
    label_140cdb0e8:
        rax_11 = sub_140cdd250(&var_38, rax_1, arg4, arg6, arg5.b)
    else
        rax_11 = sub_140d21830(rax_1, &var_38, 0, 0)
    
    int32_t rcx_31 = rax_11[1].d
    int32_t r8_7 = rcx_31 - 1
    
    if (rcx_31 == 0)
        r8_7 = 0
    
    result = sub_140a20ba0(arg2, *rax_11, r8_7)
    goto label_140cdb105

arg_8.q = *(arg1[0xf] + 0x18)
int16_t* var_78
sub_140b63b70(&arg_8, &var_78)
int64_t* rcx_2 = arg1[0xf]
sub_140a2e390(&var_58, u"%s%s*", (*(*rcx_2 + 0x2c0))(rcx_2))
int16_t* rcx_4 = var_58

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int16_t* rcx_5 = var_78

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t var_48
int16_t** rdx_6
int32_t rbx_3
int16_t* rsi_1

if (rax_1 == 0)
    var_78 = nullptr
    int32_t var_70
    var_70.q = 0
    sub_1405947f0(&var_78, 8)
    int32_t var_70_1 = var_70 + 8
    int32_t var_6c
    
    if (var_70 + 8 s> var_6c)
        sub_140594770(&var_78)
    
    rsi_1 = var_78
    rbx_3 = 0x10
    UnDecorator::getReferenceType(rsi_1, u"nullptr", 0x10)
    rdx_6 = &var_78
else
    int64_t* rax_5 = sub_140a30480(sub_140d21e10(rax_1, &var_38, 0), &var_48, nullptr)
    int16_t* const rbx_2
    
    if (rax_5[1].d == 0)
        rbx_2 = &data_142d40450
    else
        rbx_2 = *rax_5
    
    arg_8.q = *(arg1[0xf] + 0x18)
    sub_140b63b70(&arg_8, &var_68)
    int64_t* rcx_10 = arg1[0xf]
    int32_t var_88
    var_88.q = rbx_2
    sub_140a2e390(&var_58, u"LoadObject<%s%s>(nullptr, TEXT("%s"))", (*(*rcx_10 + 0x2c0))(rcx_10))
    rsi_1 = var_78
    rdx_6 = &var_58
    rbx_3 = 0xf

int32_t rax_10 = rdx_6[1].d
int32_t r8_2 = rax_10 - 1

if (rax_10 == 0)
    r8_2 = 0

result = sub_140a20ba0(arg2, *rdx_6, r8_2)

if ((rbx_3.b & 0x10) != 0)
    rbx_3 &= 0xffffffef
    
    if (rsi_1 != 0)
        result = sub_140a74f90(rsi_1)

if ((rbx_3.b & 8) != 0)
    int16_t* rcx_17 = var_58
    rbx_3 &= 0xfffffff7
    
    if (rcx_17 != 0)
        result = sub_140a74f90(rcx_17)

if ((rbx_3.b & 4) != 0)
    int16_t* rcx_18 = var_68
    rbx_3 &= 0xfffffffb
    
    if (rcx_18 != 0)
        result = sub_140a74f90(rcx_18)

if ((rbx_3.b & 2) != 0)
    int64_t rcx_19 = var_48
    rbx_3 &= 0xfffffffd
    
    if (rcx_19 != 0)
        result = sub_140a74f90(rcx_19)

if ((rbx_3.b & 1) != 0)
label_140cdb105:
    rcx_29 = var_38
label_140cdb109:
    
    if (rcx_29 != 0)
        return sub_140a74f90(rcx_29)

return result
