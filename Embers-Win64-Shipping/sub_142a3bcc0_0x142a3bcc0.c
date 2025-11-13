// 函数: sub_142a3bcc0
// 地址: 0x142a3bcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1

if (*arg6 != 0 || *arg2 != 1)
    return 0xffffffff

int64_t rbx = *(arg2 + 0x60)
int64_t r12 = 0
int64_t rsi = 0
int64_t* r14 = *arg1
struct mkvparser::Track::mkvparser::VideoTrack::VTable** rbp = nullptr
int64_t r15_1 = *(arg2 + 0x68) + rbx
int128_t zmm7 = zx.o(0)
float var_98[0x2]
__builtin_memset(&var_98, 0, 8)
uint128_t zmm6 = zx.o(0)
int64_t var_88_1
__builtin_memset(&var_88_1, 0, 0x28)
int64_t var_90 = 0
struct mkvparser::Track::mkvparser::VideoTrack::VTable** var_a0 = nullptr
bool cond:0 = rbx == r15_1
int64_t var_80_1
int64_t var_78_1
int64_t var_70_1
int64_t var_68_1

if (rbx s< r15_1)
    do
        int32_t var_a8
        uint64_t rax_2 = sub_142a3e160(r14, rbx, &var_a8, arg5)
        
        if (rax_2 s< 0)
            return -2
        
        int64_t rbx_1 = rbx + sx.q(var_a8)
        
        if (r15_1 s>= 0 && rbx_1 s>= r15_1)
            return -2
        
        int64_t rax_3 = sub_142a3e270(r14, rbx_1, &var_a8, arg5)
        
        if (rax_3 s< 0)
            return -2
        
        int64_t rdx_2 = sx.q(var_a8)
        
        if ((rdx_2 - 1).d u> 7)
            return -2
        
        int64_t rbx_2 = rbx_1 + rdx_2
        
        if (rbx_2 u> 0x7fffffffffffffff)
            return -2
        
        if (r15_1 s>= 0 && rbx_2 s> r15_1)
            return -2
        
        char rax_11
        
        switch (rax_2)
            case 0xb0
                int64_t rax_4 = sub_142a3ea30(r14, rbx_2, rax_3)
                r12 = rax_4
                
                if (rax_4 s<= 0)
                    return -2
            case 0xba
                int64_t rax_5 = sub_142a3ea30(r14, rbx_2, rax_3)
                var_88_1 = rax_5
                
                if (rax_5 s<= 0)
                    return -2
            case 0x53b8
                int64_t rax_9 = sub_142a3ea30(r14, rbx_2, rax_3)
                var_68_1 = rax_9
                
                if (rax_9 s< 0)
                    return -2
            case 0x54b0
                int64_t rax_6 = sub_142a3ea30(r14, rbx_2, rax_3)
                var_80_1 = rax_6
                
                if (rax_6 s<= 0)
                    return -2
            case 0x54b2
                int64_t rax_8 = sub_142a3ea30(r14, rbx_2, rax_3)
                var_70_1 = rax_8
                
                if (rax_8 s< 0)
                    return -2
            case 0x54ba
                int64_t rax_7 = sub_142a3ea30(r14, rbx_2, rax_3)
                var_78_1 = rax_7
                
                if (rax_7 s<= 0)
                    return -2
            case 0x55b0
                rax_11, arg5, zmm6, zmm7 = sub_142a3a090(r14, rbx_2, rax_3, &var_90, arg5)
            label_142a3bf7c:
                
                if (rax_11 == 0)
                    return -2
            case 0x7670
                rax_11, arg5, zmm6, zmm7 = sub_142a3aef0(r14, rbx_2, rax_3, &var_a0, arg5)
                goto label_142a3bf7c
            case 0x2383e3
                int32_t rax_10 = sub_142a3e770(r14, rbx_2, rax_3, &var_98)
                
                if (rax_10 s< 0)
                    return rax_10
                
                zmm6 = zx.o(var_98)
                
                if (zmm7.q f>= zmm6.q)
                    return -2
        
        rbx = rbx_2 + rax_3
        cond:0 = rbx == r15_1
        
        if (rbx s> r15_1)
            return -2
    while (rbx s< r15_1)
    
    rsi = var_90
    rbp = var_a0
    rdi = arg1

if (not(cond:0))
    return -2

struct mkvparser::Track::mkvparser::VideoTrack::VTable** rax_12 = j_sub_140a82f30(0x100)
var_a0 = rax_12

if (rax_12 != 0)
    struct mkvparser::Track::mkvparser::VideoTrack::VTable** rax_13 =
        sub_142a35ac0(rax_12, rdi, arg3, arg4)
    
    if (rax_13 != 0)
        int32_t rax_14 = sub_142a36900(arg2, &rax_13[4])
        
        if (rax_14 != 0)
            struct mkvparser::Track::mkvparser::VideoTrack::VTable* r8_12 = *rax_13
            r8_12->__offset(0x0).q(rax_13, 1, r8_12)
            return rax_14
        
        rax_13[0x18] = var_88_1
        rax_13[0x19] = var_80_1
        rax_13[0x1a] = var_78_1
        rax_13[0x1b] = var_70_1
        rax_13[0x1c] = var_68_1
        rax_13[0x1d] = zmm6.q
        rax_13[0x17] = r12
        rax_13[0x1e] = rsi
        rax_13[0x1f] = rbp
        *arg6 = rax_13
        return 0

return -1
