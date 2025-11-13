// 函数: sub_1429380a0
// 地址: 0x1429380a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x58)
int32_t* result = sub_142898ba0()

if (result == 0)
    sub_1428a5670((result + 0x22).d, 0xa5, (result + 0x41).d, "crypto\x509v3\v3_tlsf.c", 0x63)
    return 0

int32_t rbp = 0

if (sub_142898c70(arg3) s> 0)
    while (true)
        int64_t* rax_2 = sub_142898ea0(arg3, rbp)
        char* rsi_1 = rax_2[2]
        
        if (rsi_1 == 0)
            rsi_1 = rax_2[1]
        
        int64_t rbx_1 = 0
        char const (** rdi_1)[0xf] = &data_143b86840
        
        while (true)
            if (_stricmp(rsi_1, *rdi_1) != 0)
                rbx_1 += 1
                rdi_1 = &rdi_1[2]
                
                if (rbx_1 u< 2)
                    continue
                
                goto label_142938188
            
            int32_t rdi_2
            
            if (rbx_1 u>= 2)
            label_142938188:
                char* _EndPtr
                rdi_2 = strtol(rsi_1, &_EndPtr, 0xa)
                char* _EndPtr_1 = _EndPtr
                
                if (*_EndPtr_1 == 0 && rsi_1 != _EndPtr_1 && rdi_2 u<= 0xffff)
                    goto label_1429381b0
                
                int32_t var_48_1 = 0x77
                sub_1428a5670(0x22, 0xa5, 0x8f, "crypto\x509v3\v3_tlsf.c", 0x77)
                *rax_2
                int64_t var_38_1 = rax_2[2]
                char const* const var_40_1 = ",value:"
                var_48_1.q = rax_2[1]
                sub_1428a4880(6)
            else
                rdi_2 = *(&data_143b86838 + rbx_1 * 0x10)
            label_1429381b0:
                int32_t* rax_5 = sub_1428c3550()
                
                if (rax_5 != 0 && sub_1428e4980(rax_5, rdi_2) != 0
                        && sub_142898d50(result, rax_5) s> 0)
                    break
                
                sub_1428a5670(0x22, 0xa5, 0x41, "crypto\x509v3\v3_tlsf.c", 0x80)
            sub_142898cb0(result, sub_1428c3460)
            return nullptr
        
        rbp += 1
        
        if (rbp s>= sub_142898c70(arg3))
            break

return result
