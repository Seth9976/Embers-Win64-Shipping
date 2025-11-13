// 函数: sub_142c8cb20
// 地址: 0x142c8cb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint16_t count_1 = 0

if (arg3 u>= 0x30)
    count_1 = sub_142c8ebc0(arg2 + 0x28)
    uint64_t rdi_1 = zx.q(sub_142c8ebd0(arg2 + 0x2c))
    
    if (count_1 != 0)
        if (zx.q(zx.d(count_1) + rdi_1.d) u> arg3 || rdi_1.d u< 0x30)
            sub_142c64850(arg1, 
                "NTLM handshake failure (bad type-2 message). Target Info Offset Len is set incorrect by "
            "the peer\n", 
                arg3, arg5)
            return 0x3d
        
        uint32_t count = zx.d(count_1)
        int64_t rax_3 = data_143ccb898(zx.q(count))
        *(arg4 + 0x10) = rax_3
        
        if (rax_3 == 0)
            return 0x1b
        
        memcpy(rax_3, arg2 + rdi_1, count)

*(arg4 + 0x18) = zx.d(count_1)
return 0
