// 函数: sub_142134440
// 地址: 0x142134440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140b33630("Material_UpdateDeferredCachedUniformExpressions")
int32_t r8 = data_143a2e8e8
void* r15 = &data_143a2e8d0
int32_t var_a4 = 1
void* var_a0 = &data_143a2e8d0
int32_t rcx = 0
int32_t var_a8 = 0
int32_t var_98 = 0xffffffff
int32_t rdi = 0
int64_t var_94 = 0

if (r8 != 0)
    void* rax_1 = data_143a2e8e0
    void* r9_1 = &data_143a2e8d0
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r8 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1421344e5:
        int32_t rax_7 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7)
        int32_t var_a4_1 = rax_7
        int32_t rax_8
        
        if (rax_7 == 0)
            rax_8 = 0x20
        else
            rax_8 = 0x1f - temp0_2
        
        var_94.d = rdi - rax_8 + 0x1f
        
        if (rdi - rax_8 + 0x1f s> r8)
            var_94.d = r8
    else
        while (true)
            int64_t rax_4 = sx.q(rcx)
            rdi += 0x20
            rcx += 1
            var_94:4.d = rdi
            var_a8 = rcx
            
            if (rax_4.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rax_4 << 2) + 4)
            var_98 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1421344e5
        
        var_94.d = r8

double zmm2[0x2] = var_98.o
double var_58[0x2] = var_a8.o
uint32_t rax_11 = (zmm2[0] u>> 0x20).d
double var_48[0x2] = zmm2
double var_88[0x2] = (&data_143a2e8c0).o
int64_t var_68 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q

if (rax_11 s< r8)
    int32_t i = var_58[1]:4.d
    
    do
        int64_t* r9_2 = *(*var_88[0] + sx.q(i) * 0x10)
        int64_t* arg_8 = r9_2
        char rax_13 = *(r9_2 + 0x18c)
        
        if ((rax_13 & 2) != 0)
            sub_140af98a0("Unknown", 0x9fc, FMaterialRenderProxy deleted and GC mark was: %i", 
                zx.q(sx.d(rax_13)) & 1)
            sub_140afbb40()
            r9_2 = arg_8
        
        int32_t rbx_2 = 1 << (data_1439c7a08).b | data_143f4a12c
        
        if (rbx_2 != 0)
            while (true)
                int64_t arg_10 = 0
                int32_t rdi_4 = neg.d(rbx_2) & rbx_2
                int32_t rsi_1 = 0
                uint64_t rflags_2
                int32_t temp0_4
                temp0_4, rflags_2 = _bit_scan_reverse(rdi_4)
                int32_t r14_1 = rbx_2
                
                if (rdi_4 != 0)
                    rsi_1 = temp0_4
                
                rbx_2 ^= rdi_4
                int64_t rax_16 = (*(*r9_2 + 0x40))(r9_2, zx.q(rsi_1), &arg_10)
                
                if (arg_10 == 0)
                    int64_t var_a0_1 = rax_16
                    var_a8.q = arg_8
                    var_98.b = 0
                    sub_142123690(arg_8, &arg_8[2 + sx.q(rsi_1) * 0xb], &var_a8, nullptr)
                
                if (rdi_4 == r14_1)
                    break
                
                r9_2 = arg_8
        
        var_58[1].d &= not.d(var_88[1]:4.d)
        sub_14059bdd0(&var_88[1])
        i = var_58[1]:4.d
    while (i s< *(var_58[0] i+ 0x18))
    
    r8 = data_143a2e8e8

if (data_143a2e8c8 != data_143a2e8f4)
    int32_t rax_22 = data_143a2e8cc
    data_143a2e8c8 = 0
    
    if (rax_22 s< 0 && rax_22 != 0)
        sub_1405a5410(&data_143a2e8c0, 0)
        r8 = data_143a2e8e8
    
    void* rax_23 = data_143a2e8e0
    uint64_t r8_4 = zx.q((r8 + 0x1f) u>> 5)
    data_143a2e8f0 = 0xffffffff
    data_143a2e8f4 = 0
    
    if (rax_23 != 0)
        r15 = rax_23
    
    if (r8_4.d u> 8)
        memset(r15, 0, r8_4 << 2)
    else if (r8_4.d != 0)
        __builtin_memset(r15, 0, zx.q(r8_4.d) << 2)
    
    int64_t rcx_10 = sx.q(data_143a2e908)
    data_143a2e8e8 = 0
    
    if (rcx_10 s> 0)
        void* rdx_9 = data_143a2e900
        void* rdi_6 = &data_143a2e8f8
        
        if (rdx_9 != 0)
            rdi_6 = rdx_9
        
        __builtin_memset(rdi_6, 0xffffffff, rcx_10 << 2)

return sub_140b37f60("Material_UpdateDeferredCachedUniformExpressions") __tailcall
