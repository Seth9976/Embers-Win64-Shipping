// 函数: sub_14193a270
// 地址: 0x14193a270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_8
sub_14193a5e0(arg1 + 0x70, &arg_8, arg2)
int64_t rax = sx.q(arg_8)
void* const rax_2

if (rax.d == 0xffffffff)
    rax_2 = nullptr
else
    rax_2 = rax * 0x88 + *(arg1 + 0x70)

int64_t* rdi = rax_2 + 0x78

if (rax_2 == 0)
    rdi = nullptr

if (rdi == 0)
    return nullptr

void* rcx_1 = *rdi

if (sub_1419358e0(rcx_1 + 0x5e8, rcx_1 + 0x658) == 0)
    sub_140926420(&data_143f02598, sub_140b58170(&arg_8, "FailedBinaryProgramCreate", 1))
    int64_t* var_28
    int64_t** rax_6 = sub_14194e5d0(*rdi + 0x450, &var_28)
    int64_t* r9_1
    
    if (rax_6[1].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *rax_6
    
    sub_140af98a0("Unknown", 0x756, 
        RestoreGLProgramFromBinary : Failed to restore GL program from binary data! [%s]", r9_1)
    int64_t* rcx_9 = var_28
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)
    
    sub_140afbb40()
else
    int64_t rbx_1 = data_143eff770
    int64_t rcx_3
    
    if (data_143de5480 == 0)
        rcx_3 = 0
    else
        rcx_3.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rbx_1 + (rcx_3 << 2)) == 0)
        int64_t* rcx_5 = *rdi + 0x658
        rcx_5[1].d = 0
        
        if (*(rcx_5 + 0xc) != 0)
            sub_1405c5510(rcx_5, 0)

void* result = *rdi
sub_14194ba20(arg1 + 0x70, arg2)
sub_1419301f0(arg1, arg2, result)
sub_141934b30(result)
data_143eff66c += 1
return result
