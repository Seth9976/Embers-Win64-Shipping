// 函数: sub_1409360e0
// 地址: 0x1409360e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = *(arg1 + 8)
int32_t r10 = *(rbx + 0x28)
void* r9 = rbx + 0x10
int32_t var_74 = 1
int32_t rcx = 0
int32_t var_78 = 0
void* var_70 = r9
int32_t r8 = 0
int32_t var_68 = 0xffffffff
int64_t var_64 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_140936188:
        int32_t rax_8 = neg.d(rdx_2) & rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_74_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_64.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_64.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140936188
        
        var_64.d = r10

double zmm2[0x2] = var_68.o
double var_18[0x2] = zmm2
double var_28[0x2] = var_78.o
double var_58[0x2] = rbx.o
uint64_t result = zmm2[0] u>> 0x20
int64_t var_38 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (result.d s< r10)
    int32_t i = var_28[1]:4.d
    
    do
        double rdi_1 = var_58[0]
        var_78.q = 0
        int64_t var_70_1 = 0
        int64_t rcx_2 = sx.q(i) * 5
        int64_t* rcx_3 = *(*rdi_1 + (rcx_2 << 3) + 0x10)
        
        if ((*(*rcx_3 + 0x58))(rcx_3, &var_78) != 0)
            sub_140917df0(arg2, *rdi_1 + (rcx_2 << 3), &var_78)
        
        int64_t rcx_5 = var_78.q
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        var_28[1].d &= not.d(var_58[1]:4.d)
        sub_14059bdd0(&var_58[1])
        result = var_28[0]
        i = var_28[1]:4.d
    while (i s< *(result + 0x18))

return result
