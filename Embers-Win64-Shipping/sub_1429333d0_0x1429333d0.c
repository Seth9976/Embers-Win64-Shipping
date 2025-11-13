// 函数: sub_1429333d0
// 地址: 0x1429333d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 != 0)
    char* _EndPtr
    uint32_t rax_1 = strtoul(arg1, &_EndPtr, 0xa)
    char* _EndPtr_1 = _EndPtr
    
    if (_EndPtr_1 == 0 || *_EndPtr_1 == 0 || _EndPtr_1 == &arg1[sx.q(arg2)])
        int32_t var_18_1
        int32_t rcx_1
        int32_t r8
        
        if (rax_1 s>= 0)
            int32_t rax_3 = sub_14291c060(arg3, rax_1, 1)
            
            if (rax_3 != 0)
                return 1
            
            var_18_1 = 0x2f7
            rcx_1 = rax_3 + 0xd
            r8 = rax_3 + 0x41
        else
            var_18_1 = 0x2f3
            rcx_1 = 0xd
            r8 = 0xbb
        
        sub_1428a5670(rcx_1, 0xb4, r8, "crypto\asn1\asn1_gen.c", var_18_1)

return 0
