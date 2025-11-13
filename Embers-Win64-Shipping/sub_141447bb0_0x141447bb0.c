// 函数: sub_141447bb0
// 地址: 0x141447bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_88 = *(arg3 + 0x614)
void* rax_1 = *arg3
int64_t var_90 = *(arg3 + 0x60c)

if ((*(rax_1 + 0x2c) & 0x10) == 0)
    int32_t var_84_1 = 0
else
    int32_t var_84 = 0xffffffff

float zmm1 = *(arg3 + 0xd5c) f* *(data_143ed5cc8 + 4)
int64_t zmm0
zmm0.d = 1f / zmm1
float var_80 = zmm1
zmm1 = data_1439b6db0
int32_t var_7c = zmm0.d
zmm0 = data_1439b6dac
zmm0.d = zmm0.d f* zmm0.d
int32_t var_74 = zmm0.d
float var_78 = zmm1 * zmm1
char rax_4 = sub_1413fad50(sub_1422e5a30(arg3))
int32_t result_2 = arg3[0x2d0].d
char var_70 = rax_4
char var_e7
char* var_60 = &var_e7
void*** (* var_68)() = j_sub_140597fc0
var_e7 = 0
void* rax_5 = sub_140a756e0(&var_68, &data_143958018)
int64_t r14 = sx.q(result_2 + 0x1f)
void* rbx_2 = (*(rax_5 + 0x10) + 7) & 0xfffffffffffffff8
void* rax_6 = r14 + rbx_2

if (rax_6 u> *(rax_5 + 0x18))
    sub_140b0e3d0(rax_5 + 0x10, result_2 + 0x27)
    rbx_2 = (*(rax_5 + 0x10) + 7) & 0xfffffffffffffff8
    rax_6 = r14 + rbx_2

*(rax_5 + 0x10) = rax_6
memset(rbx_2, 0, sx.q(result_2 + 0x1f))
int64_t* var_e0 = nullptr
int32_t rdx_4 = result_2 s/ 0x1fc
int64_t var_d8 = 0

if (rdx_4 s> 0)
    sub_14083ad10(&var_e0, rdx_4)

char rax_9 = sub_140b011d0()
char rax_11

if (rax_9 != 0 && *(data_143ed5dd0 + 4) s> 0)
    rax_11 = sub_140a80e70()

int64_t r12

if (rax_9 == 0 || *(data_143ed5dd0 + 4) s<= 0 || rax_11 == 0)
    r12.b = 0
else
    r12.b = 1

void* r9 = &arg3[0x2b7]
int32_t var_cc = 1
int32_t r11 = *(r9 + 0x18)
int32_t rcx_6 = 0
int32_t var_d0 = 0
int32_t rsi_1 = -1
void* var_c8 = r9
int32_t r14_1 = 0
int32_t var_bc = 0
int32_t r8_1 = 0

if (r11 != 0)
    void* rax_12 = *(r9 + 0x10)
    r14_1 = r11
    
    if (rax_12 != 0)
        r9 = rax_12
    
    int32_t temp2_1
    int32_t temp3_1
    temp2_1:temp3_1 = sx.q(r11 - 1)
    int32_t rdx_7 = *r9
    
    if (rdx_7 != 0)
    label_141447dc7:
        int32_t rax_19 = neg.d(rdx_7) & rdx_7
        uint64_t rflags_1
        int32_t temp0_1
        temp0_1, rflags_1 = _bit_scan_reverse(rax_19)
        var_cc = rax_19
        int32_t rax_20
        
        if (rax_19 == 0)
            rax_20 = 0x20
        else
            rax_20 = 0x1f - temp0_1
        
        int32_t rax_21 = r8_1 - rax_20 + 0x1f
        
        if (rax_21 s> r11)
            rax_21 = r11
        
        r14_1 = rax_21
        var_bc = rax_21
    else
        while (true)
            int64_t rdx_8 = sx.q(rcx_6)
            r8_1 += 0x20
            rcx_6 += 1
            var_bc = r8_1
            var_d0 = rcx_6
            
            if (rdx_8.d s>= (temp3_1 + (temp2_1 & 0x1f)) s>> 5)
                var_bc = r11
                break
            
            rdx_7 = *(r9 + (rdx_8 << 2) + 4)
            rsi_1 = -1
            
            if (rdx_7 != 0)
                goto label_141447dc7

int32_t* var_a8
int64_t (* var_a0)(int64_t* arg1, int32_t* arg2)

if (r14_1 s< r11)
    char var_e8 = 0
    char* var_50_1 = &var_e8
    void*** (* var_58)() = j_sub_140597fc0
    int32_t* rax_23 = sub_14081d830(0x38740, sub_140a756e0(&var_58, &data_143958018) + 0x10, 1, 0)
    int64_t r8_3 = arg8
    int64_t r9_1 = arg7
    int64_t r10_1 = arg6
    char r11_1 = arg5
    var_a8 = rax_23
    int32_t* rdi_2
    
    if (rax_23 == 0)
        rdi_2 = nullptr
    else
        int64_t rdx_11
        
        if (r12.b == 0)
            rdx_11 = arg3[0x913]
        else
            int64_t r15 = sx.q(arg3[0x914].d)
            int32_t rax_24 = (r15 + 1).d
            arg3[0x914].d = rax_24
            
            if (rax_24 s> *(arg3 + 0x48a4))
                sub_141104ec0(&arg3[0x913], r15.d)
                r8_3 = arg8
                r9_1 = arg7
                r10_1 = arg6
                r11_1 = arg5
            
            rdx_11 = arg3[0x913] + r15 * 0x28
            
            if (rdx_11 != 0)
                __builtin_memset(rdx_11, 0, 0x28)
        
        rdi_2 = sub_141441ab0(var_a8, arg1, arg2, arg3, arg4, r11_1, &var_90, r10_1, r9_1, rbx_2, 
            rdx_11, r8_3)
    
    int64_t r15_1 = sx.q(var_d8.d)
    int32_t rax_28 = (r15_1 + 1).d
    var_d8.d = rax_28
    
    if (rax_28 s> 0)
        sub_14083a440(&var_e0, r15_1.d)
    
    var_e0[r15_1] = rdi_2
    
    while (true)
        rdi_2[sx.q(rdi_2[0x14]) + 0x15] = r14_1
        rdi_2[0x14] += 1
        int32_t rsi_2 = rsi_1 & not.d(var_cc)
        sub_14059bdd0(&var_d0)
        r14_1 = var_bc
        
        if (rdi_2[0x14] s>= 0x7f)
            if (r14_1 s>= *(var_c8 + 0x18))
                break
            
            var_e8 = 0
            char* var_98_1 = &var_e8
            var_a0 = j_sub_140597fc0
            void* rax_34 = sub_140a756e0(&var_a0, &data_143958018)
            rdi_2 = (*(rax_34 + 0x10) + 0xf) & 0xfffffffffffffff0
            void* rax_35 = &rdi_2[0xe1d0]
            
            if (rax_35 u> *(rax_34 + 0x18))
                sub_140b0e3d0(rax_34 + 0x10, 0x38750)
                rdi_2 = (*(rax_34 + 0x10) + 0xf) & 0xfffffffffffffff0
                rax_35 = &rdi_2[0xe1d0]
            
            *(rax_34 + 0x10) = rax_35
            
            if (rdi_2 != 0)
                int64_t rdx_15
                
                if (r12.b == 0)
                    rdx_15 = arg3[0x913]
                else
                    int64_t r15_2 = sx.q(arg3[0x914].d)
                    int32_t rax_36 = (r15_2 + 1).d
                    arg3[0x914].d = rax_36
                    
                    if (rax_36 s> *(arg3 + 0x48a4))
                        sub_141104ec0(&arg3[0x913], r15_2.d)
                    
                    rdx_15 = arg3[0x913] + r15_2 * 0x28
                    
                    if (rdx_15 != 0)
                        __builtin_memset(rdx_15, 0, 0x28)
                
                rdi_2 = sub_141441ab0(rdi_2, arg1, arg2, arg3, arg4, arg5, &var_90, arg6, arg7, 
                    rbx_2, rdx_15, arg8)
            
            int64_t rsi_5 = sx.q(var_d8.d)
            int32_t rax_44 = (rsi_5 + 1).d
            var_d8.d = rax_44
            
            if (rax_44 s> var_d8:4.d)
                sub_14083a440(&var_e0, rsi_5.d)
            
            var_e0[rsi_5] = rdi_2
            rsi_1 = rsi_2
        else
            if (r14_1 s>= *(var_c8 + 0x18))
                break
            
            rsi_1 = rsi_2

var_a8 = &var_e0
var_a0 = sub_1414475b0
int32_t** var_98_2 = &var_a8
sub_14077b750(var_d8.d, &var_a0, zx.d(r12.b) ^ 1)
int64_t r12_1 = 0x2f1c0
int64_t* rsi_6 = var_e0
int32_t* r15_4 = arg4 + 0xc

for (int64_t i = 0x40a0; i s< 0x311c0; )
    int32_t rdx_19 = 0
    int32_t rdi_7 = 0
    int64_t r9_4 = 0
    void* rcx_21 = &rsi_6[sx.q(var_d8.d)]
    uint64_t r8_11 = (rcx_21 - rsi_6 + 7) u>> 3
    int64_t* rcx_22 = rsi_6
    
    if (rsi_6 u> rcx_21)
        r8_11 = 0
    
    if (r8_11 != 0)
        do
            int64_t rax_47 = *rcx_22
            rcx_22 = &rcx_22[1]
            r9_4 += 1
            rdx_19 += *(i + rax_47)
            rdi_7 += *(r12_1 + rax_47)
        while (r9_4 != r8_11)
    
    if (rdx_19 s> *r15_4)
        sub_141105150(&r15_4[-3], rdx_19)
        rsi_6 = var_e0
    
    if (rdi_7 s> r15_4[0x5a])
        sub_1410b3aa0(&r15_4[0x57], zx.q(rdi_7))
        rsi_6 = var_e0
    
    i += 0x2810
    r12_1 += 0x810
    r15_4 = &r15_4[4]

int64_t r15_5 = 0
void* rcx_25 = &rsi_6[sx.q(var_d8.d)]
uint64_t r14_5 = (rcx_25 - rsi_6 + 7) u>> 3

if (rsi_6 u> rcx_25)
    r14_5 = 0

if (r14_5 != 0)
    do
        void* rdi_8 = *rsi_6
        sub_141460150(rdi_8)
        sub_141442420(rdi_8 + 0x1898)
        int64_t rcx_28 = *(rdi_8 + 0x1888)
        
        if (rcx_28 != 0)
            sub_140a74f90(rcx_28)
        
        rcx_25 = *(rdi_8 + 0x1878)
        
        if (rcx_25 != 0)
            sub_140a74f90(rcx_25)
        
        rsi_6 = &rsi_6[1]
        r15_5 += 1
    while (r15_5 != r14_5)

var_d8.d = 0

if (var_d8:4.d != 0)
    sub_14083ad10(&var_e0, 0)

void* r15_6 = &arg3[0x2cd]
void* r8_12 = rbx_2
void* rax_49 = *(r15_6 + 0x10)
void* r14_6 = &arg3[0x2d1]
void* rsi_7 = &arg3[0x2d5]

if (rax_49 != 0)
    r15_6 = rax_49

void* rax_50 = *(r14_6 + 0x10)

if (rax_50 != 0)
    r14_6 = rax_50

void* rax_51 = *(rsi_7 + 0x10)

if (rax_51 != 0)
    rsi_7 = rax_51

uint64_t result = zx.q(result_2)

if (result.d s> 0)
    int32_t* r15_7 = r15_6 - rsi_7
    uint64_t i_2 = zx.q(((result - 1).d u>> 5) + 1)
    uint64_t i_1
    
    do
        int32_t rdx_21 = 1
        int32_t r10_2 = 0
        int32_t r11_2 = 0
        int32_t rdi_9 = 0
        rcx_25.b = 0
        int64_t j_1 = 4
        int64_t j
        
        do
            result = *rbx_2
            rbx_2 += 8
            
            if (result == 0)
                r8_12 += 8
                rdx_21 <<= 8
            else
                char rcx_30 = *r8_12
                int32_t rax_52 = 0
                
                if ((rcx_30 & 2) != 0)
                    rax_52 = rdx_21
                
                int32_t rax_53 = 0
                
                if ((rcx_30 & 0x10) != 0)
                    rax_53 = rdx_21
                
                int32_t rax_54 = 0
                char rcx_31 = *(r8_12 + 1)
                
                if ((rcx_30 & 0x20) != 0)
                    rax_54 = rdx_21
                
                int32_t rdx_22 = rdx_21 * 2
                int32_t rax_55 = 0
                
                if ((rcx_31 & 2) != 0)
                    rax_55 = rdx_22
                
                int32_t rax_56 = 0
                
                if ((rcx_31 & 0x10) != 0)
                    rax_56 = rdx_22
                
                int32_t rax_57 = 0
                char rcx_32 = *(r8_12 + 2)
                
                if ((rcx_31 & 0x20) != 0)
                    rax_57 = rdx_22
                
                int32_t rdx_23 = rdx_22 * 2
                int32_t rax_58 = 0
                
                if ((rcx_32 & 2) != 0)
                    rax_58 = rdx_23
                
                int32_t rax_59 = 0
                
                if ((rcx_32 & 0x10) != 0)
                    rax_59 = rdx_23
                
                int32_t rax_60 = 0
                char rcx_33 = *(r8_12 + 3)
                
                if ((rcx_32 & 0x20) != 0)
                    rax_60 = rdx_23
                
                int32_t rdx_24 = rdx_23 * 2
                int32_t rax_61 = 0
                
                if ((rcx_33 & 2) != 0)
                    rax_61 = rdx_24
                
                int32_t rax_62 = 0
                
                if ((rcx_33 & 0x10) != 0)
                    rax_62 = rdx_24
                
                int32_t rax_63 = 0
                char rcx_34 = *(r8_12 + 4)
                
                if ((rcx_33 & 0x20) != 0)
                    rax_63 = rdx_24
                
                int32_t rdx_25 = rdx_24 * 2
                int32_t rax_64 = 0
                
                if ((rcx_34 & 2) != 0)
                    rax_64 = rdx_25
                
                int32_t rax_65 = 0
                
                if ((rcx_34 & 0x10) != 0)
                    rax_65 = rdx_25
                
                int32_t rax_66 = 0
                char rcx_35 = *(r8_12 + 5)
                
                if ((rcx_34 & 0x20) != 0)
                    rax_66 = rdx_25
                
                int32_t rdx_26 = rdx_25 * 2
                int32_t rax_67 = 0
                
                if ((rcx_35 & 2) != 0)
                    rax_67 = rdx_26
                
                int32_t rax_68 = 0
                
                if ((rcx_35 & 0x10) != 0)
                    rax_68 = rdx_26
                
                int32_t rax_69 = 0
                char rcx_36 = *(r8_12 + 6)
                
                if ((rcx_35 & 0x20) != 0)
                    rax_69 = rdx_26
                
                int32_t rdx_27 = rdx_26 * 2
                int32_t rax_70 = 0
                
                if ((rcx_36 & 2) != 0)
                    rax_70 = rdx_27
                
                int32_t rax_71 = 0
                
                if ((rcx_36 & 0x10) != 0)
                    rax_71 = rdx_27
                
                int32_t rax_72 = 0
                rcx_25 = zx.q(*(r8_12 + 7))
                
                if ((rcx_36 & 0x20) != 0)
                    rax_72 = rdx_27
                
                int32_t result_1 = rdx_27 * 2
                int32_t result_3 = 0
                
                if ((rcx_25.b & 2) != 0)
                    result_3 = result_1
                
                r10_2 =
                    r10_2 | rax_52 | rax_55 | rax_58 | rax_61 | rax_64 | rax_67 | rax_70 | result_3
                int32_t result_4 = 0
                
                if ((rcx_25.b & 0x10) != 0)
                    result_4 = result_1
                
                r11_2 =
                    r11_2 | rax_53 | rax_56 | rax_59 | rax_62 | rax_65 | rax_68 | rax_71 | result_4
                result = 0
                bool cond:12_1 = (rcx_25.b & 0x20) != 0
                rcx_25.b = 1
                
                if (cond:12_1)
                    result = zx.q(result_1)
                
                rdx_21 = result_1 * 2
                rdi_9 =
                    rdi_9 | rax_54 | rax_57 | rax_60 | rax_63 | rax_66 | rax_69 | rax_72 | result.d
                r8_12 += 8
            
            j = j_1
            j_1 -= 1
        while (j != 1)
        
        if (rcx_25.b != 0)
            *(r15_7 + rsi_7) = r10_2
            *r14_6 = r11_2
            *rsi_7 = rdi_9
        
        r14_6 += 4
        rsi_7 += 4
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)

return result
