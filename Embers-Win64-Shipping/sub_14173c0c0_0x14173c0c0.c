// 函数: sub_14173c0c0
// 地址: 0x14173c0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_17 = 8
void* var_d0 = nullptr
int64_t i_24 = 0
int32_t i_15 = 0
int64_t* var_e8 = nullptr
int32_t i_16 = 0
int64_t r9
int64_t r10
int64_t r11
r9, r10, r11 = sub_1407c3b60(&var_d0)
int32_t i_9 = 8
void* rax_1 = var_d0 + 0x2c
int32_t i

do
    *(rax_1 - 0xc) = 0
    *(rax_1 - 4) = 0
    rax_1 += 0x38
    i = i_9
    i_9 -= 1
while (i != 1)
int64_t i_22 = sx.q(i_15)

if (i_22.d s< 8)
    i_15 = 8 + 0
    
    if (8 + 0 s> 0)
        sub_1405a4f90(&i_24)
    
    r9, r10, r11 = memset((i_22 << 4) + i_24, 0, sx.q(8 - i_22.d) << 4)
else if (i_22.d s> 8)
    int32_t i_18 = (i_22 - 8).d
    
    if (i_18 != 0)
        int32_t i_10 = i_18
        int64_t* rbx_1 = i_24 + 0x80
        int32_t i_1
        
        do
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1 = &rbx_1[2]
            i_1 = i_10
            i_10 -= 1
        while (i_1 != 1)
        int32_t i_20 = i_15
        int32_t rcx_7 = i_20 - i_18
        
        if (rcx_7 != 8)
            int64_t i_25 = i_24
            memmove(i_25 + 0x80, (sx.q(i_18 + 8) << 4) + i_25, (rcx_7 - 8) << 4)
            i_20 = i_15
        
        i_15 = i_20 - i_18
        r9, r10, r11 = sub_1405a5010(&i_24)

int64_t i_23 = sx.q(i_16)

if (i_23.d s< 8)
    i_16 = 8 + 0
    
    if (8 + 0 s> 0)
        sub_1405a4f90(&var_e8)
    
    r9, r10, r11 = memset(&var_e8[i_23 * 2], 0, sx.q(8 - i_23.d) << 4)
else if (i_23.d s> 8)
    int32_t i_19 = (i_23 - 8).d
    
    if (i_19 != 0)
        int32_t i_11 = i_19
        i_23 = var_e8 + 0x80
        int32_t i_2
        
        do
            int64_t rcx_15 = *i_23
            
            if (rcx_15 != 0)
                sub_140a74f90(rcx_15)
            
            i_23 += 0x10
            i_2 = i_11
            i_11 -= 1
        while (i_2 != 1)
        int32_t i_21 = i_16
        int32_t rcx_17 = i_21 - i_19
        
        if (rcx_17 != 8)
            int64_t* rcx_19 = var_e8
            memmove(rcx_19 + 0x80, &rcx_19[sx.q(i_19 + 8) * 2], (rcx_17 - 8) << 4)
            i_21 = i_16
        
        i_16 = i_21 - i_19
        r9, r10, r11 = sub_1405a5010(&var_e8)

uint128_t zmm1 = zx.o(*arg2)
uint128_t zmm2 = zx.o(*arg3)
int32_t rax_8 = arg2[1].d
uint64_t var_a0 = zmm1.q
int32_t rax_9 = arg3[1].d
int32_t i_8 = 0
uint64_t var_94 = zmm2.q
float zmm0 = (zmm2.d f- zmm1.d) * 0.5f f+ zmm1.d
zmm1.d = _mm_shuffle_ps(zmm2, zmm2, 0x55).d f- var_a0:4.d
float var_c0 = zmm0
zmm1.d = zmm1.d f* 0.5f
zmm1.d = zmm1.d f+ var_a0:4.d
float var_bc = zmm1.d
zmm1.d = rax_9.d f- rax_8
zmm1.d = zmm1.d f* 0.5f
zmm1.d = zmm1.d f+ rax_8
float var_b8 = zmm1.d
int32_t* var_b0

if (arg4[1].d s> 0)
    void* rdi_3 = nullptr
    int32_t i_3
    
    do
        void* rcx_26
        void* r8
        
        if (*(arg1 + 0x30) == *(arg1 + 0x5c))
        label_14173c390:
            rcx_26 = nullptr
        else
            r8 = arg1 + 0x60
            void* rdx_9 = *(r8 + 8)
            r9 = sx.q(*(rdi_3 + *arg4))
            
            if (rdx_9 != 0)
                r8 = rdx_9
            
            int32_t rax_11 = *(r8 + (((sx.q(*(arg1 + 0x70)) - 1) & r9) << 2))
            
            if (rax_11 == 0xffffffff)
            label_14173c390_1:
                rcx_26 = nullptr
            else
                r8 = *(arg1 + 0x28)
                
                while (true)
                    int64_t rdx_10 = sx.q(rax_11) * 9
                    rcx_26 = r8 + (rdx_10 << 2)
                    
                    if (*(r8 + (rdx_10 << 2)) == r9.d)
                        break
                    
                    rax_11 = *(rcx_26 + 0x1c)
                    
                    if (rax_11 == 0xffffffff)
                        goto label_14173c390_2
                
                if (rax_11 == 0xffffffff)
                label_14173c390_2:
                    rcx_26 = nullptr
        
        zmm0 = var_c0
        char rdx_11 = 0
        r9.b = 0
        r8 = nullptr
        r10.b = 0
        char r12_1 = 0
        r11.b = 0
        char rax_12 = 0
        i_23.b = 0
        char r15_1 = 0
        
        if (zmm0 f> *(rcx_26 + 4))
            rdx_11 = 1
        
        if (zmm0 f<= *(rcx_26 + 0x10))
            r8 = 1
        
        int32_t arg_18 = r8.d
        
        if (var_bc f> *(rcx_26 + 8))
            r12_1 = 1
        
        if (var_bc f<= *(rcx_26 + 0x14))
            rax_12 = 1
        
        char rax_13 = 0
        
        if (var_b8 f> *(rcx_26 + 0xc))
            r15_1 = 1
        
        if (var_b8 f<= *(rcx_26 + 0x18))
            rax_13 = 1
        
        if (rdx_11 != 0 && r12_1 != 0 && r15_1 != 0)
            i_23 = i_24
            var_b0 = *arg4
            int64_t r14_1 = sx.q(*(i_23 + 8))
            int32_t rax_15 = (r14_1 + 1).d
            *(i_23 + 8) = rax_15
            
            if (rax_15 s> *(i_23 + 0xc))
                r9, r10, r11 = sub_1405a4cf0(i_23)
                r8 = zx.q(arg_18)
            
            *(*i_23 + (r14_1 << 2)) = *(var_b0 + rdi_3)
        
        if (r8.b != 0 && r12_1 != 0 && r15_1 != 0)
            i_23 = i_24
            var_b0 = *arg4
            int64_t r14_2 = sx.q(*(i_23 + 0x18))
            int32_t rax_19 = (r14_2 + 1).d
            *(i_23 + 0x18) = rax_19
            
            if (rax_19 s> *(i_23 + 0x1c))
                r9, r10, r11 = sub_1405a4cf0(i_23 + 0x10)
            
            *(*(i_23 + 0x10) + (r14_2 << 2)) = *(var_b0 + rdi_3)
        
        char rax_22 = rax_12
        
        if (rdx_11 != 0 && rax_22 != 0 && r15_1 != 0)
            i_23 = i_24
            var_b0 = *arg4
            int64_t r14_3 = sx.q(*(i_23 + 0x28))
            int32_t rax_24 = (r14_3 + 1).d
            *(i_23 + 0x28) = rax_24
            
            if (rax_24 s> *(i_23 + 0x2c))
                r9, r10, r11 = sub_1405a4cf0(i_23 + 0x20)
            
            *(*(i_23 + 0x20) + (r14_3 << 2)) = *(var_b0 + rdi_3)
            rax_22 = rax_12
        
        if (arg_18.b != 0 && rax_22 != 0 && r15_1 != 0)
            i_23 = i_24
            int32_t* r15_2 = *arg4
            int64_t r14_4 = sx.q(*(i_23 + 0x38))
            int32_t rax_27 = (r14_4 + 1).d
            *(i_23 + 0x38) = rax_27
            
            if (rax_27 s> *(i_23 + 0x3c))
                r9, r10, r11 = sub_1405a4cf0(i_23 + 0x30)
            
            *(*(i_23 + 0x30) + (r14_4 << 2)) = *(r15_2 + rdi_3)
        
        if (rdx_11 != 0 && r12_1 != 0 && rax_13 != 0)
            i_23 = i_24
            int32_t* r15_3 = *arg4
            int64_t r14_5 = sx.q(*(i_23 + 0x48))
            int32_t rax_29 = (r14_5 + 1).d
            *(i_23 + 0x48) = rax_29
            
            if (rax_29 s> *(i_23 + 0x4c))
                r9, r10, r11 = sub_1405a4cf0(i_23 + 0x40)
            
            *(*(i_23 + 0x40) + (r14_5 << 2)) = *(r15_3 + rdi_3)
        
        char r12_2
        
        if (arg_18.b == 0)
            r12_2 = rax_13
        else
            r12_2 = rax_13
            
            if (r12_1 != 0 && r12_2 != 0)
                i_23 = i_24
                int32_t* r15_4 = *arg4
                int64_t r14_6 = sx.q(*(i_23 + 0x58))
                int32_t rax_31 = (r14_6 + 1).d
                *(i_23 + 0x58) = rax_31
                
                if (rax_31 s> *(i_23 + 0x5c))
                    r9, r10, r11 = sub_1405a4cf0(i_23 + 0x50)
                
                *(*(i_23 + 0x50) + (r14_6 << 2)) = *(r15_4 + rdi_3)
        
        char rax_33 = rax_12
        
        if (rdx_11 != 0 && rax_33 != 0 && r12_2 != 0)
            i_23 = i_24
            int32_t* r15_5 = *arg4
            int64_t r14_7 = sx.q(*(i_23 + 0x68))
            int32_t rax_34 = (r14_7 + 1).d
            *(i_23 + 0x68) = rax_34
            
            if (rax_34 s> *(i_23 + 0x6c))
                r9, r10, r11 = sub_1405a4cf0(i_23 + 0x60)
            
            *(*(i_23 + 0x60) + (r14_7 << 2)) = *(r15_5 + rdi_3)
            rax_33 = rax_12
        
        if (arg_18.b != 0 && rax_33 != 0 && r12_2 != 0)
            i_23 = i_24
            int32_t* r15_6 = *arg4
            int64_t r14_8 = sx.q(*(i_23 + 0x78))
            int32_t rax_36 = (r14_8 + 1).d
            *(i_23 + 0x78) = rax_36
            
            if (rax_36 s> *(i_23 + 0x7c))
                r9, r10, r11 = sub_1405a4cf0(i_23 + 0x70)
            
            *(*(i_23 + 0x70) + (r14_8 << 2)) = *(r15_6 + rdi_3)
        
        rdi_3 += 4
        i_3 = i_8 + 1
        i_8 = i_3
    while (i_3 s< arg4[1].d)

void* var_60 = arg1
uint64_t* var_88 = &var_a0
int64_t* var_58 = arg4
float* var_80 = &var_c0
int64_t* var_78 = &var_d0
int64_t* var_70 = &i_24
void arg_28
void* var_68 = &arg_28
int64_t* var_50 = &var_e8
var_b0 = &data_141733e70
uint64_t** var_a8 = &var_88
sub_14077b750(8, &var_b0, 0)
EnterCriticalSection(arg1 + 0xb0)
int64_t rbx_3 = 0

for (int64_t i_4 = 0; i_4 s< 0x1c0; )
    void* rcx_45 = var_d0
    
    if (*(rcx_45 + i_4 + 0x28) == 0)
        *(rcx_45 + i_4 + 0x30) = *(arg1 + 0xa8)
        int64_t r15_7 = sx.q(*(arg1 + 0xa8))
        int64_t* rdi_4 = var_e8
        int32_t rax_39 = (r15_7 + 1).d
        *(arg1 + 0xa8) = rax_39
        
        if (rax_39 s> *(arg1 + 0xac))
            sub_1405a4f90(arg1 + 0xa0)
        
        int64_t* rcx_49 = (r15_7 << 4) + *(arg1 + 0xa0)
        *rcx_49 = 0
        *rcx_49 = *(rdi_4 + rbx_3)
        *(rdi_4 + rbx_3) = 0
        rcx_49[1].d = *(rdi_4 + rbx_3 + 8)
        *(rcx_49 + 0xc) = *(rdi_4 + rbx_3 + 0xc)
        *(rdi_4 + rbx_3 + 8) = 0
    
    i_4 += 0x38
    rbx_3 += 0x10

int32_t rsi_1 = *(arg1 + 0x98)
sub_14153e9c0(arg1 + 0x90, &var_d0)
LeaveCriticalSection(arg1 + 0xb0)
int32_t i_12 = i_16
int64_t* rbx_4 = var_e8

if (i_12 != 0)
    int32_t i_5
    
    do
        int64_t rcx_52 = *rbx_4
        
        if (rcx_52 != 0)
            sub_140a74f90(rcx_52)
        
        rbx_4 = &rbx_4[2]
        i_5 = i_12
        i_12 -= 1
    while (i_5 != 1)
    rbx_4 = var_e8

if (rbx_4 != 0)
    sub_140a74f90(rbx_4)

int32_t i_13 = i_15
int64_t i_26 = i_24

if (i_13 != 0)
    int32_t i_6
    
    do
        int64_t rcx_54 = *i_26
        
        if (rcx_54 != 0)
            sub_140a74f90(rcx_54)
        
        i_26 += 0x10
        i_6 = i_13
        i_13 -= 1
    while (i_6 != 1)
    i_26 = i_24

if (i_26 != 0)
    sub_140a74f90(i_26)

int32_t i_14 = i_17

if (i_14 != 0)
    int64_t* rbx_6 = var_d0 + 0x20
    int32_t i_7
    
    do
        int64_t rcx_56 = *rbx_6
        
        if (rcx_56 != 0)
            sub_140a74f90(rcx_56)
        
        rbx_6 = &rbx_6[7]
        i_7 = i_14
        i_14 -= 1
    while (i_7 != 1)

void* rcx_57 = var_d0

if (rcx_57 != 0)
    sub_140a74f90(rcx_57)

return zx.q(rsi_1)
