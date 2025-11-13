// 函数: sub_141950290
// 地址: 0x141950290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = 0
int32_t arg_18 = 0
data_143effdd8(arg1, 0x8b82, &arg_18)

if (arg_18 == 1)
    int64_t rax
    rax.b = 1
    return rax

int16_t* var_18
sub_140a2e390(&var_18, u"Failed to link program. Current total programs:%d", zx.q(data_143eff66c))

if (arg2 == 0)
    int64_t rdi_1 = data_143eff788
    int64_t rcx_1
    
    if (data_143de5480 == 0)
        rcx_1 = 0
    else
        rcx_1.b = GetCurrentThreadId() != data_143de5470
    
    if (*(rdi_1 + (rcx_1 << 2)) == 0)
        int16_t* const r9_1 = &data_142d40450
        int32_t var_10
        
        if (var_10 != 0)
            r9_1 = var_18
        
        sub_140af98a0("Unknown", 0xc2, u"%s", r9_1)
        sub_140afbb40()

int16_t* rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rdi_2 = data_143eff788

if (data_143de5480 != 0)
    rbx.b = GetCurrentThreadId() != data_143de5470

uint32_t rax_1
rax_1.b = *(rdi_2 + (rbx << 2)) == 1
return rax_1
