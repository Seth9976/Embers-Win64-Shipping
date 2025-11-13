// 函数: sub_1428c2710
// 地址: 0x1428c2710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x480)
void var_498
int64_t rax_1 = __security_cookie ^ &var_498
int64_t result

if (sub_1428e3700() != 1)
    result = 0
else
    void nodeBuffer
    memset(&nodeBuffer, 0, 0x401)
    int64_t serviceBuffer
    __builtin_memset(&serviceBuffer, 0, 0x20)
    socklen_t SockaddrLength = 0x1c
    
    if (arg1->sa_family == 2)
        SockaddrLength = 0x10
    
    int32_t rax_5 = getnameinfo(arg1, SockaddrLength, &nodeBuffer, 0x401, &serviceBuffer, 0x20, 
        sbb.d(0, 0, arg2 != 0) & 0xa)
    uint8_t* var_478_1
    
    if (rax_5 == 0)
        if (serviceBuffer.b == 0)
            uint16_t sa_family = arg1->sa_family
            uint16_t netshort
            
            if (sa_family == 2)
                netshort.b = arg1->sa_data[0]
                netshort:1.b = arg1->sa_data[1]
            else if (sa_family != 0x17)
                netshort = 0
            else
                netshort.b = arg1->sa_data[0]
                netshort:1.b = arg1->sa_data[1]
            
            sub_1428b7080(&serviceBuffer, 0x20, "%d", zx.q(ntohs(netshort)))
        
        if (arg3 != 0)
            *arg3 = sub_1428a6ba0(&nodeBuffer)
        
        if (arg4 != 0)
            *arg4 = sub_1428a6ba0(&serviceBuffer)
        
        if ((arg3 == 0 || *arg3 != 0) && (arg4 == 0 || *arg4 != 0))
            result = 1
        else
            if (arg3 != 0)
                sub_1428a6780(*arg3)
                *arg3 = 0
            
            if (arg4 != 0)
                sub_1428a6780(*arg4)
                *arg4 = 0
            
            var_478_1.d = 0x101
            sub_1428a5670(0x20, 0x86, 0x41, "crypto\bio\b_addr.c", var_478_1.d)
            result = 0
    else
        var_478_1.d = 0xd7
        sub_1428a5670(0x20, 0x86, 2, "crypto\bio\b_addr.c", var_478_1.d)
        sub_1428c2920(rax_5)
        sub_1428a4880(1)
        result = 0

__security_check_cookie(rax_1 ^ &var_498)
return result
