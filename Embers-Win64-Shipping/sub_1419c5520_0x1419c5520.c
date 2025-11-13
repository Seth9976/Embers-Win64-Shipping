// 函数: sub_1419c5520
// 地址: 0x1419c5520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xa0) == 0)
    sub_1419c85c0(arg1 + 0xa8)
    *(arg1 + 0xa0) = 1

int32_t r12 = 0
int32_t var_e4 = 1
int64_t var_c8 = 0
void* r9 = arg1 + 0xb8
int32_t var_c0 = 0
int32_t r10 = *(r9 + 0x18)
int32_t rcx_1 = 0
int32_t var_e8 = 0
int32_t r8 = 0
void* var_e0 = r9
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r10 != 0)
    void* rax_1 = *(r9 + 0x10)
    
    if (rax_1 != 0)
        r9 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_2 = *r9
    
    if (rdx_2 != 0)
    label_1419c55fd:
        int32_t rax_8 = ((rdx_2 - 1) & rdx_2) ^ rdx_2
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_e4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_d4.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r10)
            var_d4.d = r10
    else
        while (true)
            int64_t rdx_3 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_d4:4.d = r8
            var_e8 = rcx_1
            
            if (rdx_3.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_2 = *(r9 + (rdx_3 << 2) + 4)
            var_d8 = 0xffffffff
            
            if (rdx_2 != 0)
                goto label_1419c55fd
        
        var_d4.d = r10

uint128_t zmm4 = var_d8.o
void* var_40 = arg1 + 0xa8
uint128_t zmm0 = var_e8.o
uint128_t var_50 = zmm4
int16_t var_80 = 0
int512_t zmm2
zmm2.o = (arg1 + 0xa8).o
void* rax_11 = zmm0.q
uint128_t var_a8 = zmm0
int128_t var_b8 = zmm2.o
zmm0.q = (_mm_unpackhi_pd(zmm4, zmm4.q)).q
uint128_t var_98 = zmm0
int16_t* var_f8

if (_mm_bsrli_si128(zmm4, 4).d s< *(rax_11 + 0x18))
    int32_t i = var_a8:0xc.d
    
    do
        int64_t* r15_1 = var_b8.q
        int64_t r14_2 = sx.q(i) << 5
        int64_t var_78
        sub_140a2e390(&var_78, #include "/Engine/Generated/UniformBuffers/%s.ush"\r\n", 
            *(r14_2 + *r15_1))
        int32_t var_70
        int32_t r8_5
        
        if (var_70 == 0)
            r8_5 = 0
        else
            r8_5 = var_70 - 1
        
        sub_140a20ba0(&var_c8, var_78, r8_5)
        int64_t rcx_6 = var_78
        
        if (rcx_6 != 0)
            sub_140a74f90(rcx_6)
        
        sub_140a2e390(&var_e8, u"/Engine/Generated/UniformBuffers/%s.ush", *(r14_2 + *r15_1))
        int16_t* const rdi_1 = &data_142d40450
        int32_t rdx_5 = 0
        var_f8 = nullptr
        
        if (var_e0.d != 0)
            rdi_1 = var_e8.q
        
        int32_t rcx_8 = 0
        int64_t var_f0
        var_f0.d = 0
        var_f0:4.d = 0
        
        if (rdi_1 != 0 && *rdi_1 != 0)
            int64_t rbx_2 = -1
            
            do
                rbx_2 += 1
            while (rdi_1[rbx_2] != 0)
            
            if (rbx_2.d + 1 s> 0)
                sub_1405947f0(&var_f8, rbx_2.d + 1)
                rcx_8 = var_f0:4.d
                rdx_5 = var_f0.d
            
            int32_t rax_14 = rdx_5 + rbx_2.d + 1
            var_f0.d = rax_14
            
            if (rax_14 s> rcx_8)
                sub_140594770(&var_f8)
            
            UnDecorator::getReferenceType(var_f8, rdi_1, (rbx_2.d + 1) * 2)
        
        sub_1419be810(arg2 + 0x60, &var_f8, *r15_1 + 8 + r14_2)
        int16_t* rcx_13 = var_f8
        
        if (rcx_13 != 0)
            sub_140a74f90(rcx_13)
        
        int64_t rcx_14 = var_e8.q
        
        if (rcx_14 != 0)
            sub_140a74f90(rcx_14)
        
        for (void** j = data_143f1d998; j != 0; j = *j)
            void* rcx_15 = j[2]
            
            if (*(r14_2 + *r15_1) == *(rcx_15 + 0x10))
                sub_1419c60a0(rcx_15, arg2 + 0x110, arg2 + 0x160, arg2 + 0x1b0, zmm2)
        
        var_a8:8.d &= not.d(var_b8:0xc.d)
        sub_14059bdd0(&var_b8:8)
        i = var_a8:0xc.d
    while (i s< *(var_a8.q + 0x18))
    
    if (var_80.b != 0 && var_80:1.b != 0)
        sub_1408854b0(arg1 + 0xa8, *(arg1 + 0xb0) - *(arg1 + 0xdc), 1)

var_f8 = nullptr
int64_t var_f0_1 = 0
sub_1405947f0(&var_f8, 0x2e)
int32_t r15_2 = var_f0_1.d + 0x2e
var_f0_1.d = r15_2

if (r15_2 s> 0)
    sub_140594770(&var_f8)
    r15_2 = var_f0_1.d

int16_t* r13 = var_f8
int16_t var_108 = 0x3f
sub_1405a7220(r13, 0x2e, "/Engine/Generated/GeneratedUniformBuffers.ush", 0x2e, 0x3f)
int32_t rcx_21
int16_t* rdx_14

if (r15_2 == 0)
    rdx_14 = &data_142d40450
    rcx_21 = 0
else
    rdx_14 = r13
    rcx_21 = r15_2 - 1

int32_t rax_19 = sub_1405969c0(rcx_21, rdx_14)
int32_t rcx_22 = *(arg2 + 0x18)
int32_t arg_8 = rax_19
int64_t* rbx_7

if (rcx_22 == *(arg2 + 0x44))
label_1419c5957:
    sub_1405d1820(arg2 + 0x10, &var_e8)
    int32_t r8_17 = arg_8
    *var_e0 = r13
    *(var_e0 + 0xc) = var_f0_1:4.d
    int32_t rax_23 = var_e8
    *(var_e0 + 8) = r15_2
    *(var_e0 + 0x10) = 0
    *(var_e0 + 0x18) = 0
    *(var_e0 + 0x20) = 0xffffffff
    var_108.d = rax_23
    sub_1405d2a60(arg2 + 0x10, &arg_8, r8_17, var_e0, var_108, nullptr)
    rbx_7 = *(arg2 + 0x10) + ((sx.q(arg_8) * 5 + 2) << 3)
else
    void* rdx_15 = *(arg2 + 0x50)
    void* r9_2 = arg2 + 0x48
    
    if (rdx_15 != 0)
        r9_2 = rdx_15
    
    int32_t rbx_4 = *(r9_2 + (((sx.q(*(arg2 + 0x58)) - 1) & sx.q(rax_19)) << 2))
    
    if (rbx_4 == 0xffffffff)
        goto label_1419c5957
    
    int64_t rdx_16 = *(arg2 + 0x10)
    int64_t r14_3
    
    while (true)
        r14_3 = sx.q(rbx_4) * 0x28
        int64_t* rcx_25 = r14_3 + rdx_16
        int16_t* rdx_17 = &data_142d40450
        
        if (r15_2 != 0)
            rdx_17 = r13
        
        int16_t* const rcx_26
        
        if (rcx_25[1].d == 0)
            rcx_26 = &data_142d40450
        else
            rcx_26 = *rcx_25
        
        if (sub_140a54510(rcx_26, rdx_17) == 0)
            break
        
        rdx_16 = *(arg2 + 0x10)
        rbx_4 = *(r14_3 + rdx_16 + 0x20)
        
        if (rbx_4 == 0xffffffff)
            goto label_1419c5957
    
    if (rbx_4 == 0xffffffff)
        goto label_1419c5957
    
    void* rcx_32 = *(arg2 + 0x10)
    
    if (rcx_32 == neg.q(r14_3))
        goto label_1419c5957
    
    rbx_7 = rcx_32 + r14_3 + 0x10
    
    if (r13 != 0)
        sub_140a74f90(r13)

if (var_c0 != 0)
    r12 = var_c0 - 1

int32_t* result = sub_140a20ba0(rbx_7, var_c8, r12)
int64_t rdx_21 = sx.q(arg4)

if (rdx_21.d u> 0x30)
label_1419c5a58:
    
    if (*(rdx_21 * 0x14 + 0x143f025f8) s>= 1)
        result = sub_1408891d0(arg2 + 0x2a8, u"PLATFORM_SUPPORTS_SRV_UB", &(*U"RGBXYZF10|")[7])
else
    result = zx.q(lookup_table_1419c5aa8[rdx_21])
    
    switch (result)
        case nullptr
            result = sub_1408891d0(arg2 + 0x2a8, u"PLATFORM_SUPPORTS_SRV_UB", &(*U"RGBXYZF10|")[7])
        case 1
            goto label_1419c5a58

int64_t rcx_37 = var_c8

if (rcx_37 == 0)
    return result

return sub_140a74f90(rcx_37)
