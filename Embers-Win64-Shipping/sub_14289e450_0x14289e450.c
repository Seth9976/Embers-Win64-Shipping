// 函数: sub_14289e450
// 地址: 0x14289e450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rdi = arg2
int32_t rbx = arg4

if (arg3 != 0)
    rdi = arg3

if (rdi != 0)
    int32_t rax_1 = sub_1428ae610(rdi)
    int32_t var_18_1
    
    if (rax_1 == 0xffffffff)
        var_18_1 = 0x85e
    label_14289e496:
        sub_1428a5670(0xb, 0x86, 0x79, "crypto\x509\x509_vfy.c", var_18_1)
        return 0
    
    void* rax_3 = sub_1428ae5c0(rax_1)
    
    if (*(rax_3 + 4) == 0)
        int32_t rax_4 = sub_1428ae610(arg2)
        
        if (rax_4 == 0xffffffff)
            var_18_1 = 0x86b
            goto label_14289e496
        
        rax_3 = sub_1428ae5c0(rax_4)
    
    if (rbx != 0)
        goto label_14289e4eb
    
    rbx = *(rax_3 + 4)

if (rbx != 0)
label_14289e4eb:
    int32_t rax_5 = sub_1428e7870(rbx)
    
    if (rax_5 == 0xffffffff)
        sub_1428a5670(0xb, 0x86, rax_5 + 0x79, "crypto\x509\x509_vfy.c", 0x878)
        return 0

if (rdi != 0)
    void* rax_6 = *(arg1 + 0x20)
    
    if (*(rax_6 + 0x18) == 0)
        *(rax_6 + 0x18) = rdi

if (rbx != 0)
    void* rax_7 = *(arg1 + 0x20)
    
    if (*(rax_7 + 0x1c) == 0)
        *(rax_7 + 0x1c) = rbx

return 1
