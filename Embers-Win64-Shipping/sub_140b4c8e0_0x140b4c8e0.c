// 函数: sub_140b4c8e0
// 地址: 0x140b4c8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = arg1
sub_140b4c9d0(arg1)
result[0x13].b &= 0xfe
void** const r9 = &data_142e79af8
*result = &data_142e79af8
result[0x14] = arg2
result[0x13].b |= arg4 & 1
result[0x16] = arg5
result[0x15] = arg3

if (arg2 == 0 || arg3 s<= 0)
    int64_t var_18
    int64_t* rax_2 = sub_140b63b70(&result[0x16], &var_18)
    int16_t* const r9_1
    
    if (rax_2[1].d == 0)
        r9_1 = &data_142d40450
    else
        r9_1 = *rax_2
    
    sub_140af98a0("Unknown", 0x12, 
        Tried to initialize an FLargeMemoryReader with a null or empty buffer. Archive name: %s.", r9_1)
    int64_t rcx_1 = var_18
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    sub_140afbb40()
    r9 = *result

int64_t rdx
rdx.b = 1
r9[0x14](result, rdx)
(*(*result + 0xd8))(result, zx.q(arg4 u>> 1) & 1)
return result
