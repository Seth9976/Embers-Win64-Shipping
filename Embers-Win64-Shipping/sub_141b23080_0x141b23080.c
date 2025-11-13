// 函数: sub_141b23080
// 地址: 0x141b23080
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1b8
int64_t rax_1 = __security_cookie ^ &var_1b8
int64_t rdx = *(sub_141a788e0() + 0x18)
void* rax_3 = sub_141a4ad10(*(arg1 + 0xd0), rdx)
int32_t r12 = 0
int64_t* r15

if (rax_3 == 0)
    r15 = nullptr
else
    r15 = *(rax_3 + 8)

int64_t rbx_1 = *r15
int32_t* rdi = *arg3
int64_t r13 = sx.q(arg3[1].d)
void* r14
void* arg_18 = r14
void*** var_190

if (rbx_1 != 0)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_190, rbx_1 + 0x10, rbx_1 + 0x38)
    r14 = &rdi[r13]
    int64_t var_180_1 = rbx_1 + 0x20

int64_t var_b8
char var_b0
int64_t rax_6

if (rbx_1 == 0 || rdi == r14)
label_141b23140:
    rax_6 = var_b8
    var_b0 = 0
else
    int32_t* rsi_1 = rdi
    
    while (true)
        int32_t rbx_2 = *rsi_1
        int32_t rax_5 = sub_141a50d70(&var_190, rbx_2)
        
        if (rax_5 != 0xffffffff)
            var_b0 = 1
            int32_t var_194_1 = *(*var_190 + (sx.q(rax_5) << 2))
            rax_6 = rbx_2.q
            var_b8 = rax_6
            break
        
        rsi_1 = &rsi_1[1]
        
        if (rsi_1 == r14)
            goto label_141b23140

int64_t rbx_3 = r15[1]

if (rbx_3 != 0)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_190, rbx_3 + 0x10, rbx_3 + 0x38)
    r14 = &rdi[r13]
    int64_t var_180_2 = rbx_3 + 0x20

char var_a4
int64_t rax_9

if (rbx_3 == 0 || rdi == r14)
label_141b231a0:
    int64_t var_ac
    rax_9 = var_ac
    var_a4 = 0
else
    int32_t* rsi_2 = rdi
    
    while (true)
        int32_t rbx_4 = *rsi_2
        int32_t rax_8 = sub_141a50d70(&var_190, rbx_4)
        
        if (rax_8 != 0xffffffff)
            var_a4 = 1
            int32_t var_194_2 = *(*var_190 + (sx.q(rax_8) << 2))
            rax_9 = rbx_4.q
            int64_t var_ac_1 = rax_9
            break
        
        rsi_2 = &rsi_2[1]
        
        if (rsi_2 == r14)
            goto label_141b231a0

int64_t rbx_5 = r15[2]

if (rbx_5 != 0)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_190, rbx_5 + 0x10, rbx_5 + 0x38)
    r14 = &rdi[r13]
    int64_t var_180_3 = rbx_5 + 0x20

char var_98
int64_t rax_12

if (rbx_5 == 0 || rdi == r14)
label_141b23200:
    int64_t var_a0
    rax_12 = var_a0
    var_98 = 0
else
    int32_t* rsi_3 = rdi
    
    while (true)
        int32_t rbx_6 = *rsi_3
        int32_t rax_11 = sub_141a50d70(&var_190, rbx_6)
        
        if (rax_11 != 0xffffffff)
            var_98 = 1
            int32_t var_194_3 = *(*var_190 + (sx.q(rax_11) << 2))
            rax_12 = rbx_6.q
            int64_t var_a0_1 = rax_12
            break
        
        rsi_3 = &rsi_3[1]
        
        if (rsi_3 == r14)
            goto label_141b23200

int64_t rbx_7 = r15[3]
int64_t var_148 = rax_12

if (rbx_7 != 0)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_190, rbx_7 + 0x10, rbx_7 + 0x38)
    r14 = &rdi[r13]
    int64_t var_180_4 = rbx_7 + 0x20

int64_t var_94
char var_8c
int64_t rax_15

if (rbx_7 == 0 || rdi == r14)
label_141b23260:
    rax_15 = var_94
    var_8c = 0
else
    int32_t* rsi_4 = rdi
    
    while (true)
        int32_t rbx_8 = *rsi_4
        int32_t rax_14 = sub_141a50d70(&var_190, rbx_8)
        
        if (rax_14 != 0xffffffff)
            var_8c = 1
            int32_t var_194_4 = *(*var_190 + (sx.q(rax_14) << 2))
            rax_15 = rbx_8.q
            var_94 = rax_15
            break
        
        rsi_4 = &rsi_4[1]
        
        if (rsi_4 == r14)
            goto label_141b23260

int64_t rbx_9 = r15[4]

if (rbx_9 != 0)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_190, rbx_9 + 0x10, rbx_9 + 0x38)
    r14 = &rdi[r13]
    int64_t var_180_5 = rbx_9 + 0x20

char var_80
int64_t rax_18

if (rbx_9 == 0 || rdi == r14)
label_141b232c0:
    int64_t var_88
    rax_18 = var_88
    var_80 = 0
else
    int32_t* rsi_5 = rdi
    
    while (true)
        int32_t rbx_10 = *rsi_5
        int32_t rax_17 = sub_141a50d70(&var_190, rbx_10)
        
        if (rax_17 != 0xffffffff)
            var_80 = 1
            int32_t var_194_5 = *(*var_190 + (sx.q(rax_17) << 2))
            rax_18 = rbx_10.q
            int64_t var_88_1 = rax_18
            break
        
        rsi_5 = &rsi_5[1]
        
        if (rsi_5 == r14)
            goto label_141b232c0

int64_t rbx_11 = r15[5]

if (rbx_11 != 0)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_190, rbx_11 + 0x10, rbx_11 + 0x38)
    r14 = &rdi[r13]
    int64_t var_180_6 = rbx_11 + 0x20

char var_74
int64_t rax_21

if (rbx_11 == 0 || rdi == r14)
label_141b23320:
    int64_t var_7c
    rax_21 = var_7c
    var_74 = 0
else
    int32_t* rsi_6 = rdi
    
    while (true)
        int32_t rbx_12 = *rsi_6
        int32_t rax_20 = sub_141a50d70(&var_190, rbx_12)
        
        if (rax_20 != 0xffffffff)
            var_74 = 1
            int32_t var_194_6 = *(*var_190 + (sx.q(rax_20) << 2))
            rax_21 = rbx_12.q
            int64_t var_7c_1 = rax_21
            break
        
        rsi_6 = &rsi_6[1]
        
        if (rsi_6 == r14)
            goto label_141b23320

int64_t rbx_13 = r15[6]

if (rbx_13 != 0)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_190, rbx_13 + 0x10, rbx_13 + 0x38)
    r14 = &rdi[r13]
    int64_t var_180_7 = rbx_13 + 0x20

int64_t var_70
char var_68
int64_t rax_24

if (rbx_13 == 0 || rdi == r14)
label_141b23380:
    rax_24 = var_70
    var_68 = 0
else
    int32_t* rsi_7 = rdi
    
    while (true)
        int32_t rbx_14 = *rsi_7
        int32_t rax_23 = sub_141a50d70(&var_190, rbx_14)
        
        if (rax_23 != 0xffffffff)
            var_68 = 1
            int32_t var_194_7 = *(*var_190 + (sx.q(rax_23) << 2))
            rax_24 = rbx_14.q
            var_70 = rax_24
            break
        
        rsi_7 = &rsi_7[1]
        
        if (rsi_7 == r14)
            goto label_141b23380

int64_t rbx_15 = r15[7]

if (rbx_15 != 0)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_190, rbx_15 + 0x10, rbx_15 + 0x38)
    r14 = &rdi[r13]
    int64_t var_180_8 = rbx_15 + 0x20

char var_5c
int64_t rax_27

if (rbx_15 == 0 || rdi == r14)
label_141b233e0:
    int64_t var_64
    rax_27 = var_64
    var_5c = 0
else
    int32_t* rsi_8 = rdi
    
    while (true)
        int32_t rbx_16 = *rsi_8
        int32_t rax_26 = sub_141a50d70(&var_190, rbx_16)
        
        if (rax_26 != 0xffffffff)
            var_5c = 1
            int32_t var_194_8 = *(*var_190 + (sx.q(rax_26) << 2))
            rax_27 = rbx_16.q
            int64_t var_64_1 = rax_27
            break
        
        rsi_8 = &rsi_8[1]
        
        if (rsi_8 == r14)
            goto label_141b233e0

int64_t rbx_17 = r15[8]
int32_t var_198
var_198.q = rax_27
void* rsi_9

if (rbx_17 != 0)
    __FrameHandler3::TryBlockMap::TryBlockMap(&var_190, rbx_17 + 0x10, rbx_17 + 0x38)
    rsi_9 = &rdi[r13]
    int64_t var_180_9 = rbx_17 + 0x20

int32_t var_110
int64_t r15_1

if (rbx_17 == 0 || rdi == rsi_9)
label_141b23440:
    int64_t var_58
    r15_1 = var_58
    r14.b = 0
else
    while (true)
        int32_t rbx_18 = *rdi
        int32_t rax_29 = sub_141a50d70(&var_190, rbx_18)
        
        if (rax_29 != 0xffffffff)
            r14.b = 1
            void*** rax_47 = var_190
            var_110 = rbx_18
            int32_t var_10c_1 = *(*rax_47 + (sx.q(rax_29) << 2))
            r15_1 = var_110.q
            int64_t var_58_1 = r15_1
            break
        
        rdi = &rdi[1]
        
        if (rdi == rsi_9)
            goto label_141b23440

char var_50 = r14.b
int64_t* rax_30 = &var_b8
int32_t r8_9

while (true)
    if (rax_30[1].b != 0)
        r8_9 = 1
        break
    
    rax_30 += 0xc
    
    if (rax_30 == &var_94)
        r8_9 = 0
        break

int64_t* rax_49 = &var_94
int32_t rdx_28

while (true)
    if (rax_49[1].b != 0)
        rdx_28 = 1
        break
    
    rax_49 += 0xc
    
    if (rax_49 == &var_70)
        rdx_28 = 0
        break

int64_t* rax_50 = &var_70
int32_t rcx_28

while (true)
    if (rax_50[1].b != 0)
        rcx_28 = 1
        break
    
    rax_50 += 0xc
    void var_4c
    
    if (rax_50 == &var_4c)
        rcx_28 = 0
        break

void**** result
void* var_178
void var_170
int64_t* var_168
void** const var_100

if (rcx_28 + rdx_28 + r8_9 u<= 1)
    void*** var_188_2
    int64_t* rax_132
    void* rsi_11
    void* r8_23
    
    if (r8_9 != 0)
        void*** rax_118 = j_sub_140a82f30(0x28)
        void*** rbx_23
        
        if (rax_118 == 0)
            rbx_23 = nullptr
        else
            void* rax_119
            int512_t zmm2_2
            rax_119, zmm2_2 = sub_141b38f40()
            rbx_23 = sub_141af8440(rax_118, rax_119, zmm2_2)
        
        void*** rax_121 = sub_141af27a0(rbx_23)
        var_190 = rbx_23
        var_188_2 = rax_121
        void*** rcx_91 = var_190
        rsi_11 = (*rcx_91)[3](rcx_91, rbx_23, rbx_23)
        char var_108_13 = 0
        
        if (var_b0 != 0)
            var_110.q = rax_6
            char var_108_14 = 1
        
        sub_141a37230(rsi_11 + 0x18, 
            sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 0), rsi_11 + 8, 
                &var_110))
        sub_141afc920(&var_100)
        
        if (var_168 != 0)
            int32_t temp0_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp0_1 == 1)
                (*(*var_168 + 8))(var_168, 1)
        
        char var_108_15 = 0
        
        if (var_a4 != 0)
            var_110.q = rax_9
            char var_108_16 = 1
        
        sub_141a37230(rsi_11 + 0x18, 
            sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 1), rsi_11 + 0xc, 
                &var_110))
        sub_141afc920(&var_100)
        
        if (var_168 != 0)
            int32_t temp3_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp3_1 == 1)
                (*(*var_168 + 8))(var_168, 1)
        
        char var_108_17 = 0
        
        if (var_98 != 0)
            var_110.q = var_148
            char var_108_18 = 1
        
        rax_132 = sub_141af26c0(*(arg1 + 0xd0), &var_170, 2)
        r8_23 = rsi_11 + 0x10
    label_141b23eec:
        sub_141a37230(rsi_11 + 0x18, sub_141aeb750(&var_100, rax_132, r8_23, &var_110))
        sub_141afc920(&var_100)
        
        if (var_168 != 0)
            int32_t temp6_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp6_1 == 1)
                (*(*var_168 + 8))(var_168, 1)
        
        sub_141a693b0(rsi_11 + 0x18)
        var_178.d = 0
        int32_t* rax_135 = sub_141a534f0(rsi_11 + 0x18, &var_110)
        
        if (rax_135[1].b != 0)
            r12 = *rax_135
        
        result = arg2
        *(rsi_11 + 0x14) = r12
        *result = var_190
        result[1] = var_188_2
        
        if (var_188_2 != 0)
            var_188_2[1].d += 1
            
            if (var_188_2 != 0)
                var_188_2[1].d -= 1
                
                if (var_188_2[1].d == 1)
                    (**var_188_2)(var_188_2)
                    int32_t temp10_1 = *(var_188_2 + 0xc)
                    *(var_188_2 + 0xc) -= 1
                    
                    if (temp10_1 == 1)
                        (*var_188_2)[1](var_188_2, 1)
        
        goto label_141b24328
    
    if (rdx_28 != 0)
        void*** rax_140 = j_sub_140a82f30(0x28)
        void*** rbx_26
        
        if (rax_140 == 0)
            rbx_26 = nullptr
        else
            void* rax_141
            int512_t zmm2_3
            rax_141, zmm2_3 = sub_141b39000()
            rbx_26 = sub_141af8440(rax_140, rax_141, zmm2_3)
        
        void*** rax_143 = sub_141af27a0(rbx_26)
        var_190 = rbx_26
        var_188_2 = rax_143
        void*** rcx_114 = var_190
        rsi_11 = (*rcx_114)[3](rcx_114, rbx_26, rbx_26)
        char var_108_19 = 0
        
        if (var_8c != 0)
            var_110.q = rax_15
            char var_108_20 = 1
        
        sub_141a37230(rsi_11 + 0x18, 
            sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 3), rsi_11 + 0x10, 
                &var_110))
        sub_141afc920(&var_100)
        
        if (var_168 != 0)
            int32_t temp1_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_168 + 8))(var_168, 1)
        
        char var_108_21 = 0
        
        if (var_80 != 0)
            var_110.q = rax_18
            char var_108_22 = 1
        
        sub_141a37230(rsi_11 + 0x18, 
            sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 4), rsi_11 + 8, 
                &var_110))
        sub_141afc920(&var_100)
        
        if (var_168 != 0)
            int32_t temp4_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp4_1 == 1)
                (*(*var_168 + 8))(var_168, 1)
        
        char var_108_23 = 0
        
        if (var_74 != 0)
            var_110.q = rax_21
            char var_108_24 = 1
        
        rax_132 = sub_141af26c0(*(arg1 + 0xd0), &var_170, 5)
        r8_23 = rsi_11 + 0xc
        goto label_141b23eec
    
    if (rcx_28 != 0)
        void*** rax_155 = j_sub_140a82f30(0x28)
        void*** rbx_28
        
        if (rax_155 == 0)
            rbx_28 = nullptr
        else
            void* rax_156
            int512_t zmm2_4
            rax_156, zmm2_4 = sub_141b39060()
            rbx_28 = sub_141af8440(rax_155, rax_156, zmm2_4)
        
        void*** rax_158 = sub_141af27a0(rbx_28)
        var_190 = rbx_28
        void*** rcx_128 = var_190
        void* rax_160 = (*rcx_128)[3](rcx_128, rbx_28, rbx_28)
        char var_108_25 = 0
        
        if (var_68 != 0)
            var_110.q = rax_24
            char var_108_26 = 1
        
        sub_141a37230(rax_160 + 0x18, 
            sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 6), rax_160 + 8, 
                &var_110))
        sub_141afc920(&var_100)
        
        if (var_168 != 0)
            int32_t temp2_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp2_1 == 1)
                (*(*var_168 + 8))(var_168, 1)
        
        char var_108_27 = 0
        
        if (var_5c != 0)
            var_110.q = var_198.q
            char var_108_28 = 1
        
        sub_141a37230(rax_160 + 0x18, 
            sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 7), rax_160 + 0xc, 
                &var_110))
        sub_141afc920(&var_100)
        
        if (var_168 != 0)
            int32_t temp5_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp5_1 == 1)
                (*(*var_168 + 8))(var_168, 1)
        
        char var_108_29 = 0
        
        if (r14.b != 0)
            var_110.q = r15_1
            char var_108_30 = 1
        
        sub_141a37230(rax_160 + 0x18, 
            sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 8), rax_160 + 0x10, 
                &var_110))
        sub_141afc920(&var_100)
        
        if (var_168 != 0)
            int32_t temp7_1 = *(var_168 + 0xc)
            *(var_168 + 0xc) -= 1
            
            if (temp7_1 == 1)
                (*(*var_168 + 8))(var_168, 1)
        
        sub_141a693b0(rax_160 + 0x18)
        var_178.d = 0
        int32_t* rax_172 = sub_141a534f0(rax_160 + 0x18, &var_110)
        
        if (rax_172[1].b != 0)
            r12 = *rax_172
        
        result = arg2
        *(rax_160 + 0x14) = r12
        *result = var_190
        result[1] = rax_158
        
        if (rax_158 != 0)
            rax_158[1].d += 1
        
        sub_140597060(&var_190)
        goto label_141b24328
    
    result = arg2
    *result = nullptr
    result[1] = 0
    
    if (var_98 != 0)
        char var_98_2 = 0
    
    if (var_a4 != 0)
        char var_a4_2 = 0
    
    if (var_b0 != 0)
        char var_b0_2 = 0
else
    void*** rax_53 = j_sub_140a82f30(0x28)
    void*** rbx_20
    
    if (rax_53 == 0)
        rbx_20 = nullptr
    else
        void* rax_54
        int512_t zmm2_1
        rax_54, zmm2_1 = sub_141b390c0()
        rbx_20 = sub_141af8440(rax_53, rax_54, zmm2_1)
    
    void*** rax_56 = j_sub_140a82f30(0x18)
    
    if (rax_56 == 0)
        rax_56 = nullptr
    else
        rax_56[1].d = 1
        *rax_56 = &data_14305dc20
        *(rax_56 + 0xc) = 1
        rax_56[2] = rbx_20
    
    var_190 = rbx_20
    void*** rcx_30 = var_190
    void* rax_58 = (*rcx_30)[3](rcx_30, rbx_20, rbx_20)
    rbx_20.b = 0
    int64_t rdi_1
    
    if (var_b0 == 0)
        rdi_1 = var_110.q
    else
        rdi_1 = rax_6
        rbx_20.b = 1
    
    int64_t* rax_59 = sub_141af26c0(*(arg1 + 0xd0), &var_170, 0)
    void* r8_11 = rax_59[1]
    int64_t r9_1 = *rax_59
    
    if (r8_11 != 0)
        *(r8_11 + 0xc) += 1
    
    int64_t rdx_32 = rax_59[2]
    int32_t rax_60 = rax_59[3].d
    char var_c0
    char var_c0_1 = var_c0 | 3
    char var_f0_1 = 0
    var_100 = &data_14305da78
    int64_t var_e8_1 = r9_1
    void* var_e0_1 = r8_11
    int32_t var_d0_1 = rax_60
    void** const* rax_61 = &var_100
    int64_t var_d8_1 = rdx_32
    void* var_c8_1 = rax_58 + 8
    
    if ((var_c0_1 & 2) == 0)
        rax_61 = var_100
    
    if (&var_110 != &rax_61[1])
        if (rax_61[2].b != 0)
            rax_61[2].b = 0
        
        if (rbx_20.b != 0)
            rax_61[1] = rdi_1
            rax_61[2].b = 1
    
    sub_141a37230(rax_58 + 0x30, &var_100)
    
    if ((var_c0_1 & 1) != 0)
        void** const* rcx_35 = &var_100
        
        if ((var_c0_1 & 2) == 0)
            rcx_35 = var_100
        
        var_c0_1 &= 0xfe
        (**rcx_35)(rcx_35, 0)
        
        if ((var_c0_1 & 2) == 0)
            sub_140a74f90(var_100)
    
    if (var_168 != 0)
        int32_t temp8_1 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*var_168 + 8))(var_168, 1)
    
    rbx_20.b = 0
    int64_t r13_1
    
    if (var_a4 == 0)
        r13_1 = var_110.q
    else
        r13_1 = rax_9
        rbx_20.b = 1
    
    int64_t* rax_67 = sub_141af26c0(*(arg1 + 0xd0), &var_170, 1)
    void* r8_12 = rax_67[1]
    int64_t r9_2 = *rax_67
    
    if (r8_12 != 0)
        *(r8_12 + 0xc) += 1
    
    int64_t rdx_35 = rax_67[2]
    int32_t rax_68 = rax_67[3].d
    char var_c0_2 = var_c0_1 | 3
    char var_f0_2 = 0
    var_100 = &data_14305da78
    int64_t var_e8_2 = r9_2
    void* var_e0_2 = r8_12
    int32_t var_d0_2 = rax_68
    void** const* rax_69 = &var_100
    int64_t var_d8_2 = rdx_35
    void* var_c8_2 = rax_58 + 0xc
    
    if ((var_c0_2 & 2) == 0)
        rax_69 = var_100
    
    if (&var_110 != &rax_69[1])
        if (rax_69[2].b != 0)
            rax_69[2].b = 0
        
        if (rbx_20.b != 0)
            rax_69[1] = r13_1
            rax_69[2].b = 1
    
    sub_141a37230(rax_58 + 0x30, &var_100)
    
    if ((var_c0_2 & 1) != 0)
        void** const* rcx_41 = &var_100
        
        if ((var_c0_2 & 2) == 0)
            rcx_41 = var_100
        
        var_c0_2 &= 0xfe
        (**rcx_41)(rcx_41, 0)
        
        if ((var_c0_2 & 2) == 0)
            sub_140a74f90(var_100)
    
    if (var_168 != 0)
        int32_t temp11_1 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (temp11_1 == 1)
            (*(*var_168 + 8))(var_168, 1)
    
    rbx_20.b = 0
    
    if (var_98 == 0)
        var_148 = var_110.q
    else
        rbx_20.b = 1
    
    int64_t* rax_75 = sub_141af26c0(*(arg1 + 0xd0), &var_170, 2)
    void* r8_13 = rax_75[1]
    int64_t r9_3 = *rax_75
    
    if (r8_13 != 0)
        *(r8_13 + 0xc) += 1
    
    int64_t rdx_38 = rax_75[2]
    int32_t rax_76 = rax_75[3].d
    char var_c0_3 = var_c0_2 | 3
    char var_f0_3 = 0
    var_100 = &data_14305da78
    int64_t var_e8_3 = r9_3
    void* var_e0_3 = r8_13
    int32_t var_d0_3 = rax_76
    void** const* rax_77 = &var_100
    int64_t var_d8_3 = rdx_38
    void* var_c8_3 = rax_58 + 0x10
    
    if ((var_c0_3 & 2) == 0)
        rax_77 = var_100
    
    if (&var_110 != &rax_77[1])
        if (rax_77[2].b != 0)
            rax_77[2].b = 0
        
        if (rbx_20.b != 0)
            rax_77[1] = var_148
            rax_77[2].b = 1
    
    sub_141a37230(rax_58 + 0x30, &var_100)
    
    if ((var_c0_3 & 1) != 0)
        void** const* rcx_48 = &var_100
        
        if ((var_c0_3 & 2) == 0)
            rcx_48 = var_100
        
        var_c0_3 &= 0xfe
        (**rcx_48)(rcx_48, 0)
        
        if ((var_c0_3 & 2) == 0)
            sub_140a74f90(var_100)
    
    if (var_168 != 0)
        int32_t temp12_1 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (temp12_1 == 1)
            (*(*var_168 + 8))(var_168, 1)
    
    char var_108_1 = 0
    
    if (var_8c != 0)
        var_110.q = rax_15
        char var_108_2 = 1
    
    sub_141a37230(rax_58 + 0x30, 
        sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 3), rax_58 + 0x1c, 
            &var_110))
    
    if ((var_c0_3 & 1) != 0)
        void** const* rcx_54 = &var_100
        
        if ((var_c0_3 & 2) == 0)
            rcx_54 = var_100
        
        var_c0_3 &= 0xfe
        (**rcx_54)(rcx_54, 0)
        
        if ((var_c0_3 & 2) == 0)
            sub_140a74f90(var_100)
    
    if (var_168 != 0)
        int32_t temp13_1 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (temp13_1 == 1)
            (*(*var_168 + 8))(var_168, 1)
    
    char var_108_3 = 0
    
    if (var_80 != 0)
        var_110.q = rax_18
        char var_108_4 = 1
    
    sub_141a37230(rax_58 + 0x30, 
        sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 4), rax_58 + 0x14, 
            &var_110))
    
    if ((var_c0_3 & 1) != 0)
        void** const* rcx_60 = &var_100
        
        if ((var_c0_3 & 2) == 0)
            rcx_60 = var_100
        
        var_c0_3 &= 0xfe
        (**rcx_60)(rcx_60, 0)
        
        if ((var_c0_3 & 2) == 0)
            sub_140a74f90(var_100)
    
    if (var_168 != 0)
        int32_t temp14_1 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (temp14_1 == 1)
            (*(*var_168 + 8))(var_168, 1)
    
    char var_108_5 = 0
    
    if (var_74 != 0)
        var_110.q = rax_21
        char var_108_6 = 1
    
    sub_141a37230(rax_58 + 0x30, 
        sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 5), rax_58 + 0x18, 
            &var_110))
    
    if ((var_c0_3 & 1) != 0)
        void** const* rcx_66 = &var_100
        
        if ((var_c0_3 & 2) == 0)
            rcx_66 = var_100
        
        var_c0_3 &= 0xfe
        (**rcx_66)(rcx_66, 0)
        
        if ((var_c0_3 & 2) == 0)
            sub_140a74f90(var_100)
    
    if (var_168 != 0)
        int32_t temp15_1 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (temp15_1 == 1)
            (*(*var_168 + 8))(var_168, 1)
    
    char var_108_7 = 0
    
    if (var_68 != 0)
        var_110.q = rax_24
        char var_108_8 = 1
    
    sub_141a37230(rax_58 + 0x30, 
        sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 6), rax_58 + 0x20, 
            &var_110))
    
    if ((var_c0_3 & 1) != 0)
        void** const rcx_72 = &var_100
        
        if ((var_c0_3 & 2) == 0)
            rcx_72 = var_100
        
        (**rcx_72)(rcx_72, 0)
        
        if ((var_c0_3 & 2) == 0)
            sub_140a74f90(var_100)
    
    if (var_168 != 0)
        int32_t temp16_1 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (temp16_1 == 1)
            (*(*var_168 + 8))(var_168, 1)
    
    char var_108_9 = 0
    
    if (var_5c != 0)
        var_110.q = var_198.q
        char var_108_10 = 1
    
    sub_141a37230(rax_58 + 0x30, 
        sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 7), rax_58 + 0x24, 
            &var_110))
    sub_141afc920(&var_100)
    
    if (var_168 != 0)
        int32_t temp17_1 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (temp17_1 == 1)
            (*(*var_168 + 8))(var_168, 1)
    
    char var_108_11 = 0
    
    if (r14.b != 0)
        var_110.q = r15_1
        char var_108_12 = 1
    
    sub_141a37230(rax_58 + 0x30, 
        sub_141aeb750(&var_100, sub_141af26c0(*(arg1 + 0xd0), &var_170, 8), rax_58 + 0x28, 
            &var_110))
    sub_141afc920(&var_100)
    
    if (var_168 != 0)
        int32_t temp18_1 = *(var_168 + 0xc)
        *(var_168 + 0xc) -= 1
        
        if (temp18_1 == 1)
            (*(*var_168 + 8))(var_168, 1)
    
    sub_141a693b0(rax_58 + 0x30)
    var_178.d = 0
    int32_t* rax_113 = sub_141a534f0(rax_58 + 0x30, &var_110)
    
    if (rax_113[1].b != 0)
        r12 = *rax_113
    
    result = arg2
    *(rax_58 + 0x2c) = r12
    *result = var_190
    result[1] = rax_56
    
    if (rax_56 != 0)
        rax_56[1].d += 1
        
        if (rax_56 != 0)
            rax_56[1].d -= 1
            
            if (rax_56[1].d == 1)
                (**rax_56)(rax_56)
                int32_t temp20_1 = *(rax_56 + 0xc)
                *(rax_56 + 0xc) -= 1
                
                if (temp20_1 == 1)
                    (*rax_56)[1](rax_56, 1)
    
label_141b24328:
    
    if (var_50 != 0)
        char var_50_1 = 0
    
    if (var_5c != 0)
        char var_5c_1 = 0
    
    if (var_68 != 0)
        char var_68_1 = 0
    
    if (var_74 != 0)
        char var_74_1 = 0
    
    if (var_80 != 0)
        char var_80_1 = 0
    
    if (var_8c != 0)
        char var_8c_1 = 0
    
    if (var_98 != 0)
        char var_98_1 = 0
    
    if (var_a4 != 0)
        char var_a4_1 = 0
    
    if (var_b0 != 0)
        char var_b0_1 = 0
__security_check_cookie(rax_1 ^ &var_1b8)
return result
