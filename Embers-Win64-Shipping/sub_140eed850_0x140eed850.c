// 函数: sub_140eed850
// 地址: 0x140eed850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x390) = *(arg2 + 0x1b0)
*(arg1 + 0x3c8) = *(arg2 + 0x328)
*(arg1 + 0x3d0) = *(arg2 + 0x330)
*(arg1 + 0x3d8) = *(arg2 + 0x338)
*(arg1 + 0x3e0) = *(arg2 + 0x340)
*(arg1 + 0x3e8) = *(arg2 + 0x348)
*(arg1 + 0x3f0) = *(arg2 + 0x350)
*(arg1 + 0x3f8) = *(arg2 + 0x358)
*(arg1 + 0x400) = *(arg2 + 0x360)
*(arg1 + 0x408) = *(arg2 + 0x368)
*(arg1 + 0x410) = *(arg2 + 0x1f0)
*(arg1 + 0x420) = *(arg2 + 0x200)
sub_140692f90(arg1 + 0x428, arg2 + 0x208)
sub_140693390(arg1 + 0x438, arg2 + 0x230)
*(arg1 + 0x460) = *(arg2 + 0x258)
sub_140692f90(arg1 + 0x468, arg2 + 0x260)
sub_140693390(arg1 + 0x478, arg2 + 0x270)
*(arg1 + 0x4a0) = *(arg2 + 0x298)
sub_140692f90(arg1 + 0x4a8, arg2 + 0x2a0)

if (arg2 + 0x1b8 != arg1 + 0x4b8)
    if (*(arg1 + 0x4bc) != 0)
        *(arg1 + 0x4bc) = 0
    
    if (*(arg2 + 0x1bc) != 0)
        *(arg1 + 0x4b8) = *(arg2 + 0x1b8)
        *(arg1 + 0x4bc) = 1

*(arg1 + 0x4c0) = *(arg2 + 0x1e8)
*(arg1 + 0x4c4) = *(arg2 + 0x1ec)
*(arg1 + 0x398) = 0
*(arg1 + 0x4cc) = *(arg2 + 0x2b0)
int64_t var_18 = *(arg2 + 0x1a0)
void* rax_19 = *(arg2 + 0x1a8)
void* var_10 = rax_19

if (rax_19 != 0)
    *(rax_19 + 8) += 1

sub_140eea5e0(arg1, &var_18)
*(arg1 + 0x3a0) = *(arg2 + 0x1d0)
*(arg1 + 0x3a1) = *(arg2 + 0x1d1)
sub_1407473e0(arg1 + 0x3a8, arg2 + 0x1d8)
int64_t* rdi = nullptr

if (arg2 + 0x1c0 != arg1 + 0x3b8)
    int64_t* rcx_9
    
    if (*(arg2 + 0x1c8) != 0)
        rcx_9 = *(arg2 + 0x1c0)
    
    if (*(arg2 + 0x1c8) != 0 && rcx_9 != 0)
        (*(*rcx_9 + 0x40))(rcx_9, arg1 + 0x3b8)
    else if (*(arg1 + 0x3c0) != 0)
        int64_t* rcx_10 = *(arg1 + 0x3b8)
        
        if (rcx_10 != 0)
            (*(*rcx_10 + 0x38))(rcx_10, 0)
            int64_t rcx_11 = *(arg1 + 0x3b8)
            
            if (rcx_11 != 0)
                *(arg1 + 0x3b8) = sub_140a84c80(rcx_11, 0, 0)
            
            *(arg1 + 0x3c0) = 0

if (*(arg2 + 0x228) != 0)
    int64_t* rcx_12 = *(arg2 + 0x220)
    
    if (rcx_12 != 0 && (*(*rcx_12 + 0x28))(rcx_12) != 0)
        if (*(arg2 + 0x228) != 0)
            rdi = *(arg2 + 0x220)
        
        *(arg2 + 0x218) = (*(*rdi + 0x48))(rdi)

*(arg1 + 0x4c8) = *(arg2 + 0x218)
sub_1407473e0(arg1 + 0x4d0, arg2 + 0x2b8)
void* rax_30 = arg2 + 0x308

if (*(rax_30 + 0x18) == 0)
    rax_30 = *(arg2 + 0x1b0) + 0x568

*(arg1 + 0x4e0) = *rax_30
void* rax_32 = arg2 + 0x2c8
*(arg1 + 0x4f0) = *(rax_30 + 0x10)

if (*(rax_32 + 0x18) == 0)
    rax_32 = *(arg2 + 0x1b0) + 0x538

*(arg1 + 0x4f8) = *rax_32
void* result = arg2 + 0x2e8
*(arg1 + 0x508) = *(rax_32 + 0x10)

if (*(result + 0x18) == 0)
    result = *(arg2 + 0x1b0) + 0x550

*(arg1 + 0x510) = *result
*(arg1 + 0x520) = *(result + 0x10)
return result
