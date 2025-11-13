// 函数: sub_14078e5f0
// 地址: 0x14078e5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (arg2 == 0)
label_14078e6a4:
    *arg4 = 0xffffffff
    *arg5 = 0xffffffff
    result.b = 0
else
    void* rax_1 = sub_140761ad0(arg2)
    
    if (rax_1 == 0 || *(arg1 + 0xf8) == *(arg1 + 0x124))
        goto label_14078e6a4
    
    int64_t r9 = *(rax_1 + 0xe0)
    void* r8 = arg1 + 0x128
    void* rdx_1 = *(r8 + 8)
    
    if (rdx_1 != 0)
        r8 = rdx_1
    
    int32_t rax_6 =
        *(r8 + ((sx.q((r9 u>> 0x20).d * 0x17 + r9.d) & (sx.q(*(arg1 + 0x138)) - 1)) << 2))
    
    if (rax_6 == 0xffffffff)
        goto label_14078e6a4
    
    int64_t r8_1 = *(arg1 + 0xf0)
    int64_t rdx_2
    
    while (true)
        rdx_2 = sx.q(rax_6)
        int64_t rcx_5 = rdx_2 * 3
        
        if (*(r8_1 + (rcx_5 << 3)) == r9)
            break
        
        rax_6 = *(r8_1 + (rcx_5 << 3) + 0x10)
        
        if (rax_6 == 0xffffffff)
            goto label_14078e6a4
    
    if (rax_6 == 0xffffffff)
        goto label_14078e6a4
    
    void* rcx_6 = r8_1 + rdx_2 * 0x18
    
    if (rcx_6 == 0)
        goto label_14078e6a4
    
    void* rcx_7 = *(rcx_6 + 8)
    
    if (rcx_7 == 0)
        goto label_14078e6a4
    
    *arg4 = *(rcx_7 + 8)
    int32_t rdx_3 = *(rcx_7 + 0xc)
    *arg5 = rdx_3
    
    if (arg3 == 0 || *(arg3 + 0xc0) != *(arg1 + 0xd0) * *arg4
            || *(arg3 + 0xc4) != *(arg1 + 0xd4) * rdx_3)
        result.b = 0
    else
        char result_1 = *(arg3 + 0xe0)
        
        if (result_1 != 0)
            result = zx.q(result_1)
        else
            result = sub_1405d9520(zx.d(*(arg3 + 0xdb)))
        
        if (result.d != 0xd)
            result.b = 0
        else
            int64_t var_50 = *(arg1 + 0x28)
            int64_t var_48_1 = *(rax_1 + 0xe0)
            int64_t rax_13 = *(arg3 + 0x78)
            
            if (sub_140a80f40() == 0)
                uint32_t rax_15
                
                if (data_143f138f4 == 0 && data_143de5480 != 0)
                    rax_15.b = GetCurrentThreadId() == data_143de5470
                
                if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_15.b == 0))
                    void var_20
                    void** rax_16 = sub_140789390(&var_20, nullptr, 0xff)
                    void* rcx_12 = *rax_16
                    *(rcx_12 + 0x10) = var_50.o
                    *(rcx_12 + 0x20) = rax_13
                    void* rcx_13 = *rax_16
                    int32_t r8_2 = rax_16[2].d
                    int64_t* rdx_4 = rax_16[1]
                    int64_t* rbx_1 = *(rcx_13 + 0x30)
                    int64_t* var_58_1 = rbx_1
                    void* rdi_1 = &rbx_1[9]
                    
                    if (rbx_1 != 0)
                        *rdi_1 += 1
                        rbx_1 = var_58_1
                    
                    sub_140778000(rcx_13, rdx_4, r8_2, 1)
                    
                    if (rbx_1 != 0)
                        int32_t rcx_14 = *rdi_1
                        *rdi_1 -= 1
                        
                        if (rcx_14 == 1)
                            sub_140a2f6e0(var_58_1)
                    
                    result.b = 1
                else
                    int128_t var_38 = var_50.o
                    int64_t var_28_1 = rax_13
                    sub_140781ad0(&var_38, &data_143f02b98)
                    result.b = 1
            else
                sub_140781ad0(&var_50, &data_143f02b98)
                result.b = 1

return result
