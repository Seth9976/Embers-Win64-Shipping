// 函数: sub_1428f2b10
// 地址: 0x1428f2b10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg1 != 0)
    int32_t* result = sub_1428a6a70(0x18)
    
    if (result != 0)
        result[1] = 4
        result[1] = arg1[1]
        uint64_t rbx = zx.q(*arg1)
        int64_t rsi = *(arg1 + 8)
        
        if (rbx.d s< 0)
            if (rsi == 0)
                sub_1428f2c80(result)
                return nullptr
            
            rbx = -1
            
            do
                rbx += 1
            while (*(rsi + rbx) != 0)
        
        int64_t rax_3
        
        if (*result s> rbx.d)
            rax_3 = *(result + 8)
        
        if (*result s<= rbx.d || rax_3 == 0)
            int64_t r12_1 = *(result + 8)
            rax_3 = sub_1428a67c0(r12_1, sx.q((rbx + 1).d), "crypto\asn1\asn1_lib.c", 0x11c)
            *(result + 8) = rax_3
            
            if (rax_3 == 0)
                sub_1428a5670((rax_3 + 0xd).d, 0xba, (rax_3 + 0x41).d, "crypto\asn1\asn1_lib.c", 
                    0x11e)
                *(result + 8) = r12_1
                sub_1428f2c80(result)
                return nullptr
        
        *result = rbx.d
        
        if (rsi != 0)
            int64_t rbx_1 = sx.q(rbx.d)
            memcpy(rax_3, rsi, rbx_1.d)
            *(rbx_1 + *(result + 8)) = 0
        
        result[4] &= 0x80
        result[4] |= arg1[4] & 0xffffff7f
        return result
    
    sub_1428a5670((result + 0xd).d, 0x82, (result + 0x41).d, "crypto\asn1\asn1_lib.c", 0x13e)

return 0
