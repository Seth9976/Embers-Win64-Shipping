// 函数: sub_140cb65f0
// 地址: 0x140cb65f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg4
void*** rbx = nullptr

if (arg2 != 0)
    rbx = *(arg2 + 0x68)

if (rbx != 0)
    if (data_143de5452 != 0)
        int64_t arg_10 = *(arg2 + 0x18)
        int16_t* var_28
        sub_140b63b70(&arg_10, &var_28)
        int16_t* const r9 = &data_142d40450
        int32_t var_20
        
        if (var_20 != 0)
            r9 = var_28
        
        sub_140af98a0("Unknown", 0x26e, 
            FLinkerLoad::CreateLinkerAsync: Found existing linker for '%s'", r9)
        int16_t* rcx_1 = var_28
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        sub_140afbb40()
    
    return rbx

if (data_143de5452 != 0)
    rbp |= 1

void*** rax_2 = j_sub_140a82f30(0x3b0)
void*** rdi_1 = rax_2

if (rax_2 == 0)
    rdi_1 = nullptr
else
    sub_140cad1f0(rax_2, 1, arg2, arg3)
    sub_140b4c2a0(&rdi_1[0x40])
    rdi_1[0x52].d = rbp
    void* rcx_4 = &rdi_1[0x6e]
    *(rdi_1 + 0x294) = 0
    *rdi_1 = &data_142e9fb28
    rdi_1[0x40] = &data_142e9fb30
    rdi_1[0x53] = 0
    rdi_1[0x54].d = 0
    rdi_1[0x55] = 0
    rdi_1[0x56] = 0
    rdi_1[0x58].b = 0
    __builtin_memset(&rdi_1[0x59], 0, 0x66)
    __builtin_memset(&rdi_1[0x66], 0, 0x11)
    rdi_1[0x69].b = 0
    *(rdi_1 + 0x34c) = 0xffffffff
    __builtin_memset(&rdi_1[0x6a], 0, 0x20)
    *(rcx_4 + 0x10) = 0
    *(rcx_4 + 0x18) = 0
    *(rcx_4 + 0x1c) = 0x80
    void* rax_3 = *(rcx_4 + 0x10)
    
    if (rax_3 != 0)
        rcx_4 = rax_3
    
    *rcx_4 = 0
    *(rcx_4 + 8) = 0
    rdi_1[0x72].d = 0xffffffff
    *(rdi_1 + 0x394) = 0
    rdi_1[0x74] = 0
    rdi_1[0x75].d = 0
    *(rdi_1 + 0x344) = GetCurrentThreadId()

*(arg2 + 0x68) = rdi_1

if (data_143de5452 != 0 && rdi_1 != 0)
    GSI1::updateDataAddr(rdi_1, arg7, arg5, arg6)

return rdi_1
