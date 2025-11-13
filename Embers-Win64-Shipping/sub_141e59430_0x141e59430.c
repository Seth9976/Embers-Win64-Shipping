// 函数: sub_141e59430
// 地址: 0x141e59430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rax_1 = (*(arg3 + 8) u>> 4).b
void* rcx = arg3
void* arg_20 = rcx
int128_t* result = arg2

if ((rax_1 & 1) != 0)
    rcx = *(arg3 + 0x10)
    arg_20 = rcx

int16_t* var_b8
sub_140d21e10(rcx, &var_b8, 0)
int16_t* const rdx_1 = &data_142d40450
int32_t var_b0

if (var_b0 != 0)
    rdx_1 = var_b8

int64_t var_a8
void* arg_18
(*(*arg1 + 0x2c8))(arg1, &var_a8, *sub_140b58260(&arg_18, rdx_1, 1))
arg_18 = nullptr
bool rax_3

if (var_a8 == 0)
    rax_3 = false
else
    int32_t var_a0
    int32_t rcx_3
    rcx_3.b = sub_140b5b8a0(var_a0, 0) == 0
    int32_t var_9c
    
    if ((var_9c != 0 | rcx_3.b) == 0)
        rax_3 = false
    else
        rax_3 = true

if (rax_3 == 0)
    int64_t arg_8 = 0
    int32_t r10_1 = arg1[0x80].d
    int32_t rcx_4 = 0
    int32_t r8_1 = 0
    arg_18 = &arg1[0x7b]
    int32_t var_d8 = 0
    int32_t var_d4_1 = 1
    void* var_d0_1 = &arg1[0x7d]
    int32_t var_c8_1 = 0xffffffff
    int64_t var_c4_1 = 0
    
    if (r10_1 != 0)
        void* rax_4 = arg1[0x7f]
        void* r9_1 = &arg1[0x7d]
        
        if (rax_4 != 0)
            r9_1 = rax_4
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_5 = *r9_1
        
        if (rdx_5 != 0)
        label_141e59589:
            int32_t rax_11 = ((rdx_5 - 1) & rdx_5) ^ rdx_5
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_11)
            int32_t var_d4_2 = rax_11
            int32_t rax_12
            
            if (rax_11 == 0)
                rax_12 = 0x20
            else
                rax_12 = 0x1f - temp0_2
            
            var_c4_1.d = r8_1 - rax_12 + 0x1f
            
            if (r8_1 - rax_12 + 0x1f s> r10_1)
                var_c4_1.d = r10_1
        else
            while (true)
                int64_t rdx_6 = sx.q(rcx_4)
                r8_1 += 0x20
                rcx_4 += 1
                var_c4_1:4.d = r8_1
                var_d8 = rcx_4
                
                if (rdx_6.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_5 = *(r9_1 + (rdx_6 << 2) + 4)
                var_c8_1 = 0xffffffff
                
                if (rdx_5 != 0)
                    goto label_141e59589
            
            var_c4_1.d = r10_1
    
    int32_t rdx_7 = arg1[0x80].d
    double zmm2_1[0x2] = var_c8_1.o
    var_c4_1.d = rdx_7
    double var_58_1[0x2] = zmm2_1
    int128_t var_68_1 = var_d8.o
    int32_t rsi_1 = 0xffffffff << (rdx_7 & 0x1f).b
    int32_t r8_4 = rdx_7 s>> 5
    int32_t r9_3 = rdx_7 & 0xffffffe0
    int64_t var_78_1 = (_mm_unpackhi_pd(zmm2_1, zmm2_1[0])).q
    int32_t var_c8_2 = rsi_1
    int128_t var_98 = (&arg1[0x7b]).o
    int128_t var_88_1 = var_68_1
    
    if (rdx_7 != r10_1)
        void* rax_16 = arg1[0x7f]
        void* r11_1 = &arg1[0x7d]
        
        if (rax_16 != 0)
            r11_1 = rax_16
        
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r10_1 - 1)
        int32_t rdx_11 = *(r11_1 + (sx.q(r8_4) << 2)) & rsi_1
        
        if (rdx_11 != 0)
        label_141e59656:
            int32_t rax_22 = ((rdx_11 - 1) & rdx_11) ^ rdx_11
            uint64_t rflags_2
            int32_t temp0_4
            temp0_4, rflags_2 = _bit_scan_reverse(rax_22)
            int32_t rdi_1
            
            if (rax_22 == 0)
                rdi_1 = 0x20
            else
                rdi_1 = 0x1f - temp0_4
            
            var_c4_1.d = r9_3 - rdi_1 + 0x1f
            
            if (r9_3 - rdi_1 + 0x1f s> r10_1)
                var_c4_1.d = r10_1
        else
            while (true)
                int64_t rcx_8 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                    break
                
                rdx_11 = *(r11_1 + (rcx_8 << 2) + 4)
                var_c8_2 = 0xffffffff
                
                if (rdx_11 != 0)
                    goto label_141e59656
            
            var_c4_1.d = r10_1
    
    void* r14 = arg_18
    
    while (true)
        int64_t rdx_12 = sx.q(var_88_1:0xc.d)
        int32_t rax_15
        
        if (rdx_12.d != (var_c8_2.q u>> 0x20).d || var_88_1.q != &arg1[0x7d])
            rax_15.b = 0
        else
            rax_15.b = 1
        
        int64_t rcx_10 = var_98.q
        
        if (rax_15.b == 0 || rcx_10 != r14)
            rax_15.b = 1
        else
            rax_15.b = 0
        
        if (rax_15.b == 0)
            break
        
        void* rdx_13 = *(arg3 + 0x10)
        int64_t* rsi_2 = *((rdx_12 << 5) + *rcx_10 + 8)
        void* r8_6 = rsi_2[6] + 0x30
        int64_t rax_26 = sx.q(*(r8_6 + 8))
        
        if (rax_26.d s<= *(rdx_13 + 0x38) && *(*(rdx_13 + 0x30) + (rax_26 << 3)) == r8_6)
            int64_t* i = rsi_2[0xe]
            
            for (void* rdi_4 = &i[sx.q(rsi_2[0xf].d) * 2]; i != rdi_4; i = &i[2])
                if (sub_140a32a50(&var_b8, i, 1) != 0)
                    int32_t rcx_13
                    rcx_13.b = sub_140b5b8a0(arg_8.d, 0) == 0
                    
                    if ((arg_8:4.d != 0 | rcx_13.b) == 0)
                        arg_8 = *rsi_2
        
        var_88_1:8.d &= not.d(var_98:0xc.d)
        sub_14059bdd0(&var_98:8)
    
    result = arg2
    
    if ((arg_8:4.d != 0 | sub_140b5b8a0(arg_8.d, 0) == 0) == 0)
        *result = 0
        *(result + 8) = 0
    else
        arg_18 = *(sub_140d21d80(arg_20) + 0x18)
        sub_140b63b70(&arg_18, &var_d8)
        int64_t rax_36 = *sub_140baaa10(&arg_20, &var_d8)
        *result = arg_8
        int64_t rcx_21 = var_d8.q
        *(result + 8) = rax_36
        
        if (rcx_21 != 0)
            sub_140a74f90(rcx_21)
else
    *result = var_a8.o

int16_t* rcx_22 = var_b8

if (rcx_22 != 0)
    sub_140a74f90(rcx_22)

return result
