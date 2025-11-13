// 函数: sub_140cbbb90
// 地址: 0x140cbbb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = arg3 + 1
uint64_t r15
r15.b = 0
char arg_18 = 0
arg_18 = 0
int64_t r14 = arg4
uint64_t* result = arg2
void* r9 = arg1
int32_t r12 = 2
uint64_t rsi = 0
int32_t rdi = 0

if (i == 0)
    goto label_140cbc0a7

int64_t rcx = *(arg1 + 0x18)
uint64_t var_178
uint64_t var_168
uint64_t var_158
int64_t var_e0
int32_t r14_3

do
    int128_t* r12_3 = (sx.q(i) << 7) - 0x80
    int128_t var_c8 = *(r12_3 + rcx)
    int128_t var_b8_1 = *(r12_3 + rcx + 0x10)
    int128_t var_a8_1 = *(r12_3 + rcx + 0x20)
    int128_t var_98_1 = *(r12_3 + rcx + 0x30)
    int104_t var_88_1 = (*(r12_3 + rcx + 0x40)).13
    int128_t var_78_1 = *(r12_3 + rcx + 0x50)
    int128_t var_68_1 = *(r12_3 + rcx + 0x60)
    int128_t var_58_1 = *(r12_3 + rcx + 0x70)
    uint64_t rbx_2
    
    if (rdi == 0 || rdi - 1 s<= 0)
        rbx_2 = 0
    else
        int32_t r8 = var_c8:8.d
        
        if (r8 == 0)
            goto label_140cbbccd
        
        int32_t rcx_2
        int32_t r14_1
        int32_t var_130
        int32_t var_12c
        
        if (r8 s<= 0)
            rcx_2 = 0
            var_12c = 0
            var_130 = 0
            r14_1 = 0
        else
            sub_140cbb7c0(r9, &var_130, r8 - 1)
            rcx_2 = var_130
            r14_1 = var_12c
        char rax_1 = sub_140b5b8a0(rcx_2, 0xcf)
        rcx_2.b = r14_1 == 0
        uint64_t r14_2
        
        if ((rcx_2.b & rax_1) == 0)
        label_140cbbe3a:
            var_178 = 0
            int32_t var_170
            var_170.q = 0
            sub_1405947f0(&var_178, 2)
            int32_t var_16c
            int32_t r15_2 = var_16c
            int32_t rbx_3 = var_170 + 2
            
            if (rbx_3 s> r15_2)
                sub_140594770(&var_178)
                r15_2 = var_16c
            
            r14_2 = var_178
            UnDecorator::getReferenceType(r14_2, &data_142d404c4, 4)
            uint64_t rbx_4
            
            if (rbx_3 s> 1)
                uint64_t var_110 = r14_2
                int32_t var_104_1 = r15_2
                int32_t rax_4
                rax_4.b = rbx_3 == 0
                var_170.q = 0
                r14_2 = 0
                int32_t rdx_12 = rbx_3 + rax_4 + rdi - 1
                
                if (rdx_12 s> r15_2)
                    sub_1405947f0(&var_110, rdx_12)
                
                sub_140a20ba0(&var_110, rsi, rdi - 1)
                rbx_4 = var_110
                var_110 = 0
                rdi = rbx_3
                int32_t var_108_1
                var_108_1.q = 0
            else
                var_158 = 0
                sub_1405a4c70(&var_158, rdi, 0)
                rbx_4 = var_158
                memcpy(rbx_4, rsi, rdi * 2)
            
            if (rsi != 0)
                sub_140a74f90(rsi)
            
            rsi = rbx_4
            rbx_2 = 0
            var_158 = 0
            int32_t var_150
            var_150.q = 0
        else
            r9 = arg1
        label_140cbbccd:
            int32_t var_124
            int32_t rcx_4
            int32_t var_128
            
            if (i s<= 0)
                rcx_4 = 0
                var_124 = 0
                var_128 = 0
            else
                sub_140cbb7c0(r9, &var_128, i - 1)
                rcx_4 = var_128
            rcx_4.b = sub_140b5b8a0(rcx_4, 0xcf) == 0
            
            if ((var_124 != 0 | rcx_4.b) == 0)
                goto label_140cbbe3a
            
            uint64_t var_148 = 0
            int64_t var_140_1 = 0
            sub_1405947f0(&var_148, 2)
            int32_t r15_1 = var_140_1:4.d
            int32_t rbx = var_140_1.d + 2
            var_140_1.d = rbx
            
            if (rbx s> r15_1)
                sub_140594770(&var_148)
                r15_1 = var_140_1:4.d
                rbx = var_140_1.d
            
            r14_2 = var_148
            UnDecorator::getReferenceType(r14_2, &data_142d84ee0, 4)
            uint64_t var_f0
            uint64_t rbx_1
            
            if (rbx s> 1)
                uint64_t var_120 = r14_2
                int32_t var_114_1 = r15_1
                int32_t rax_3
                rax_3.b = rbx == 0
                int64_t var_140_2 = 0
                r14_2 = 0
                int32_t rdx_6 = rbx + rax_3 + rdi - 1
                
                if (rdx_6 s> r15_1)
                    sub_1405947f0(&var_120, rdx_6)
                
                sub_140a20ba0(&var_120, rsi, rdi - 1)
                rbx_1 = var_120
                var_120 = 0
                rdi = rbx
                int32_t var_118_1
                var_118_1.q = 0
            else
                var_f0 = 0
                sub_1405a4c70(&var_f0, rdi, 0)
                rbx_1 = var_f0
                memcpy(rbx_1, rsi, rdi * 2)
            
            if (rsi != 0)
                sub_140a74f90(rsi)
            
            rsi = rbx_1
            rbx_2 = 0
            var_f0 = 0
            int32_t var_e8
            var_e8.q = 0
        
        if (r14_2 != 0)
            sub_140a74f90(r14_2)
        
        r15 = zx.q(arg_18)
    
    int64_t* rax_5 = sub_140b63b70(&var_c8, &var_e0)
    int32_t rax_6 = rax_5[1].d
    uint64_t var_100
    
    if (rax_6 s> 1)
        int32_t rbx_5 = rdi - 1
        
        if (rdi == 0)
            rbx_5 = 0
        
        int32_t r8_11
        
        if (rax_6 == 0)
            r8_11 = 1
        
        if (rax_6 != 0 || rbx_5 == 0)
            r8_11 = 0
        
        uint64_t rax_7 = *rax_5
        *rax_5 = 0
        int32_t rcx_25 = *(rax_5 + 0xc)
        var_168 = rax_7
        int32_t rax_8 = rax_5[1].d
        rax_5[1] = 0
        int32_t rdx_19 = rbx_5 + rax_8 + r8_11
        
        if (rdx_19 s> rcx_25)
            sub_1405947f0(&var_168, rdx_19)
        
        sub_140a20ba0(&var_168, rsi, rbx_5)
        rbx_2 = var_168
        r14_3 = rcx_25
        var_168 = 0
        rdi = rax_8
        int32_t var_160_1
        var_160_1.q = 0
    else
        var_100 = 0
        
        if (rdi != 0)
            sub_1405a4c70(&var_100, rdi, 0)
            rbx_2 = var_100
            memcpy(rbx_2, rsi, rdi * 2)
            int32_t var_f4
            r14_3 = var_f4
        else
            r14_3 = 0
    
    if (rsi != 0)
        sub_140a74f90(rsi)
    
    int64_t rcx_29 = var_e0
    var_100 = 0
    rsi = rbx_2
    int32_t var_f8
    var_f8.q = 0
    
    if (rcx_29 != 0)
        sub_140a74f90(rcx_29)
    
    if (r15.b != 0 || var_88_1:0xc.b != r15.b)
        r15.b = 1
    
    r9 = arg1
    arg_18 = r15.b
    rcx = *(r9 + 0x18)
    i = *(rcx + r12_3 + 8)
while (i != 0)

result = arg2

if (r15.b == 0)
    r14 = arg4
    r12 = 2
label_140cbc0a7:
    
    if (r14 == 0)
        goto label_140cbc151
    
    goto label_140cbc0b9

uint64_t* rax_10
int32_t r15_3

if (arg4 != 0)
    r14 = arg4
label_140cbc0b9:
    bool cond:0_1 = *r14 == 0
    int32_t rdx_21 = 0
    int32_t rcx_30 = 0
    int32_t var_170_1 = 0
    int32_t var_16c_1 = 0
    var_178 = 0
    
    if (not(cond:0_1))
        int64_t rbx_6 = -1
        
        do
            rbx_6 += 1
        while (*(r14 + (rbx_6 << 1)) != 0)
        
        if (rbx_6.d + 1 s> 0)
            sub_1405947f0(&var_178, rbx_6.d + 1)
            rcx_30 = var_16c_1
            rdx_21 = var_170_1
        
        int32_t rax_9 = rdx_21 + rbx_6.d + 1
        int32_t var_170_2 = rax_9
        
        if (rax_9 s> rcx_30)
            sub_140594770(&var_178)
        
        UnDecorator::getReferenceType(var_178, r14, (rbx_6.d + 1) * 2)
    
    r15_3 = 1
    rax_10 = &var_178
    r12 = 1
    goto label_140cbc15c

if (arg5 == i.b)
    r12 = 2
label_140cbc151:
    rax_10 = sub_140d21e10(*(r9 + 0xa0), &var_e0, 0)
    r15_3 = 1
label_140cbc15c:
    uint64_t rcx_35 = *rax_10
    int32_t rdx_25 = rax_10[1].d
    int32_t rdx_26 = neg.d(rdx_25)
    *rax_10 = 0
    int32_t r8_15 = rax_10[1].d
    var_168 = rcx_35
    int32_t rcx_36 = *(rax_10 + 0xc)
    int32_t rdx_29 = sbb.d(rdx_26, rdx_26, rdx_25 != 0) + 2 + r8_15
    rax_10[1] = 0
    
    if (rdx_29 s> rcx_36)
        sub_1405947f0(&var_168, rdx_29)
    
    sub_140a20ba0(&var_168, &data_142d404c4, 1)
    uint64_t r14_4 = var_168
    var_168 = 0
    int32_t var_160_2
    var_160_2.q = 0
    
    if (r8_15 s> 1)
        int32_t rbx_8 = rdi - 1
        
        if (rdi == 0)
            rbx_8 = 0
        
        if (r8_15 != 0 || rbx_8 == 0)
            r15_3 = 0
        
        var_158 = r14_4
        int32_t rdx_33 = r15_3 + rbx_8 + r8_15
        
        if (rdx_33 s> rcx_36)
            sub_1405947f0(&var_158, rdx_33)
        
        sub_140a20ba0(&var_158, rsi, rbx_8)
        *result = var_158
        result[1].d = r8_15
        *(result + 0xc) = rcx_36
    else
        *result = 0
        result[1].d = rdi
        
        if (rdi != 0)
            sub_1405a4c70(result, rdi, 0)
            memcpy(*result, rsi, rdi * 2)
        else
            *(result + 0xc) = 0
        
        if (r14_4 != 0)
            sub_140a74f90(r14_4)
    
    if ((r12.b & 2) != 0)
        int64_t rcx_45 = var_e0
        r12 &= 0xfffffffd
        
        if (rcx_45 != 0)
            sub_140a74f90(rcx_45)
    
    if ((r12.b & 1) != 0)
        uint64_t rcx_46 = var_178
        
        if (rcx_46 != 0)
            sub_140a74f90(rcx_46)
    
    if (rsi != 0)
        sub_140a74f90(rsi)
else
    *result = rsi
    result[1].d = rdi
    *(result + 0xc) = r14_3

return result
