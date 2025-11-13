// 函数: sub_1428e0d30
// 地址: 0x1428e0d30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x70)
void var_98
int64_t rax_1 = __security_cookie ^ &var_98
void* var_50 = arg2
void* const r14 = nullptr
int32_t* result_1 = nullptr
void* const r15 = nullptr
uint32_t pdwDataLen
int32_t* result
uint8_t* var_78

if (CryptExportKey(*(arg2 + 0x10), 0, 6, 0, nullptr, &pdwDataLen) != 0)
    uint8_t* pbData = sub_1428a6730(zx.q(pdwDataLen))
    
    if (pbData == 0)
        goto label_1428e11d5
    
    if (CryptExportKey(*(arg2 + 0x10), 0, 6, 0, pbData, &pdwDataLen) == 0)
        int32_t rax_5 = data_143fecca8
        
        if (rax_5 == 0)
            rax_5 = sub_1428a5060()
            data_143fecca8 = rax_5
        
        var_78.d = 0x288
        sub_1428a5670(rax_5, 0x73, 0x7b, "engines\e_capi.c", var_78.d)
        sub_1428df7e0()
    else
        int32_t rax_6
        
        if (*pbData == 6)
            uint64_t r9_1 = zx.q(*(pbData + 4))
            int32_t rax_8
            int64_t* rcx_18
            
            if (((r9_1 - 0x2400).d & 0xffff7fff) == 0)
                uint64_t r9_4 = zx.q(*(pbData + 8))
                
                if (r9_4.d == 0x31415352)
                    void* rax_20 = sub_142897120(arg1)
                    r14 = rax_20
                    
                    if (rax_20 == 0)
                        goto label_1428e11d5
                    
                    int64_t* rax_21 = sub_142890500()
                    int64_t* rax_22 = sub_142890500()
                    
                    if (rax_21 == 0 || rax_22 == 0)
                        sub_1428901a0(rax_21)
                        rcx_18 = rax_22
                    label_1428e11d0:
                        sub_1428901a0(rcx_18)
                    label_1428e11d5:
                        rax_6 = data_143fecca8
                        
                        if (rax_6 == 0)
                            rax_6 = sub_1428a5060()
                            data_143fecca8 = rax_6
                        
                        var_78.d = 0x30a
                        sub_1428a5670(rax_6, 0x73, 0x41, "engines\e_capi.c", var_78.d)
                    else
                        sub_142897470(r14, rax_22, rax_21, 0)
                        
                        if (sub_142890900(rax_21, zx.q(*(pbData + 0x10))) == 0)
                            goto label_1428e11d5
                        
                        if (sub_1428e2d90(rax_22, &pbData[0x14], *(pbData + 0xc) u>> 3) == 0)
                            goto label_1428e11d5
                        
                        sub_142897510(r14, data_143b85e34, arg2)
                        int32_t* result_3 = sub_1428968f0()
                        result_1 = result_3
                        
                        if (result_3 == 0)
                            goto label_1428e11d5
                        
                        sub_142896310(result_3, 6, r14)
                        r14 = nullptr
                else
                    sub_1428b7080(&var_50, 0xa, "%lx", r9_4)
                    rax_8 = data_143fecca8
                    
                    if (rax_8 == 0)
                        rax_8 = sub_1428a5060()
                        data_143fecca8 = rax_8
                    
                    var_78.d = 0x29c
                    sub_1428a5670(rax_8, 0x73, 0x7a, "engines\e_capi.c", var_78.d)
                    sub_1428a4880(2)
            else if (r9_1.d != 0x2200)
                sub_1428b7080(&var_50, 0xa, "%ux", r9_1)
                int32_t rax_19 = data_143fecca8
                
                if (rax_19 == 0)
                    rax_19 = sub_1428a5060()
                    data_143fecca8 = rax_19
                
                var_78.d = 0x2f9
                sub_1428a5670(rax_19, 0x73, 0x80, "engines\e_capi.c", var_78.d)
                sub_1428a4880(2)
            else
                uint64_t r9_2 = zx.q(*(pbData + 8))
                
                if (r9_2.d == 0x31535344)
                    uint32_t rbp_2 = *(pbData + 0xc) u>> 3
                    void* rax_9 = sub_1428d5930(arg1)
                    r15 = rax_9
                    
                    if (rax_9 == 0)
                        goto label_1428e11d5
                    
                    int64_t* rax_10 = sub_142890500()
                    int64_t* rax_11 = sub_142890500()
                    int64_t* rax_12 = sub_142890500()
                    int64_t* rax_13 = sub_142890500()
                    
                    if (rax_10 == 0 || rax_11 == 0 || rax_12 == 0 || rax_13 == 0)
                        sub_1428901a0(rax_10)
                        sub_1428901a0(rax_11)
                        sub_1428901a0(rax_12)
                        rcx_18 = rax_13
                        goto label_1428e11d0
                    
                    sub_1428d5c20(r15, rax_10, rax_11, rax_12)
                    sub_1428d5ba0(r15, rax_13, 0)
                    
                    if (sub_1428e2d90(rax_10, &pbData[0x10], rbp_2) == 0)
                        goto label_1428e11d5
                    
                    void* rsi_2 = &pbData[0x10 + zx.q(rbp_2)]
                    
                    if (sub_1428e2d90(rax_11, rsi_2, 0x14) == 0)
                        goto label_1428e11d5
                    
                    if (sub_1428e2d90(rax_12, rsi_2 + 0x14, rbp_2) == 0)
                        goto label_1428e11d5
                    
                    if (sub_1428e2d90(rax_13, zx.q(rbp_2) + rsi_2 + 0x14, rbp_2) == 0)
                        goto label_1428e11d5
                    
                    sub_1428d5cc0(r15, data_143b85e38, var_50)
                    int32_t* result_2 = sub_1428968f0()
                    result_1 = result_2
                    
                    if (result_2 == 0)
                        goto label_1428e11d5
                    
                    sub_142896310(result_2, 0x74, r15)
                    r15 = nullptr
                else
                    sub_1428b7080(&var_50, 0xa, "%lx", r9_2)
                    rax_8 = data_143fecca8
                    
                    if (rax_8 == 0)
                        rax_8 = sub_1428a5060()
                        data_143fecca8 = rax_8
                    
                    var_78.d = 0x2ca
                    sub_1428a5670(rax_8, 0x73, 0x77, "engines\e_capi.c", var_78.d)
                    sub_1428a4880(2)
        else
            rax_6 = data_143fecca8
            
            if (rax_6 == 0)
                rax_6 = sub_1428a5060()
                data_143fecca8 = rax_6
            
            var_78.d = 0x28f
            sub_1428a5670(rax_6, 0x73, 0x79, "engines\e_capi.c", var_78.d)
    
    sub_1428a6780(pbData)
    
    if (result_1 == 0)
        sub_142896f90(r14)
        sub_1428d5800(r15)
    
    result = result_1
else
    int32_t rax_3 = data_143fecca8
    
    if (rax_3 == 0)
        rax_3 = sub_1428a5060()
        data_143fecca8 = rax_3
    
    var_78.d = 0x27d
    sub_1428a5670(rax_3, 0x73, 0x7c, "engines\e_capi.c", var_78.d)
    sub_1428df7e0()
    result = nullptr
__security_check_cookie(rax_1 ^ &var_98)
return result
