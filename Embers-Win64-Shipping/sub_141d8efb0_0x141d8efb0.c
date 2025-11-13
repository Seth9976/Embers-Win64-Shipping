// 函数: sub_141d8efb0
// 地址: 0x141d8efb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax = sub_140b257f0()
uint64_t r8

if (rax[1].d == 0)
    r8 = &data_142d40450
else
    r8 = *rax

int64_t* rbx = nullptr
uint64_t var_148 = r8
uint64_t var_138 = 0
int32_t var_140 = 0x43238d70
int64_t var_130 = 0
int32_t rcx_1 = sub_140b0f5f0(&var_138, &var_148, 2)
int32_t rdx_1 = var_130.d
uint64_t var_c8 = var_138
int32_t rax_3 = var_130:4.d
int32_t rdx_2 = rdx_1 + sbb.d(rcx_1, rcx_1, rdx_1 != 0) + 2
var_138 = 0
int32_t var_bc = rax_3
int64_t var_130_1 = 0

if (rdx_2 s> rax_3)
    sub_1405947f0(&var_c8, rdx_2)

sub_140a20ba0(&var_c8, &data_142d6bbe8, 1)
uint64_t rcx_6 = var_138

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t* var_128 = nullptr
int32_t i_4 = 0
sub_140a464c0()
uint64_t r8_1 = &data_142d40450
uint64_t r14 = var_c8

if (rdx_1 != 0)
    r8_1 = r14

(*(data_14399ea08 + 0x78))(&data_14399ea08, &var_128, r8_1, 0, 1)
int64_t* rsi = var_128
void** const var_b8 = &data_1432388c8
void* rax_6 = &rsi[sx.q(i_4) * 2]
int32_t var_b0 = 6
int64_t var_a8
__builtin_memset(&var_a8, 0, 0x1c)

if (rsi != rax_6)
    do
        uint64_t var_50[0x3]
        uint64_t* rax_7 = Concurrency::details::ScheduleGroupBase::LocateSegment(&var_50, rsi)
        uint64_t rcx_8 = *rax_7
        int32_t rdx_5 = rax_7[1].d
        int32_t rdx_6 = neg.d(rdx_5)
        *rax_7 = 0
        int32_t r8_2 = rax_7[1].d
        var_148 = rcx_8
        int32_t rcx_9 = *(rax_7 + 0xc)
        int32_t rdx_9 = sbb.d(rdx_6, rdx_6, rdx_5 != 0) + 6 + r8_2
        var_140 = r8_2
        rax_7[1] = 0
        
        if (rdx_9 s> rcx_9)
            sub_1405947f0(&var_148, rdx_9)
        
        sub_140a20ba0(&var_148, u".demo", 5)
        uint64_t rcx_12 = var_50[0]
        uint64_t r14_1 = var_148
        var_148 = 0
        var_140 = 0
        
        if (rcx_12 != 0)
            sub_140a74f90(rcx_12)
        
        int64_t r15_1 = 0
        int64_t var_118
        __builtin_memset(&var_118, 0, 0x28)
        int64_t rdi_1 = 0
        int32_t r12_1 = 0
        int64_t var_e8_1 = 0
        char var_e0_1 = 0
        int32_t var_dc_1 = 0
        char var_d8_1 = 0
        sub_140a464c0()
        uint64_t rdx_10 = &data_142d40450
        
        if (rcx_9 != 0)
            rdx_10 = r14_1
        
        char const (* r8_3)[0x4] = data_14399ea08
        int64_t rax_8 = (*(r8_3 + 0x108))(&data_14399ea08, rdx_10, r8_3)
        void** var_80
        sub_141d90b00(&var_80, rsi)
        char var_54
        int64_t var_68
        
        if (var_54 != 0)
            int32_t rcx_15 = *(arg2 + 0x14)
            int32_t rax_10 = *(arg2 + 0x10)
            int32_t var_74
            char rdx_12
            
            if (rax_10 == 0 || rax_10 == var_74)
                rdx_12 = 1
            else
                rdx_12 = 0
            
            int32_t var_70
            
            if (rcx_15 == 0 || rcx_15 == var_70)
                rax_10.b = 1
            else
                rax_10.b = 0
            
            if (rdx_12 != 0 && rax_10.b != 0)
                int64_t var_100_1
                
                if (&var_118 != rsi)
                    int32_t rdi_2 = rsi[1].d
                    int64_t r15_2 = *rsi
                    int64_t var_110_1
                    var_110_1.d = rdi_2
                    
                    if (rdi_2 != 0)
                        sub_1405a4c70(&var_118, rdi_2, 0)
                        memcpy(var_118, r15_2, rdi_2 * 2)
                        r12_1 = var_100_1:4.d
                
                sub_140a464c0()
                uint64_t r8_7 = &data_142d40450
                
                if (rcx_9 != 0)
                    r8_7 = r14_1
                
                char const (* r9_1)[0x4] = data_14399ea08
                int64_t rcx_18 = *(*(r9_1 + 0xd0))(&data_14399ea08, &var_138, r8_7, r9_1)
                char rax_12 = sub_141d90910(arg1, rsi)
                int32_t var_78
                var_e8_1.d = var_78
                int32_t var_60
                var_100_1.d = var_60
                int64_t var_108
                
                if (var_60 != 0 || r12_1 != 0)
                    sub_1405a4c70(&var_108, var_60, r12_1)
                    memcpy(var_108, var_68, var_60 * 2)
                else
                    var_100_1:4.d = 0
                
                int64_t var_a0_1
                int64_t rdi_4 = sx.q(var_a0_1.d)
                int32_t rax_15 = (rdi_4 + 1).d
                var_a0_1.d = rax_15
                
                if (rax_15 s> var_a0_1:4.d)
                    sub_140775520(&var_a8)
                
                int64_t* rdi_5 = var_a8 + rdi_4 * 0x48
                sub_140596d10(rdi_5, &var_118)
                sub_140596d10(&rdi_5[2], &var_108)
                r15_1 = var_118
                rdi_5[4] = rcx_18
                rdi_5[5] = rax_8
                rdi_5[6].d = var_e8_1.d
                *(rdi_5 + 0x34) = var_e8_1:4.d
                rdi_5[7].b = rax_12
                *(rdi_5 + 0x3c) = var_70
                rdi_5[8].b = var_d8_1
                rdi_1 = var_108
            
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            var_80 = &data_142e1f570
            
            if (rdi_1 != 0)
                sub_140a74f90(rdi_1)
            
            if (r15_1 != 0)
                sub_140a74f90(r15_1)
        else
            if (var_68 != 0)
                sub_140a74f90(var_68)
            
            var_80 = &data_142e1f570
        
        if (r14_1 != 0)
            sub_140a74f90(r14_1)
        
        rsi = &rsi[2]
    while (rsi != rax_6)
    
    r14 = var_c8

int32_t var_b0_1 = 0

if (arg3[1].d != 0)
    int64_t* rcx_30 = *arg3
    
    if (rcx_30 != 0 && (*(*rcx_30 + 0x28))(rcx_30) != 0)
        if (arg3[1].d != 0)
            rbx = *arg3
        
        (*(*rbx + 0x50))(rbx, &var_b8)

int32_t i_5
int32_t i_2 = i_5
int64_t* var_98
int64_t* rbx_1 = var_98

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_32 = *rbx_1
        
        if (rcx_32 != 0)
            sub_140a74f90(rcx_32)
        
        rbx_1 = &rbx_1[2]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (var_98 != 0)
    sub_140a74f90(var_98)

sub_141d8e6b0(&var_a8)
int32_t i_3 = i_4
void** const result = &data_142d5a028
int64_t* rbx_2 = var_128
var_b8 = &data_142d5a028

if (i_3 != 0)
    int32_t i_1
    
    do
        int64_t rcx_35 = *rbx_2
        
        if (rcx_35 != 0)
            result = sub_140a74f90(rcx_35)
        
        rbx_2 = &rbx_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rbx_2 = var_128

if (rbx_2 != 0)
    result = sub_140a74f90(rbx_2)

if (r14 == 0)
    return result

return sub_140a74f90(r14)
