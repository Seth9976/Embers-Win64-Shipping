// 函数: sub_140a5dcb0
// 地址: 0x140a5dcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int64_t rbx = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t* r9 = arg1 + 0x10
int32_t rcx = 0
int32_t r10 = 0
int32_t var_5c = 0x80
int32_t r8 = 0
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t rsi = r9[6]
int32_t var_108 = 0
int32_t var_104 = 1
int32_t* var_100 = r9
int32_t var_f8 = 0xffffffff
int64_t var_f4 = 0

if (rsi != 0)
    int32_t* rax_2 = *(r9 + 0x10)
    r10 = rsi
    
    if (rax_2 != 0)
        r9 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_140a5dd9d:
        int32_t rax_9 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_104_1 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        int32_t rax_11 = r8 - rax_10 + 0x1f
        
        if (rax_11 s> rsi)
            rax_11 = rsi
        
        r10 = rax_11
        var_f4.d = rax_11
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx)
            r8 += 0x20
            rcx += 1
            var_f4:4.d = r8
            var_108 = rcx
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                var_f4.d = rsi
                break
            
            rdx_2 = r9[rdx_3 + 1]
            var_f8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_140a5dd9d

double zmm2[0x2] = var_f8.o
int128_t var_b0 = var_108.o
double var_a0[0x2] = zmm2
int64_t var_c8 = (_mm_unpackhi_pd(zmm2, zmm2[0])).q
int128_t var_e8 = arg1.o
int128_t var_d8 = var_b0

if (r10 s< rsi)
    int32_t i = var_d8:0xc.d
    
    do
        void** rsi_1 = var_e8.q
        int64_t r14_1 = sx.q(i) * 0x28
        void var_c0
        
        if (*sub_140960120(&var_88, &var_c0, *rsi_1 + r14_1) == 0xffffffff)
            int64_t rbx_1 = sx.q(arg2[1].d)
            void* r15_1 = *rsi_1
            int32_t rax_14 = (rbx_1 + 1).d
            arg2[1].d = rax_14
            
            if (rax_14 s> *(arg2 + 0xc))
                sub_1405a4f90(arg2)
            
            sub_140596d10(*arg2 + (rbx_1 << 4), r14_1 + r15_1)
            void* rbx_2 = *rsi_1
            sub_140598750(&var_88, &var_108)
            sub_140596d10(var_100, r14_1 + rbx_2)
            var_100[4] = 0xffffffff
            int32_t rax_17 = var_100[2]
            int16_t* rdx_9
            
            if (rax_17 == 0)
                rdx_9 = &data_142d40450
            else
                rdx_9 = *var_100
            
            int32_t rcx_9 = rax_17 - 1
            
            if (rax_17 == 0)
                rcx_9 = 0
            
            void var_bc
            sub_14059a6d0(&var_88, &var_bc, sub_1405969c0(rcx_9, rdx_9), var_100, var_108, nullptr)
        
        var_d8:8.d &= not.d(var_e8:0xc.d)
        sub_14059bdd0(&var_e8:8)
        i = var_d8:0xc.d
    while (i s< *(var_d8.q + 0x18))
    
    rbx = var_48

int32_t rdi_1 = arg2[1].d
int32_t var_40_1 = 0

if (rbx != 0)
    int64_t* rcx_13 = data_143ddb3f0
    
    if (rcx_13 != 0)
        int64_t r8_5 = *rcx_13
        (*(r8_5 + 0x30))(rcx_13, rbx, r8_5)
    else
        sub_140a750a0()
        int64_t* rcx_14 = data_143ddb3f0
        (*(*rcx_14 + 0x30))(rcx_14, rbx)

sub_140669e00(&var_88)
__security_check_cookie(rax_1 ^ &var_138)
return zx.q(rdi_1)
