// 函数: sub_140b36a60
// 地址: 0x140b36a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b3ce60()
int32_t r10 = data_143de8328
int32_t rcx = 0
int32_t var_78 = 0
int32_t var_74 = 1
int32_t r8 = 0
int32_t var_68 = 0xffffffff
int64_t* r9 = &data_143de8310
int64_t* var_70 = &data_143de8310
int64_t var_64 = 0

if (r10 != 0)
    int64_t* rax_1 = data_143de8320
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_3 = *r9
    
    if (rdx_3 != 0)
    label_140b36af8:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
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
            int64_t rdx_4 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_64:4.d = r8
            var_78 = rcx
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9 + (rdx_4 << 2) + 4)
            var_68 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_140b36af8
        
        var_64.d = r10

double zmm2[0x2] = var_68.o
double var_18[0x2] = zmm2
double var_28[0x2] = var_78.o
double var_58[0x2] = (&data_143de8300).o
uint64_t result = zmm2[0] u>> 0x20
int64_t var_38 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (result.d s< r10)
    int32_t i = var_28[1]:4.d
    
    do
        sub_140b63b70((sx.q(i) << 5) + *var_58[0], &var_78)
        int64_t rcx_5 = var_78.q
        
        if (rcx_5 != 0)
            sub_140a74f90(rcx_5)
        
        var_28[1].d &= not.d(var_58[1]:4.d)
        sub_14059bdd0(&var_58[1])
        result = var_28[0]
        i = var_28[1]:4.d
    while (i s< *(result + 0x18))

return result
