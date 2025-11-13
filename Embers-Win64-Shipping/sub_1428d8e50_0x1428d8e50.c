// 函数: sub_1428d8e50
// 地址: 0x1428d8e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = *(arg1 + 0x34)

if (rax != 0 || *(arg1 + 0x38) != rax)
    *(arg1 + 0x34) = rax + 1
    return rax + 1

uint64_t rax_1 = zx.q(*(arg1 + 0x2c))
int32_t rbp = *(arg1 + 0x30)
int64_t result

if (*(arg1 + 0x28) != rax_1.d)
label_1428d8f56:
    result = *(arg1 + 0x20)
    *(result + (zx.q(*(arg1 + 0x28)) << 2)) = rbp
    *(arg1 + 0x28) += 1
else
    uint32_t rdi_2
    
    if (rax_1.d == 0)
        rdi_2 = 0x20
    else
        rdi_2 = (rax_1 * 3).d u>> 1
    
    int64_t rax_2 = sub_1428a6730(zx.q(rdi_2) << 2)
    
    if (rax_2 != 0)
        int32_t rax_3 = *(arg1 + 0x28)
        
        if (rax_3 != 0)
            memcpy(rax_2, *(arg1 + 0x20), rax_3 << 2)
        
        sub_1428a6780(*(arg1 + 0x20))
        *(arg1 + 0x20) = rax_2
        *(arg1 + 0x2c) = rdi_2
        goto label_1428d8f56
    
    sub_1428a5670((rax_2 + 3).d, 0x94, (rax_2 + 0x41).d, "crypto\bn\bn_ctx.c", 0x105)
    result = sub_1428a5670((rax_2 + 3).d, 0x81, (rax_2 + 0x6d).d, "crypto\bn\bn_ctx.c", 0xbd)
    *(arg1 + 0x34) += 1

return result
