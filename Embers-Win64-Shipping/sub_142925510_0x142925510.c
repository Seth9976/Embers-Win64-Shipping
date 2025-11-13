// 函数: sub_142925510
// 地址: 0x142925510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rcx = *(arg1 + 0x14)
int64_t rax_1
int64_t rdi_1

if (rcx == 0x388)
    rdi_1 = 0x10
    rax_1 = sub_142895db0()
label_14292555f:
    *(arg1 + 0xb0) = rax_1
    *(arg1 + 0x138) = &data_143b86260
    int64_t rax_2 = *(arg1 + 0xa0)
    *(arg1 + 0xb8) = rdi_1
    int64_t rax_3
    
    if (rax_2 == 0)
        rax_3 = sub_142892200()
        *(arg1 + 0xa0) = rax_3
    
    if (rax_2 != 0 || rax_3 != 0)
        int64_t rdi_2 = rdi_1 + 0x10
        bool cond:0_1 = (*(arg1 + 0x1c) & 1) != 0
        *(arg1 + 0x28) = (rdi_1 << 3).d
        *(arg1 + 0x88) = rdi_2
        uint64_t rax_8
        uint64_t rcx_5
        int64_t rdx_3
        int64_t r8
        
        if (cond:0_1)
            rcx_5 = 0
            rdx_3 = rdi_2
            rax_8 = 0
            r8 = rdi_2
        label_142925630:
            *(arg1 + 0x38) = r8
            *(arg1 + 0x48) = rax_8
            *(arg1 + 0x40) = rdx_3
            *(arg1 + 0x50) = rcx_5
            *(arg1 + 0x58) = rdi_2
            *(arg1 + 0x60) = rdi_2
            *(arg1 + 0x30) = 0x10000
            return 1
        
        int64_t* rax_5 = *(arg1 + 0xa8)
        
        if (rax_5 != 0)
        label_1429255fb:
            
            if (sub_142892480(rax_5, *(arg1 + 0xb0), nullptr, &data_143522088, nullptr, 1) != 0)
                r8 = *(arg1 + 0xb8)
                rdi_2 = 0x1000
                rax_8 = r8 u>> 1
                rcx_5 = rax_8 << 7
                rdx_3 = r8 << 7
                goto label_142925630
        else
            rax_5 = sub_142892200()
            *(arg1 + 0xa8) = rax_5
            
            if (rax_5 != 0)
                goto label_1429255fb
else
    if (rcx == 0x389)
        rdi_1 = 0x18
        rax_1 = sub_142895e80()
        goto label_14292555f
    
    if (rcx == 0x38a)
        rdi_1 = 0x20
        rax_1 = sub_142895f40()
        goto label_14292555f
return 0
