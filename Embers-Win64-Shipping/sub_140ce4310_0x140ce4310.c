// 函数: sub_140ce4310
// 地址: 0x140ce4310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char arg_20 = arg4.b
int16_t* const rbx = &data_142d40450
char r12 = arg4.b
char var_88
void* var_68
int16_t* var_58
int32_t var_50
int16_t* var_48
uint64_t result_1
uint64_t result

if (arg3 != 0)
    void* r8 = *(*(arg1 + 0x10) + 0xd8)
    void* rax_1 = *(arg3 + 0x10)
    int64_t rcx = sx.q(*(r8 + 0x38))
    
    if ((rcx.d s> *(rax_1 + 0x38) || *(*(rax_1 + 0x30) + (rcx << 3)) != r8 + 0x30)
            && ((*(arg1 + 8) u>> 4).b & 1) == 0)
        result_1 = *(r8 + 0x18)
        sub_140b63b70(&result_1, &var_58)
        int16_t* const r14_1 = &data_142d40450
        
        if (var_50 != 0)
            r14_1 = var_58
        
        int64_t* rax_4 = sub_140d21830(arg3, &var_68, 0, 0)
        int16_t* const rdi_1
        
        if (rax_4[1].d == 0)
            rdi_1 = &data_142d40450
        else
            rdi_1 = *rax_4
        
        int64_t* rax_5 = sub_140d21830(arg1, &var_48, 0, 0)
        int16_t* const r9
        
        if (rax_5[1].d == 0)
            r9 = &data_142d40450
        else
            r9 = *rax_5
        
        int32_t var_80
        var_80.q = r14_1
        var_88.q = rdi_1
        sub_140af98a0("Unknown", 0xad, Cannot rename %s into Outer %s as it is not of type %s", r9)
        int16_t* rcx_4 = var_48
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        void* rcx_5 = var_68
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        int16_t* rcx_6 = var_58
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        result, arg4 = sub_140afbb40()

void* r14_2 = arg3
int64_t rdi_2 = -1

if ((r12 & 0x40) != 0)
    r14_2 = -ffffffffffffffff

var_68 = r14_2

if (arg2 == 0)
    goto label_140ce455a

void* rdx_4 = r14_2

if (r14_2 == 0)
    rdx_4 = *(arg1 + 0x20)

arg4.b = 1
result = sub_140d2ee50(nullptr, rdx_4, arg2, arg4)
result_1 = result

if (result != arg1)
    if (result == 0)
        goto label_140ce455a
    
    if ((r12 & 2) == 0)
        int64_t* rax_8 = sub_140d21830(result, &var_58, 0, 0)
        int16_t* const rdi_6
        
        if (rax_8[1].d == 0)
            rdi_6 = &data_142d40450
        else
            rdi_6 = *rax_8
        
        int64_t* rax_9 = sub_140d21830(arg1, &var_48, 0, 0)
        
        if (rax_9[1].d != 0)
            rbx = *rax_9
        
        var_88.q = rdi_6
        sub_140af98a0("Unknown", 0xcc, 
            Renaming an object (%s) on top of an existing object (%s) is not allowed", rbx)
        int16_t* rcx_17 = var_48
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        int16_t* rcx_18 = var_58
        
        if (rcx_18 != 0)
            sub_140a74f90(rcx_18)
        
        sub_140afbb40()
        goto label_140ce455a
    
    result.b = 0
else
    int16_t* r12_1 = nullptr
    int32_t r14_3 = 0
    int32_t rcx_7 = 0
    var_58 = nullptr
    var_50.q = 0
    
    if (*arg2 != 0)
        do
            rdi_2 += 1
        while (arg2[rdi_2] != 0)
        
        if (rdi_2.d + 1 s> 0)
            sub_1405947f0(&var_58, rdi_2.d + 1)
            int32_t var_4c
            rcx_7 = var_4c
            r14_3 = var_50
            r12_1 = var_58
        
        r14_3 += rdi_2.d + 1
        
        if (r14_3 s> rcx_7)
            sub_140594770(&var_58)
            r12_1 = var_58
        
        UnDecorator::getReferenceType(r12_1, arg2, (rdi_2.d + 1) * 2)
        result = result_1
    
    result_1 = *(result + 0x18)
    sub_140b63b70(&result_1, &var_48)
    int16_t* rcx_12 = var_48
    int16_t* rdx_9 = &data_142d40450
    
    if (r14_3 != 0)
        rdx_9 = r12_1
    
    int32_t var_40
    
    if (var_40 != 0)
        rbx = rcx_12
    
    int64_t rdx_10 = rdx_9 - rbx
    uint32_t rdi_4
    
    do
        rdi_4 = zx.d(*rbx)
        result = zx.q(*(rbx + rdx_10))
        
        if (rdi_4 != result.d)
            break
        
        rbx = &rbx[1]
    while (result.d != 0)
    
    if (rcx_12 != 0)
        sub_140a74f90(rcx_12)
    
    if (r12_1 != 0)
        sub_140a74f90(r12_1)
    
    if (rdi_4 - result.d == 0)
        result.b = 1
    else
        r14_2 = var_68
        r12 = arg_20
    label_140ce455a:
        
        if ((r12 & 2) != 0)
            result.b = 1
        else
            if ((r12 & 1) == 0)
                sub_140ccddc0(*(arg1 + 0x20))
            
            uint64_t r8_4 = *(arg1 + 0x18)
            uint64_t rbx_1
            
            if (arg2 != 0)
                rbx_1 = *sub_140b58260(&result_1, arg2, 1)
            else
                void* rax_7
                
                if (arg3 != 0)
                    rax_7 = sub_140d3f470(nullptr, arg3, r8_4, 0, 0, 0, 0)
                
                if (arg3 == 0 || rax_7 != 0)
                    if (r14_2 == 0)
                        r14_2 = *(arg1 + 0x20)
                    
                    void* r8_5 = *(arg1 + 0x10)
                    result_1 = 0
                    rbx_1 = *sub_140d25240(&result_1, r14_2, r8_5, result_1)
                else
                    rbx_1 = r8_4
            
            int64_t rdi_7 = *(arg1 + 0x20)
            
            if ((*(arg1 + 8) & 1) != 0)
                j_sub_140cddea0()
            
            if (arg3 != 0 && (r12 & 4) == 0)
                sub_140d25500(arg3)
            
            sub_140d251f0(arg1, rbx_1, arg3)
            (*(*arg1 + 0xb8))(arg1, rdi_7, r8_4)
            result.b = 1

return result
