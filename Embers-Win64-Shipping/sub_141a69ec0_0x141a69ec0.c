// 函数: sub_141a69ec0
// 地址: 0x141a69ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *arg2
char arg_8 = 1
char rcx = arg1[0x12].b
int32_t arg_c = rax

if (rcx == 2)
label_141a69f24:
    char rdx = arg1[0x13].b
    void* rcx_2 = &arg1[0x13]
    arg_8 = 1
    arg_c = rax
    
    if (rdx == 2)
    label_141a69f62:
        arg1[1].d |= 8
        
        if (((arg1[0x16].d u>> 1).b & 1) == 0)
            int64_t* rsi = arg1[4]
            arg_8.q = 0
            int64_t* rdx_1 = rsi
            
            if (((rsi + 1) & 0xfffffffffffffffe) == 0)
                rdx_1 = sub_140cde0b0()
            
            int32_t var_38 = 0x7f800000
            void* result = sub_140d2e1f0(arg1, rdx_1, arg_8.q, 0xfffffff, 0, 0)
            int64_t r8_1 = *rsi
            (*(r8_1 + 0x2d0))(rsi, result, r8_1)
            int64_t r10_2 = *arg1
            int128_t var_28 = *arg2
            (*(r10_2 + 0x288))(arg1, &var_28, 0, zx.q(arg3))
            int64_t rax_6 = *result
            int64_t r8_2
            r8_2.b = 1
            var_28 = *arg2
            (*(rax_6 + 0x288))(result, &var_28, r8_2, zx.q(arg3))
            return result
    else
        int32_t temp0_1 = *(rcx_2 + 4)
        
        if (temp0_1 s> rax || (temp0_1 s>= rax && rdx == 1))
            goto label_141a69f59
        
        if (rdx == 1)
            rcx_2 = &arg_8
        label_141a69f59:
            
            if (*(rcx_2 + 4) == *(arg1 + 0x9c))
                goto label_141a69f62
else
    int32_t r10_1 = *(arg1 + 0x94)
    char* rcx_1
    
    if (r10_1 s< rax)
        rcx_1 = &arg1[0x12]
    label_141a69f1a:
        
        if (*(rcx_1 + 4) == r10_1)
            goto label_141a69f24
    else if (r10_1 s> rax)
        if (rcx == 1)
            rcx_1 = &arg_8
            goto label_141a69f1a
    else if (rcx == 1)
        rcx_1 = &arg1[0x12]
        goto label_141a69f1a

return 0
