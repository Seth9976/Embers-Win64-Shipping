// 函数: sub_141c66300
// 地址: 0x141c66300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = sub_140d3c6e0(arg1 + 0x4c)
char result = EnterCriticalSection(rax + 0x40)
int64_t rsi = sx.q(*(rax + 0x70))
uint64_t rbp = 0
int64_t rdi_1 = *(rax + 0x68)
uint64_t var_18 = 0
int32_t var_10 = rsi.d

if (rsi.d != 0)
    sub_1405a4be0(&var_18, rsi.d, 0)
    rbp = var_18
    result = memcpy(rbp, rdi_1, (rsi << 4).d)
    rsi = zx.q(var_10)

if (rax != -0x40)
    result = LeaveCriticalSection(rax + 0x40)

if (*(arg1 + 0xe8) != rsi.d)
label_141c66417:
    
    if (arg1 + 0xe0 != &var_18)
        int32_t r8_3 = *(arg1 + 0xec)
        *(arg1 + 0xe8) = rsi.d
        
        if (rsi.d != 0 || r8_3 != 0)
            sub_1405a4be0(arg1 + 0xe0, rsi.d, r8_3)
            memcpy(*(arg1 + 0xe0), rbp, rsi.d << 4)
        else
            *(arg1 + 0xec) = rsi.d
    
    EnterCriticalSection(arg1 + 0xb8)
    *(arg1 + 0xa0) = 1
    result = sub_1405b0be0(arg1 + 0xa8, arg1 + 0xe0)
    
    if (arg1 != -0xb8)
        result = LeaveCriticalSection(arg1 + 0xb8)
else
    int32_t i = 0
    
    if (rsi.d s> 0)
        void* r9_1 = *(arg1 + 0xe0)
        void* rcx_5 = rbp + 4
        int32_t* rdx_3 = r9_1 + 4
        
        do
            result = (*(rcx_5 + 8)).b ^ (rdx_3[2]).b
            
            if ((result & 1) != 0)
                goto label_141c66417
            
            uint32_t zmm0[0x4] = *rcx_5
            zmm0[0] = zmm0[0] f- *rdx_3
            
            if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
                goto label_141c66417
            
            zmm0 = *(rcx_5 - 4)
            zmm0[0] = zmm0[0] f- *(r9_1 - rbp + rcx_5 - 4)
            
            if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
                goto label_141c66417
            
            zmm0 = *(rcx_5 + 4)
            zmm0[0] = zmm0[0] f- rdx_3[1]
            
            if (_mm_and_ps(zmm0, 0x7fffffff)[0] f> 9.99999994e-09f)
                goto label_141c66417
            
            i += 1
            rcx_5 += 0x10
            rdx_3 = &rdx_3[4]
        while (i s< rsi.d)

if (rbp == 0)
    return result

return sub_140a74f90(rbp)
