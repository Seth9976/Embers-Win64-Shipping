// 函数: sub_142a392e0
// 地址: 0x142a392e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg6
int64_t* rbp = arg1

if (*rsi != 0 || *arg2 != 2)
    return 0xffffffff

int64_t rbx = *(arg2 + 0x60)
int64_t rdi_1 = *(arg2 + 0x68) + rbx
int64_t r12 = 0
int64_t* r14 = *arg1
int64_t r15 = 1
uint128_t zmm6 = 0x40bf400000000000
float var_60[0x2] = zmm6.q
int128_t zmm7
int128_t var_58 = zmm7
bool cond:0 = rbx == rdi_1

if (rbx s< rdi_1)
    do
        int32_t var_68
        uint64_t rax_2 = sub_142a3e160(r14, rbx, &var_68, arg5)
        
        if (rax_2 s< 0)
            return -2
        
        int64_t rbx_1 = rbx + sx.q(var_68)
        
        if (rdi_1 s>= 0 && rbx_1 s>= rdi_1)
            return -2
        
        int64_t rax_3 = sub_142a3e270(r14, rbx_1, &var_68, arg5)
        
        if (rax_3 s< 0)
            return -2
        
        int64_t rdx_2 = sx.q(var_68)
        
        if ((rdx_2 - 1).d u> 7)
            return -2
        
        int64_t rbx_2 = rbx_1 + rdx_2
        
        if (rbx_2 u> 0x7fffffffffffffff)
            return -2
        
        if (rdi_1 s>= 0 && rbx_2 s> rdi_1)
            return -2
        
        if (rax_2 == 0xb5)
            int32_t rax_4 = sub_142a3e770(r14, rbx_2, rax_3, &var_60)
            
            if (rax_4 s< 0)
                return rax_4
            
            zmm6 = zx.o(var_60)
            
            if (0.0 f>= zmm6.q)
                return -2
        else
            int64_t rax_5
            
            if (rax_2 == 0x9f)
                rax_5 = sub_142a3ea30(r14, rbx_2, rax_3)
                r15 = rax_5
            label_142a3946b:
                
                if (rax_5 s<= 0)
                    return -2
            else if (rax_2 == 0x6264)
                rax_5 = sub_142a3ea30(r14, rbx_2, rax_3)
                r12 = rax_5
                goto label_142a3946b
        
        rbx = rbx_2 + rax_3
        cond:0 = rbx == rdi_1
        
        if (rbx s> rdi_1)
            return -2
    while (rbx s< rdi_1)
    
    rsi = arg6
    rbp = arg1

if (not(cond:0))
    return -2

int64_t* rax_6 = j_sub_140a82f30(0xd0)
arg6 = rax_6

if (rax_6 == 0)
    return -1

rax_6[1] = rbp
rax_6[2] = arg3
rax_6[3] = arg4
__builtin_memset(&rax_6[5], 0, 0x51)
rax_6[0x12] = &mkvparser::Track::EOSBlock::`vftable'{for `mkvparser::BlockEntry'}
rax_6[0x13] = 0
rax_6[0x14].d = 0x80000000
rax_6[0x15] = 0
rax_6[0x16] = 0
*rax_6 = &mkvparser::AudioTrack::`vftable'{for `mkvparser::Track'}
int32_t rax_9 = sub_142a36900(arg2, &rax_6[4])

if (rax_9 != 0)
    int64_t r8_5 = *rax_6
    (*r8_5)(rax_6, 1, r8_5)
    return rax_9

rax_6[0x17] = zmm6.q
rax_6[0x18] = r15
rax_6[0x19] = r12
*rsi = rax_6
return 0
