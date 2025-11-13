// 函数: sub_140cbdce0
// 地址: 0x140cbdce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
*arg2 = 0
arg2[1] = 0
int128_t zmm0 = *(arg1 + 0x10)
void* r14 = arg1
void* i = zmm0.q
int128_t var_48 = zmm0
uint64_t var_58
int64_t var_50

if (i != 0)
    do
        if (var_48:8.b != 0)
            int64_t* rax_6 = sub_140d21e10(i, &var_48, arg3)
            int32_t rcx_19 = rax_6[1].d
            int32_t r8_5 = rcx_19 - 1
            
            if (rcx_19 == 0)
                r8_5 = 0
            
            sub_140a20ba0(arg2, *rax_6, r8_5)
            int64_t rcx_21 = var_48.q
            
            if (rcx_21 != 0)
                sub_140a74f90(rcx_21)
            
            int32_t rdx_11 = arg2[1].d
            int32_t rax_7
            rax_7.b = rdx_11 s<= 0
            int32_t rsi_3 = rdx_11 - 1
            
            if (rdx_11 s<= 0)
                rsi_3 = 0
            
            int32_t rax_9 = rax_7 + 1 + rdx_11
            arg2[1].d = rax_9
            
            if (rax_9 s> *(arg2 + 0xc))
                sub_140594770(arg2)
            
            int64_t rcx_23 = sx.q(rsi_3)
            *(*arg2 + (rcx_23 << 1)) = 0x3a
            *(*arg2 + (rcx_23 << 1) + 2) = 0
            break
        
        uint64_t var_88
        int64_t var_80
        int32_t rcx_1
        
        if (i == 0)
            var_88 = 0
            var_80 = 0
            sub_1405947f0(&var_88, 5)
            int32_t rax_1 = var_80.d + 5
            var_80.d = rax_1
            
            if (rax_1 s> 0)
                sub_140594770(&var_88)
            
            rcx_1 = UnDecorator::getReferenceType(var_88, u"None", 0xa)
        else
            rcx_1 = sub_140b63b70(i + 0x28, &var_88)
        
        int32_t rdx_2 = var_80.d
        uint64_t var_68 = var_88
        int32_t rax_4 = var_80:4.d
        int32_t rdx_3 = rdx_2 + sbb.d(rcx_1, rcx_1, rdx_2 != 0) + 2
        var_88 = 0
        var_80 = 0
        
        if (rdx_3 s> rax_4)
            sub_1405947f0(&var_68, rdx_3)
        
        sub_140a20ba0(&var_68, &data_142d404c4, 1)
        uint64_t r12_1 = var_68
        int32_t r14_1 = arg2[1].d
        var_68 = 0
        int32_t var_60_1
        var_60_1.q = 0
        uint64_t var_78
        uint64_t rsi_1
        int32_t r15_2
        int32_t var_6c
        
        if (rdx_2 s> 1)
            int32_t rsi_2 = r14_1 - 1
            
            if (r14_1 == 0)
                rsi_2 = 0
            
            int32_t rcx_11
            
            if (rdx_2 == 0)
                rcx_11 = rdx_2 + 1
            
            if (rdx_2 != 0 || rsi_2 == 0)
                rcx_11 = 0
            
            var_58 = r12_1
            int32_t rdx_7 = rcx_11 + rsi_2 + rdx_2
            var_50.d = rdx_2
            var_50:4.d = rax_4
            r12_1 = 0
            
            if (rdx_7 s> rax_4)
                sub_1405947f0(&var_58, rdx_7)
            
            sub_140a20ba0(&var_58, *arg2, rsi_2)
            r15_2 = var_50:4.d
            rsi_1 = var_58
            r14_1 = var_50.d
            var_58 = 0
            var_6c = r15_2
            var_50 = 0
        else
            int64_t r15_1 = *arg2
            rsi_1 = 0
            var_78 = 0
            
            if (r14_1 != 0)
                sub_1405a4c70(&var_78, r14_1, 0)
                rsi_1 = var_78
                memcpy(rsi_1, r15_1, r14_1 * 2)
                r15_2 = var_6c
            else
                r15_2 = 0
                var_6c = 0
        
        if (arg2 != &var_78)
            int64_t rcx_14 = *arg2
            
            if (rcx_14 != 0)
                sub_140a74f90(rcx_14)
            
            *arg2 = rsi_1
            arg2[1].d = r14_1
            *(arg2 + 0xc) = r15_2
            var_78 = 0
            int32_t var_70
            var_70.q = 0
        else if (rsi_1 != 0)
            sub_140a74f90(rsi_1)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
        
        uint64_t rcx_17 = var_88
        
        if (rcx_17 != 0)
            sub_140a74f90(rcx_17)
        
        int128_t zmm0_1 = *(i + 0x10)
        i = zmm0_1.q
        var_48 = zmm0_1
    while (i != 0)
    
    r14 = arg1

sub_140b63b70(r14 + 0x28, &var_58)
int32_t rax_12 = var_50.d

if (rax_12 != 0)
    rbx = rax_12 - 1

sub_140a20ba0(arg2, var_58, rbx)
uint64_t rcx_26 = var_58

if (rcx_26 != 0)
    sub_140a74f90(rcx_26)

return arg2
