// 函数: sub_141e8f2c0
// 地址: 0x141e8f2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r11 = *(arg1 + 0x28)
void* r10 = arg1 + 0x10
int32_t var_84 = 1
int32_t var_88 = 0
void* var_80 = r10
int32_t var_78 = 0xffffffff
int32_t r8 = 0
int64_t var_74 = 0
int32_t r9 = 0

if (r11 != 0)
    void* rax_1 = *(r10 + 0x10)
    
    if (rax_1 != 0)
        r10 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rcx = *r10
    
    if (rcx != 0)
    label_141e8f35a:
        int32_t rax_8 = neg.d(rcx) & rcx
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_84_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_74.d = r9 - rax_9 + 0x1f
        
        if (r9 - rax_9 + 0x1f s> r11)
            var_74.d = r11
    else
        while (true)
            int64_t rcx_1 = sx.q(r8)
            r9 += 0x20
            r8 += 1
            var_74:4.d = r9
            var_88 = r8
            
            if (rcx_1.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rcx = *(r10 + (rcx_1 << 2) + 4)
            var_78 = 0xffffffff
            
            if (rcx != 0)
                goto label_141e8f35a
        
        var_74.d = r11

double zmm2[0x2] = var_78.o
double var_28[0x2] = zmm2
double var_38[0x2] = var_88.o
double var_68[0x2] = arg1.o
uint64_t result = zmm2[0] u>> 0x20
int64_t var_48 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (result.d s< r11)
    int32_t i = var_38[1]:4.d
    
    do
        var_88.q = 0
        void* rsi_3 = (sx.q(i) << 6) + *var_68[0]
        int32_t var_80_1 = 0
        sub_1405947f0(&var_88, 4)
        int32_t rbx_1 = var_80_1 + 4
        
        if (rbx_1 s> 0)
            sub_140594770(&var_88)
        
        int64_t rdi_1 = var_88.q
        UnDecorator::getReferenceType(rdi_1, &data_143256298, 8)
        int32_t r8_1 = rbx_1 - 1
        
        if (rbx_1 == 0)
            r8_1 = 0
        
        sub_140a20ba0(*arg2, rdi_1, r8_1)
        
        if (rdi_1 != 0)
            sub_140a74f90(rdi_1)
        
        int32_t rax_13 = *(rsi_3 + 0x10)
        int32_t r8_2 = rax_13 - 1
        
        if (rax_13 == 0)
            r8_2 = 0
        
        sub_140a20ba0(*arg2, *(rsi_3 + 8), r8_2)
        int32_t var_5c
        var_38[1].d &= not.d(var_5c)
        sub_14059bdd0(&var_68[1])
        result = var_38[0]
        i = var_38[1]:4.d
    while (i s< *(result + 0x18))

return result
