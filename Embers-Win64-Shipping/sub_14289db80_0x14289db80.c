// 函数: sub_14289db80
// 地址: 0x14289db80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* result = sub_1428a6a70(0x98)

if (result == 0)
    sub_1428a5670((result + 0xb).d, 0x9e, (result + 0x41).d, "crypto\x509\x509_lu.c", 0xa5)
    return 0

void* rax_1 = sub_142898b60(sub_14289dd00)
*(result + 8) = rax_1
int32_t rax_2

if (rax_1 != 0)
    *result = 1
    void* rax_3 = sub_142898ba0()
    *(result + 0x10) = rax_3
    
    if (rax_3 != 0)
        void* rax_4 = sub_1428ab620()
        *(result + 0x18) = rax_4
        
        if (rax_4 != 0)
            if (sub_1428a62f0(4, result, &result[0x20]) != 0)
                CRITICAL_SECTION* rax_6 = sub_1428a5be0()
                *(result + 0x90) = rax_6
                
                if (rax_6 != 0)
                    result[0x22] = 1
                    return result
                
                rax_2 = 0xbd
            else
                rax_2 = 0xb7
        else
            rax_2 = 0xb3
    else
        rax_2 = 0xae
else
    rax_2 = 0xa9

sub_1428a5670(0xb, 0x9e, 0x41, "crypto\x509\x509_lu.c", rax_2)
sub_1428ab200(*(result + 0x18))
sub_142898a10(*(result + 8))
sub_142898a10(*(result + 0x10))
sub_1428a6780(result)
return 0
