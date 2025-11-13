// 函数: sub_140d3e8d0
// 地址: 0x140d3e8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char r14 = arg4
AcquireSRWLockShared(&data_1439aae08)
int16_t temp0
int32_t temp1
temp0:temp1 = sx.q(*(arg1 + 0xc))
uint32_t rdx_1 = zx.d(temp0)
int32_t rax_2 = temp1 + rdx_1
int32_t r8_1 = rax_2 s>> 0x10
int64_t r8_2

if (r8_1 s< data_1439aadf0)
    r8_2 = *(data_1439aade8 + sx.q(r8_1) * 0x10 + 8)

int128_t var_68
int128_t var_58
int64_t result
int64_t rbx_1
void* const rdi

if (r8_1 s>= data_1439aadf0 || r8_2 == 0)
    rdi = nullptr
    rbx_1 = 0xffffffff
    result = ReleaseSRWLockShared(&data_1439aae08)
else
    int128_t zmm0 = *(r8_2 + sx.q(zx.d(rax_2.w) - rdx_1) * 0x10)
    var_68 = zmm0
    var_58 = zmm0
    result = ReleaseSRWLockShared(&data_1439aae08)
    rdi = var_68.q
    
    if (rdi == 0 || r14 == 0)
        rbx_1 = zx.q(var_58:8.d)
    else
        rbx_1 = sx.q(var_58:8.d)
        sub_140ce4c20((rbx_1 << 7) + *(rdi + 0x18))

if (rdi == arg2)
    r14 = 0

if (rdi != arg2 || rbx_1.d != arg3)
    int32_t rbx_2 = *(arg1 + 0xc)
    var_58.q = arg2
    var_58:8.d = arg3
    AcquireSRWLockExclusive(&data_1439aae08)
    sub_140d38b20(&data_1439aade0, rbx_2, &var_58)
    result = ReleaseSRWLockExclusive(&data_1439aae08)
    
    if (r14 != 0 && rdi != 0 && arg2 != 0)
        void* rax_7 = *(arg2 + 0xa0)
        
        if (rax_7 != 0)
            int64_t arg_8 = *(rax_7 + 0x18)
            sub_140b63b70(&arg_8, &var_58)
        else
            var_58.q = 0
            var_58:8.q = 0
            sub_1405947f0(&var_58, (rax_7 + 5).d)
            var_58:8.d += 5
            
            if (var_58:8.d + 5 s> var_58:0xc.d)
                sub_140594770(&var_58)
            
            UnDecorator::getReferenceType(var_58.q, u"None", 0xa)
        
        int16_t* const rbx_3 = &data_142d40450
        int16_t* const r14_1 = &data_142d40450
        
        if (var_58:8.d != 0)
            r14_1 = var_58.q
        
        int16_t* const r15_1
        
        if (*(arg2 + 0x1e8) == 0)
            r15_1 = &data_142d40450
        else
            r15_1 = *(arg2 + 0x1e0)
        
        void* rax_10 = *(rdi + 0xa0)
        
        if (rax_10 != 0)
            int64_t arg_10 = *(rax_10 + 0x18)
            sub_140b63b70(&arg_10, &var_68)
        else
            var_68.q = 0
            var_68:8.q = 0
            sub_1405947f0(&var_68, (rax_10 + 5).d)
            var_68:8.d += 5
            
            if (var_68:8.d + 5 s> var_68:0xc.d)
                sub_140594770(&var_68)
            
            UnDecorator::getReferenceType(var_68.q, u"None", 0xa)
        
        int16_t* const rsi_1 = &data_142d40450
        
        if (var_68:8.d != 0)
            rsi_1 = var_68.q
        
        int16_t* const rdi_1
        
        if (*(rdi + 0x1e8) == 0)
            rdi_1 = &data_142d40450
        else
            rdi_1 = *(rdi + 0x1e0)
        
        int64_t var_48
        int64_t* rax_13 = sub_140d21830(arg1, &var_48, 0, 0)
        
        if (rax_13[1].d != 0)
            rbx_3 = *rax_13
        
        int16_t* const var_70_1 = r14_1
        int16_t* const var_78_1 = r15_1
        int16_t* const var_80_1 = rsi_1
        int16_t* const var_88_1 = rdi_1
        sub_140af98a0("Unknown", 0x88, 
            It is only legal to change linkers in the editor. Trying to change linker on %s from %s "
        "(Existing->LinkerRoot=%s) to %s (LinkerLoad->LinkerRoot=%s)", rbx_3)
        int64_t rcx_13 = var_48
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = var_68.q
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        int64_t rcx_15 = var_58.q
        
        if (rcx_15 != 0)
            sub_140a74f90(rcx_15)
        
        return sub_140afbb40()

return result
