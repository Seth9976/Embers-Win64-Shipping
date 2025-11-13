// 函数: sub_140852510
// 地址: 0x140852510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg2
*(arg1 + 0x10) = *(arg2 + 0xe0)
void* r12 = arg1
int64_t* rsi_1
void* r14_3

if ((*(arg2 + 0x6b8) & 0x20) != 0)
    rsi_1 = *(arg2 + 0xa0)
    r14_3 = &rsi_1[sx.q(*(arg2 + 0xa8)) * 2]

int64_t rax

if ((*(arg2 + 0x6b8) & 0x20) == 0 || rsi_1 == r14_3)
label_1408525c1:
    rax.b = 0
else
    while (true)
        void* rcx = *(*rsi_1 + 0x728)
        
        if (rcx != 0)
            int64_t* rbx_1 = *(rcx + 0x88)
            void* rdi_1 = &rbx_1[sx.q(*(rcx + 0x90))]
            
            if (rbx_1 != rdi_1)
                while (true)
                    int64_t* rcx_1 = *rbx_1
                    
                    if (rcx_1 != 0 && (*(*rcx_1 + 0x2e8))(rcx_1).b != 0)
                        rax.b = 1
                        break
                    
                    rbx_1 = &rbx_1[1]
                    
                    if (rbx_1 == rdi_1)
                        goto label_1408525b8
                
                break
        
    label_1408525b8:
        rsi_1 = &rsi_1[2]
        
        if (rsi_1 == r14_3)
            goto label_1408525c1

*(r12 + 0x4c) = rax.b
int64_t* rsi_2
void* r14_6

if ((*(r13 + 0x6b8) & 0x20) != 0)
    rsi_2 = *(r13 + 0xa0)
    r14_6 = &rsi_2[sx.q(*(r13 + 0xa8)) * 2]

if ((*(r13 + 0x6b8) & 0x20) == 0 || rsi_2 == r14_6)
label_140852641:
    rax.b = 0
else
    while (true)
        void* rcx_2 = *(*rsi_2 + 0x728)
        
        if (rcx_2 != 0)
            int64_t* rbx_2 = *(rcx_2 + 0x88)
            void* rdi_2 = &rbx_2[sx.q(*(rcx_2 + 0x90))]
            
            if (rbx_2 != rdi_2)
                while (true)
                    int64_t* rcx_3 = *rbx_2
                    
                    if (rcx_3 != 0 && (*(*rcx_3 + 0x2f0))(rcx_3).b != 0)
                        rax.b = 1
                        break
                    
                    rbx_2 = &rbx_2[1]
                    
                    if (rbx_2 == rdi_2)
                        goto label_140852638
                
                break
        
    label_140852638:
        rsi_2 = &rsi_2[2]
        
        if (rsi_2 == r14_6)
            goto label_140852641

*(r12 + 0x4d) = rax.b
int64_t* rsi_3
void* r14_9

if ((*(r13 + 0x6b8) & 0x20) != 0)
    rsi_3 = *(r13 + 0xa0)
    r14_9 = &rsi_3[sx.q(*(r13 + 0xa8)) * 2]

if ((*(r13 + 0x6b8) & 0x20) == 0 || rsi_3 == r14_9)
label_1408526c1:
    rax.b = 0
else
    while (true)
        void* rcx_4 = *(*rsi_3 + 0x728)
        
        if (rcx_4 != 0)
            int64_t* rbx_3 = *(rcx_4 + 0x88)
            void* rdi_3 = &rbx_3[sx.q(*(rcx_4 + 0x90))]
            
            if (rbx_3 != rdi_3)
                while (true)
                    int64_t* rcx_5 = *rbx_3
                    
                    if (rcx_5 != 0 && (*(*rcx_5 + 0x2f8))(rcx_5).b != 0)
                        rax.b = 1
                        break
                    
                    rbx_3 = &rbx_3[1]
                    
                    if (rbx_3 == rdi_3)
                        goto label_1408526b8
                
                break
        
    label_1408526b8:
        rsi_3 = &rsi_3[2]
        
        if (rsi_3 == r14_9)
            goto label_1408526c1

*(r12 + 0x4e) = rax.b
uint64_t rbx_4 = zx.q(*(r13 + 0x724))
int32_t var_e8
int32_t* i_3
char arg_18
int32_t arg_20

if (rbx_4.d != 0)
    void* const rax_4 = j_sub_140a82f30(0x60)
    
    if (rax_4 == 0)
        rax_4 = nullptr
    else
        *(rax_4 + 8) = 0
        void* rdx = rax_4 + 0x18
        *(rax_4 + 0x10) = 0
        *(rdx + 0x10) = 0
        *(rdx + 0x18) = 0
        *(rdx + 0x1c) = 0x80
        void* rcx_6 = *(rdx + 0x10)
        
        if (rcx_6 != 0)
            rdx = rcx_6
        
        *rdx = 0
        *(rdx + 8) = 0
        *(rax_4 + 0x38) = 0xffffffff
        *(rax_4 + 0x3c) = 0
        *(rax_4 + 0x48) = 0
        *(rax_4 + 0x50) = 0
    
    *(r12 + 0x18) = rax_4
    *(rax_4 + 0x58) = rbx_4.d
    int64_t rax_5 = sub_140a82f30(rbx_4, 0)
    void* r11_1 = r13 + 0x100
    void* rsi_4 = r11_1 + 0x10
    arg_18.d = 0
    int64_t var_d4_1 = 0
    int32_t r8_1 = 0
    int32_t var_e4_1 = 1
    **(r12 + 0x18) = rax_5
    void* var_e0_1 = rsi_4
    *(*(r12 + 0x18) + 0x5c) = *(r13 + 0x108) - *(r13 + 0x134)
    int32_t rcx_11 = 0
    int64_t* rax_7 = *(r12 + 0x18)
    int32_t rdi_4 = *(rsi_4 + 0x18)
    var_e8 = 0
    int32_t var_d8_1 = 0xffffffff
    int64_t r15_1 = *rax_7
    
    if (rdi_4 != 0)
        void* rax_8 = *(rsi_4 + 0x10)
        void* r9_1 = rsi_4
        
        if (rax_8 != 0)
            r9_1 = rax_8
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(rdi_4 - 1)
        int32_t rdx_3 = *r9_1
        
        if (rdx_3 != 0)
        label_140852809:
            int32_t rax_15 = neg.d(rdx_3) & rdx_3
            uint64_t rflags_1
            int32_t temp0_1
            temp0_1, rflags_1 = _bit_scan_reverse(rax_15)
            int32_t var_e4_2 = rax_15
            int32_t rax_16
            
            if (rax_15 == 0)
                rax_16 = 0x20
            else
                rax_16 = 0x1f - temp0_1
            
            var_d4_1.d = r8_1 - rax_16 + 0x1f
            
            if (r8_1 - rax_16 + 0x1f s> rdi_4)
                var_d4_1.d = rdi_4
        else
            while (true)
                int64_t rdx_4 = sx.q(rcx_11)
                r8_1 += 0x20
                rcx_11 += 1
                var_d4_1:4.d = r8_1
                var_e8 = rcx_11
                
                if (rdx_4.d s>= (temp2_1 + (temp1_1 & 0x1f)) s>> 5)
                    break
                
                rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
                var_d8_1 = 0xffffffff
                
                if (rdx_3 != 0)
                    goto label_140852809
            
            var_d4_1.d = rdi_4
    
    int32_t rdx_5 = *(r11_1 + 0x28)
    arg3 = var_d8_1.o
    double var_60_1[0x2] = arg3
    int32_t r14_10 = 0xffffffff << (rdx_5.b & 0x1f)
    int128_t var_70_1 = var_e8.o
    int32_t r8_4 = rdx_5 s>> 5
    int32_t r9_3 = rdx_5 & 0xffffffe0
    arg3 = _mm_unpackhi_pd(arg3, arg3[0])
    int64_t var_80_1 = arg3.q
    int32_t var_d8_2 = r14_10
    var_d4_1.d = rdx_5
    int128_t var_a0 = r11_1.o
    int128_t var_90_1 = var_70_1
    
    if (rdx_5 != rdi_4)
        void* rax_18 = *(rsi_4 + 0x10)
        void* r10_1 = rsi_4
        
        if (rax_18 != 0)
            r10_1 = rax_18
        
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(rdi_4 - 1)
        int32_t rdx_9 = *(r10_1 + (sx.q(r8_4) << 2)) & r14_10
        
        if (rdx_9 != 0)
        label_1408528d2:
            int32_t rax_25 = neg.d(rdx_9) & rdx_9
            uint64_t rflags_2
            int32_t temp0_3
            temp0_3, rflags_2 = _bit_scan_reverse(rax_25)
            int32_t rbx_5
            
            if (rax_25 == 0)
                rbx_5 = 0x20
            else
                rbx_5 = 0x1f - temp0_3
            
            var_d4_1.d = r9_3 - rbx_5 + 0x1f
            
            if (r9_3 - rbx_5 + 0x1f s> rdi_4)
                var_d4_1.d = rdi_4
        else
            while (true)
                int64_t rcx_16 = sx.q(r8_4)
                r9_3 += 0x20
                r8_4 += 1
                
                if (rcx_16.d s>= (temp4_1 + (temp3_1 & 0x1f)) s>> 5)
                    break
                
                rdx_9 = *(r10_1 + (rcx_16 << 2) + 4)
                var_d8_2 = 0xffffffff
                
                if (rdx_9 != 0)
                    goto label_1408528d2
            
            var_d4_1.d = rdi_4
        
        r11_1 = r13 + 0x100
    
    uint64_t rcx_19 = var_d8_2.q u>> 0x20
    uint64_t var_c8_1 = rcx_19
    
    while (true)
        int64_t rax_27 = sx.q(var_90_1:0xc.d)
        int64_t* rdx_10 = var_a0.q
        
        if (rax_27.d == rcx_19.d && var_90_1.q == rsi_4 && rdx_10 == r11_1)
            break
        
        int32_t* rdi_5 = *rdx_10 + rax_27 * 0x14
        int64_t* rax_29 = sub_140d3c6e0(rdi_5)
        
        if (rax_29 != 0)
            int64_t r14_11 = sx.q(rdi_5[2])
            i_3 = rax_29[5]
            int64_t rdx_11 = *rax_29
            int32_t rax_30 = (*(rdx_11 + 0x2b8))(rax_29, rdx_11)
            int64_t rdi_6 = sx.q(rax_30)
            
            if (rax_30 s> 0)
                (*(*rax_29 + 0x2b0))(rax_29, r15_1, r14_11 + *(r13 + 0xf0), r12 + 0x10)
                int32_t rbx_7 = arg_18.d
                var_e8.q = &i_3
                arg_18.d = rbx_7
                char* var_e0_2 = &arg_18
                sub_1408419d0(*(r12 + 0x18) + 8, &arg_20, &var_e8, nullptr)
                r15_1 += rdi_6
                arg_18.d = rbx_7 + rdi_6.d
        
        var_90_1:8.d &= not.d(var_a0:0xc.d)
        sub_14059bdd0(&var_a0:8)
        rcx_19 = var_c8_1
        r11_1 = r13 + 0x100

int32_t rbx_9 = *(r13 + 0x720) * 0x110
int64_t rax_33 = sub_140a82f30(zx.q(*(r13 + 0x71c) + rbx_9), 0, arg3)
*(r12 + 0x20) = rax_33
int64_t r10_3 = rax_33
bool cond:0 = *(r13 + 0x40) == 1
int64_t i_5 = 3
*(r12 + 0x44) = 0
*(r12 + 0x4f) = cond:0
void* const rcx_31 = 0x10
char rsi_5 = *(r13 + 0x728)
void* const rbx_10 = 0x20
int128_t* rdx_15 = zx.q(rbx_9) + rax_33
arg_18 = rsi_5
*(r12 + 0x28) = rdx_15

if (rsi_5 != 0)
    rcx_31 = 0x20

void* rcx_32 = rcx_31 + rdx_15
*(r12 + 0x30) = rcx_32

if (rsi_5 != 0)
    rbx_10 = 0x40

void* const var_c8_2 = rbx_10
*(r12 + 0x38) = rbx_10 + rcx_32
*rdx_15 = *(r13 + ((zx.q(*(r13 + 0x660)) & 1) + 0x21) * 0x10)
int64_t i_4 = 3
int128_t* rcx_33 = *(r12 + 0x30)
uint64_t rax_41 = (zx.q(*(r13 + 0x660)) & 1) << 5
*rcx_33 = *(rax_41 + r13 + 0x230)
rcx_33[1] = *(rax_41 + r13 + 0x240)
void* rcx_35 = r13 + 0x270 + (zx.q(*(r13 + 0x660)) & 1) * 0x1f0
int128_t* rax_45 = *(r12 + 0x38)
int128_t zmm0_2
int64_t i

do
    rax_45 = &rax_45[8]
    zmm0_2 = *rcx_35
    rcx_35 += 0x80
    rax_45[-8] = zmm0_2
    rax_45[-7] = *(rcx_35 - 0x70)
    rax_45[-6] = *(rcx_35 - 0x60)
    rax_45[-5] = *(rcx_35 - 0x50)
    rax_45[-4] = *(rcx_35 - 0x40)
    rax_45[-3] = *(rcx_35 - 0x30)
    rax_45[-2] = *(rcx_35 - 0x20)
    rax_45[-1] = *(rcx_35 - 0x10)
    i = i_4
    i_4 -= 1
while (i != 1)
int64_t r11_2 = 0x1f0
*rax_45 = *rcx_35
rax_45[1] = *(rcx_35 + 0x10)
rax_45[2] = *(rcx_35 + 0x20)
rax_45[3] = *(rcx_35 + 0x30)
rax_45[4] = *(rcx_35 + 0x40)
rax_45[5] = *(rcx_35 + 0x50)
rax_45[6] = *(rcx_35 + 0x60)

if (rsi_5 != 0)
    int32_t rax_46 = *(r13 + 0x660)
    *(*(r12 + 0x28) + 0x10) = *(r13 + (((zx.q(rax_46 u>> 1) ^ zx.q(rax_46)) & 1) + 0x21) * 0x10)
    int32_t rax_48 = *(r13 + 0x660)
    void* rax_49 = *(r12 + 0x30)
    uint64_t rcx_46 = ((zx.q(rax_48 u>> 1) ^ zx.q(rax_48)) & 1) << 5
    *(rax_49 + 0x20) = *(rcx_46 + r13 + 0x230)
    *(rax_49 + 0x30) = *(rcx_46 + r13 + 0x240)
    int32_t rax_50 = *(r13 + 0x660)
    void* rcx_52 = r13 + 0x270 + ((zx.q(rax_50 u>> 1) ^ zx.q(rax_50)) & 1) * 0x1f0
    int128_t* rax_53 = *(r12 + 0x38) + 0x1f0
    int64_t i_1
    
    do
        rax_53 = &rax_53[8]
        zmm0_2 = *rcx_52
        rcx_52 += 0x80
        rax_53[-8] = zmm0_2
        rax_53[-7] = *(rcx_52 - 0x70)
        rax_53[-6] = *(rcx_52 - 0x60)
        rax_53[-5] = *(rcx_52 - 0x50)
        rax_53[-4] = *(rcx_52 - 0x40)
        rax_53[-3] = *(rcx_52 - 0x30)
        rax_53[-2] = *(rcx_52 - 0x20)
        rax_53[-1] = *(rcx_52 - 0x10)
        i_1 = i_5
        i_5 -= 1
    while (i_1 != 1)
    *rax_53 = *rcx_52
    rax_53[1] = *(rcx_52 + 0x10)
    rax_53[2] = *(rcx_52 + 0x20)
    rax_53[3] = *(rcx_52 + 0x30)
    rax_53[4] = *(rcx_52 + 0x40)
    rax_53[5] = *(rcx_52 + 0x50)
    rax_53[6] = *(rcx_52 + 0x60)

int32_t* i_2 = *(r13 + 0x6f8)
i_3 = i_2

if (rsi_5 != 0)
    r11_2 = 0x3e0

int32_t rdx_16 = 0
void* r11_3 = r11_2 + *(r12 + 0x38)
uint64_t result = &i_2[sx.q(*(r13 + 0x700))]
var_e8.q = result

if (i_2 != result)
    do
        int64_t r8_8 = sx.q(*i_2)
        int128_t* r9_6 = r11_3
        result = *(r13 + 0xa0)
        void* r15_2 = *(result + r8_8 * 0x10)
        
        if (r15_2 != 0)
            result = *(r15_2 + 0x788)
            
            if (*(result + 0xd8) == 1)
                void* rdi_7 = *(r15_2 + 0x728)
                
                if (rdi_7 != 0)
                    result = zx.q(*(r15_2 + 0x24) - 3)
                    
                    if (result.d u> 1)
                        int32_t r8_9 = r8_8.d * 2
                        int64_t* r14_13 = zx.q(rdx_16) * 0x110 + r10_3
                        arg_20 = rdx_16 + 1
                        *r14_13 = 0
                        r14_13[1].d = 0
                        r14_13[0x16] = 0
                        r14_13[0x17] = 0
                        __builtin_memset(&r14_13[0x19], 0, 0x12)
                        r14_13[0x20] = 0
                        r14_13[0x21].d = 0
                        *(r14_13 + 0x10c) = 1
                        r14_13[0x18] = rdi_7
                        *r14_13 = *(rdi_7 + 0x148)
                        *(r14_13 + 0x10) = *(rdi_7 + 0x158)
                        *(r14_13 + 0x20) = *(rdi_7 + 0x168)
                        *(r14_13 + 0x30) = *(rdi_7 + 0x178)
                        *(r14_13 + 0x40) = *(rdi_7 + 0x188)
                        *(r14_13 + 0x50) = *(rdi_7 + 0x198)
                        *(r14_13 + 0x60) = *(rdi_7 + 0x1a8)
                        *(r14_13 + 0x70) = *(rdi_7 + 0x1b8)
                        *(r14_13 + 0x80) = *(rdi_7 + 0x1c8)
                        *(r14_13 + 0x90) = *(rdi_7 + 0x1d8)
                        r14_13[0x14] = *(rdi_7 + 0x1e8)
                        r14_13[0x15].d = *(rdi_7 + 0x1f0)
                        uint64_t count = zx.q(*(rdi_7 + 0x114))
                        r14_13[0x16] = r11_3
                        void* r11_4 = r11_3 + rbx_10
                        r14_13[0x17] = r11_4
                        int128_t* rcx_58 = (sx.q((*(r13 + 0x660) & 1) + r8_9) << 5) + *(r13 + 0x650)
                        *r9_6 = *rcx_58
                        r9_6[1] = rcx_58[1]
                        
                        if (rsi_5 != 0)
                            int32_t rax_63 = *(r13 + 0x660)
                            void* rax_64 = r14_13[0x16]
                            int128_t* rdx_20 =
                                (sx.q(((rax_63 u>> 1 ^ rax_63) & 1) + r8_9) << 5) + *(r13 + 0x650)
                            *(rax_64 + 0x20) = *rdx_20
                            *(rax_64 + 0x30) = rdx_20[1]
                        
                        int64_t r12_1 = r14_13[0x17]
                        memset(r12_1, 0, count)
                        int64_t rax_65 = *(rdi_7 + 0x78)
                        int32_t j = 0
                        
                        if (*(rdi_7 + 0x120) s> 0)
                            int64_t rbx_11 = 0
                            
                            do
                                void* rax_66 = *(rdi_7 + 0x118)
                                memcpy(zx.q(*(rax_66 + rbx_11 + 2)) + r12_1, 
                                    zx.q(*(rax_66 + rbx_11)) + rax_65, zx.d(*(rax_66 + rbx_11 + 4)))
                                j += 1
                                rbx_11 += 8
                            while (j s< *(rdi_7 + 0x120))
                            
                            r13 = arg2
                        
                        void* rcx_67 = *(r15_2 + 0x788)
                        
                        if (rcx_67 == 0)
                            r14_13[0x1b].b = 0
                            
                            if (*(r14_13 + 0xd9) == 0)
                                r12 = arg1
                            else
                                r12 = arg1
                                *(r12 + 0x48) += 1
                        else
                            char rax_67 = *(rcx_67 + 0x1a8) & 1
                            r14_13[0x1b].b = rax_67
                            uint8_t rcx_69 = (*(rcx_67 + 0x1a8) u>> 1).b & 1
                            *(r14_13 + 0xd9) = rcx_69
                            
                            if (rax_67 != 0 || rcx_69 != 0)
                                r12 = arg1
                                *(r12 + 0x48) += 1
                            else
                                r12 = arg1
                        
                        int64_t r15_3 = sx.q(*(rdi_7 + 0x1f8))
                        void* rbx_12 = &r14_13[0x1c]
                        int64_t rsi_6 = sx.q(*(rbx_12 + 0x28))
                        int32_t rax_68 = (rsi_6 + r15_3).d
                        *(rbx_12 + 0x28) = rax_68
                        
                        if (rax_68 s> *(rbx_12 + 0x2c))
                            sub_14085a470(rbx_12, rsi_6.d)
                        
                        void* rax_69 = *(rbx_12 + 0x20)
                        
                        if (rax_69 != 0)
                            rbx_12 = rax_69
                        
                        memset((rsi_6 << 5) + rbx_12, 0, r15_3 << 5)
                        int32_t rax_70 = *(rdi_7 + 0x1f8)
                        int32_t rcx_74 = 1
                        
                        if (rax_70 s>= 1)
                            rcx_74 = rax_70
                        
                        *(r12 + 0x44) += rcx_74
                        int32_t rax_71 = *(rdi_7 + 0x90)
                        
                        if (rax_71 s> *(r14_13 + 0xd4))
                            sub_1405c5570(&r14_13[0x19], rax_71)
                            rax_71 = *(rdi_7 + 0x90)
                        
                        int64_t* rsi_7 = *(rdi_7 + 0x88)
                        int64_t r14_14 = 0
                        result = &rsi_7[sx.q(rax_71)]
                        uint64_t r15_5 = sx.q(rax_71) << 3 u>> 3
                        
                        if (rsi_7 u> result)
                            r15_5 = 0
                        
                        if (r15_5 != 0)
                            do
                                int64_t rdi_8 = sx.q(r14_13[0x1a].d)
                                int64_t r12_2 = *(*rsi_7 + 0x28)
                                int32_t rax_74 = (rdi_8 + 1).d
                                r14_13[0x1a].d = rax_74
                                
                                if (rax_74 s> *(r14_13 + 0xd4))
                                    sub_1405a4d70(&r14_13[0x19])
                                
                                result = r14_13[0x19]
                                rsi_7 = &rsi_7[1]
                                r14_14 += 1
                                *(result + (rdi_8 << 3)) = r12_2
                            while (r14_14 != r15_5)
                            
                            r12 = arg1
                        
                        rbx_10 = var_c8_2
                        r10_3 = rax_33
                        rsi_5 = arg_18
                        rdx_16 = arg_20
                        r11_3 = r11_4 + sx.q(count.d)
        
        i_2 = &i_3[1]
        i_3 = i_2
    while (i_2 != var_e8.q)

*(r12 + 0x40) = rdx_16
return result
