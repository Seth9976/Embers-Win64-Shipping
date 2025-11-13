// 函数: sub_141297a20
// 地址: 0x141297a20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0xa340)
void var_a358
int64_t rax_1 = __security_cookie ^ &var_a358

if (*(arg1 + 0x11a) u> 0)
    *(arg4 + (zx.q(*(arg1 + 0x118)) << 3) + 0x100) = *(*(arg5 + 0x10) + 0x18)

int16_t rax_5 = *(arg1 + 0x11c)

if (rax_5 != 0xffff)
    *(arg4 + (zx.q(rax_5) << 3) + 0x300) = arg6

int32_t rbx = data_1439b6578

if (rbx s<= 0xffffffff)
    rbx = *(arg3 + 0x12f8)

uint64_t rcx_2 = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
int32_t var_a318 = rbx

if (data_143ea9c1c s> *(0x14 + *(ThreadLocalStoragePointer + (rcx_2 << 3))))
    _Init_thread_header(&data_143ea9c1c)
    
    if (data_143ea9c1c == 0xffffffff)
        data_143ea9c18 = rbx
        _Init_thread_footer(&data_143ea9c1c)
    
    rbx = var_a318

if (rbx != data_143ea9c18)
    *(arg2 + 0xf79) = 1
    data_143ea9c18 = rbx

int32_t var_a308 = *arg12
int32_t var_a304 = arg12[1]
int64_t* rcx_5 = data_143f0f180
int32_t var_a300 = arg12[2]
int64_t var_a328
(*(*rcx_5 + 0xf8))(rcx_5, &var_a328, &var_a318, &data_143e8f600, 0, 1)
int16_t rax_12 = *(arg1 + 0x11e)

if (rax_12 != 0xffff)
    *(arg4 + (zx.q(rax_12) << 3) + 0x300) = var_a328

sub_1405d1550(&var_a328)
int64_t var_a190 = 0
int128_t var_a168
__builtin_memset(&var_a168, 0, 0x68)
int64_t var_a188 = 0
void var_a1c8
sub_1413f9890(arg2, &var_a1c8)
int64_t* rcx_9 = data_143f0f180
(*(*rcx_9 + 0xf8))(rcx_9, &var_a328, &var_a1c8, &data_143ec9190, 0, 1)
int16_t rax_15 = *(arg1 + 0x122)

if (rax_15 != 0xffff)
    *(arg4 + (zx.q(rax_15) << 3) + 0x300) = var_a328

uint128_t zmm6 = sub_1405d1550(&var_a328)
int32_t r11 = 1
int32_t rcx_12 = 0
int32_t var_a0e8[0x400]
var_a0e8[0] = 0
int32_t r8_2 = 0
int64_t var_a1b8
uint64_t var_50e8 = var_a1b8
int32_t var_a1b0
int32_t var_50e0 = var_a1b0
int32_t var_a0f8 = 1
var_a318 = 0
var_a304.q = 0
int32_t rbx_1 = arg7[5].d
int32_t var_a314 = 1
int32_t var_a310 = (&arg7[2]).d
int32_t var_a308_1 = 0xffffffff

if (rbx_1 != 0)
    int32_t* rax_18 = arg7[4]
    int32_t* r9 = &arg7[2]
    
    if (rax_18 != 0)
        r9 = rax_18
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rbx_1 - 1)
    int32_t rdx_6 = *r9
    int32_t var_a304_2
    
    if (rdx_6 != 0)
    label_141297d3b:
        int32_t rax_25 = neg.d(rdx_6) & rdx_6
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_25)
        var_a314 = rax_25
        int32_t rax_26
        
        if (rax_25 == 0)
            rax_26 = 0x20
        else
            rax_26 = 0x1f - temp0_2
        
        int32_t var_a304_1 = r8_2 - rax_26 + 0x1f
        
        if (r8_2 - rax_26 + 0x1f s> rbx_1)
            var_a304_2 = rbx_1
    else
        while (true)
            int64_t rdx_7 = sx.q(rcx_12)
            r8_2 += 0x20
            rcx_12 += 1
            int32_t var_a300_1 = r8_2
            var_a318 = rcx_12
            
            if (rdx_7.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_6 = r9[rdx_7 + 1]
            var_a308_1 = 0xffffffff
            
            if (rdx_6 != 0)
                goto label_141297d3b
        
        var_a304_2 = rbx_1

int32_t rdx_8 = arg7[5].d
int32_t r8_5 = rdx_8 s>> 5
int32_t r13 = 0xffffffff << (rdx_8.b & 0x1f)
int32_t r9_2 = rdx_8 & 0xffffffe0
int32_t var_a308_2 = r13
int64_t* r10 = arg7
int32_t var_a304_3 = rdx_8
uint128_t var_a238 = var_a318.o
int64_t var_a228 = var_a308_1.o.q

if (rdx_8 != rbx_1)
    int32_t* rax_28 = arg7[4]
    int32_t* rbx_2 = &arg7[2]
    
    if (rax_28 != 0)
        rbx_2 = rax_28
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(rbx_1 - 1)
    int32_t rdx_12 = rbx_2[sx.q(r8_5)] & r13
    int32_t var_a304_5
    
    if (rdx_12 != 0)
    label_141297e02:
        int32_t rax_35 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_35)
        int32_t r15_1
        
        if (rax_35 == 0)
            r15_1 = 0x20
        else
            r15_1 = 0x1f - temp0_3
        
        int32_t rcx_20 = arg7[5].d
        int32_t var_a304_4 = r9_2 - r15_1 + 0x1f
        
        if (r9_2 - r15_1 + 0x1f s> rcx_20)
            var_a304_5 = rcx_20
    else
        while (true)
            int64_t rcx_18 = sx.q(r8_5)
            r9_2 += 0x20
            r8_5 += 1
            
            if (rcx_18.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_12 = rbx_2[rcx_18 + 1]
            var_a308_2 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_141297e02
        
        var_a304_5 = arg7[5].d

uint128_t var_58 = zmm6
uint128_t zmm7
uint128_t var_68 = zmm7
uint128_t zmm8
uint128_t var_78 = zmm8
uint128_t var_a288
uint128_t var_a278
void* var_a268

while (true)
    int64_t rax_37 = sx.q(var_a228:4.d)
    
    if (rax_37.d == (var_a308_2.q u>> 0x20).d && var_a238:8.q == &arg7[2] && r10 == arg7)
        break
    
    int64_t rax_38 = *r10
    int64_t rcx_22 = rax_37 * 6
    uint128_t zmm1 = *(rax_38 + (rcx_22 << 3) + 0x10)
    var_a288 = *(rax_38 + (rcx_22 << 3))
    var_a268 = (*(rax_38 + (rcx_22 << 3) + 0x20)).q
    var_a278 = zmm1
    
    if (r11 u>= 0x100)
        break
    
    if ((*(*(var_a268 + 0x20) + 0x138) & 4) == 0)
    label_141297ef1:
        int64_t* rcx_24 = *(var_a268 + 0x20)
        int64_t var_a2a0_1 = 0
        int64_t var_a2f8
        (*(*rcx_24 + 0x68))(rcx_24, &var_a2f8)
        uint32_t rcx_25 = zx.d(*(*(var_a268 + 0x20) + 0x13c))
        uint64_t rax_43 = zx.q(var_a0f8)
        int32_t var_a2ec
        int64_t var_a2e8
        int32_t var_a2e0
        int64_t var_a2d8
        int32_t var_a2d0
        void var_80e8
        void var_80e0
        int32_t var_30e8[0x400]
        uint128_t zmm0
        
        if (rcx_25 == 0)
            var_a0e8[rax_43 * 4] = 2
            uint64_t rcx_54 = zx.q(var_a0f8) * 2
            *(&var_80e8 + (rcx_54 << 3)) = var_a2d8
            *(&var_80e0 + (rcx_54 << 3)) = var_a2d0
            uint64_t rcx_56 = zx.q(var_a0f8) * 2
            (&var_50e8)[rcx_56] = var_a2e8
            (&var_50e0)[rcx_56 * 2] = var_a2e0
        label_1412982ca:
            zmm0.d = 1f f/ var_a2ec
            var_30e8[zx.q(var_a0f8) * 4] = zmm0.d
        else
            zmm0 = zx.o(var_a2f8)
            int32_t var_a2f0
            int32_t var_a2bc
            void var_90e8
            void var_90e0
            void var_40e8
            void var_40e0
            uint128_t zmm2_1
            
            if (rcx_25 == 2)
                var_a0e8[rax_43 * 4] = 4
                uint64_t rcx_46 = zx.q(var_a0f8) * 2
                *(&var_90e8 + (rcx_46 << 3)) = zmm0.q
                *(&var_90e0 + (rcx_46 << 3)) = var_a2f0
                int32_t var_a1e0_1 = (var_a2d0 ^ 0x80000000).d
                uint64_t rcx_48 = zx.q(var_a0f8) * 2
                *(&var_80e8 + (rcx_48 << 3)) =
                    (_mm_unpacklo_ps(var_a2d8.d ^ 0x80000000, (var_a2d8:4.d ^ 0x80000000).q)).q
                *(&var_80e0 + (rcx_48 << 3)) = var_a1e0_1
                zmm0.d = var_a2e0.d f* 12.566371f
                uint64_t rcx_50 = zx.q(var_a0f8) * 2
                zmm1.d = var_a2e8:4.d.d f* 12.566371f
                int32_t var_a1d4_1 = zmm0.d
                zmm2_1.d = var_a2e8.d.d f* 12.566371f
                (&var_50e8)[rcx_50] = (_mm_unpacklo_ps(zmm2_1, zmm1.q)).q
                (&var_50e0)[rcx_50 * 2] = var_a1d4_1
                var_a310 = var_a2bc.d
                uint64_t rcx_52 = zx.q(var_a0f8) * 2
                int32_t var_a2b8
                int32_t var_a2b4
                *(&var_40e8 + (rcx_52 << 3)) = (_mm_unpacklo_ps(var_a2b8, var_a2b4.q)).q
                *(&var_40e0 + (rcx_52 << 3)) = var_a310
                goto label_1412982ca
            
            uint64_t rax_44 = rax_43 * 2
            
            if (rcx_25 != 3)
                var_a0e8[rax_44 * 2] = 1
                uint64_t rcx_28 = zx.q(var_a0f8) * 2
                zmm2_1.d = var_a2e8.d.d f* 0.0795774683f
                zmm1.d = var_a2e8:4.d.d f* 0.0795774683f
                *(&var_90e8 + (rcx_28 << 3)) = zmm0.q
                *(&var_90e0 + (rcx_28 << 3)) = var_a2f0
                zmm0.d = var_a2e0.d f* 0.0795774683f
                uint64_t rcx_30 = zx.q(var_a0f8) * 2
                int32_t var_a290_1 = zmm0.d
                (&var_50e8)[rcx_30] = (_mm_unpacklo_ps(zmm2_1, zmm1.q)).q
                (&var_50e0)[rcx_30 * 2] = var_a290_1
                int32_t var_a210_1 = var_a2bc.d
                uint64_t rcx_32 = zx.q(var_a0f8) * 2
                *(&var_40e8 + (rcx_32 << 3)) = (_mm_unpacklo_ps(zx.o(0), 0)).q
                *(&var_40e0 + (rcx_32 << 3)) = var_a210_1
                goto label_1412982ca
            
            uint128_t zmm5_1 = var_a2d0
            zmm8 = var_a2d8.d
            zmm6 = var_a2d8:4.d
            int32_t var_a2c4
            zmm7 = var_a2c4
            int32_t var_a2c8
            uint128_t zmm4_1 = var_a2c8
            var_a0e8[rax_44 * 2] = 3
            uint64_t rcx_34 = zx.q(var_a0f8) * 2
            uint128_t zmm3
            zmm3.d = zmm7.d f* zmm5_1.d
            int32_t var_a1ec_1 = 0
            *(&var_90e8 + (rcx_34 << 3)) = zmm0.q
            *(&var_90e0 + (rcx_34 << 3)) = var_a2f0
            int32_t var_a204_1 = (zmm5_1 ^ 0x80000000).d
            uint64_t rcx_36 = zx.q(var_a0f8) * 2
            int32_t var_a2c0
            zmm2_1 = var_a2c0
            *(&var_80e8 + (rcx_36 << 3)) =
                (_mm_unpacklo_ps(zmm8 ^ 0x80000000, (zmm6 ^ 0x80000000).q)).q
            *(&var_80e0 + (rcx_36 << 3)) = var_a204_1
            zmm0.d = zmm2_1.d f* zmm6.d
            uint64_t rcx_38 = zx.q(var_a0f8) * 2
            zmm1.d = zmm4_1.d f* zmm6.d
            zmm3.d = zmm3.d f- zmm0.d
            zmm2_1.d = zmm2_1.d f* zmm8.d
            zmm0.d = zmm4_1.d f* zmm5_1.d
            zmm2_1.d = zmm2_1.d f- zmm0.d
            zmm0.d = zmm7.d f* zmm8.d
            zmm1.d = zmm1.d f- zmm0.d
            void var_70e8
            *(&var_70e8 + (rcx_38 << 3)) = (_mm_unpacklo_ps(zmm3, zmm2_1.q)).q
            zmm0 = _mm_unpacklo_ps(zmm4_1, zmm7.q)
            void var_70e0
            *(&var_70e0 + (rcx_38 << 3)) = zmm1.d
            uint64_t rcx_40 = zx.q(var_a0f8) * 2
            int32_t var_a2ac
            zmm1.d = var_a2ac.d f* 2f
            void var_60e8
            *(&var_60e8 + (rcx_40 << 3)) = zmm0.q
            void var_60e0
            *(&var_60e0 + (rcx_40 << 3)) = var_a2c0
            uint64_t rcx_42 = zx.q(var_a0f8) * 2
            (&var_50e8)[rcx_42] = var_a2e8
            (&var_50e0)[rcx_42 * 2] = var_a2e0
            zmm0.d = var_a2bc.d f* 2f
            uint64_t rcx_44 = zx.q(var_a0f8) * 2
            *(&var_40e8 + (rcx_44 << 3)) = (_mm_unpacklo_ps(zmm0, zmm1.q)).q
            zmm0.d = 1f f/ var_a2ec
            *(&var_40e0 + (rcx_44 << 3)) = 0
            var_30e8[zx.q(var_a0f8) * 4] = zmm0.d
            int32_t var_a2a8
            int32_t var_20e8[0x400]
            var_20e8[zx.q(var_a0f8) * 4] = var_a2a8.d
            int32_t var_a2a4
            int32_t var_10e8[0x400]
            var_10e8[zx.q(var_a0f8) * 4] = var_a2a4.d
        var_a0f8 += 1
    else if (sub_14122cc00(var_a268) == 0)
        goto label_141297ef1
    
    var_a228.d &= not.d(var_a238:4.d)
    sub_14059bdd0(&var_a238)
    r11 = var_a0f8
    r10 = arg7

int64_t* rcx_58 = data_143f0f180
(*(*rcx_58 + 0xf8))(rcx_58, &var_a328, &var_a0f8, &data_143e8f6a0, 0, 1)
int16_t rax_72 = *(arg1 + 0x120)

if (rax_72 != 0xffff)
    *(arg4 + (zx.q(rax_72) << 3) + 0x300) = var_a328

sub_1405d1550(&var_a328)
int32_t rbx_4 = arg8

if (*(data_143e8f128 + 4) != 0)
    rbx_4 = arg9

var_a278:4.d = sub_1413e95d0()
var_a288.d = *(data_143e8f348 + 4)
var_a288:4.d = *(data_143e8f238 + 4)
var_a288:0xc.d = arg8
var_a278.d = rbx_4

if (*(arg11 + 0x18) u<= 0)
    var_a288.d = 0
    var_a268.d = 1
    var_a268:4.d = 1
    var_a268:8.d = 1
    int64_t* rcx_64 = *(data_143f10e68 + 0x10)
    void* rax_83 = (*(*rcx_64 + 8))(rcx_64, arg11)
    var_a318:1.w = 0x100
    var_a314.q = 0
    var_a310 = 0
    var_a318.b = *(rax_83 + 0x3c)
    int64_t* rcx_66 = data_143f0f180
    int32_t var_a338_2
    var_a338_2.q = &var_a318
    (*(*rcx_66 + 0x5d0))(rcx_66, &var_a328, &data_143f02b98, rax_83, var_a338_2)
    int64_t var_a258_1 = var_a328
    sub_1405ec8a0(&var_a328)
else
    var_a268.d = *arg10
    var_a268:4.d = arg10[1]
    var_a268:8.d = arg10[2]
    int64_t var_a258 = *(arg11 + 0x10)

var_a288:8.d = *(data_143e8f458 + 4)
int64_t* rcx_69 = data_143f0f180
int64_t var_a298
(*(*rcx_69 + 0xf8))(rcx_69, &var_a298, &var_a288, &data_143e8f740, 0, 1)
int16_t rax_87 = *(arg1 + 0x124)

if (rax_87 != 0xffff)
    *(arg4 + (zx.q(rax_87) << 3) + 0x300) = var_a298

int64_t result = sub_1405d1550(&var_a298)

if (*(arg1 + 0x128) u> 0)
    result = arg13
    *(arg4 + (zx.q(*(arg1 + 0x126)) << 3) + 0x400) = result

if (*(arg1 + 0x12c) u> 0)
    result = arg14
    *(arg4 + (zx.q(*(arg1 + 0x12a)) << 3) + 0x400) = result

if (*(arg1 + 0x130) u> 0)
    result = arg15
    *(arg4 + (zx.q(*(arg1 + 0x12e)) << 3) + 0x400) = result

if (*(arg1 + 0x134) u> 0)
    result = arg16
    *(arg4 + (zx.q(*(arg1 + 0x132)) << 3) + 0x400) = result

__security_check_cookie(rax_1 ^ &var_a358)
return result
