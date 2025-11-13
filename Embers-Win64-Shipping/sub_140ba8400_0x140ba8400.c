// 函数: sub_140ba8400
// 地址: 0x140ba8400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0xe0) = u"finishing all objects"
*(arg1 + 0xd8) = 0
char arg_8
char* var_70 = &arg_8
arg_8 = 0
void*** (* var_78)() = sub_140884c50
void* r15 = *(sub_140a756e0(&var_78, &data_14397f5f0) + 0x48)
int32_t r14

if (*(arg1 + 0xcb) != 0)
    int64_t rsi_1 = sx.q(*(r15 + 0x18))
    
    if (rsi_1.d != 0)
        int32_t rax_1 = *(arg1 + 0x120)
        int32_t rdx_1 = rax_1 + rsi_1.d
        
        if (rdx_1 s> *(arg1 + 0x124))
            sub_1405c5570(arg1 + 0x118, rdx_1)
            rax_1 = *(arg1 + 0x120)
        
        memcpy(*(arg1 + 0x118) + (sx.q(rax_1) << 3), *(r15 + 0x10), (rsi_1 << 3).d)
        *(arg1 + 0x120) += rsi_1.d
    
    int32_t rax_3 = *(arg1 + 0x120)
    int64_t rsi_2 = sx.q(rax_3 - 1)
    
    if (rax_3 - 1 s>= 0)
        int64_t temp3_1
        
        do
            void* rbx_1 = *(*(arg1 + 0x118) + (rsi_2 << 3))
            
            if (rbx_1 != 0 && *(sub_140d21d80(rbx_1) + 0x18) == *(arg1 + 0x14))
                *(rbx_1 + 8) &= 0xffffcbff
                int32_t rax_7 = *(rbx_1 + 0xc)
                void* const rax_11
                
                if (rax_7 s>= data_143e1d9b4)
                    rax_11 = nullptr
                else
                    uint32_t rdx_3 = zx.d(rax_7.w)
                    
                    if (rax_7 s< 0)
                        rax_7 += 0xffff
                        rdx_3 -= 0x10000
                    
                    rax_11 = *(data_143e1d9a0 + (sx.q(rax_7 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
                
                *(rax_11 + 8) |= 0x20000000
                *(*(arg1 + 0x118) + (rsi_2 << 3)) = 0
            
            temp3_1 = rsi_2
            rsi_2 -= 1
        while (temp3_1 - 1 s>= 0)
    
    void* r8_3 = *(arg1 + 0x58)
    
    if (r8_3 != 0)
        int32_t rax_13 = *(r8_3 + 0xc)
        void* const rax_20
        
        if (rax_13 s>= data_143e1d9b4)
            rax_20 = nullptr
        else
            int16_t temp1_1
            int32_t temp2_1
            temp1_1:temp2_1 = sx.q(rax_13)
            uint32_t rdx_6 = zx.d(temp1_1)
            int32_t rax_15 = temp2_1 + rdx_6
            rax_20 = *(data_143e1d9a0 + (sx.q(rax_15 s>> 0x10) << 3))
                + sx.q(zx.d(rax_15.w) - rdx_6) * 0x18
        
        if (((*(rax_20 + 8) u>> 0x1e).b & 1) == 0)
            if (*(arg1 + 0xce) != 0)
                *(r8_3 + 8) &= 0xffffcbff
                int32_t rax_24 = *(*(arg1 + 0x58) + 0xc)
                void* const rax_31
                
                if (rax_24 s>= data_143e1d9b4)
                    rax_31 = nullptr
                else
                    int16_t temp4_1
                    int32_t temp5_1
                    temp4_1:temp5_1 = sx.q(rax_24)
                    uint32_t rdx_9 = zx.d(temp4_1)
                    int32_t rax_26 = temp5_1 + rdx_9
                    rax_31 = *(data_143e1d9a0 + (sx.q(rax_26 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_26.w) - rdx_9) * 0x18
                
                *(rax_31 + 8) |= 0x20000000
                int64_t arg_20 = 0
                void* rax_32 = sub_140cddea0()
                void var_68
                int64_t var_60
                int64_t* rax_35 =
                    sub_140b63b70(sub_140d25240(&var_68, sub_140cde0b0(), rax_32, 0), &var_60)
                int16_t* const rdx_13
                
                if (rax_35[1].d == 0)
                    rdx_13 = &data_142d40450
                else
                    rdx_13 = *rax_35
                
                int64_t* rcx_19 = *(arg1 + 0x58)
                (*(*rcx_19 + 0x138))(rcx_19, rdx_13, 0, 0x35)
                int64_t rcx_20 = var_60
                
                if (rcx_20 != 0)
                    sub_140a74f90(rcx_20)
            
            void* rcx_21 = *(arg1 + 0x50)
            
            if (rcx_21 != 0)
                sub_140cba9f0(rcx_21 + 0x200)
                *(*(arg1 + 0x50) + 0x2e0) = 0
                *(arg1 + 0x50) = 0
    
    r14 = 0
else
    *(r15 + 0x18) = 0
    
    if (*(r15 + 0x1c) s<= 0xffffffff)
        sub_1405c5570(r15 + 0x10, 0)
    
    r14 = 1

sub_140cd9730(sub_140cdbb20())
*(arg1 + 0xa8) = 0
*(arg1 + 0xb0) = 0

if (arg1 + 0x128 != r15 + 0x20)
    int64_t rcx_24 = *(arg1 + 0x128)
    
    if (rcx_24 != 0)
        sub_140a74f90(rcx_24)
    
    *(arg1 + 0x128) = *(r15 + 0x20)
    *(r15 + 0x20) = 0
    *(arg1 + 0x130) = *(r15 + 0x28)
    *(arg1 + 0x134) = *(r15 + 0x2c)
    *(r15 + 0x28) = 0

void* rcx_25 = *(arg1 + 0x50)

if (rcx_25 != 0)
    sub_140cba9f0(rcx_25 + 0x200)

if (data_143de5452 == 0)
    sub_140d3ae20(r15)
else
    sub_140b9bee0(arg1, 1, r14)

EnterCriticalSection(arg1 + 0x1b0)
int32_t var_e4 = 1
int32_t r11 = *(arg1 + 0x188)
void* var_e0 = arg1 + 0x170
int32_t rcx_30 = 0
int32_t var_e8 = 0
int32_t r8_6 = 0
int32_t var_d8 = 0xffffffff
int64_t var_d4 = 0

if (r11 != 0)
    void* rax_42 = *(arg1 + 0x180)
    void* r9_1 = arg1 + 0x170
    
    if (rax_42 != 0)
        r9_1 = rax_42
    
    int32_t temp6_1
    int32_t temp7_1
    temp6_1:temp7_1 = sx.q(r11 - 1)
    int32_t rdx_17 = *r9_1
    
    if (rdx_17 != 0)
    label_140ba87b9:
        int32_t rax_49 = neg.d(rdx_17) & rdx_17
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_49)
        int32_t var_e4_1 = rax_49
        int32_t arg_10 = temp0_2
        int32_t rax_50
        
        if (rax_49 == 0)
            rax_50 = 0x20
        else
            rax_50 = 0x1f - temp0_2
        
        var_d4.d = r8_6 - rax_50 + 0x1f
        
        if (r8_6 - rax_50 + 0x1f s> r11)
            var_d4.d = r11
    else
        while (true)
            int64_t rdx_18 = sx.q(rcx_30)
            r8_6 += 0x20
            rcx_30 += 1
            var_d4:4.d = r8_6
            var_e8 = rcx_30
            
            if (rdx_18.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                break
            
            rdx_17 = *(r9_1 + (rdx_18 << 2) + 4)
            int32_t var_d8_1 = 0xffffffff
            
            if (rdx_17 != 0)
                goto label_140ba87b9
        
        var_d4.d = r11

int32_t rdx_19 = *(arg1 + 0x188)
int32_t r8_9 = rdx_19 s>> 5
int32_t r14_2 = 0xffffffff << (rdx_19.b & 0x1f)
int32_t r9_3 = rdx_19 & 0xffffffe0
void* var_c8
var_c8.d = r8_9
int128_t var_b0 = 0xffffffff
int64_t var_80 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
int128_t var_c0
var_c0:8.d = r14_2
var_c0:0xc.d = rdx_19
var_b0.d = r9_3
int128_t var_a0 = (arg1 + 0x160).o
int128_t var_90 = var_e8.o

if (rdx_19 != r11)
    void* rax_52 = *(arg1 + 0x180)
    void* r10_1 = arg1 + 0x170
    
    if (rax_52 != 0)
        r10_1 = rax_52
    
    int32_t temp8_1
    int32_t temp9_1
    temp8_1:temp9_1 = sx.q(r11 - 1)
    int32_t rdx_23 = *(r10_1 + (sx.q(r8_9) << 2)) & r14_2
    
    if (rdx_23 != 0)
    label_140ba889a:
        int32_t rax_59 = neg.d(rdx_23) & rdx_23
        uint64_t rflags_2
        int32_t temp0_4
        temp0_4, rflags_2 = _bit_scan_reverse(rax_59)
        int32_t arg_18 = temp0_4
        int32_t rdi_1
        
        if (rax_59 == 0)
            rdi_1 = 0x20
        else
            rdi_1 = 0x1f - temp0_4
        
        var_c0:0xc.d = r9_3 - rdi_1 + 0x1f
        
        if (r9_3 - rdi_1 + 0x1f s> r11)
            var_c0:0xc.d = r11
    else
        while (true)
            int64_t rcx_35 = sx.q(r8_9)
            r9_3 += 0x20
            r8_9 += 1
            var_b0.d = r9_3
            var_c8.d = r8_9
            
            if (rcx_35.d s>= (temp9_1 + (temp8_1 & 0x1f)) s>> 5)
                break
            
            rdx_23 = *(r10_1 + (rcx_35 << 2) + 4)
            var_c0:8.d = 0xffffffff
            
            if (rdx_23 != 0)
                goto label_140ba889a
        
        var_c0:0xc.d = r11

while (true)
    int64_t rcx_37 = sx.q(var_90:0xc.d)
    int64_t* rax_61 = var_a0.q
    
    if (rcx_37.d == (var_c0:8.q u>> 0x20).d && var_90.q == arg1 + 0x170 && rax_61 == arg1 + 0x160)
        if (arg1 != -0x1b0)
            LeaveCriticalSection(arg1 + 0x1b0)
        
        return 2
    
    void* rdx_24 = *(*rax_61 + rcx_37 * 0x10)
    
    if (rdx_24 != 0 && (*(rdx_24 + 8) & 0x3000) == 0)
        int32_t rax_63 = *(rdx_24 + 0xc)
        void* const r8_10
        
        if (rax_63 s>= data_143e1d9b4)
            r8_10 = nullptr
        else
            uint32_t rdx_25 = zx.d(rax_63.w)
            
            if (rax_63 s< 0)
                rax_63 += 0xffff
                rdx_25 -= 0x10000
            
            r8_10 = *(data_143e1d9a0 + (sx.q(rax_63 s>> 0x10) << 3)) + sx.q(rdx_25) * 0x18
        
        for (int32_t rax_67 = *(r8_10 + 8); test_bit(rax_67, 0x1b); rax_67 = *(r8_10 + 8))
            bool z_1
            
            if (rax_67 == *(r8_10 + 8))
                *(r8_10 + 8) = rax_67 & 0xf7ffffff
                z_1 = true
            else
                *(r8_10 + 8)
                z_1 = false
            
            if (z_1)
                break
    
    var_90:8.d &= not.d(var_a0:0xc.d)
    sub_14059bdd0(&var_a0:8)
