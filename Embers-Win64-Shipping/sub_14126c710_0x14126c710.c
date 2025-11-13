// 函数: sub_14126c710
// 地址: 0x14126c710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_258
int64_t rax_1 = __security_cookie ^ &var_258
int64_t* var_218 = arg9
void* rsi = arg2
void* r14 = arg4
sub_141456250(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8)
int64_t r13 = 0
int16_t* r8 = arg1 + 0x140

if (arg1 == 0)
    r8 = nullptr

int64_t* result = sub_141227c90(r14, &arg8[2], r8, arg9)
int32_t var_208
int32_t var_1f8

if (rsi != 0)
    if (*(arg1 + 0x14c) u> 0 || *(arg1 + 0x150) u> 0 || *(arg1 + 0x154) u> 0)
        int64_t rax_6 = data_143f11688
        int64_t var_a8 = rax_6
        int64_t var_a0_1 = rax_6
        int64_t var_98_1 = rax_6
        int128_t var_88
        __builtin_memset(&var_88, 0, 0x30)
        int128_t var_1c8 = zx.o(0)
        int64_t rbx_1
        
        if (r14 == 0)
            rbx_1 = 0
        else
            rbx_1 = *(r14 + 0x110)
        
        if (rbx_1 != 0)
            int32_t i = 0
            int128_t* r10_1 = &var_1c8
            int64_t* rdx_2 = &var_a8
            void* r8_3 = &var_88:0xc
            
            do
                void* rcx_4 = *(rbx_1 - &var_a8 + rdx_2 + 0xa8)
                
                if (rcx_4 == 0)
                    void* r11_1 = *(rsi + 0xf80)
                    
                    if (r11_1 != 0)
                        int64_t i_1 = sx.q(i)
                        *(&var_88:0xc + i_1 * 0x10) = 0xbf800000
                        (&var_a8)[i_1] = *(r11_1 + 8)
                        break
                else
                    int32_t rax_7 = *(rcx_4 + 0x34)
                    int32_t zmm1_1 = *(rcx_4 + 0x2c)
                    int32_t zmm2_1 = *(rcx_4 + 0x30)
                    int32_t var_1dc_1 = 0x3f800000
                    int64_t var_1e8
                    float zmm3_1[0x4] = var_1e8.o
                    zmm3_1[0] = *(rcx_4 + 0x28)
                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xe1)
                    zmm3_1[0] = zmm1_1
                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc6)
                    zmm3_1[0] = zmm2_1
                    zmm3_1 = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xc9)
                    *(r8_3 - 0xc) = zmm3_1
                    *r8_3 = rax_7
                    void* rax_8 = *(rcx_4 + 0x18)
                    var_1e8.o = zmm3_1
                    
                    if (rax_8 != 0 && *(rax_8 + 8) != 0xffffffff)
                        *rdx_2 = rax_8
                    
                    *r10_1 = *(rcx_4 + 0x20)
                
                i += 1
                r8_3 += 0x10
                rdx_2 = &rdx_2[1]
                r10_1 += 4
            while (i s< 3)
        
        int64_t* r12_1 = &var_a8
        var_1f8.q = 3
        void* rsi_1 = arg1 + 0x14a
        
        do
            void* rax_13 = *r12_1
            int32_t r11_2 = *rsi_1
            int32_t rcx_5 = *(rsi_1 + 0xc)
            var_208 = rcx_5
            int64_t rax_14 = *(rax_13 + 0x18)
            
            if ((r11_2 u>> 0x10).w != 0)
                void* rbx_3 = *arg9
                void* r10_2 = *(rbx_3 + 0x20)
                
                if ((r10_2.b & 1) != 0)
                    r10_2 = (r10_2 s>> 1) + rbx_3 + 0x20
                
                int32_t r8_4 = 0
                int32_t r9_2 = *(rbx_3 + 0x28) - 1
                
                if (r9_2 s> 0)
                    do
                        int32_t temp1_1
                        int32_t temp2_1
                        temp1_1:temp2_1 = sx.q(r9_2 + r8_4)
                        int32_t rax_21 = (temp2_1 - temp1_1) s>> 1
                        
                        if (*(r10_2 + (sx.q(rax_21) << 2)) u>= r11_2.w)
                            r9_2 = rax_21
                        else if (r8_4 != rax_21)
                            r8_4 = rax_21
                        else
                            r8_4 += 1
                    while (r8_4 s< r9_2)
                
                if (r8_4 == r9_2)
                    int64_t r9_3 = sx.q(r8_4)
                    
                    if (*(r10_2 + (r9_3 << 2)) == r11_2.w && r8_4 s>= 0)
                        *(zx.q((*(rbx_3 + 0x18) + *(rbx_3 + 8)) << 3) + arg9[1] + (r9_3 << 3)) =
                            *(rax_13 + 0x10)
            
            if (var_208:2.w u> 0)
                void* rbx_4 = *arg9
                void* r10_4 = *(rbx_4 + 0x10)
                uint32_t r11_3 = zx.d(rcx_5.w)
                
                if ((r10_4.b & 1) != 0)
                    r10_4 = (r10_4 s>> 1) + rbx_4 + 0x10
                
                int32_t r8_5 = 0
                int32_t r9_5 = *(rbx_4 + 0x18) - 1
                
                if (r9_5 s> 0)
                    do
                        int32_t temp3_1
                        int32_t temp4_1
                        temp3_1:temp4_1 = sx.q(r9_5 + r8_5)
                        int32_t rax_30 = (temp4_1 - temp3_1) s>> 1
                        
                        if (zx.d(*(r10_4 + (sx.q(rax_30) << 2))) u>= r11_3)
                            r9_5 = rax_30
                        else if (r8_5 != rax_30)
                            r8_5 = rax_30
                        else
                            r8_5 += 1
                    while (r8_5 s< r9_5)
                
                if (r8_5 == r9_5)
                    int64_t rdx_7 = sx.q(r8_5)
                    
                    if (zx.d(*(r10_4 + (rdx_7 << 2))) == r11_3 && r8_5 s>= 0)
                        *(zx.q(*(rbx_4 + 8) << 3) + arg9[1] + (rdx_7 << 3)) = rax_14
            
            r12_1 = &r12_1[1]
            rsi_1 += 4
            var_1f8.q -= 1
        while (var_1f8.q != 1)
        
        var_208 = *(arg1 + 0x162)
        int16_t var_204_1 = *(arg1 + 0x166)
        sub_141211c40(arg9, &var_208, &var_1c8)
        var_208 = *(arg1 + 0x168)
        int16_t var_204_2 = *(arg1 + 0x16c)
        result = sub_141250540(arg9, &var_208, &var_88)
        rsi = arg2
        r14 = arg4
    else if (*(arg1 + 0x148) != 0xffff)
        int64_t r8_1 = data_143a2fe10
        void* rax_3
        
        if (*(rsi + 0x1050) == 0)
            rax_3 = *(rsi + 0xf80)
        
        if (*(rsi + 0x1050) != 0 || rax_3 == 0 || *(*(rax_3 + 8) + 0x10) == 0)
            void* const rax_5
            
            if (r14 == 0)
                rax_5 = nullptr
            else
                rax_5 = *(r14 + 0x110)
            
            if (rax_5 != 0)
                void* rcx_2 = *(rax_5 + 0x80)
                
                if (rcx_2 != 0)
                    r8_1 = *(rcx_2 + 0x10)
            
            result = sub_14108daf0(arg9, arg1 + 0x148, r8_1)
        else
            result = sub_14108daf0(arg9, arg1 + 0x148, *(rsi + 0x110))
    
    if (*(arg1 + 0x172) u> 0 || *(arg1 + 0x184) u> 0)
        void var_1b8
        sub_14125c420(&var_1b8, r14)
        var_208 = *(arg1 + 0x17a)
        int16_t var_204_3 = *(arg1 + 0x17e)
        sub_14088bf20(arg9, &var_208, &var_1b8)
        var_208 = *(arg1 + 0x16e)
        int16_t var_204_4 = *(arg1 + 0x172)
        void var_1a8
        sub_141250690(arg9, &var_208, &var_1a8)
        var_208 = *(arg1 + 0x174)
        int16_t var_204_5 = *(arg1 + 0x178)
        void var_168
        sub_141250690(arg9, &var_208, &var_168)
        var_208 = *(arg1 + 0x180)
        int16_t var_204_6 = *(arg1 + 0x184)
        void var_128
        sub_141250690(arg9, &var_208, &var_128)
        var_208 = *(arg1 + 0x186)
        int16_t var_204_7 = *(arg1 + 0x18a)
        void var_e8
        result = sub_141250690(arg9, &var_208, &var_e8)

if (*(arg1 + 0x146) != 0xffff && rsi != 0)
    int32_t rax_50
    
    if (r14 == 0)
        rax_50 = 0
    else
        char rax_48 = *(r14 + 0x3f)
        
        if (rax_48 == 0)
            rax_50 = 0
        else
            uint64_t rflags_1
            int32_t temp0_5
            temp0_5, rflags_1 = _bit_scan_forward(zx.d(rax_48))
            rax_50 = temp0_5 + 1
    
    result = sub_14108daf0(arg9, arg1 + 0x146, *(rsi + (sx.q(rax_50) << 3) + 0xf0))

if (*(arg1 + 0x190) u> 0)
    TEB* gsbase
    
    if (data_143e903e8
            s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
        _Init_thread_header(&data_143e903e8)
        
        if (data_143e903e8 == 0xffffffff)
            int64_t* rcx_24 = data_143db18d0
            
            if (rcx_24 == 0)
                sub_140a53c40()
                rcx_24 = data_143db18d0
            
            int64_t r8_15
            r8_15.b = 1
            int64_t* rax_58 = (*(*rcx_24 + 0xb0))(rcx_24, u"r.Mobile.Shadow.CSMDebugHint", r8_15)
            
            if (rax_58 != 0)
                int64_t rdx_18 = *rax_58
                r13 = (*(rdx_18 + 0x60))(rax_58, rdx_18)
            
            data_143e903e0 = r13
            _Init_thread_footer(&data_143e903e8)
    
    int32_t zmm0_1 = *(data_143e903e0 + 4)
    var_1f8 = *(arg1 + 0x18c)
    int16_t var_1f4_1 = *(arg1 + 0x190)
    var_208 = zmm0_1
    result = sub_14088bf20(arg9, &var_1f8, &var_208)

__security_check_cookie(rax_1 ^ &var_258)
return result
