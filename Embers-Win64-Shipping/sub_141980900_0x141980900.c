// 函数: sub_141980900
// 地址: 0x141980900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2[0x10] != 0)
    jump(*(*data_143f0f180 + 0x670))

int32_t rdx = data_1439c8508
int32_t rcx = 0
uint32_t count_1
int32_t rcx_1
uint32_t count
int128_t zmm6
int128_t zmm7

if (rdx s<= 0)
label_14198097d:
    rcx_1 = 1
    count = 0
    int32_t var_68_1 = 1
    zmm6 = zx.o(0)
    zmm7 = count_1.o
else
    void* rax_1 = data_1439c8500
    void* r9_1 = &data_1439c8300
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    void* rax_2 = r9_1
    
    while (*rax_2 != arg3)
        rcx += 1
        rax_2 += 0x20
        
        if (rcx s>= rdx)
            goto label_14198097d
    
    void* r10_4 = (sx.q(rcx) << 5) + r9_1
    int32_t rax_8 = rdx - rcx - 1
    zmm6 = *r10_4
    
    if (rax_8 s>= 1)
        rax_8 = 1
    
    zmm7 = *(r10_4 + 0x10)
    
    if (rax_8 != 0)
        memcpy(r10_4, (sx.q(rdx - rax_8) << 5) + r9_1, rax_8 << 5)
        rdx = data_1439c8508
    
    count_1.o = zmm7
    int32_t var_68
    rcx_1 = var_68
    count = count_1
    data_1439c8508 = rdx - 1

void* rax_3 = data_143f02ac8
int128_t var_80
__builtin_memset(&var_80, 0, 0x18)
int64_t* result

if (*(rax_3 + 4) s<= 0 || rcx_1 != 1)
    int32_t rbx = data_143f029c8
    sub_140b34200("UnlockStructuredBuffer_BottomOfPipe", rbx)
    int32_t rbp_1 = data_143f029c8
    sub_140b34200("FlushRHIThreadTotal", rbp_1)
    
    if (*(arg2 + 0x14) u> 0)
        arg5, arg4 = sub_14196ef60(&data_143f02b88, arg2, arg5, arg4)
    
    sub_14198b230()
    
    if (data_143f01c92 != 0)
        sub_14198b3f0()
    
    int64_t rdx_13
    rdx_13.b = 1
    sub_14198b7d0()
    sub_140b38680("FlushRHIThreadTotal", rbp_1)
    arg2[0x10] = 1
    int64_t* rcx_19 = data_143f0f180
    (*(*rcx_19 + 0x670))(rcx_19, arg2, arg3)
    data_1439c8510 = 0
    arg2[0x10] = 0
    result = sub_140b38680("UnlockStructuredBuffer_BottomOfPipe", rbx)
else
    if (arg2[0x10] == 0)
        void*** rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_9 = &rcx_9[7]
        
        if (rax_9 u> *(arg2 + 0x38))
            sub_140b0e3d0(&arg2[0x30], 0x40)
            rcx_9 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_9 = &rcx_9[7]
        
        *(arg2 + 0x30) = rax_9
        int64_t* rax_10 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_10 = rcx_9
        *(arg2 + 8) = &rcx_9[1]
        *(rcx_9 + 0x10) = arg3.o
        rcx_9[1] = 0
        *(rcx_9 + 0x20) = zmm6
        *rcx_9 = &data_143003bb8
        rcx_9[6] = zmm7:8.q
    else
        int64_t* rcx_2 = data_143f0f180
        memcpy((*(*rcx_2 + 0x658))(rcx_2, arg2, arg3, count_1.q u>> 0x20, count, 1), var_80:8.q, 
            count)
        sub_140a74f90(var_80:8.q)
        int64_t* rcx_5 = data_143f0f180
        (*(*rcx_5 + 0x670))(rcx_5, arg2, arg3)
    
    arg3.b = 1
    int64_t* result_1
    sub_141980430(arg2, &result_1, arg3.b)
    result = result_1
    
    if (result != 0)
        result[9].d -= 1
        
        if (result[9].d == 1)
            result = sub_140a2f6e0(result_1)

if (data_1439c8510 u> 0x40000)
    if (*(arg2 + 0x14) u> 0)
        result = sub_14196ef60(&data_143f02b88, arg2, arg5, arg4)
    
    data_1439c8510 = 0

return result
