// 函数: sub_1423b1ee0
// 地址: 0x1423b1ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xb8) != 0)
    return 

*(arg1 + 0xb8) = arg2

if (*(arg1 + 0xb0) == 0)
    return 

int64_t rax = sub_1425b3a40()

if (rax == 0)
    return 

void* rdx = *(arg1 + 0xb0)
int64_t r8_1 = rax + 0x30
rax = sx.q(*(rax + 0x38))

if (rax.d s> *(rdx + 0x38) || *(*(rdx + 0x30) + (rax << 3)) != r8_1 || rdx == 0
        || *(arg1 + 0x18) != *(arg1 + 0x44))
    return 

if (data_143f5a3f0 == 0)
    sub_1423b2510()

char r13_1 = *(arg1 + 0xc0)
*(arg1 + 0xc0) = 1
void* rax_1
void* r8_2
rax_1, r8_2 = sub_1425b3980()
int64_t rsi_1 = 0
void* const rdx_1

if (*(arg1 + 0xb0) == 0)
    rdx_1 = nullptr
else
    void* rax_2
    rax_2, r8_2 = sub_1425b3a40()
    
    if (rax_2 == 0)
        rdx_1 = nullptr
    else
        rdx_1 = *(arg1 + 0xb0)
        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
        
        if (rax_3.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
            rdx_1 = nullptr

int64_t rax_5

if (rax_1 != 0)
    rax_5 = sx.q(*(rax_1 + 0x38))

int64_t** var_98

if (rax_1 == 0 || rax_5.d s> *(rdx_1 + 0x38) || *(*(rdx_1 + 0x30) + (rax_5 << 3)) != rax_1 + 0x30)
    var_98 = nullptr
    int32_t var_90_2 = 0
    void* const r9_2
    
    if (*(arg1 + 0xb0) == 0)
        r9_2 = nullptr
    else
        void* rax_33
        rax_33, r8_2 = sub_1425b3a40()
        
        if (rax_33 == 0)
            r9_2 = nullptr
        else
            r9_2 = *(arg1 + 0xb0)
            int64_t rax_34 = sx.q(*(rax_33 + 0x38))
            
            if (rax_34.d s> *(r9_2 + 0x38) || *(*(r9_2 + 0x30) + (rax_34 << 3)) != rax_33 + 0x30)
                r9_2 = nullptr
    
    r8_2.b = 1
    sub_140d3c7c0(r9_2, &var_98, r8_2.b)
    int64_t** rbx_2 = var_98
    void* rcx_17 = &rbx_2[sx.q(var_90_2)]
    uint64_t rdi_6 = (rcx_17 - rbx_2 + 7) u>> 3
    
    if (rbx_2 u> rcx_17)
        rdi_6 = 0
    
    if (rdi_6 != 0)
        do
            sub_1423a8920(arg1, *rbx_2)
            rsi_1 += 1
            rbx_2 = &rbx_2[1]
        while (rsi_1 != rdi_6)
        
        rbx_2 = var_98
    
    if (rbx_2 != 0)
        sub_140a74f90(rbx_2)
else
    int32_t r10_1 = (data_143a2ffd8).d
    var_98:4.d = 1
    int32_t rcx_3 = 0
    var_98.d = 0
    void* var_90_1 = &data_143a2ffc0
    int32_t r8_3 = 0
    int32_t var_88_1 = 0xffffffff
    int64_t var_84_1 = 0
    
    if (r10_1 != 0)
        void* rax_7 = data_143a2ffd0
        void* r11_1 = &data_143a2ffc0
        
        if (rax_7 != 0)
            r11_1 = rax_7
        
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(r10_1 - 1)
        int32_t rdx_4 = *r11_1
        
        if (rdx_4 != 0)
        label_1423b20a5:
            int32_t rax_14 = neg.d(rdx_4) & rdx_4
            uint64_t rflags_1
            int32_t temp0_2
            temp0_2, rflags_1 = _bit_scan_reverse(rax_14)
            var_98:4.d = rax_14
            int32_t rax_15
            
            if (rax_14 == 0)
                rax_15 = 0x20
            else
                rax_15 = 0x1f - temp0_2
            
            var_84_1.d = r8_3 - rax_15 + 0x1f
            
            if (r8_3 - rax_15 + 0x1f s> r10_1)
                var_84_1.d = r10_1
        else
            while (true)
                int64_t rdx_5 = sx.q(rcx_3)
                r8_3 += 0x20
                rcx_3 += 1
                var_84_1:4.d = r8_3
                var_98.d = rcx_3
                
                if (rdx_5.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                    break
                
                rdx_4 = *(r11_1 + (rdx_5 << 2) + 4)
                var_88_1 = 0xffffffff
                
                if (rdx_4 != 0)
                    goto label_1423b20a5
            
            var_84_1.d = r10_1
    
    double zmm2[0x2] = var_88_1.o
    double var_38_1[0x2] = zmm2
    var_84_1.d = r10_1
    int96_t zmm1 = var_98.o:8.12
    double temp0_3[0x2] = _mm_unpackhi_pd(zmm2, zmm2[0])
    int128_t var_78 = (&data_143a2ffb0).o
    int96_t var_68_1 = zmm1
    int64_t var_58_1 = temp0_3.q
    
    while (true)
        int32_t var_5c
        int64_t rcx_7 = sx.q(var_5c)
        int64_t* rax_17 = var_78.q
        
        if (rcx_7.d == ((0xffffffff << (r10_1.b & 0x1f)).q u>> 0x20).d
                && var_68_1.q == &data_143a2ffc0 && rax_17 == &data_143a2ffb0)
            break
        
        int64_t rax_18 = *rax_17
        int64_t rcx_8 = rcx_7 << 5
        void** i = *(rcx_8 + rax_18 + 8)
        
        for (void* r15_1 = &i[sx.q(*(rcx_8 + rax_18 + 0x10))]; i != r15_1; i = &i[1])
            void* const rdi_1
            
            if (*(arg1 + 0xb0) == 0)
                rdi_1 = nullptr
            else
                void* rax_20 = sub_1425b3a40()
                
                if (rax_20 == 0)
                    rdi_1 = nullptr
                else
                    rdi_1 = *(arg1 + 0xb0)
                    int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                    
                    if (rax_21.d s> *(rdi_1 + 0x38)
                            || *(*(rdi_1 + 0x30) + (rax_21 << 3)) != rax_20 + 0x30)
                        rdi_1 = nullptr
            
            void* const rdx_7
            
            if (*i == 0)
                rdx_7 = nullptr
            else
                void* rax_23 = sub_1425b3980()
                
                if (rax_23 == 0)
                    rdx_7 = nullptr
                else
                    rdx_7 = *i
                    int64_t rax_24 = sx.q(*(rax_23 + 0x38))
                    
                    if (rax_24.d s> *(rdx_7 + 0x38)
                            || *(*(rdx_7 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
                        rdx_7 = nullptr
            
            if (rdi_1 != 0)
                int64_t rax_26 = sx.q(*(rdi_1 + 0x38))
                
                if (rax_26.d s<= *(rdx_7 + 0x38)
                        && *(*(rdx_7 + 0x30) + (rax_26 << 3)) == rdi_1 + 0x30)
                    int64_t* rdx_8
                    
                    if (*i == 0)
                        rdx_8 = nullptr
                    else
                        void* rax_28 = sub_1425b3980()
                        
                        if (rax_28 == 0)
                            rdx_8 = nullptr
                        else
                            rdx_8 = *i
                            int64_t rax_29 = sx.q(*(rax_28 + 0x38))
                            
                            if (rax_29.d s> rdx_8[7].d
                                    || *(rdx_8[6] + (rax_29 << 3)) != rax_28 + 0x30)
                                rdx_8 = nullptr
                    
                    sub_1423a8920(arg1, rdx_8)
        
        var_68_1:8.d &= not.d(var_78:0xc.d)
        sub_14059bdd0(&var_78:8)
int64_t rbx_3 = sx.q(data_143f5a3f0)
int32_t rax_37 = (rbx_3 + 1).d
bool cond:2_1 = rax_37 s<= data_143f5a3f4
data_143f5a3f0 = rax_37

if (not(cond:2_1))
    sub_1405a4d70(&data_143f5a3e8)

*(data_143f5a3e8 + (rbx_3 << 3)) = arg1
*(arg1 + 0xc0) = r13_1
