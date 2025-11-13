// 函数: sub_142715450
// 地址: 0x142715450
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rcx = arg1[0x1b]

if (rcx == 0 || sub_142604380(rcx) == 0)
    return 

int64_t* rcx_1 = arg1[5]
(*(*rcx_1 + 0x6d8))(rcx_1)
int32_t rsi_1 = 0
int32_t var_f4_1 = 1
void* r12_1 = &arg1[0xf]
int32_t var_e8_1 = 0xffffffff
int32_t r11_1 = *(r12_1 + 0x28)
void* r9_1 = r12_1 + 0x10
void* var_f0 = r9_1
int32_t rcx_2 = 0
int32_t var_f8_1 = 0
int32_t r8_1 = 0
int64_t var_e4_1 = 0

if (r11_1 != 0)
    void* rax_2 = *(r9_1 + 0x10)
    
    if (rax_2 != 0)
        r9_1 = rax_2
    
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11_1 - 1)
    int32_t rdx_3 = *r9_1
    
    if (rdx_3 != 0)
    label_14271553c:
        int32_t rax_9 = ((rdx_3 - 1) & rdx_3) ^ rdx_3
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_9)
        int32_t var_f4_2 = rax_9
        int32_t rax_10
        
        if (rax_9 == 0)
            rax_10 = 0x20
        else
            rax_10 = 0x1f - temp0_2
        
        var_e4_1.d = r8_1 - rax_10 + 0x1f
        
        if (r8_1 - rax_10 + 0x1f s> r11_1)
            var_e4_1.d = r11_1
    else
        while (true)
            int64_t rdx_4 = sx.q(rcx_2)
            r8_1 += 0x20
            rcx_2 += 1
            var_e4_1:4.d = r8_1
            var_f8_1 = rcx_2
            
            if (rdx_4.d s>= (temp1_1 + (temp0_1 & 0x1f)) s>> 5)
                break
            
            rdx_3 = *(r9_1 + (rdx_4 << 2) + 4)
            var_e8_1 = 0xffffffff
            
            if (rdx_3 != 0)
                goto label_14271553c
        
        var_e4_1.d = r11_1

uint128_t zmm4_1 = var_e8_1.o
void* var_70_1 = r12_1
uint128_t zmm0 = var_f8_1.o
uint128_t var_80_1 = zmm4_1
void* var_c8_1 = r12_1
int16_t var_c0_1 = 0
void* rax_12 = zmm0.q
var_e8_1.o = zmm0
var_f8_1.o = r12_1.o
zmm0.q = (_mm_unpackhi_pd(zmm4_1, zmm4_1.q)).q
var_80_1 = zmm0
uint128_t var_d8_1 = zmm0
int32_t i_2

if (_mm_bsrli_si128(zmm4_1, 4).d s< *(rax_12 + 0x18))
    int32_t i = i_2
    
    do
        int64_t r15_1 = *var_f8_1.q
        int64_t* r14_1 = sx.q(i) * 0x38
        int32_t rdx_5 = *(r14_1 + r15_1 + 0x20)
        
        if (rdx_5 s>= 0)
            int64_t* rbx_1 = *(r14_1 + r15_1)
            void* rax_16 = sub_14260f680(arg1[0x1b], rdx_5)
            int64_t rdx_6 = *rbx_1
            (*(rdx_6 + 0x28))(rbx_1, rdx_6)
            *(rax_16 + 0x28c) = zmm0.d
            int64_t r8_3 = *rbx_1
            int32_t var_b8
            void var_68
            sub_142697e10(&var_b8, (*(r8_3 + 0x10))(rbx_1, &var_68, r8_3))
            int64_t r8_4 = *rbx_1
            int32_t var_a8
            void var_5c
            sub_142697e10(&var_a8, (*(r8_4 + 0x18))(rbx_1, &var_5c, r8_4))
            *(rax_16 + 0x22c) = var_b8.d
            int32_t var_b4
            *(rax_16 + 0x230) = var_b4[0].d
            int32_t var_b0
            *(rax_16 + 0x234) = var_b0.d
            *(rax_16 + 0x25c) = var_a8[0].d
            int32_t var_a4
            zmm0 = var_a4
            *(rax_16 + 0x260) = zmm0.d
            int32_t var_a0
            *(rax_16 + 0x264) = var_a0[0].d
            
            if ((*(r14_1 + r15_1 + 0x28) & 2) != 0)
                zmm0.d = (*(r14_1 + r15_1 + 0x24)).d f- arg2[0].d
                *(r14_1 + r15_1 + 0x24) = zmm0.d
                int16_t rax_19 = *(rax_16 + 0x2ac)
                
                if (zmm0.d f<= 0f)
                    *(rax_16 + 0x2ac) = rax_19 | 8
                    *(r14_1 + r15_1 + 0x24) = *(arg1 + 0x64)
                else
                    *(rax_16 + 0x2ac) = rax_19 & 0xfff7
        
        var_e4_1:4.d &= not.d(var_f0:4.d)
        sub_14059bdd0(&var_f0)
        i = i_2
    while (i s< *(var_e8_1.q + 0x18))
    
    r12_1 = &arg1[0xf]
    
    if (var_c0_1.b != 0 && var_c0_1:1.b != 0)
        sub_140aa4bc0(var_c8_1, *(var_c8_1 + 8) - *(var_c8_1 + 0x34), 1)

arg1[0x1c]
int128_t zmm6_1 = sub_142619140(arg1[0x1b])

if ((arg1[0xe].b & 8) != 0)
    arg1[0x1c]
    zmm6_1 = sub_14261a290(arg1[0x1b], zmm6_1)

arg1[0x1c]
int512_t zmm1_1
int128_t zmm6_2
zmm1_1, zmm6_2 = sub_14261a2e0(arg1[0x1b], zmm6_1)
int64_t rdx_13 = (*(*arg1 + 0x298))(arg1)
zmm1_1.o = zmm6_2
int512_t zmm1_2
int128_t zmm6_3
zmm1_2, zmm6_3 = sub_142619930(arg1[0x1b], rdx_13, arg1[0x1c])
(*(*arg1 + 0x2a0))(arg1)
arg1[0x1c]
zmm1_2.o = zmm6_3
int64_t rdx_14
int512_t zmm1_3
int128_t zmm6_4
rdx_14, zmm1_3, zmm6_4 = sub_14261a860(arg1[0x1b])
zmm1_3.o = zmm6_4
float zmm6_5[0x4] = sub_142618ea0(arg1[0x1b], rdx_14, arg1[0x1c])

if ((arg1[0xe].b & 0x10) != 0)
    arg1[0x1c]
    sub_142619250(arg1[0x1b], zmm6_5)

uint32_t zmm6_6[0x4] = sub_142716860(arg1)
arg1[0x1c]
sub_142619ed0(arg1[0x1b], zmm6_6)
int32_t r10_1 = *(r12_1 + 0x28)
void* r8_14 = r12_1 + 0x10
int32_t var_f8_2 = 0
int32_t rcx_24 = 0
int32_t var_f4_3 = 1
var_f0 = r8_14
int32_t var_e8_2 = 0xffffffff
var_e4_1.d = 0
var_e4_1:4.d = 0

if (r10_1 != 0)
    void* rax_26 = *(r8_14 + 0x10)
    
    if (rax_26 != 0)
        r8_14 = rax_26
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r10_1 - 1)
    int32_t rdx_17 = *r8_14
    
    if (rdx_17 != 0)
    label_1427158da:
        int32_t rax_33 = ((rdx_17 - 1) & rdx_17) ^ rdx_17
        uint64_t rflags_2
        int32_t temp0_5
        temp0_5, rflags_2 = _bit_scan_reverse(rax_33)
        int32_t var_f4_4 = rax_33
        int32_t rbx_2
        
        if (rax_33 == 0)
            rbx_2 = 0x20
        else
            rbx_2 = 0x1f - temp0_5
        
        var_e4_1.d = rcx_24 - rbx_2 + 0x1f
        
        if (rcx_24 - rbx_2 + 0x1f s> r10_1)
            var_e4_1.d = r10_1
    else
        while (true)
            int64_t rdx_18 = sx.q(rsi_1)
            rcx_24 += 0x20
            rsi_1 += 1
            var_e4_1:4.d = rcx_24
            var_f8_2 = rsi_1
            
            if (rdx_18.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                break
            
            rdx_17 = *(r8_14 + (rdx_18 << 2) + 4)
            var_e8_2 = 0xffffffff
            
            if (rdx_17 != 0)
                goto label_1427158da
        
        var_e4_1.d = r10_1

void* var_70_2 = r12_1
int128_t var_80_2 = 0xffffffff
int16_t var_c0_2 = 0
int128_t zmm3_1 = var_f8_2.o
int128_t zmm0_1
zmm0_1.q = _mm_unpackhi_pd(0xffffffff, 0xffffffff)
var_f8_2.o = r12_1.o
var_e8_2.o = zmm3_1
int128_t var_d8_2 = zmm0_1

if (_mm_bsrli_si128(0xffffffff, 4) s< *(zmm3_1.q + 0x18))
    int32_t i_1 = i_2
    
    do
        int64_t rsi_2 = *var_f8_2.q
        int64_t* rbx_3 = sx.q(i_1) * 0x38
        
        if ((*(rbx_3 + rsi_2 + 0x28) & 1) != 0 && *(rbx_3 + rsi_2 + 0x20) s>= 0)
            int64_t* rcx_27 = *(rbx_3 + rsi_2)
            
            if (rcx_27 != 0)
                void* rax_40 = (*(*rcx_27 + 8))(rcx_27)
                void* rax_41 = sub_142737e30()
                void* rcx_28 = *(rax_40 + 0x10)
                int64_t rdx_20 = sx.q(*(rax_41 + 0x38))
                
                if (rdx_20.d s<= *(rcx_28 + 0x38)
                        && *(*(rcx_28 + 0x30) + (rdx_20 << 3)) == rax_41 + 0x30
                        && *(rax_40 + 0x278) == 0)
                    (*(*arg1 + 0x2a8))(arg1, rax_40, zx.q(*(rbx_3 + rsi_2 + 0x20)))
        
        var_e4_1:4.d &= not.d(var_f0:4.d)
        sub_14059bdd0(&var_f0)
        i_1 = i_2
    while (i_1 s< *(var_e8_2.q + 0x18))
    
    if (var_c0_2.b != 0 && var_c0_2:1.b != 0)
        sub_140aa4bc0(r12_1, *(r12_1 + 8) - *(r12_1 + 0x34), 1)

int64_t* rcx_33 = arg1[5]
(*(*rcx_33 + 0x6e0))(rcx_33)
