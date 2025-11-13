// 函数: sub_1418d3100
// 地址: 0x1418d3100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 9) != 0)
    if (arg1[6] != 0)
        sub_1405c2d80(&data_1439c9558, arg1[6])
    
    if (arg1[7] != 0)
        sub_1405c2d80(&data_1439c95a0, arg1[7])

sub_1418decc0(arg1)
int32_t var_94 = 1
int32_t var_88 = 0xffffffff
int32_t r11 = arg1[0x28].d
void* var_90 = &arg1[0x25]
int32_t rcx_1 = 0
int32_t var_98 = 0
int32_t r8 = 0
int64_t var_84 = 0

if (r11 != 0)
    void* rax_1 = arg1[0x27]
    void* r9_1 = &arg1[0x25]
    
    if (rax_1 != 0)
        r9_1 = rax_1
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 - 1)
    int32_t rdx_5 = *r9_1
    
    if (rdx_5 != 0)
    label_1418d31e8:
        int32_t rax_8 = neg.d(rdx_5) & rdx_5
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8)
        int32_t var_94_1 = rax_8
        int32_t rax_9
        
        if (rax_8 == 0)
            rax_9 = 0x20
        else
            rax_9 = 0x1f - temp0_2
        
        var_84.d = r8 - rax_9 + 0x1f
        
        if (r8 - rax_9 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rdx_6 = sx.q(rcx_1)
            r8 += 0x20
            rcx_1 += 1
            var_84:4.d = r8
            var_98 = rcx_1
            
            if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
            int32_t var_88_1 = 0xffffffff
            
            if (rdx_5 != 0)
                goto label_1418d31e8
        
        var_84.d = r11

int32_t rdx_7 = arg1[0x28].d
int128_t var_38 = 0xffffffff
int32_t r14 = 0xffffffff << (rdx_7.b & 0x1f)
int128_t var_48 = var_98.o
int32_t r8_3 = rdx_7 s>> 5
int32_t r9_3 = rdx_7 & 0xffffffe0
int64_t var_58 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
int32_t var_88_2 = r14
var_84.d = rdx_7
int128_t var_78 = (&arg1[0x23]).o
int96_t var_68 = var_48:8.12

if (rdx_7 != r11)
    void* rax_11 = arg1[0x27]
    void* r10_1 = &arg1[0x25]
    
    if (rax_11 != 0)
        r10_1 = rax_11
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_11 = *(r10_1 + (sx.q(r8_3) << 2)) & r14
    
    if (rdx_11 != 0)
    label_1418d32c2:
        int32_t rax_18 = neg.d(rdx_11) & rdx_11
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_18)
        int32_t rax_19
        
        if (rax_18 == 0)
            rax_19 = 0x20
        else
            rax_19 = 0x1f - temp0_4
        
        var_84.d = r9_3 - rax_19 + 0x1f
        
        if (r9_3 - rax_19 + 0x1f s> r11)
            var_84.d = r11
    else
        while (true)
            int64_t rcx_6 = sx.q(r8_3)
            r9_3 += 0x20
            r8_3 += 1
            
            if (rcx_6.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_11 = *(r10_1 + (rcx_6 << 2) + 4)
            var_88_2 = 0xffffffff
            
            if (rdx_11 != 0)
                goto label_1418d32c2
        
        var_84.d = r11

while (true)
    int32_t var_5c
    int64_t rax_21 = sx.q(var_5c)
    int64_t* rdx_12 = var_78.q
    
    if (rax_21.d == (var_88_2.q u>> 0x20).d && var_68.q == &arg1[0x25] && rdx_12 == &arg1[0x23])
        int32_t var_94_2 = 1
        int32_t r11_1 = arg1[0x32].d
        void* var_90_1 = &arg1[0x2f]
        int32_t rcx_11 = 0
        int32_t var_98_1 = 0
        int32_t r8_4 = 0
        int32_t var_88_3 = 0xffffffff
        int64_t var_84_1 = 0
        
        if (r11_1 != 0)
            void* rax_26 = arg1[0x31]
            void* r9_5 = &arg1[0x2f]
            
            if (rax_26 != 0)
                r9_5 = rax_26
            
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r11_1 - 1)
            int32_t rdx_15 = *r9_5
            
            if (rdx_15 != 0)
            label_1418d33b8:
                int32_t rax_33 = neg.d(rdx_15) & rdx_15
                uint64_t rflags_3
                int32_t temp0_5
                temp0_5, rflags_3 = _bit_scan_reverse(rax_33)
                int32_t var_94_3 = rax_33
                int32_t rax_34
                
                if (rax_33 == 0)
                    rax_34 = 0x20
                else
                    rax_34 = 0x1f - temp0_5
                
                var_84_1.d = r8_4 - rax_34 + 0x1f
                
                if (r8_4 - rax_34 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rdx_16 = sx.q(rcx_11)
                    r8_4 += 0x20
                    rcx_11 += 1
                    var_84_1:4.d = r8_4
                    var_98_1 = rcx_11
                    
                    if (rdx_16.d s>= (temp5_1 + (temp4_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_15 = *(r9_5 + (rdx_16 << 2) + 4)
                    int32_t var_88_4 = 0xffffffff
                    
                    if (rdx_15 != 0)
                        goto label_1418d33b8
                
                var_84_1.d = r11_1
        
        int32_t rdx_17 = arg1[0x32].d
        int128_t var_38_1 = 0xffffffff
        int32_t r12 = 0xffffffff << (rdx_17.b & 0x1f)
        int128_t var_48_1 = var_98_1.o
        int32_t r8_7 = rdx_17 s>> 5
        int32_t r9_7 = rdx_17 & 0xffffffe0
        int64_t var_58_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        int32_t var_88_5 = r12
        var_84_1.d = rdx_17
        var_78 = (&arg1[0x2d]).o
        int96_t var_68_1 = var_48_1:8.12
        
        if (rdx_17 != r11_1)
            void* rax_36 = arg1[0x31]
            void* r10_2 = &arg1[0x2f]
            
            if (rax_36 != 0)
                r10_2 = rax_36
            
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r11_1 - 1)
            int32_t rdx_21 = *(r10_2 + (sx.q(r8_7) << 2)) & r12
            
            if (rdx_21 != 0)
            label_1418d3492:
                int32_t rax_43 = neg.d(rdx_21) & rdx_21
                uint64_t rflags_4
                int32_t temp0_7
                temp0_7, rflags_4 = _bit_scan_reverse(rax_43)
                int32_t r13_1
                
                if (rax_43 == 0)
                    r13_1 = 0x20
                else
                    r13_1 = 0x1f - temp0_7
                
                var_84_1.d = r9_7 - r13_1 + 0x1f
                
                if (r9_7 - r13_1 + 0x1f s> r11_1)
                    var_84_1.d = r11_1
            else
                while (true)
                    int64_t rcx_16 = sx.q(r8_7)
                    r9_7 += 0x20
                    r8_7 += 1
                    
                    if (rcx_16.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_21 = *(r10_2 + (rcx_16 << 2) + 4)
                    var_88_5 = 0xffffffff
                    
                    if (rdx_21 != 0)
                        goto label_1418d3492
                
                var_84_1.d = r11_1
        
        while (true)
            int64_t rax_45 = sx.q(var_5c)
            int64_t* rdx_22 = var_78.q
            
            if (rax_45.d == (var_88_5.q u>> 0x20).d && var_68_1.q == &arg1[0x2f]
                    && rdx_22 == &arg1[0x2d])
                data_143efb860(*(*arg1 + 8), arg1[0x13], 0)
                arg1[0x13] = 0
                sub_1405ae100(&arg1[0x51])
                void** const rax_48 = &data_142efce08
                arg1[0x4b] = &data_142efce08
                
                if (arg1[0x4c] != 0)
                    int64_t i
                    
                    do
                        void* rcx_24 = arg1[0x4c]
                        i = *(rcx_24 + 8)
                        j_sub_140a74f90(rcx_24)
                        arg1[0x4c] = i
                    while (i != 0)
                    rax_48 = arg1[0x4b]
                
                arg1[0x4d] = 0
                arg1[0x4c] = 0
                rax_48[1](&arg1[0x4b], 0)
                DeleteCriticalSection(&arg1[0x46])
                arg1[0x45].d = 0
                int64_t rcx_27 = arg1[0x44]
                
                if (rcx_27 != 0)
                    sub_140a74f90(rcx_27)
                
                sub_1418d2350(&arg1[0x3c])
                DeleteCriticalSection(&arg1[0x37])
                arg1[0x36].d = 0
                int64_t rcx_30 = arg1[0x35]
                
                if (rcx_30 != 0)
                    sub_140a74f90(rcx_30)
                
                sub_1418d2000(&arg1[0x2d])
                arg1[0x2c].d = 0
                int64_t rcx_32 = arg1[0x2b]
                
                if (rcx_32 != 0)
                    sub_140a74f90(rcx_32)
                
                sub_1418e04d0(&arg1[0x23], 0)
                int64_t rcx_34 = arg1[0x27]
                
                if (rcx_34 != 0)
                    sub_140a74f90(rcx_34)
                
                int64_t rcx_35 = arg1[0x23]
                
                if (rcx_35 != 0)
                    sub_140a74f90(rcx_35)
                
                DeleteCriticalSection(&arg1[0x1e])
                arg1[0x1d].d = 0
                int64_t rcx_37 = arg1[0x1c]
                
                if (rcx_37 != 0)
                    sub_140a74f90(rcx_37)
                
                sub_14100e4f0(&arg1[0x14])
                void* result = sub_1405ae080(&arg1[9])
                int64_t rcx_40 = arg1[4]
                
                if (rcx_40 != 0)
                    result = sub_140a74f90(rcx_40)
                
                int64_t rcx_41 = arg1[2]
                
                if (rcx_41 == 0)
                    return result
                
                return sub_140a74f90(rcx_41)
            
            data_143efb8b8(*(*arg1 + 8), *(*rdx_22 + rax_45 * 0x30 + 0x18), 0)
            var_68_1:8.d &= not.d(var_78:0xc.d)
            sub_14059bdd0(&var_78:8)
    
    int64_t* rcx_9 = *(rax_21 * 0x190 + *rdx_12 + 0x180)
    
    if (rcx_9 != 0)
        (**rcx_9)(rcx_9, 1)
    
    var_68:8.d &= not.d(var_78:0xc.d)
    sub_14059bdd0(&var_78:8)
