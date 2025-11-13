// 函数: sub_142933980
// 地址: 0x142933980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rsi = sx.q(arg2)

if (arg1 != 0)
    char* _EndPtr
    uint32_t rax_1 = strtoul(arg1, &_EndPtr, 0xa)
    char* _EndPtr_1 = _EndPtr
    
    if (_EndPtr_1 == 0 || *_EndPtr_1 == 0 || _EndPtr_1 u<= &arg1[rsi])
        if (rax_1 s>= 0)
            *arg3 = rax_1
            
            if (_EndPtr_1 == 0 || rsi.d == neg.d(arg1.d - _EndPtr_1.d))
                *arg4 = 0x80
                return 1
            
            char rcx_1 = *_EndPtr_1
            
            if (rcx_1 == 0x41)
                *arg4 = 0x40
                return 1
            
            if (rcx_1 == 0x43)
                *arg4 = 0x80
                return 1
            
            if (rcx_1 == 0x50)
                *arg4 = 0xc0
                return 1
            
            if (rcx_1 == 0x55)
                *arg4 = 0
                return 1
            
            char arg_8 = rcx_1
            char arg_9 = 0
            sub_1428a5670(0xd, 0xb6, 0xba, "crypto\asn1\asn1_gen.c", 0x187)
            sub_1428a4880(2)
        else
            sub_1428a5670(0xd, 0xb6, 0xbb, "crypto\asn1\asn1_gen.c", 0x168)

return 0
