// 函数: sub_142678a70
// 地址: 0x142678a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_3 = *(arg1 + 0x2f8)
void* rbx = *(arg1 + 0x2f0)

if (i_3 != 0)
    int32_t i
    
    do
        int64_t rcx = *(rbx + 0x20)
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        int64_t rcx_1 = *(rbx + 0x10)
        
        if (rcx_1 != 0)
            sub_140a74f90(rcx_1)
        
        int64_t rcx_2 = *rbx
        
        if (rcx_2 != 0)
            sub_140a74f90(rcx_2)
        
        rbx += 0x38
        i = i_3
        i_3 -= 1
    while (i != 1)

*(arg1 + 0x2f8) = 0

if (*(arg1 + 0x2fc) != 0)
    sub_1408cf3a0(arg1 + 0x2f0, 0)

int32_t i_4 = *(arg1 + 0x308)
void* rbx_1 = *(arg1 + 0x300)

if (i_4 != 0)
    int32_t i_1
    
    do
        int64_t rcx_4 = *(rbx_1 + 0x10)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        sub_141db7ed0(rbx_1)
        rbx_1 += 0x20
        i_1 = i_4
        i_4 -= 1
    while (i_1 != 1)

*(arg1 + 0x308) = 0

if (*(arg1 + 0x30c) != 0)
    sub_1405a51b0(arg1 + 0x300, 0)

int32_t i_5 = *(arg1 + 0x318)

if (i_5 != 0)
    void* rbx_3 = *(arg1 + 0x310) + 8
    int32_t i_2
    
    do
        int64_t rcx_7 = *(rbx_3 + 0x10)
        
        if (rcx_7 != 0)
            sub_140a74f90(rcx_7)
        
        int64_t rcx_8 = *rbx_3
        
        if (rcx_8 != 0)
            sub_140a74f90(rcx_8)
        
        rbx_3 += 0x70
        i_2 = i_5
        i_5 -= 1
    while (i_2 != 1)

*(arg1 + 0x318) = 0

if (*(arg1 + 0x31c) != 0)
    sub_1408e7380(arg1 + 0x310, 0)

sub_14084ee30(arg1 + 0x330, 0)
int64_t* var_10 = nullptr
int64_t var_18
int32_t result = &var_18

if (arg1 + 0x340 != &var_18)
    *(arg1 + 0x340) = 0
    var_18 = 0
    result = sub_1405aeff0(arg1 + 0x348, &var_10)
    int64_t* rcx_13 = var_10
    
    if (rcx_13 != 0)
        result = rcx_13[1].d
        rcx_13[1].d -= 1
        
        if (result == 1)
            int64_t* rbx_4 = var_10
            result = (**rbx_4)(rbx_4)
            int32_t rdi = *(rbx_4 + 0xc)
            *(rbx_4 + 0xc) -= 1
            
            if (rdi == 1)
                int64_t* rcx_15 = var_10
                return (*(*rcx_15 + 8))(rcx_15, zx.q(rdi))

return result
