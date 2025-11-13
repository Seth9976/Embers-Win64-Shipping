// 函数: sub_140d32080
// 地址: 0x140d32080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = arg4
int32_t var_a8 = 0
void* r13 = nullptr
int32_t r15 = arg2[1].d
int64_t rbx = *arg2
void* var_90 = nullptr
int32_t var_a8_1 = r15
int32_t var_84
int16_t* r12

if (r15 != 0)
    sub_1405a4c70(&var_90, r15, 0)
    r13 = var_90
    memcpy(r13, rbx, r15 * 2)
    r12 = r13
    var_a8_1 = r15
else
    var_84 = 0
    r12 = nullptr

int64_t var_80 = 0
int32_t var_78 = 0
sub_1405947f0(&var_80, 5)
int32_t rax = var_78 + 5

if (rax s> 0)
    sub_140594770(&var_80)

UnDecorator::getReferenceType(var_80, u"__pf", 0xa)
void* rcx_5 = &r12[sx.q(r15)]
void* rax_2 = rcx_5 - 2

if (r15 == 0)
    rax_2 = rcx_5

void* var_a0 = rax_2
void* var_70
int32_t var_64

if (r12 != rax_2)
    void* r13_1 = rax_2
    
    do
        int16_t i_1 = *r12
        
        if ((i_1 - 0x30 u> 0x2f || not(test_bit(0x87fffffe03ff, zx.q(i_1 - 0x30))))
                && i_1 - 0x61 u> 0x19)
            uint32_t i = zx.d(i_1)
            var_70 = nullptr
            void* rsi_1 = nullptr
            var_64 = 0
            int32_t r8_2 = 0
            int32_t r10_1 = 0
            int32_t r8_5
            
            if (i == 0)
                r8_5 = 0
            else
                do
                    int32_t r14_1 = i s% 0x3f
                    i = i s/ 0x3f * 0x3f s/ 0x3f
                    int16_t rbx_1
                    
                    if (r14_1 s> 0x19)
                        if (r14_1 s<= 0x33)
                            rbx_1 = 0x74
                            goto label_140d3222b
                        
                        if (r14_1 s<= 0x3d)
                            rbx_1 = 0x6d
                            goto label_140d3222b
                        
                        rbx_1 = 0x5f
                    label_140d3223a:
                        int32_t rdi_1 = r8_2 - 1
                        
                        if (r8_2 s<= 0)
                            rdi_1 = 0
                        
                        int32_t r8_3
                        r8_3.b = r8_2 s<= 0
                        r8_2 += r8_3 + 1
                        
                        if (r8_2 s> r10_1)
                            sub_140594770(&var_70)
                            r10_1 = var_64
                            rsi_1 = var_70
                        
                        int64_t rax_10 = sx.q(rdi_1)
                        *(rsi_1 + (rax_10 << 1)) = rbx_1
                        *(rsi_1 + (rax_10 << 1) + 2) = 0
                    else
                        rbx_1 = 0x7a
                    label_140d3222b:
                        rbx_1 -= r14_1.w
                        
                        if (rbx_1 != 0)
                            goto label_140d3223a
                while (i != 0)
                
                r13_1 = var_a0
                
                if (r8_2 == 0)
                    r8_5 = 0
                else
                    r8_5 = r8_2 - 1
            
            sub_140a20ba0(&var_80, rsi_1, r8_5)
            
            if (rsi_1 != 0)
                sub_140a74f90(rsi_1)
            
            *r12 = 0x78
        
        r12 = &r12[1]
    while (r12 != r13_1)
    
    r15 = var_a8_1
    r13 = var_90
    rsi = arg4

var_a0 = nullptr
int32_t rax_11 = 0
int32_t var_94 = 0
void* r12_1 = nullptr
int32_t var_98 = 0
int32_t rdi_2 = 0

if (rsi != 0 && *rsi != 0)
    int64_t rbx_2 = -1
    
    do
        rbx_2 += 1
    while (rsi[rbx_2] != 0)
    
    if (rbx_2.d + 1 s> 0)
        sub_1405947f0(&var_a0, rbx_2.d + 1)
        rax_11 = var_94
        rdi_2 = var_98
        r12_1 = var_a0
    
    rdi_2 += rbx_2.d + 1
    
    if (rdi_2 s> rax_11)
        sub_140594770(&var_a0)
        r12_1 = var_a0
    
    UnDecorator::getReferenceType(r12_1, rsi, (rbx_2.d + 1) * 2)

if ((rsi == 0 || *rsi == 0 || rdi_2 == 0 || rdi_2 == 1) && r15 != 0 && r15 != 1
        && iswdigit(*r13) != 0)
    int32_t rbx_4 = r15
    r15 = rbx_4 + 1
    
    if (r15 s> var_84)
        sub_140594770(&var_90)
        r13 = var_90
    
    memmove(r13 + 2, r13, rbx_4 * 2)
    *r13 = 0x5f

int32_t r14_4 = 1
int32_t rax_15
void* rsi_2

if (rdi_2 s> 1)
    int32_t rbx_5 = r15 - 1
    
    if (r15 == 0)
        rbx_5 = 0
    
    int32_t rax_16
    
    if (rdi_2 == 0)
        rax_16 = 1
    
    if (rdi_2 != 0 || rbx_5 == 0)
        rax_16 = 0
    
    var_a0 = nullptr
    int32_t rcx_18 = rax_16 + rbx_5
    
    if (rdi_2 != 0 || rcx_18 != 0)
        sub_1405a4c70(&var_a0, rdi_2 + rcx_18, 0)
        memcpy(var_a0, r12_1, rdi_2 * 2)
    else
        var_94 = 0
    
    sub_140a20ba0(&var_a0, r13, rbx_5)
    rsi_2 = var_a0
    r15 = rdi_2
    rax_15 = var_94
    var_a0 = nullptr
    int32_t var_98_2
    var_98_2.q = 0
else
    var_70 = nullptr
    rsi_2 = nullptr
    
    if (r15 != 0)
        sub_1405a4c70(&var_70, r15, 0)
        rsi_2 = var_70
        memcpy(rsi_2, r13, r15 * 2)
        rax_15 = var_64
    else
        rax_15 = 0

void* var_60
int32_t rbx_6
void* rdi_4
int32_t r15_1

if (r15 s> 1)
    int32_t rbx_8
    
    if (rax == 0)
        rbx_8 = 0
    else
        rbx_8 = rax - 1
    
    int32_t rcx_24
    
    if (r15 == 0)
        rcx_24 = 1
    
    if (r15 != 0 || rbx_8 == 0)
        rcx_24 = 0
    
    var_70 = rsi_2
    rsi_2 = nullptr
    int32_t rdx_23 = rcx_24 + r15 + rbx_8
    var_64 = rax_15
    
    if (rdx_23 s> rax_15)
        sub_1405947f0(&var_70, rdx_23)
    
    sub_140a20ba0(&var_70, var_80, rbx_8)
    rdi_4 = var_70
    rbx_6 = r15
    r15_1 = var_64
    var_70 = nullptr
    int32_t var_68_3
    var_68_3.q = 0
else
    rbx_6 = rax
    int64_t rdi_3 = var_80
    var_60 = nullptr
    
    if (rbx_6 != 0)
        sub_1405a4c70(&var_60, rbx_6, 0)
        rdi_4 = var_60
        memcpy(rdi_4, rdi_3, rbx_6 * 2)
        int32_t var_54
        r15_1 = var_54
    else
        r15_1 = 0
        rdi_4 = nullptr

if (r13 != 0)
    sub_140a74f90(r13)

var_90 = rdi_4

if (rsi_2 != 0)
    sub_140a74f90(rsi_2)

int16_t* const rcx_30

if (arg2[1].d == 0)
    rcx_30 = &data_142d40450
else
    rcx_30 = *arg2

int32_t rax_17
int32_t rcx_31
rax_17, rcx_31 = sub_140a54510(rcx_30, u"Replicate to server")

if (rax_17 == 0 && rdi_4 != u"MagicNameWorkaround")
    int32_t rdx_25 = 0
    int32_t var_88_2 = 0
    
    if (r15_1 != 0x14)
        rcx_31 = sub_1405947f0(&var_90, 0x14)
        rdx_25 = var_88_2
        rdi_4 = var_90
    
    rbx_6 = rdx_25 + 0x14
    
    if (rbx_6 s> r15_1)
        rcx_31 = sub_140594770(&var_90)
        rdi_4 = var_90
    
    __builtin_memcpy(rdi_4, u"MagicNameWorkaro", 0x20)
    *(rdi_4 + 0x20) = 0x64006e0075

var_70 = nullptr
void** rcx_38

if (arg3 == 0)
    if (rbx_6 != 0)
        sub_1405a4c70(&var_70, rbx_6, 0)
        memcpy(var_70, rdi_4, rbx_6 * 2)
    else
        int32_t var_64_1 = 0
    
    rcx_38 = &var_70
    r14_4 = 2
else
    sub_1405a4c70(&var_70, sbb.d(rcx_31, rcx_31, rbx_6 != 0) + 0xc + rbx_6, 0)
    memcpy(var_70, rdi_4, rbx_6 * 2)
    sub_140a20ba0(&var_70, u"_DEPRECATED", 0xb)
    rcx_38 = &var_60
    var_60 = var_70
    int32_t var_58_2 = rbx_6
    int32_t var_54_1 = var_64

void* rax_23 = *rcx_38
*rcx_38 = nullptr
*arg1 = rax_23
arg1[1].d = rcx_38[1].d
*(arg1 + 0xc) = *(rcx_38 + 0xc)
rcx_38[1] = 0

if ((r14_4.b & 2) != 0)
    void* rcx_41 = var_70
    r14_4 &= 0xfffffffd
    
    if (rcx_41 != 0)
        sub_140a74f90(rcx_41)

if ((r14_4.b & 1) != 0)
    void* rcx_42 = var_60
    
    if (rcx_42 != 0)
        sub_140a74f90(rcx_42)

if (r12_1 != 0)
    sub_140a74f90(r12_1)

int64_t rcx_44 = var_80

if (rcx_44 != 0)
    sub_140a74f90(rcx_44)

if (rdi_4 != 0)
    sub_140a74f90(rdi_4)

return arg1
