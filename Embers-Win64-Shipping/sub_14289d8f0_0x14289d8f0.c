// 函数: sub_14289d8f0
// 地址: 0x14289d8f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rdi = *(arg1 + 0x10)
int32_t rbx = 0

if (sub_142898c70(rdi) s> 0)
    int32_t rax_2
    
    do
        void* const rax_1 = sub_142898ea0(rdi, rbx)
        
        if (arg2 == *(rax_1 + 8))
            return rax_1
        
        rbx += 1
        rax_2 = sub_142898c70(rdi)
    while (rbx s< rax_2)

void* rax_3 = sub_1428a6a70(0x20)

if (rax_3 != 0)
    *(rax_3 + 8) = arg2
    int64_t rax_4 = *(arg2 + 8)
    int32_t rax_5
    
    if (rax_4 != 0)
        rax_5 = rax_4(rax_3)
    
    if (rax_4 == 0 || rax_5 != 0)
        *(rax_3 + 0x18) = arg1
        
        if (sub_142898d50(*(arg1 + 0x10), rax_3) != 0)
            return rax_3
        
        sub_1428a5670(0xb, 0x9d, 0x41, "crypto\x509\x509_lu.c", 0x10d)
        void* rax_7 = *(rax_3 + 8)
        
        if (rax_7 != 0)
            int64_t rax_8 = *(rax_7 + 0x10)
            
            if (rax_8 != 0)
                rax_8(rax_3)
        
        sub_1428a6780(rax_3)
    else
        sub_1428a6780(rax_3)
        sub_1428a5670(0xb, 0x9d, 0x41, "crypto\x509\x509_lu.c", 0x105)
else
    sub_1428a5670((rax_3 + 0xb).d, 0x9b, (rax_3 + 0x41).d, "crypto\x509\x509_lu.c", 0x17)
    sub_1428a5670(0xb, 0x9d, 0x41, "crypto\x509\x509_lu.c", 0x105)

return nullptr
