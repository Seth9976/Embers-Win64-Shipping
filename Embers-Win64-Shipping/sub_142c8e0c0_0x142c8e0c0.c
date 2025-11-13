// 函数: sub_142c8e0c0
// 地址: 0x142c8e0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rbp = *(arg1 + 0x20)

if (sub_142898c70(arg2) s<= 0)
    sub_1428a5670(0x27, 0x6c, 0x69, "crypto\ocsp\ocsp_vfy.c", 0xcd)
    return 0xffffffff

int32_t rax_2 = sub_142898c70(rbp)

if (rax_2 s<= 0)
    sub_1428a5670(0x27, 0x6b, 0x6f, "crypto\ocsp\ocsp_vfy.c", 0xfa)
    return -1

int64_t* rdi_1 = nullptr
int32_t rbx_1 = 1
int64_t* r14_1 = *sub_142898ea0(rbp, 0)

if (rax_2 s<= 1)
label_142c8e1a2:
    rdi_1 = r14_1
else
    while (true)
        int64_t* r15_1 = *sub_142898ea0(rbp, rbx_1)
        
        if (sub_1428f8d90(r14_1, r15_1) != 0)
            if (sub_1428f6490(*r15_1, *r14_1) == 0)
                return 0
            
            break
        
        rbx_1 += 1
        
        if (rbx_1 s>= rax_2)
            goto label_142c8e1a2

int64_t* rax_6 = sub_142898ea0(arg2, 0)

if (sub_142898c70(arg2) s> 1)
    int32_t result = sub_142c8e340(sub_142898ea0(arg2, 1), rdi_1, rbp)
    
    if (result s< 0)
        return result
    
    if (result != 0)
        if ((sub_1428aea30(rax_6) & 4) != 0 && (sub_1428ae9f0(rax_6) & 0x20) != 0)
            return 1
        
        sub_1428a5670(0x27, 0x6a, 0x67, "crypto\ocsp\ocsp_vfy.c", 0x149)
        return 0

return sub_142c8e340(rax_6, rdi_1, rbp)
