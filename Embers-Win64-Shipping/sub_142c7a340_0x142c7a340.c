// 函数: sub_142c7a340
// 地址: 0x142c7a340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
int32_t r14 = 0
char* rbx = *(rsi + 0xa80)
int32_t rax

if (arg2 == 0x2a)
    char i = *rbx
    
    while (i != 0)
        if (i == 0x7b)
            goto label_142c7a3ba
        
        i = rbx[1]
        rbx = &rbx[1]
    
    if (*rbx != 0x7b)
    label_142c7a4fa:
        sub_142c64760(*arg1[0xde], "Failed to parse FETCH response.", arg3, arg4)
        arg1[0xe1].d = 0
        return 8
    
label_142c7a3ba:
    char* _EndPtr
    int64_t rax_1
    rax_1, arg3 = strtoll(&rbx[1], &_EndPtr, 0xa)
    char* _EndPtr_1 = _EndPtr
    
    if (_EndPtr_1 - rbx s<= 1 || *_EndPtr_1 != 0x7d || _EndPtr_1[1] != 0xd || _EndPtr_1[2] != 0)
        goto label_142c7a4fa
    
    int512_t zmm2 = sub_142c64850(rsi, "Found %I64u bytes to download\n", rax_1, arg4)
    sub_142c6f180(rsi, rax_1)
    char* r8_1 = arg1[0xd3]
    
    if (r8_1 == 0)
    label_142c7a4bf:
        
        if (*(rsi + 0xf8) == rax_1)
            sub_142c68d40(arg1, 0xffffffff, -1, 0, zmm2, 0, 0xffffffff, nullptr)
            arg1[0xe1].d = 0
            return r14
        
        *(rsi + 0xe8) = rax_1
        sub_142c68d40(arg1, 0, rax_1, 0, zmm2, 0, 0xffffffff, nullptr)
        arg1[0xe1].d = 0
        return r14
    
    int64_t rbx_1 = arg1[0xd4]
    
    if (rbx_1 u> rax_1)
        rbx_1 = rax_1
    
    int512_t zmm2_1
    rax, zmm2_1 = sub_142c645e0(arg1, 1, r8_1, rbx_1, zmm2)
    r14 = rax
    
    if (rax == 0)
        *(rsi + 0xf8) += rbx_1
        zmm2 = sub_142c64850(rsi, "Written %I64u bytes, %I64u bytes are left for transfer\n", 
            rbx_1, zmm2_1)
        int64_t r8_3 = arg1[0xd4]
        int64_t rcx_6 = arg1[0xd3]
        
        if (r8_3 u<= rbx_1)
            data_143ccb8a0(rcx_6)
            arg1[0xd3] = 0
            arg1[0xd4] = 0
        else
            memmove(rcx_6, rcx_6 + rbx_1, r8_3.d - rbx_1.d)
            arg1[0xd4] -= rbx_1
        
        goto label_142c7a4bf
else
    sub_142c6f180(rsi, -1)
    rax = 0x4e
    arg1[0xe1].d = 0

return rax
