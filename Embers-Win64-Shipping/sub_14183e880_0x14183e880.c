// 函数: sub_14183e880
// 地址: 0x14183e880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_188
int64_t rax_1 = __security_cookie ^ &var_188
*arg1 = 0
arg1[1] = 0
void* rcx = &arg1[2]
*(rcx + 0x10) = 0
*(rcx + 0x18) = 0
*(rcx + 0x1c) = 0x80
void* rax_2 = *(rcx + 0x10)

if (rax_2 != 0)
    rcx = rax_2

*rcx = 0
*(rcx + 8) = 0
arg1[6].d = 0xffffffff
*(arg1 + 0x34) = 0
arg1[8] = 0
arg1[9].d = 0
int64_t rax_3 = *arg2
int64_t var_e8 = 0
int32_t var_e0 = 0
int32_t var_bc = 0x80
int64_t var_d8
__builtin_memset(&var_d8, 0, 0x1c)
int32_t var_b8 = 0xffffffff
int32_t var_b4 = 0
void* var_a8 = nullptr
int32_t var_a0 = 0
int64_t var_98
__builtin_memset(&var_98, 0, 0x2c)
int32_t var_6c = 0x80
int32_t var_68 = 0xffffffff
int32_t var_64 = 0
int64_t var_58 = 0
int32_t var_50 = 0
(*(rax_3 + 0x48))(arg2, &var_98)
int64_t var_88
int64_t* var_160 = &var_88
int32_t rcx_2 = 0
int32_t var_168 = 0
int32_t var_158 = 0xffffffff
int32_t r8 = 0
int32_t var_164 = 1
int64_t var_154 = 0
int64_t* var_78
int32_t var_70

if (var_70 != 0)
    int64_t* r9_1 = &var_88
    
    if (var_78 != 0)
        r9_1 = var_78
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(var_70 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14183e9db:
        int32_t rax_10 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_10)
        int32_t var_164_1 = rax_10
        int32_t rax_11
        
        if (rax_10 == 0)
            rax_11 = 0x20
        else
            rax_11 = 0x1f - temp0_2
        
        int32_t rax_12 = r8 - rax_11 + 0x1f
        
        if (rax_12 s> var_70)
            rax_12 = var_70
        
        var_154.d = rax_12
    else
        while (true)
            int64_t rax_7 = sx.q(rcx_2)
            r8 += 0x20
            rcx_2 += 1
            var_154:4.d = r8
            var_168 = rcx_2
            
            if (rax_7.d s>= ((temp0_1 & 0x1f) + temp1_1) s>> 5)
                var_154.d = var_70
                break
            
            rdx_3 = *(r9_1 + (rax_7 << 2) + 4)
            int32_t var_158_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14183e9db

int128_t var_100 = 0xffffffff
int128_t var_110 = var_168.o
var_154.d = var_70
int64_t temp0_3 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int128_t var_140 = (&var_98).o
int128_t var_130 = var_110
int64_t var_120 = temp0_3

while (true)
    int64_t rax_13 = sx.q(var_130:0xc.d)
    int64_t* rdx_4 = var_140.q
    
    if (rax_13.d == ((0xffffffff << (var_70.b & 0x1f)).q u>> 0x20).d && var_130.q == &var_88
            && rdx_4 == &var_98)
        int32_t var_50_1 = 0
        
        if (var_58 != 0)
            sub_140a74f90(var_58)
        
        sub_14059ad90(&var_98, 0)
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        int64_t rcx_24 = var_98
        
        if (rcx_24 != 0)
            sub_140a74f90(rcx_24)
        
        int32_t var_a0_1 = 0
        
        if (var_a8 != 0)
            sub_140a74f90(var_a8)
        
        var_e0 = 0
        int32_t var_b8_1 = 0xffffffff
        int32_t var_b4_1 = 0
        sub_14059a8e0(&var_d8, 0)
        int64_t var_c8
        
        if (var_c8 != 0)
            sub_140a74f90(var_c8)
        
        int64_t rcx_29 = var_e8
        
        if (rcx_29 != 0)
            sub_140a74f90(rcx_29)
        
        __security_check_cookie(rax_1 ^ &var_188)
        return arg1
    
    int64_t r8_2 = *arg2
    void* rax_14 = (*(r8_2 + 0x68))(arg2, *rdx_4 + rax_13 * 0x18, r8_2)
    
    if (rax_14 != 0)
        int128_t* i = *(rax_14 + 0x48)
        
        for (void* r14_1 = i + sx.q(*(rax_14 + 0x50)) * 0x18; i != r14_1; i += 0x18)
            int64_t* rcx_19
            int32_t* rdx_15
            
            if (var_e0 == var_b4)
            label_14183eb56:
                void var_144
                rdx_15 = &var_144
                rcx_19 = &var_e8
            else
                void var_b0
                void* rcx_11 = &var_b0
                int64_t rdx_8 = sx.q(var_a0 - 1) & sx.q(sub_140a6b260(i, 0x10))
                
                if (var_a8 != 0)
                    rcx_11 = var_a8
                
                int32_t rax_22 = *(rcx_11 + (rdx_8 << 2))
                
                if (rax_22 == 0xffffffff)
                    goto label_14183eb56
                
                int64_t rsi_1 = var_e8
                
                while (true)
                    int64_t rdx_9 = sx.q(rax_22) * 3
                    int32_t* r8_3 = rsi_1 + (rdx_9 << 3)
                    
                    if (((r8_3[1] ^ *(i + 4)) | (*(rsi_1 + (rdx_9 << 3) + 8) ^ *(i + 8))
                            | (r8_3[3] ^ *(i + 0xc)) | (*r8_3 ^ *i)) == 0)
                        break
                    
                    rax_22 = r8_3[4]
                    
                    if (rax_22 == 0xffffffff)
                        goto label_14183eb56
                
                if (rax_22 == 0xffffffff)
                    goto label_14183eb56
                
                void var_148
                rdx_15 = &var_148
                rcx_19 = arg1
            
            sub_140acafe0(rcx_19, rdx_15, i, nullptr)
    
    var_130:8.d &= not.d(var_140:0xc.d)
    sub_14059bdd0(&var_140:8)
