// 函数: sub_141d06f30
// 地址: 0x141d06f30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1f8
int64_t rax_1 = __security_cookie ^ &var_1f8
uint64_t rbx
uint64_t arg_20 = rbx
uint64_t rsi
rsi.b = 1
int32_t r12 = 0
int16_t* r14 = arg2
void* r15 = arg1
int32_t rdx = 0
int32_t var_1c8 = 0
int32_t rcx = 0
int64_t var_98 = 0
int32_t var_90 = 0
int32_t var_6c = 0x80
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
int16_t* var_1c0
__builtin_memset(&var_1c0, 0, 0x20)
int64_t var_1b8

if (r14 != 0 && *r14 != 0)
    int64_t rbx_1 = -1
    
    do
        rbx_1 += 1
    while (r14[rbx_1] != 0)
    
    rbx = zx.q(rbx_1.d + 1)
    
    if (rbx.d s> 0)
        sub_1405947f0(&var_1c0, rbx.d)
        rcx = var_1b8:4.d
        rdx = var_1b8.d
    
    int32_t rax_2 = rbx.d + rdx
    var_1b8.d = rax_2
    
    if (rax_2 s> rcx)
        sub_140594770(&var_1c0)
    
    UnDecorator::getReferenceType(var_1c0, r14, rbx.d * 2)

sub_140b20c40(&var_1c0)
char rax_3 = sub_1405948d0()
int16_t* var_1a0
char rax_5

if (rax_3 != 0)
    r12 = 1
    rax_5 = sub_140a32a50(&var_1c0, sub_140b254c0(&var_1a0), 1)

int64_t var_168
char rax_7

if (rax_3 == 0 || rax_5 == 0)
    r12 |= 2
    rax_7 = sub_140a32a50(&var_1c0, sub_140b0f3a0(&var_168), 1)

if ((rax_3 != 0 && rax_5 != 0) || rax_7 != 0)
    rbx.b = 1
else
    rbx.b = 0

if ((r12.b & 2) != 0)
    int64_t rcx_9 = var_168
    r12 &= 0xfffffffd
    
    if (rcx_9 != 0)
        sub_140a74f90(rcx_9)

if ((r12.b & 1) != 0)
    int16_t* rcx_10 = var_1a0
    r12 &= 0xfffffffe
    
    if (rcx_10 != 0)
        sub_140a74f90(rcx_10)

uint64_t var_1b0
int64_t var_1a8

if (rbx.b == 0)
    EnterCriticalSection(r15 + 0x38)
    int64_t rdi_1 = sx.q(*(r15 + 0x18))
    
    if (rdi_1.d != 0)
        int32_t rax_8 = var_1a8.d
        int32_t rdx_5 = rax_8 + rdi_1.d
        
        if (rdx_5 s> var_1a8:4.d)
            sub_1405a5410(&var_1b0, rdx_5)
            rax_8 = var_1a8.d
        
        memcpy((sx.q(rax_8) << 4) + var_1b0, *(r15 + 0x10), (rdi_1 << 4).d)
        var_1a8.d += rdi_1.d
    
    if (r15 != -0x38)
        LeaveCriticalSection(r15 + 0x38)

int32_t i = 0
int32_t i_1 = 0

if (var_1a8.d s<= 0)
    goto label_141d07512

int64_t rdi_2 = 0
int64_t var_170_1 = 0
void** const var_190

do
    int16_t* const r8_4 = &data_142d40450
    char var_1d0_1 = 0
    
    if (var_1b8.d != 0)
        r8_4 = var_1c0
    
    int64_t* rcx_17 = *(var_1b0 + rdi_2 + 8)
    int64_t var_e8
    __builtin_memset(&var_e8, 0, 0x2c)
    int32_t var_bc_1 = 0x80
    int32_t var_b8_1 = 0xffffffff
    int32_t var_b4_1 = 0
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0
    sub_141cf2ef0(rcx_17, &var_e8, r8_4, 1, 1, var_1d0_1)
    int64_t var_d8
    int64_t* var_188_1 = &var_d8
    int32_t rcx_18 = 0
    var_190.d = 0
    int32_t r8_5 = 0
    var_190:4.d = 1
    int64_t var_180
    var_180.d = 0xffffffff
    var_180 = 0
    int32_t var_c0
    
    if (var_c0 != 0)
        int64_t* r9_2 = &var_d8
        int64_t* var_c8
        
        if (var_c8 != 0)
            r9_2 = var_c8
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(var_c0 - 1)
        int32_t rdx_10 = *r9_2
        
        if (rdx_10 != 0)
        label_141d0725b:
            int32_t rax_17 = ((rdx_10 - 1) & rdx_10) ^ rdx_10
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_17)
            var_190:4.d = rax_17
            int32_t rax_18
            
            if (rax_17 == 0)
                rax_18 = 0x20
            else
                rax_18 = 0x1f - temp0_2
            
            int32_t rax_19 = r8_5 - rax_18 + 0x1f
            
            if (rax_19 s> var_c0)
                rax_19 = var_c0
            
            var_180:4.d = rax_19
        else
            while (true)
                int64_t rdx_11 = sx.q(rcx_18)
                r8_5 += 0x20
                rcx_18 += 1
                int64_t var_178
                var_178.d = r8_5
                var_190.d = rcx_18
                
                if (rdx_11.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    var_180:4.d = var_c0
                    break
                
                rdx_10 = *(r9_2 + (rdx_11 << 2) + 4)
                var_180.d = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_141d0725b
    
    arg4 = var_180.o
    double var_110_1[0x2] = var_190.o
    uint32_t rax_21 = (arg4[0] u>> 0x20).d
    double var_100_1[0x2] = arg4
    double var_158[0x2] = (&var_e8).o
    int64_t var_138_1 = (_mm_unpackhi_pd(arg4, arg4[0])).q
    
    if (rax_21 s< var_c0)
        int32_t rcx_20 = var_110_1[1]:4.d
        
        while (rsi.b != 0)
            int64_t* r15_1 = *var_158[0] + sx.q(rcx_20) * 0x18
            void var_130
            int32_t* rax_24
            int64_t r8_8
            rax_24, r8_8 = sub_140960120(&var_98, &var_130, r15_1)
            
            if (*rax_24 == 0xffffffff)
                int32_t rcx_23 = r15_1[1].d
                
                if (rcx_23 == 0)
                    rsi.b = (*(*arg3 + 8))(arg3, &data_142d40450, 0) != 0
                else
                    int32_t rbx_3 = rcx_23 - 1
                    int32_t rax_25
                    int16_t* rdx_14
                    
                    if (rbx_3 != 0)
                        rdx_14 = *r15_1
                        rax_25 = rbx_3
                        
                        if (rcx_23 == 0)
                            rax_25 = 0
                    
                    if (rbx_3 != 0 && rdx_14[sx.q(rax_25) - 1] == 0x2f)
                        if (rcx_23 == 0)
                            rbx_3 = 0
                        
                        int16_t* const r14_1 = &data_142d40450
                        
                        if (rcx_23 != 0)
                            r14_1 = rdx_14
                        
                        int32_t rax_28
                        int32_t rbx_4
                        
                        if (rbx_3 - 1 s>= 0)
                            rbx_4 = rbx_3 - 1
                            rax_28 = 0
                        else
                            rax_28 = 0
                            rbx_4 = 0
                        
                        var_1a0 = nullptr
                        int16_t* rdi_3 = nullptr
                        int64_t var_198_1 = 0
                        int32_t rdx_15 = 0
                        
                        if (r14_1 != 0 && *r14_1 != 0 && rbx_4 s> 0)
                            if (rbx_4 + 1 s> 0)
                                sub_1405947f0(&var_1a0, rbx_4 + 1)
                                rax_28 = var_198_1:4.d
                                rdx_15 = var_198_1.d
                                rdi_3 = var_1a0
                            
                            rsi = zx.q(rdx_15 + 1 + rbx_4)
                            var_198_1.d = rsi.d
                            
                            if (rsi.d s> rax_28)
                                sub_140594770(&var_1a0)
                                rsi = zx.q(var_198_1.d)
                                rdi_3 = var_1a0
                            
                            UnDecorator::getReferenceType(rdi_3, r14_1, rbx_4 * 2)
                            rdi_3[sx.q(rsi.d) - 1] = 0
                        
                        int16_t* const rdx_18
                        
                        if (r14_1 == 0 || *r14_1 == 0 || rbx_4 s<= 0 || rsi.d == 0)
                            rdx_18 = &data_142d40450
                        else
                            rdx_18 = rdi_3
                        
                        r8_8.b = 1
                        rsi.b = (*(*arg3 + 8))(arg3, rdx_18, r8_8) != 0
                        r12 = (r12 | 4) & 0xfffffffb
                        
                        if (rdi_3 != 0)
                            sub_140a74f90(rdi_3)
                    else if (rcx_23 == 0)
                        rsi.b = (*(*arg3 + 8))(arg3, &data_142d40450, 0) != 0
                    else
                        rsi.b = (*(*arg3 + 8))(arg3, *r15_1, 0) != 0
                
                sub_140598750(&var_98, &var_168)
                int64_t* var_160
                sub_140596d10(var_160, r15_1)
                var_160[2].d = 0xffffffff
                int32_t rax_34 = var_160[1].d
                int16_t* rdx_22
                
                if (rax_34 == 0)
                    rdx_22 = &data_142d40450
                else
                    rdx_22 = *var_160
                
                int32_t rcx_33 = rax_34 - 1
                
                if (rax_34 == 0)
                    rcx_33 = 0
                
                int32_t rax_35 = sub_1405969c0(rcx_33, rdx_22)
                var_1d0_1.q = 0
                char var_1d8_1
                var_1d8_1.d = var_168.d
                void var_12c
                sub_14059a6d0(&var_98, &var_12c, rax_35, var_160, var_1d8_1, var_1d0_1)
            
            var_110_1[1].d &= not.d(var_158[1]:4.d)
            sub_14059bdd0(&var_158[1])
            rcx_20 = var_110_1[1]:4.d
            
            if (rcx_20 s>= *(var_110_1[0] i+ 0x18))
                break
        
        i = i_1
        rdi_2 = var_170_1
    
    int32_t var_a0_2 = 0
    
    if (var_a8_1 != 0)
        sub_140a74f90(var_a8_1)
    
    sub_140669e00(&var_e8)
    i += 1
    rdi_2 += 0x10
    i_1 = i
    var_170_1 = rdi_2
while (i s< var_1a8.d)

if (rsi.b != 0)
    r14 = arg2
    r15 = arg1
label_141d07512:
    int64_t* rcx_38 = *(r15 + 8)
    
    if ((*(*rcx_38 + 0xd8))(rcx_38, r14, arg4) != 0)
        if (var_90 != var_64)
            int64_t* var_188_2 = arg3
            var_190 = &data_14321cbe0
            int64_t* var_180_1 = &var_98
            uint64_t* var_178_1 = &var_1b0
        
        rsi = zx.q((*(**(r15 + 8) + 0x100))())

int16_t* rcx_40 = var_1c0

if (rcx_40 != 0)
    sub_140a74f90(rcx_40)

uint64_t rcx_41 = var_1b0

if (rcx_41 != 0)
    sub_140a74f90(rcx_41)

int32_t var_50_1 = 0

if (var_58 != 0)
    sub_140a74f90(var_58)

sub_140669e00(&var_98)
__security_check_cookie(rax_1 ^ &var_1f8)
return zx.q(rsi.b)
