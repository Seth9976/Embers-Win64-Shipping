// 函数: sub_140cdbbb0
// 地址: 0x140cdbbb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r13 = 0
int64_t var_68 = 0
int32_t r14 = 1
int64_t var_60

if (arg3 == 0 || (1 & (*(arg3[1] + 0x10) u>> 0x14).b) == 0)
label_140cdbd1a:
    
    if ((arg3[8] & 0x10000000000) != 0)
        var_68 = arg3[5]
        sub_140d11680()
        
        if ((data_143e1be38 & *(arg3[1] + 0x10)) != 0)
            r14 = 2
        else
            sub_140d113c0()
            
            if ((*(arg3[1] + 0x10) & data_143e1bfc8) != 0)
                r14 = 2
            else
                sub_140d11310()
                
                if ((*(arg3[1] + 0x10) & data_143e1c018) != 0)
                    r14 = 2
                else
                    sub_140d11100()
                    
                    if ((*(arg3[1] + 0x10) & data_143e1ba28) == 0)
                        sub_140ccf960()
                        
                        if ((*(arg3[1] + 0x10) & data_143e1b218) == 0)
                            sub_140cea1e0()
                            
                            if ((*(arg3[1] + 0x10) & data_143e1b878) != 0)
                                r14 = 0
                            else
                                sub_140d11890()
                                
                                if ((*(arg3[1] + 0x10) & data_143e1bbb8) != 0)
                                    r14 = 0
                                else
                                    sub_140d11d60()
                                    
                                    if ((*(arg3[1] + 0x10) & data_143e1c318) != 0)
                                        r14 = 0
                                    else
                                        sub_140d12020()
                                        
                                        if ((*(arg3[1] + 0x10) & data_143e1c4a8) != 0)
                                            r14 = 0
                                        else
                                            sub_140cea290()
                                            
                                            if ((*(arg3[1] + 0x10) & data_143e1b8c8) != 0)
                                                r14 = 0
                    else
                        r14 = sbb.d(1, 1, arg3[0xf] != 0) + 2
else
    void* rbx_1 = arg3[0xf]
    
    if (rbx_1 == 0)
        goto label_140cdbd1a
    
    int64_t rbx_2 = *(rbx_1 + 0x18)
    TEB* gsbase
    
    if (data_143e1b7e0
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e1b7e0)
        
        if (data_143e1b7e0 == 0xffffffff)
            sub_140b58170(&data_143e1b7d8, "AssetBundleData", 1)
            _Init_thread_footer(&data_143e1b7e0)
    
    if (rbx_2 != data_143e1b7d8)
        goto label_140cdbd1a
    
    r14 = 0
    int64_t rbx_4 = *(arg3[0xf] + 0x18)
    var_68 = rbx_4
    int64_t arg_18
    
    if (arg4[1].d == *(arg4 + 0x34))
    label_140cdbcc7:
        sub_14090a150(arg4, &var_60)
        int64_t* var_58
        *var_58 = var_68
        var_58[1].d = 0xffffffff
        sub_1407ec830(arg4, &arg_18, (var_68 u>> 0x20).d + sub_140b5ead0(var_68.d), var_58, 
            var_60.d, nullptr)
    else
        arg_18 = rbx_4
        int32_t rax_6 = sub_140b5ead0(var_68.d) + arg_18:4.d
        void* r8 = &arg4[7]
        void* rcx_3 = *(r8 + 8)
        
        if (rcx_3 != 0)
            r8 = rcx_3
        
        int32_t rax_8 = *(r8 + (((sx.q(arg4[9].d) - 1) & sx.q(rax_6)) << 2))
        
        if (rax_8 == 0xffffffff)
            goto label_140cdbcc7
        
        int64_t rdx_5 = *arg4
        
        while (true)
            int64_t rcx_5 = sx.q(rax_8) * 2
            
            if (*(rdx_5 + (rcx_5 << 3)) == rbx_4)
                break
            
            rax_8 = *(rdx_5 + (rcx_5 << 3) + 8)
            
            if (rax_8 == 0xffffffff)
                goto label_140cdbcc7
        
        if (rax_8 == 0xffffffff)
            goto label_140cdbcc7

int32_t rcx_19
rcx_19.b = sub_140b5b8a0(var_68.d, 0).b == 0
int64_t result
result.b = var_68:4.d != 0
result.b |= rcx_19.b

if (result.b != 0)
    int64_t rax_24 = *arg3
    int64_t r8_3 = sx.q(*(arg3 + 0x4c)) + arg1
    var_60 = 0
    int32_t var_58_1 = 0
    (*(rax_24 + 0xa0))(arg3, &var_60, r8_3, r8_3, 0, 0, 0)
    uint64_t r12_1 = 0
    int64_t rdi_2 = var_60
    uint64_t var_48 = 0
    
    if (var_58_1 != 0)
        sub_1405a4c70(&var_48, var_58_1, 0)
        r12_1 = var_48
        memcpy(r12_1, rdi_2, var_58_1 * 2)
        int32_t var_3c
        r13 = var_3c
    
    int64_t r15_1 = sx.q(arg5[1].d)
    int32_t rax_25 = (r15_1 + 1).d
    arg5[1].d = rax_25
    
    if (rax_25 s> *(arg5 + 0xc))
        sub_1405c4e40(arg5)
    
    result = (r15_1 << 5) + *arg5
    *result = var_68
    *(result + 8) = r12_1
    *(result + 0x10) = var_58_1
    *(result + 0x14) = r13
    *(result + 0x18) = r14
    *(result + 0x1c) = 0
    int64_t rcx_24 = var_60
    
    if (rcx_24 != 0)
        return sub_140a74f90(rcx_24)

return result
