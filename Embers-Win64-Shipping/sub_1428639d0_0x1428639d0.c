// 函数: sub_1428639d0
// 地址: 0x1428639d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
*(*(arg1 + 0xa8) + 0x338) = 0
int32_t r15 = 0xb
*(*(arg1 + 0xa8) + 0x334) = 0
void* rbp = *(arg1 + 0x488)
void* r12 = *(arg1 + 0xa8)
int32_t rax_3 = *(rbp + 0x1c) & 0x30000
int64_t i_1
int16_t* rdi_1

if (rax_3 == 0x10000)
    i_1 = 1
label_142863aaa:
    rdi_1 = &data_1434dc724
label_142863b28:
    int64_t i
    
    do
        int64_t j = 0
        void* rbx_1 = &data_1434dc750
        
        do
            if (*(rbx_1 + 8) == *rdi_1)
                void* rax_4 = sub_1428541e0(sx.q(*(rbx_1 + 0x18)))
                
                if (rax_4 != 0 && (*(rax_4 + 4) & r15) != 0
                        && sub_142864400(arg1, 0x5000e, rbx_1) != 0)
                    r15 &= not.d(*(rax_4 + 4))
                
                break
            
            j += 1
            rbx_1 += 0x28
        while (j u< 0x1a)
        
        rdi_1 = &rdi_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)
else
    if (rax_3 == 0x20000)
        rdi_1 = &data_1434dc726
        i_1 = 1
        goto label_142863b28
    
    if (rax_3 == 0x30000)
        i_1 = 2
        goto label_142863aaa
    
    if (arg1[0xe] == 1)
        rdi_1 = *(rbp + 0x1a8)
    
    if (arg1[0xe] != 1 || rdi_1 == 0)
        rdi_1 = *(rbp + 0x198)
        
        if (rdi_1 != 0)
            i_1 = *(rbp + 0x1a0)
            goto label_142863a77
        
        rdi_1 = &data_1434dc6f0
        i_1 = 0x1a
        goto label_142863b28
    
    i_1 = *(rbp + 0x1b0)
label_142863a77:
    
    if (i_1 != 0)
        goto label_142863b28
*(r12 + 0x338) |= r15
void* rdx = *(arg1 + 0xa8)

if (sub_14285f240(arg1, rdx + 0x33c, rdx + 0x340, nullptr) != 0)
    return 0

if (*(arg1 + 0x578) == 0)
    void* rax_10 = *(arg1 + 0xa8)
    *(rax_10 + 0x338) |= 0x10
    void* rax_11 = *(arg1 + 0xa8)
    *(rax_11 + 0x334) |= 0x1c8

if ((arg1[0x1fd].b & 0x20) == 0)
    void* rcx_4 = *(arg1 + 0xa8)
    *(rcx_4 + 0x338) |= 0x40
    void* rcx_5 = *(arg1 + 0xa8)
    *(rcx_5 + 0x334) |= 0x20

return 1
