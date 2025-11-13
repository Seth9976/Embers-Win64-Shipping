// 函数: sub_14240db30
// 地址: 0x14240db30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t* r15 = arg1
void* rax_2 = nullptr

if (((arg1[1].d u>> 4).b & 1) == 0)
    rax_2 = arg1[4]

void* rbx = *(rax_2 + 0x298)
void* var_d0
int32_t i_4
int64_t* var_98
int128_t zmm0

if (rbx != 0)
    void* rax_3 = sub_142531230()
    void* rdx_1 = *(rbx + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        int32_t r11_1 = r15[0x51].d
        void* r9_1 = &r15[0x4e]
        int32_t rcx_1 = 0
        int64_t* r12_1 = nullptr
        var_98 = nullptr
        int32_t i_5 = 0
        int32_t var_8c_1 = 0
        int32_t r13_1 = 0
        int32_t var_d8_1 = 0
        int32_t r8_2 = 0
        int32_t var_d4_1 = 1
        var_d0 = r9_1
        int32_t var_c8_1 = 0xffffffff
        int32_t var_c4
        var_c4.q = 0
        int32_t var_c0
        
        if (r11_1 != 0)
            void* rax_6 = *(r9_1 + 0x10)
            
            if (rax_6 != 0)
                r9_1 = rax_6
            
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_1 - 1)
            int32_t rdx_4 = *r9_1
            int32_t var_c4_2
            
            if (rdx_4 != 0)
            label_14240dc58:
                int32_t rax_13 = neg.d(rdx_4) & rdx_4
                uint64_t rflags_1
                int32_t temp0_1
                temp0_1, rflags_1 = _bit_scan_reverse(rax_13)
                int32_t var_d4_2 = rax_13
                int32_t rax_14
                
                if (rax_13 == 0)
                    rax_14 = 0x20
                else
                    rax_14 = 0x1f - temp0_1
                
                int32_t var_c4_1 = r8_2 - rax_14 + 0x1f
                
                if (r8_2 - rax_14 + 0x1f s> r11_1)
                    var_c4_2 = r11_1
            else
                while (true)
                    int64_t rdx_5 = sx.q(rcx_1)
                    r8_2 += 0x20
                    rcx_1 += 1
                    var_c0 = r8_2
                    var_d8_1 = rcx_1
                    
                    if (rdx_5.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                        break
                    
                    rdx_4 = *(r9_1 + (rdx_5 << 2) + 4)
                    var_c8_1 = 0xffffffff
                    
                    if (rdx_4 != 0)
                        goto label_14240dc58
                
                var_c4_2 = r11_1
        
        void* var_58_1 = &r15[0x4c]
        zmm0 = var_d8_1.o
        int128_t var_68_1 = 0xffffffff
        int16_t var_a0_1 = 0
        var_c8_1.o = zmm0
        void* rax_16 = zmm0.q
        zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
        var_d8_1.o = (&r15[0x4c]).o
        var_68_1 = zmm0
        int128_t var_b8_1 = zmm0
        
        if (_mm_bsrli_si128(0xffffffff, 4) s< *(rax_16 + 0x18))
            int32_t i = i_4
            
            do
                int64_t* r14_1 = sx.q(i) * 0xf0
                int64_t r15_1 = *var_d8_1.q
                
                if ((*(r14_1 + r15_1 + 0x34) & 1) != 0)
                    int64_t i_7 = sx.q(i_5)
                    i_5 = (i_7 + 1).d
                    
                    if (i_5 s> r13_1)
                        sub_1405a4df0(&var_98)
                        r13_1 = var_8c_1
                        r12_1 = var_98
                    
                    int64_t rcx_5 = i_7 * 3
                    r12_1[rcx_5] = *(r14_1 + r15_1)
                    r12_1[rcx_5 + 1] = *(r14_1 + r15_1 + 8)
                    void* rax_21 = *(r14_1 + r15_1 + 0x10)
                    r12_1[rcx_5 + 2] = rax_21
                    
                    if (rax_21 != 0)
                        *(rax_21 + 8) += 1
                
                var_c0 &= not.d(var_d0:4.d)
                sub_14059bdd0(&var_d0)
                i = i_4
            while (i s< *(var_c8_1.q + 0x18))
            
            if (var_a0_1.b != 0 && var_a0_1:1.b != 0)
                sub_141c9a080(&r15[0x4c], r15[0x4d].d - *(r15 + 0x294), 1)
            
            r15 = arg1
            
            if (i_5 s> 0)
                data_143f5b931 = 0
                int64_t* r14_2 = r12_1
                uint64_t i_6 = zx.q(i_5)
                uint64_t i_1
                
                do
                    var_98 = *r14_2
                    int32_t var_90
                    var_90.q = r14_2[1]
                    void* rax_27 = r14_2[2]
                    void* var_88_1 = rax_27
                    
                    if (rax_27 != 0)
                        *(rax_27 + 8) += 1
                    
                    (*(*r15 + 0x260))(r15, &var_98, 1, zx.o(0), sub_140d6de70(r14_2))
                    r14_2 = &r14_2[3]
                    i_1 = i_6
                    i_6 -= 1
                while (i_1 != 1)
        
        if (i_5 != 0)
            void* r14_3 = &r12_1[2]
            int32_t i_2
            
            do
                int64_t* rbx_3 = *r14_3
                
                if (rbx_3 != 0)
                    rbx_3[1].d -= 1
                    
                    if (rbx_3[1].d == 1)
                        (**rbx_3)(rbx_3)
                        int32_t temp6_1 = *(rbx_3 + 0xc)
                        *(rbx_3 + 0xc) -= 1
                        
                        if (temp6_1 == 1)
                            (*(*rbx_3 + 8))(rbx_3, 1)
                
                r14_3 += 0x18
                i_2 = i_5
                i_5 -= 1
            while (i_2 != 1)
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)

void* rax_32 = (*(*r15 + 0x150))(r15)
int32_t var_d8_2 = 0
int32_t r10 = r15[0x51].d
void* r8_5 = &r15[0x4e]
int32_t var_d4_3 = 1
int32_t rcx_14 = 0
int128_t zmm7 = *(rax_32 + 0x528)
var_d0 = r8_5
int32_t var_c8_2 = 0xffffffff
int32_t var_c4_3 = 0
int32_t var_c0_1 = 0

if (r10 != 0)
    void* rax_33 = *(r8_5 + 0x10)
    
    if (rax_33 != 0)
        r8_5 = rax_33
    
    int32_t temp0_4
    int32_t temp1_1
    temp0_4:temp1_1 = sx.q(r10 - 1)
    int32_t rdx_12 = *r8_5
    int32_t var_c4_5
    
    if (rdx_12 != 0)
    label_14240dee6:
        int32_t rax_40 = neg.d(rdx_12) & rdx_12
        uint64_t rflags_2
        int32_t temp0_5
        temp0_5, rflags_2 = _bit_scan_reverse(rax_40)
        int32_t var_d4_4 = rax_40
        int32_t r14_4
        
        if (rax_40 == 0)
            r14_4 = 0x20
        else
            r14_4 = 0x1f - temp0_5
        
        int32_t var_c4_4 = rcx_14 - r14_4 + 0x1f
        
        if (rcx_14 - r14_4 + 0x1f s> r10)
            var_c4_5 = r10
    else
        while (true)
            int64_t rdx_13 = sx.q(rsi)
            rcx_14 += 0x20
            rsi += 1
            var_c0_1 = rcx_14
            var_d8_2 = rsi
            
            if (rdx_13.d s>= (temp1_1 + (temp0_4 & 0x1f)) s>> 5)
                break
            
            rdx_12 = *(r8_5 + (rdx_13 << 2) + 4)
            var_c8_2 = 0xffffffff
            
            if (rdx_12 != 0)
                goto label_14240dee6
        
        var_c4_5 = r10

void* var_58_2 = &r15[0x4c]
int128_t var_68_2 = 0xffffffff
int16_t var_a0_2 = 0
int128_t zmm3 = var_d8_2.o
void* result = zmm3.q
zmm0.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_d8_2.o = (&r15[0x4c]).o
var_c8_2.o = zmm3
int128_t var_b8_2 = zmm0

if (_mm_bsrli_si128(0xffffffff, 4) s< *(result + 0x18))
    int32_t i_3 = i_4
    var_98 = nullptr
    uint128_t zmm6 = zx.o(var_98)
    int32_t var_90_1 = 0
    
    do
        int64_t rdx_15 = sx.q(i_3) * 0xf0
        int64_t rcx_17 = *var_d8_2.q
        var_c0_1 &= not.d(var_d0:4.d)
        *(rdx_15 + rcx_17 + 0x34) &= 0xfc
        *(rdx_15 + rcx_17 + 0x18) = zmm6.q
        *(rdx_15 + rcx_17 + 0x20) = 0
        *(rdx_15 + rcx_17 + 0x30) = zmm7.d
        sub_14059bdd0(&var_d0)
        result = var_c8_2.q
        i_3 = i_4
    while (i_3 s< *(result + 0x18))
    
    if (var_a0_2.b != 0 && var_a0_2:1.b != 0)
        return sub_141c9a080(&r15[0x4c], r15[0x4d].d - *(r15 + 0x294), 1)

return result
