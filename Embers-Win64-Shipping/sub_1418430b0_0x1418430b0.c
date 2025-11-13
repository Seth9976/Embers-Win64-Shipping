// 函数: sub_1418430b0
// 地址: 0x1418430b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
TEB* gsbase

if (data_143efa988 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143efa988)
    
    if (data_143efa988 == 0xffffffff)
        InitializeCriticalSection(&data_143efa960)
        SetCriticalSectionSpinCount(&data_143efa960, 0xfa0)
        atexit(sub_142cec050)
        _Init_thread_footer(&data_143efa988)

EnterCriticalSection(&data_143efa960)
void* i = *arg1

for (void* rax_6 = sx.q(arg1[1].d) * 0x78 + i; i != rax_6; i += 0x78)
    int64_t* rdi_1
    
    if (*(i + 0x70) - 1 u<= 2)
        rdi_1 = *(i + 8)
        
        if (rdi_1 != 0)
            rdi_1[1].d += 1
            
            if (rdi_1 != 0)
                rdi_1[1].d += 1
                rdi_1[1].d -= 1
                
                if (rdi_1[1].d == 1)
                    (**rdi_1)(rdi_1)
                    int32_t rax_11 = *(rdi_1 + 0xc)
                    *(rdi_1 + 0xc) -= 1
                    
                    if (rax_11 == 1)
                        (*(*rdi_1 + 8))(rdi_1, 1)
                
                if (rdi_1 != 0)
                    rdi_1[1].d += 1
                    rdi_1[1].d -= 1
                    
                    if (rdi_1[1].d == 1)
                        (**rdi_1)(rdi_1)
                        int32_t rax_15 = *(rdi_1 + 0xc)
                        *(rdi_1 + 0xc) -= 1
                        
                        if (rax_15 == 1)
                            (*(*rdi_1 + 8))(rdi_1, 1)
    else
        rdi_1 = nullptr
    
    int64_t* rbx_1
    
    if (*(i + 0x70) u<= 2)
        rbx_1 = *(i + 0x18)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            
            if (rbx_1 != 0)
                rbx_1[1].d += 1
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_19 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_19 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
                
                if (rbx_1 != 0)
                    rbx_1[1].d += 1
                    rbx_1[1].d -= 1
                    
                    if (rbx_1[1].d == 1)
                        (**rbx_1)(rbx_1)
                        int32_t rax_23 = *(rbx_1 + 0xc)
                        *(rbx_1 + 0xc) -= 1
                        
                        if (rax_23 == 1)
                            (*(*rbx_1 + 8))(rbx_1, 1)
    else
        rbx_1 = nullptr
    
    int32_t var_184_1 = 1
    int32_t r11_1 = *(i + 0x48)
    void* var_180_1 = i + 0x30
    int32_t rcx_8 = 0
    int32_t var_188_1 = 0
    int32_t r8_1 = 0
    int32_t var_178_1 = 0xffffffff
    int64_t var_174_1 = 0
    
    if (r11_1 != 0)
        void* rax_25 = *(i + 0x40)
        void* r9_1 = i + 0x30
        
        if (rax_25 != 0)
            r9_1 = rax_25
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r11_1 - 1)
        int32_t rdx_4 = *r9_1
        
        if (rdx_4 != 0)
        label_14184330b:
            int32_t rax_32 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_9
            temp0_9, rflags_1 = _bit_scan_reverse(rax_32)
            int32_t var_184_2 = rax_32
            int32_t var_120_1 = temp0_9
            int32_t rax_33
            
            if (rax_32 == 0)
                rax_33 = 0x20
            else
                rax_33 = 0x1f - temp0_9
            
            var_174_1.d = r8_1 - rax_33 + 0x1f
            
            if (r8_1 - rax_33 + 0x1f s> r11_1)
                var_174_1.d = r11_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_8)
                r8_1 += 0x20
                rcx_8 += 1
                var_174_1:4.d = r8_1
                var_188_1 = rcx_8
                
                if (rdx_5.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                int32_t var_178_2 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_14184330b
            
            var_174_1.d = r11_1
    
    int32_t rdx_6 = *(i + 0x48)
    int128_t var_140_1 = var_188_1.o
    int32_t r8_4 = rdx_6 s>> 5
    int32_t r12_1 = 0xffffffff << (rdx_6.b & 0x1f)
    int32_t r9_3 = rdx_6 & 0xffffffe0
    void* var_148_1
    var_148_1.d = r8_4
    int128_t var_130_1 = 0xffffffff
    int64_t var_e8_1 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int128_t zmm1 = var_140_1
    var_140_1:8.d = r12_1
    var_140_1:0xc.d = rdx_6
    var_130_1.d = r9_3
    int128_t var_108 = (i + 0x20).o
    int128_t var_f8_1 = zmm1
    
    if (rdx_6 != r11_1)
        void* rax_35 = *(i + 0x40)
        void* r10_1 = i + 0x30
        
        if (rax_35 != 0)
            r10_1 = rax_35
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11_1 - 1)
        int32_t rdx_10 = *(r10_1 + (sx.q(r8_4) << 2)) & r12_1
        
        if (rdx_10 != 0)
        label_14184340d:
            int32_t rax_42 = neg.d(rdx_10) & rdx_10
            uint64_t rflags_2
            int32_t temp0_11
            temp0_11, rflags_2 = _bit_scan_reverse(rax_42)
            int32_t var_11c_1 = temp0_11
            int32_t rax_43
            
            if (rax_42 == 0)
                rax_43 = 0x20
            else
                rax_43 = 0x1f - temp0_11
            
            var_140_1:0xc.d = r9_3 - rax_43 + 0x1f
            
            if (r9_3 - rax_43 + 0x1f s> r11_1)
                var_140_1:0xc.d = r11_1
        else
            while (true)
                int64_t rcx_13 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                var_130_1.d = r9_3
                var_148_1.d = r8_4
                
                if (rcx_13.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_10 = *(r10_1 + (rcx_13 << 2) + 4)
                var_140_1:8.d = 0xffffffff
                
                if (rdx_10 != 0)
                    goto label_14184340d
            
            var_140_1:0xc.d = r11_1
    
    while (var_f8_1:0xc.d != (var_140_1:8.q u>> 0x20).d || var_f8_1.q != i + 0x30
            || var_108.q != i + 0x20)
        var_f8_1:8.d &= not.d(var_108:0xc.d)
        sub_14059bdd0(&var_108:8)
    
    int64_t* rax_47 = *(i + 0x10)
    void* i_1 = i + 0x10
    int32_t var_5c_1 = 0x80
    int64_t var_88
    __builtin_memset(&var_88, 0, 0x2c)
    int64_t* rcx_16 = rax_47
    int32_t var_58_1 = 0xffffffff
    int32_t var_54_1 = 0
    int64_t var_48_1 = 0
    int32_t var_40_1 = 0
    
    if (rax_47 == 0)
        rcx_16 = *i
    
    if (rax_47 == 0)
        i_1 = i
    
    int64_t* rsi_3 = *(i_1 + 8)
    
    if (rsi_3 != 0)
        rsi_3[1].d += 1
    
    (*(*rcx_16 + 0xa8))(rcx_16, &var_88)
    
    if (rsi_3 != 0)
        rsi_3[1].d -= 1
        
        if (rsi_3[1].d == 1)
            (**rsi_3)(rsi_3)
            int32_t rax_51 = *(rsi_3 + 0xc)
            *(rsi_3 + 0xc) -= 1
            
            if (rax_51 == 1)
                (*(*rsi_3 + 8))(rsi_3, 1)
    
    int64_t var_78
    int64_t* var_160_1 = &var_78
    int32_t rcx_19 = 0
    int32_t var_168_1 = 0
    int32_t r8_5 = 0
    int32_t var_164_1 = 1
    int32_t var_158_1 = 0xffffffff
    int64_t var_154_1 = 0
    int64_t* var_68
    int32_t var_60
    
    if (var_60 != 0)
        int64_t* r9_5 = &var_78
        
        if (var_68 != 0)
            r9_5 = var_68
        
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(var_60 - 1)
        int32_t rdx_14 = *r9_5
        
        if (rdx_14 != 0)
        label_14184358b:
            int32_t rax_60 = neg.d(rdx_14) & rdx_14
            uint64_t rflags_3
            int32_t temp0_14
            temp0_14, rflags_3 = _bit_scan_reverse(rax_60)
            int32_t var_164_2 = rax_60
            int32_t var_118_1 = temp0_14
            int32_t rax_61
            
            if (rax_60 == 0)
                rax_61 = 0x20
            else
                rax_61 = 0x1f - temp0_14
            
            int32_t rax_62 = r8_5 - rax_61 + 0x1f
            
            if (rax_62 s> var_60)
                rax_62 = var_60
            
            var_154_1.d = rax_62
        else
            while (true)
                int64_t rdx_15 = sx.q(rcx_19)
                r8_5 += 0x20
                rcx_19 += 1
                var_154_1:4.d = r8_5
                var_168_1 = rcx_19
                
                if (rdx_15.d s>= (temp7_1 + (temp6_1 & 0x1f)) s>> 5)
                    var_154_1.d = var_60
                    break
                
                rdx_14 = *(r9_5 + (rdx_15 << 2) + 4)
                int32_t var_158_2 = 0xffffffff
                
                if (rdx_14 != 0)
                    goto label_14184358b
    
    int128_t var_b0_1 = var_168_1.o
    int128_t var_a0_1 = 0xffffffff
    int128_t var_a8
    zmm1 = var_a8
    var_a8.d = 0xffffffff << (var_60.b & 0x1f)
    var_a8:4.d = var_60
    int64_t zmm2 = _mm_unpackhi_pd(0xffffffff, 0xffffffff).q
    int128_t var_e0 = (&var_88).o
    int128_t var_d0_1 = zmm1
    int64_t var_c0_1 = zmm2
    
    while (var_d0_1:0xc.d != (var_a8.q u>> 0x20).d || var_d0_1.q != &var_78 || var_e0.q != &var_88)
        var_d0_1:8.d &= not.d(var_e0:0xc.d)
        sub_14059bdd0(&var_e0:8)
    
    int32_t var_40_2 = 0
    
    if (var_48_1 != 0)
        sub_140a74f90(var_48_1)
    
    sub_14059ad90(&var_88, 0)
    
    if (var_68 != 0)
        sub_140a74f90(var_68)
    
    int64_t rcx_27 = var_88
    
    if (rcx_27 != 0)
        sub_140a74f90(rcx_27)
    
    if (rbx_1 != 0)
        rbx_1[1].d -= 1
        
        if (rbx_1[1].d == 1)
            (**rbx_1)(rbx_1)
            int32_t rax_67 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_67 == 1)
                (*(*rbx_1 + 8))(rbx_1, 1)
    
    if (rdi_1 != 0)
        rdi_1[1].d -= 1
        
        if (rdi_1[1].d == 1)
            (**rdi_1)(rdi_1)
            int32_t rax_71 = *(rdi_1 + 0xc)
            *(rdi_1 + 0xc) -= 1
            
            if (rax_71 == 1)
                (*(*rdi_1 + 8))(rdi_1, 1)

int64_t result = LeaveCriticalSection(&data_143efa960)
__security_check_cookie(rax_1 ^ &var_1a8)
return result
