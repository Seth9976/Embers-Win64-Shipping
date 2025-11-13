// 函数: sub_141033dd0
// 地址: 0x141033dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = *(arg1 + 0xb0)

if (i_2 != 0)
    void* rbx_1 = *(arg1 + 0xa8) + 0x40
    int32_t i
    
    do
        *(rbx_1 + 8) = 0
        int64_t rcx = *rbx_1
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        *(rbx_1 - 0x38) = 0
        
        if (*(rbx_1 - 0x34) != 0)
            sub_140638cc0(rbx_1 - 0x40, 0)
        
        *(rbx_1 - 0x10) = 0xffffffff
        *(rbx_1 - 0xc) = 0
        sub_14059a8e0(rbx_1 - 0x30, 0)
        int64_t rcx_3 = *(rbx_1 - 0x20)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int64_t rcx_4 = *(rbx_1 - 0x40)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        rbx_1 += 0x50
        i = i_2
        i_2 -= 1
    while (i != 1)

int32_t rbx_2 = 0
*(arg1 + 0xb0) = 0

if (*(arg1 + 0xb4) != 0)
    sub_1405a5310(arg1 + 0xa8, 0)
    rbx_2 = *(arg1 + 0xb0)

int32_t rdx_1 = *(arg1 + 0xb8) + 1

if (rdx_1 s> rbx_2)
    *(arg1 + 0xb0) = rdx_1
    int32_t i_3 = rdx_1 - rbx_2
    
    if (rdx_1 s> *(arg1 + 0xb4))
        sub_1405c5060(arg1 + 0xa8)
    
    int64_t* r8_3 = sx.q(rbx_2) * 0x50 + *(arg1 + 0xa8)
    
    if (i_3 != 0)
        int64_t* rdx_3 = &r8_3[4]
        int32_t i_1
        
        do
            *r8_3 = 0
            int64_t* rcx_7 = &rdx_3[-2]
            rdx_3[-3] = 0
            r8_3 = &r8_3[0xa]
            *rdx_3 = 0
            rdx_3[1].d = 0
            *(rdx_3 + 0xc) = 0x80
            int64_t* rax_2 = *rdx_3
            rdx_3 = &rdx_3[0xa]
            
            if (rax_2 != 0)
                rcx_7 = rax_2
            
            *rcx_7 = 0
            rcx_7[1] = 0
            rdx_3[-8].d = 0xffffffff
            *(rdx_3 - 0x3c) = 0
            rdx_3[-6] = 0
            rdx_3[-5].d = 0
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
else if (rdx_1 s< rbx_2)
    sub_1410335c0(arg1 + 0xa8, rdx_1, rbx_2 - rdx_1, 1)

int64_t* rbx_6 = sx.q(*(arg1 + 0xb8)) * 0x50 + *(arg1 + 0xa8)
int32_t var_28
sub_1409afd50(rbx_6, &var_28)
int32_t rax_4 = var_28
int32_t* var_20
*var_20 = 0
var_20[1] = 0xffffffff
void arg_8
return sub_140752f60(rbx_6, &arg_8, 0, var_20, rax_4, nullptr)
