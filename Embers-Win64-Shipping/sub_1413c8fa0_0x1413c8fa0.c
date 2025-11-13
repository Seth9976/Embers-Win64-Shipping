// 函数: sub_1413c8fa0
// 地址: 0x1413c8fa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
void var_2b8
int32_t arg_8
int32_t arg_18
int32_t arg_20
(*(*rcx + 0x200))(rcx, &var_2b8, &arg_8, &arg_18, &arg_20)
int32_t rcx_1 = 0
int64_t* r10_1 = *arg1 + 0x1c68
int32_t var_2f8 = 0
int32_t rbx = r10_1[5].d
void* r9_1 = &r10_1[2]
int32_t var_2f4 = 1
int32_t r8_1 = 0
void* var_2f0 = r9_1
int32_t var_2e8 = 0xffffffff
int64_t var_2e4 = 0

if (rbx != 0)
    void* rax_1 = *(r9_1 + 0x10)
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_1413c906b:
        int32_t rax_8 = neg.d(rdx_3) & rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_2f4_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_2e4.d = r8_1 - rax_9 + 0x1f
        
        if (r8_1 - rax_9 + 0x1f s> rbx)
            var_2e4.d = rbx
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_1)
            r8_1 += 0x20
            rcx_1 += 1
            var_2e4:4.d = r8_1
            var_2f8 = rcx_1
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_2e8 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_1413c906b
        
        var_2e4.d = rbx

int64_t* var_280 = r10_1
int128_t zmm0 = var_2f8.o
int128_t var_290 = 0xffffffff
int16_t var_2c0 = 0
void* result = zmm0.q
var_2e8.o = zmm0
var_2f8.o = r10_1.o
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)

if (0 s< *(result + 0x18))
    int32_t i_1
    int32_t i = i_1
    
    do
        int64_t rdx_5 = sx.q(i) * 3
        int64_t rcx_3 = *var_2f8.q
        void* rax_13 = *(rcx_3 + (rdx_5 << 3))
        int64_t* rdi_1 = *(rcx_3 + (rdx_5 << 3) + 8)
        
        if (*(rax_13 + 0x50) == 0 || *(rax_13 + 0xc8) == 0)
            sub_1405c2fb0(zmm0:8.q, i)
            var_2c0.b = 1
        else
            sub_1423769e0(rdi_1, &var_2b8)
            sub_142376f20(rdi_1, arg_8)
            sub_142376c20(rdi_1, arg_18[0])
            sub_142376c10(rdi_1, arg_20[0])
            sub_142358100(rdi_1, 1, zx.o(arg1[1]))
            uint128_t* rax_14 = sub_142367040(rdi_1)
            uint128_t var_278
            sub_1413c2ae0(&var_278)
            int64_t var_154_1 = 0
            int32_t var_14c_1 = 0
            int32_t var_158_1 = _mm_cvtpd_ps(zx.o(arg1[1])).d
            var_278 = *rax_14
            int128_t var_148_1 = rax_14[0x12]
            uint128_t var_268_1 = rax_14[1]
            int128_t var_138_1 = rax_14[0x13]
            uint128_t var_258_1 = rax_14[2]
            int128_t var_128_1 = rax_14[0x14]
            uint128_t var_248_1 = rax_14[3]
            int128_t var_118_1 = rax_14[0x15]
            uint128_t var_238_1 = rax_14[4]
            int128_t var_108_1 = rax_14[0x16]
            uint128_t var_228_1 = rax_14[5]
            int128_t var_f8_1 = rax_14[0x17]
            uint128_t var_218_1 = rax_14[6]
            int128_t var_e8_1 = rax_14[0x18]
            uint128_t var_208_1 = rax_14[7]
            int128_t var_d8_1 = rax_14[0x19]
            uint128_t var_1f8_1 = rax_14[8]
            int128_t var_c8_1 = rax_14[0x1a]
            uint128_t var_1e8_1 = rax_14[9]
            int128_t var_b8_1 = rax_14[0x1b]
            uint128_t var_1d8_1 = rax_14[0xa]
            int128_t var_a8_1 = rax_14[0x1c]
            uint128_t var_1c8_1 = rax_14[0xb]
            int128_t var_98_1 = rax_14[0x1d]
            uint128_t var_1b8_1 = rax_14[0xc]
            int128_t var_88_1 = rax_14[0x1e]
            uint128_t var_1a8_1 = rax_14[0xd]
            int64_t* rcx_11 = data_143f0f180
            int128_t var_78_1 = rax_14[0x1f]
            uint128_t var_198_1 = rax_14[0xe]
            int128_t var_68_1 = rax_14[0x20]
            uint128_t var_188_1 = rax_14[0xf]
            int128_t var_58_1 = rax_14[0x21]
            uint128_t var_178_1 = rax_14[0x10]
            int128_t var_48_1 = rax_14[0x22]
            uint128_t var_168_1 = rax_14[0x11]
            int128_t var_38_1 = rax_14[0x23]
            (*(*rcx_11 + 0x100))(rcx_11, rdi_1[0x112], &var_278)
        
        var_2e4:4.d &= not.d(var_2f0:4.d)
        sub_14059bdd0(&var_2f0)
        result = var_2e8.q
        i = i_1
    while (i s< *(result + 0x18))
    
    if (var_2c0.b != 0 && var_2c0:1.b != 0)
        i.b = 1
        return sub_1405b6470(r10_1, r10_1[1].d - *(r10_1 + 0x34), i.b)

return result
