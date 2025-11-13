// 函数: sub_140ef9bc0
// 地址: 0x140ef9bc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_248
int64_t rax_1 = __security_cookie ^ &var_248
void* r12 = arg1
int32_t* r14 = arg8
uint128_t zmm6
uint128_t var_48 = zmm6
int32_t var_210 = 0
int64_t r9 = *(arg1 + 0x18)
uint128_t zmm8
uint128_t var_68 = zmm8
int64_t* r8 = sx.q(arg2) * 0x70
int32_t var_1b0 = arg2
int32_t* var_198 = arg6
int32_t* var_178 = r14
int64_t* rbx = *(r8 + r9 + 0x18)
int64_t rdx = *(r8 + r9 + 0x10)
int64_t* var_1f0 = r8
int64_t var_1e8 = r9

if (rbx != 0)
    rbx[1].d += 1

char rcx = *(r8 + r9 + 0x20)
char var_160 = *(r12 + 0x89)
char var_15f = rcx

if (rbx != 0)
    rbx[1].d += 1
    
    if (rbx != 0)
        rbx[1].d -= 1
        
        if (rbx[1].d == 1)
            (**rbx)(rbx)
            int32_t temp1_1 = *(rbx + 0xc)
            *(rbx + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*rbx + 8))(rbx, 1)
            
            r9 = var_1e8
            r8 = var_1f0

int64_t rcx_3 = sx.q(*arg6)
int32_t rax_8 = *(r8 + r9 + 0x30)
int32_t rdi = *r14
int16_t var_216 = 0
int16_t var_20c = 0
int64_t var_1c0

if (rcx_3.d s< rax_8)
    int64_t* rcx_6 = *(*(r8 + r9 + 0x28) + rcx_3 * 0x30)
    (*(*rcx_6 + 8))(rcx_6, &var_1c0)
    int32_t rax_11 = var_1c0.d
    r8 = var_1f0
    r9 = var_1e8
    
    if (rdi s>= rax_11)
        rax_11 = rdi
    
    rdi = rax_11
    rax_8 = *(r8 + r9 + 0x30)

int32_t rbx_1 = arg3

if (rbx_1 == 0xffffffff)
    if (rax_8 s<= 0)
        rbx_1 = 0
    else
        int64_t* rcx_9 = *(*(r8 + r9 + 0x28) + sx.q(*(r8 + r9 + 0x30)) * 0x30 - 0x30)
        (*(*rcx_9 + 8))(rcx_9, &var_1c0)
        rbx_1 = var_1c0:4.d

bool cond:1 = *(r12 + 0x89) == 1
int32_t rax_15 = 0
int32_t var_184 = 0
char var_218 = 0
int64_t* var_190 = nullptr
int32_t var_188 = 0
char var_228
int64_t* var_220
int32_t var_214_1
int32_t rdi_1
int32_t rbx_2

if (cond:1)
    rbx_2 = rbx_1 - rdi
label_140ef9dea:
    var_1c0.d = rdi
    var_1c0:4.d = rbx_2
    char var_1b8_1 = 0
    var_188 = 1
    
    if (rax_15 s< 1)
        sub_140a88fc0(&var_190)
    
    int64_t* rcx_13 = var_190
    *rcx_13 = var_1c0
    rcx_13[1].d = var_1b8_1.d
    rdi_1 = var_188
    var_214_1 = rdi_1
else
    int64_t* rcx_10 = *(r12 + 0x100)
    int64_t* rax_16 = *(var_1f0 + var_1e8)
    int16_t* const rdx_3
    
    if (rax_16[1].d == 0)
        rdx_3 = &data_142d40450
    else
        rdx_3 = *rax_16
    
    var_220 = &var_190
    rbx_2 = rbx_1 - rdi
    var_228 = *(var_1f0 + var_1e8 + 0x20)
    var_218 = (*(*rcx_10 + 8))(rcx_10, rdx_3, zx.q(rdi), zx.q(rbx_2), var_228, var_220, var_218)
    var_214_1 = var_188
    
    if (var_188 == 0)
        rax_15 = var_184
        goto label_140ef9dea
    
    rdi_1 = var_214_1
int64_t* rbx_3 = var_190
int64_t rax_20 = 0
int64_t var_170 = 0
var_210 = 0

if (rdi_1 != 0)
    sub_1407c3650(&var_170, rdi_1, 0)
    memcpy(var_170, rbx_3, rdi_1 * 0xc)
    rax_20 = var_170
    var_214_1 = rdi_1

char var_217 = 0
sub_140ee0900(rax_20, rdi_1, 0)
int64_t* r8_5 = var_1f0
int64_t r9_3 = var_1e8
uint64_t result = zx.q(*arg6)
int32_t var_1a0 = 0x7fffffff
int32_t var_19c = 0x80000000
uint64_t var_200
int64_t* var_1f8
uint64_t var_1d0
int64_t* var_1a8
int32_t var_180
int16_t var_c8
int64_t* var_b8
uint128_t zmm0_1
uint128_t zmm1_1
uint128_t zmm7

if (result.d s< *(r8_5 + r9_3 + 0x30))
    int64_t r12_1 = 0
    
    do
        int64_t* r15_3 = sx.q(result.d) * 0x30 + *(r8_5 + r9_3 + 0x28)
        int64_t* rcx_17 = *r15_3
        (*(*rcx_17 + 8))(rcx_17, &var_1a8)
        int32_t r10_2 = *r14
        int32_t r8_6 = 0
        int32_t rax_24 = var_1a8.d
        int32_t r11_1 = var_210
        int32_t rsi_1 = var_1a8:4.d
        int32_t rdx_9 = rsi_1
        
        if (r10_2 s>= rax_24)
            rax_24 = r10_2
        
        r14.b = 0
        
        if (r11_1 s< rdi_1)
            int64_t r9_4 = var_170
            int64_t rcx_18 = r12_1 * 3
            r8_6 = *(r9_4 + (rcx_18 << 2) + 4) + *(r9_4 + (rcx_18 << 2))
            r14 = zx.q(*(r9_4 + (rcx_18 << 2) + 8))
            rsi_1 = r8_6
            
            if (rdx_9 s<= r8_6)
                rsi_1 = rdx_9
        
        int64_t rcx_19 = sx.q(*arg7)
        uint64_t r9_5 = 0
        int64_t* rdi_2 = nullptr
        
        if (rcx_19.d != 0xffffffff)
            void* rcx_21 = (rcx_19 << 5) + *(var_1f0 + var_1e8 + 0x48)
            r11_1 = var_210
            int32_t rdx_11 = *(rcx_21 + 4)
            
            if (r10_2 s>= rdx_11)
                int32_t rdx_12 = *(rcx_21 + 8)
                r9_5 = *(rcx_21 + 0x10)
                
                if (rdx_12 s<= rsi_1)
                    rsi_1 = rdx_12
                
                int64_t* rdx_13 = *(rcx_21 + 0x18)
                
                if (rdx_13 != 0)
                    rdx_13[1].d += 1
                    
                    if (rdx_13 != 0)
                        rdi_2 = rdx_13
            else if (rdx_11 s<= rsi_1)
                rsi_1 = rdx_11
        
        if (arg3 != 0xffffffff && arg3 s<= rsi_1)
            rsi_1 = arg3
        
        var_180 = rax_24
        int64_t rcx_23 = r12_1 + 1
        int32_t var_17c_1 = rsi_1
        
        if (rsi_1 != r8_6)
            rcx_23 = r12_1
        
        r12_1 = rcx_23
        int64_t var_e0 = var_180.q
        int32_t rcx_24 = r11_1 + 1
        var_200 = r9_5
        
        if (rsi_1 != r8_6)
            rcx_24 = r11_1
        
        var_1f8 = rdi_2
        var_210 = rcx_24
        zmm1_1 = zx.o(0)
        
        if (rdi_2 != 0)
            rdi_2[1].d += 1
        
        zmm0_1 = var_200.o
        var_200.o = zmm1_1
        int64_t* rbx_4 = _mm_bsrli_si128(zmm1_1, 8).q
        
        if (rbx_4 != 0)
            rbx_4[1].d -= 1
            
            if (rbx_4[1].d == 1)
                (**rbx_4)(rbx_4)
                int32_t temp16_1 = *(rbx_4 + 0xc)
                *(rbx_4 + 0xc) -= 1
                
                if (temp16_1 == 1)
                    (*(*rbx_4 + 8))(rbx_4, 1)
        
        var_c8 = var_160.w
        int64_t var_c0_1 = rdx
        var_b8 = rbx
        
        if (rbx != 0)
            rbx[1].d += 1
        
        char var_b0_1 = r14.b
        var_228.q = &var_c8
        int64_t* rax_32
        rax_32, zmm7 = sub_140ef89d0(r15_3, &var_1d0, &var_e0, *(arg1 + 0x8c), var_228, var_220)
        int64_t* rax_33 = arg9
        int64_t rbx_5 = sx.q(rax_33[1].d)
        int32_t rcx_28 = (rbx_5 + 1).d
        rax_33[1].d = rcx_28
        
        if (rcx_28 s> *(rax_33 + 0xc))
            sub_1405a4f90(rax_33)
            rax_33 = arg9
        
        int64_t* rcx_32 = (rbx_5 << 4) + *rax_33
        *rcx_32 = *rax_32
        void* rax_35 = rax_32[1]
        rcx_32[1] = rax_35
        
        if (rax_35 != 0)
            *(rax_35 + 8) += 1
        
        int64_t* var_1c8
        
        if (var_1c8 != 0)
            var_1c8[1].d -= 1
            
            if (var_1c8[1].d == 1)
                (**var_1c8)(var_1c8)
                int32_t temp31_1 = *(var_1c8 + 0xc)
                *(var_1c8 + 0xc) -= 1
                
                if (temp31_1 == 1)
                    (*(*var_1c8 + 8))(var_1c8, 1)
        
        if (var_b8 != 0)
            var_b8[1].d -= 1
            
            if (var_b8[1].d == 1)
                (**var_b8)(var_b8)
                int32_t temp32_1 = *(var_b8 + 0xc)
                *(var_b8 + 0xc) -= 1
                
                if (temp32_1 == 1)
                    (*(*var_b8 + 8))(var_b8, 1)
        
        r14 = var_178
        *r14 = rsi_1
        int64_t* rcx_39 = *(*arg9 + sx.q(arg9[1].d) * 0x10 - 0x10)
        (*(*rcx_39 + 0x10))(rcx_39, &var_1c0)
        int32_t rax_43 = var_1c0.d
        int64_t* rbx_8 = zmm0_1:8.q
        
        if (var_1a0 s<= rax_43)
            rax_43 = var_1a0
        
        var_1a0 = rax_43
        int32_t rax_44 = var_1c0:4.d
        
        if (var_19c s>= rax_44)
            rax_44 = var_19c
        
        var_19c = rax_44
        
        if (rbx_8 != 0)
            rbx_8[1].d -= 1
            
            if (rbx_8[1].d == 1)
                (**rbx_8)(rbx_8)
                int32_t temp34_1 = *(rbx_8 + 0xc)
                *(rbx_8 + 0xc) -= 1
                
                if (temp34_1 == 1)
                    (*(*rbx_8 + 8))(rbx_8, 1)
        
        int64_t* rcx_42 = *r15_3
        int16_t rax_48 = (*(*rcx_42 + 0x18))(rcx_42, *(arg1 + 0x8c))
        int64_t* rcx_43 = *r15_3
        int16_t rbx_9 = neg.w(rax_48)
        int64_t rdx_18 = *rcx_43
        result.w = (*(rdx_18 + 0x20))(rcx_43, rdx_18).w - rbx_9
        
        if (var_216 s>= result.w)
            result.w = var_216
        
        var_216 = result.w
        
        if (var_20c s>= rbx_9)
            rbx_9 = var_20c
        
        var_20c = rbx_9
        int32_t* rbx_10 = var_198
        
        if (rsi_1 == var_1a8:4.d)
            *rbx_10 += 1
        
        int64_t rdx_19 = sx.q(*arg7)
        r8_5 = var_1f0
        r9_3 = var_1e8
        
        if (rdx_19.d != 0xffffffff)
            result = *(r8_5 + r9_3 + 0x48)
            
            if (rsi_1 == *((rdx_19 << 5) + result + 8))
                result = zx.q((rdx_19 + 1).d)
                *arg7 = result.d
                
                if (result.d s>= *(r8_5 + r9_3 + 0x50))
                    result = 0xffffffff
                
                *arg7 = result.d
        
        if (rsi_1 == arg3)
            if (rdi_2 != 0)
                rdi_2[1].d -= 1
                
                if (rdi_2[1].d == 1)
                    result = (**rdi_2)(rdi_2)
                    int32_t temp37_1 = *(rdi_2 + 0xc)
                    *(rdi_2 + 0xc) -= 1
                    
                    if (temp37_1 == 1)
                        result = (*(*rdi_2 + 8))(rdi_2, 1)
            
            break
        
        if (rdi_2 != 0)
            rdi_2[1].d -= 1
            
            if (rdi_2[1].d == 1)
                (**rdi_2)(rdi_2)
                int32_t temp38_1 = *(rdi_2 + 0xc)
                *(rdi_2 + 0xc) -= 1
                
                if (temp38_1 == 1)
                    (*(*rdi_2 + 8))(rdi_2, 1)
                
                r9_3 = var_1e8
                r8_5 = var_1f0
        
        result = zx.q(*rbx_10)
        rdi_1 = var_214_1
    while (result.d s< *(r8_5 + r9_3 + 0x30))
    
    r12 = arg1

int64_t* rsi_2 = arg9
zmm8 = zx.o(0)
zmm6 = zx.o(0)
uint128_t zmm9 = *(r12 + 0xc4) ^ data_142d3f780
int32_t rdx_20 = rsi_2[1].d
int128_t zmm10
zmm10.d = (*(r12 + 0xb8)).d f- *(r12 + 0xc8)

if (rdx_20 s> 0)
    char r13_1 = 0
    
    if (rdx_20 s> 1 && var_218 != 0)
        var_1d0 = 0
        int64_t var_1c8_1 = 0
        sub_1405a5410(&var_1d0, rdx_20)
        uint64_t r14_2 = 0
        int32_t i_8 = rsi_2[1].d
        int32_t i_6 = 0
        var_200 = 0
        int32_t r15_4 = 0
        int32_t var_1f4_1 = 0
        int64_t* rax_54 = var_190
        var_1a8 = rax_54
        int32_t* rcx_52 = rax_54 + sx.q(var_188) * 0xc
        var_178 = rcx_52
        int32_t i_9
        
        if (rax_54 == rcx_52)
            i_9 = var_1c8_1.d
        else
            int32_t i_10 = var_1c8_1.d
            uint64_t r9_6 = var_1d0
            int32_t i_13 = i_10
            
            do
                int32_t rcx_53 = *rax_54
                int32_t r12_3 = *(rax_54 + 4) + rcx_53
                var_210 = rcx_53
                
                if (rcx_53 s< r12_3)
                    int32_t rcx_65
                    
                    do
                        int64_t* rbx_11 = *rsi_2
                        void* rsi_5 = &rbx_11[sx.q(rsi_2[1].d) * 2]
                        
                        if (rbx_11 == rsi_5)
                        label_140efa3a7:
                            rbx_11 = nullptr
                        else
                            while (true)
                                int64_t* rcx_54 = *rbx_11
                                int32_t* rax_56 = (*(*rcx_54 + 0x10))(rcx_54, &var_198)
                                
                                if (rax_56[1] - *rax_56 s> 0)
                                    int64_t* rcx_57 = *rbx_11
                                    
                                    if (*(*(*rcx_57 + 0x10))(rcx_57, &var_1c0) == var_210)
                                        break
                                
                                rbx_11 = &rbx_11[2]
                                
                                if (rbx_11 == rsi_5)
                                    goto label_140efa3a7
                        
                        int64_t i_12 = sx.q(i_6)
                        i_6 = (i_12 + 1).d
                        var_1f8.d = i_6
                        void* rax_61
                        
                        if (var_1a8[1].b != 0)
                            if (i_6 s> r15_4)
                                sub_1405a4f90(&var_200)
                                r15_4 = var_1f4_1
                                i_6 = var_1f8.d
                                r14_2 = var_200
                            
                            memmove(r14_2 + 0x10, r14_2, (i_12 << 4).d)
                            *r14_2 = *rbx_11
                            rax_61 = rbx_11[1]
                            *(r14_2 + 8) = rax_61
                        else
                            if (i_6 s> r15_4)
                                sub_1405a4f90(&var_200)
                                r15_4 = var_1f4_1
                                i_6 = var_1f8.d
                                r14_2 = var_200
                            
                            int64_t rcx_61 = i_12 * 2
                            *(r14_2 + (rcx_61 << 3)) = *rbx_11
                            rax_61 = rbx_11[1]
                            *(r14_2 + (rcx_61 << 3) + 8) = rax_61
                        
                        if (rax_61 != 0)
                            *(rax_61 + 8) += 1
                        
                        int64_t* rcx_64 = *rbx_11
                        rsi_2 = arg9
                        rcx_65 = *((*(*rcx_64 + 0x10))(rcx_64, &var_180) + 4)
                        var_210 = rcx_65
                    while (rcx_65 s< r12_3)
                    i_10 = i_13
                    r9_6 = var_1d0
                
                if (i_6 != 0)
                    int32_t rdx_27 = i_6 + i_10
                    
                    if (rdx_27 s> var_1c8_1:4.d)
                        sub_1405a5410(&var_1d0, rdx_27)
                        r9_6 = var_1d0
                        i_10 = var_1c8_1.d
                    
                    memmove((sx.q(i_10) << 4) + r9_6, r14_2, i_6 << 4)
                    int32_t i_14 = i_10 + i_6
                    i_6 = 0
                    i_13 = i_14
                    var_1c8_1.d = i_14
                
                if (r15_4 s< 0)
                    if (i_6 != 0)
                        int64_t* rsi_7 = r14_2 + 8
                        int32_t i
                        
                        do
                            int64_t* rbx_13 = *rsi_7
                            
                            if (rbx_13 != 0)
                                rbx_13[1].d -= 1
                                
                                if (rbx_13[1].d == 1)
                                    (**rbx_13)(rbx_13)
                                    int32_t temp26_1 = *(rbx_13 + 0xc)
                                    *(rbx_13 + 0xc) -= 1
                                    
                                    if (temp26_1 == 1)
                                        (*(*rbx_13 + 8))(rbx_13, 1)
                            
                            rsi_7 = &rsi_7[2]
                            i = i_6
                            i_6 -= 1
                        while (i != 1)
                    
                    var_1f8.d = 0
                    i_6 = 0
                    
                    if (r15_4 != 0)
                        sub_1405a5410(&var_200, 0)
                        r15_4 = var_1f4_1
                        i_6 = var_1f8.d
                        r14_2 = var_200
                else
                    if (i_6 != 0)
                        int64_t* rsi_6 = r14_2 + 8
                        int32_t i_1
                        
                        do
                            int64_t* rbx_12 = *rsi_6
                            
                            if (rbx_12 != 0)
                                rbx_12[1].d -= 1
                                
                                if (rbx_12[1].d == 1)
                                    (**rbx_12)(rbx_12)
                                    int32_t temp27_1 = *(rbx_12 + 0xc)
                                    *(rbx_12 + 0xc) -= 1
                                    
                                    if (temp27_1 == 1)
                                        (*(*rbx_12 + 8))(rbx_12, 1)
                            
                            rsi_6 = &rsi_6[2]
                            i_1 = i_6
                            i_6 -= 1
                        while (i_1 != 1)
                    
                    i_6 = 0
                
                rsi_2 = arg9
                rax_54 = var_1a8 + 0xc
                i_10 = i_13
                r9_6 = var_1d0
                var_1a8 = rax_54
            while (rax_54 != var_178)
            
            i_8 = rsi_2[1].d
            i_9 = i_10
        
        uint64_t r12_4
        
        if (rsi_2 == &var_1d0)
            r12_4 = var_1d0
        else
            void* rcx_75 = *rsi_2
            
            if (i_8 != 0)
                int64_t* rsi_8 = rcx_75 + 8
                int32_t i_2
                
                do
                    int64_t* rbx_14 = *rsi_8
                    
                    if (rbx_14 != 0)
                        rbx_14[1].d -= 1
                        
                        if (rbx_14[1].d == 1)
                            (**rbx_14)(rbx_14)
                            int32_t temp15_1 = *(rbx_14 + 0xc)
                            *(rbx_14 + 0xc) -= 1
                            
                            if (temp15_1 == 1)
                                (*(*rbx_14 + 8))(rbx_14, 1)
                    
                    rsi_8 = &rsi_8[2]
                    i_2 = i_8
                    i_8 -= 1
                while (i_2 != 1)
                rsi_2 = arg9
                rcx_75 = *rsi_2
            
            if (rcx_75 != 0)
                sub_140a74f90(rcx_75)
            
            r12_4 = nullptr
            *rsi_2 = var_1d0
            rsi_2[1].d = i_9
            i_9 = 0
            *(rsi_2 + 0xc) = var_1c8_1:4.d
        
        if (i_6 != 0)
            int64_t* rsi_9 = r14_2 + 8
            int32_t i_3
            
            do
                int64_t* rbx_15 = *rsi_9
                
                if (rbx_15 != 0)
                    rbx_15[1].d -= 1
                    
                    if (rbx_15[1].d == 1)
                        (**rbx_15)(rbx_15)
                        int32_t temp18_1 = *(rbx_15 + 0xc)
                        *(rbx_15 + 0xc) -= 1
                        
                        if (temp18_1 == 1)
                            (*(*rbx_15 + 8))(rbx_15, 1)
                
                rsi_9 = &rsi_9[2]
                i_3 = i_6
                i_6 -= 1
            while (i_3 != 1)
            rsi_2 = arg9
        
        if (r14_2 != 0)
            sub_140a74f90(r14_2)
        
        if (i_9 != 0)
            int64_t* rdi_3 = r12_4 + 8
            int32_t i_4
            
            do
                int64_t* rbx_16 = *rdi_3
                
                if (rbx_16 != 0)
                    rbx_16[1].d -= 1
                    
                    if (rbx_16[1].d == 1)
                        (**rbx_16)(rbx_16)
                        int32_t temp28_1 = *(rbx_16 + 0xc)
                        *(rbx_16 + 0xc) -= 1
                        
                        if (temp28_1 == 1)
                            (*(*rbx_16 + 8))(rbx_16, 1)
                
                rdi_3 = &rdi_3[2]
                i_4 = i_9
                i_9 -= 1
            while (i_4 != 1)
        
        if (r12_4 != 0)
            sub_140a74f90(r12_4)
        
        r12 = arg1
    
    int32_t i_11 = rsi_2[1].d
    int32_t r15_5 = 0
    
    if (i_11 s> 0)
        int64_t* r14_3 = nullptr
        uint128_t var_58_1 = zmm7
        zmm7 = _mm_cvtepi32_ps(zx.o(sx.d(var_216)))
        
        do
            int64_t rax_79 = *rsi_2
            int64_t* rsi_10 = *(r14_3 + rax_79 + 8)
            int64_t* r12_5 = *(r14_3 + rax_79)
            
            if (rsi_10 != 0)
                rsi_10[1].d += 1
            
            (*(*r12_5 + 8))(r12_5, &var_200)
            uint64_t rcx_85 = var_200
            int16_t rax_82 = (*(*rcx_85 + 0x18))(rcx_85, *(arg1 + 0x8c))
            int64_t r8_13 = *r12_5
            void* rax_83 = (*(r8_13 + 0x18))(r12_5, &var_178, r8_13)
            zmm6 = *(arg1 + 0x8c)
            uint64_t rbx_18 = var_200
            zmm1_1.d = zmm7.d f- *(rax_83 + 4)
            int64_t rax_84 = *r12_5
            zmm1_1.d = zmm1_1.d f- _mm_cvtepi32_ps(zx.o(sx.d(rax_82))).d
            int32_t* rax_85 = (*(rax_84 + 0x10))(r12_5, &var_1c0)
            int64_t r8_14 = *rbx_18
            int512_t zmm2
            zmm2.o = zmm6
            int32_t rax_87 = sx.d((int.d(zmm1_1.d)).w)
            zmm0_1.d = zmm9.d f+ zmm8.d
            zmm1_1.d = _mm_cvtepi32_ps(zx.o(sx.d((*(r8_14 + 0x30))(rbx_18, zx.q(*rax_85), r8_14, 
                &var_160, var_228, var_220, var_218)))).d f+ zmm0_1.d
            zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_87))
            var_198.d = zmm1_1.d
            zmm0_1.d = zmm0_1.d f+ zmm10.d
            var_198:4.d = zmm0_1.d
            (*(*r12_5 + 0x30))(r12_5, &var_198)
            zmm8.d = zmm8.d f+ *(*(*r12_5 + 0x18))(r12_5, &var_180)
            
            if (var_1f8 != 0)
                var_1f8[1].d -= 1
                
                if (var_1f8[1].d == 1)
                    (**var_1f8)(var_1f8)
                    int32_t temp7_1 = *(var_1f8 + 0xc)
                    *(var_1f8 + 0xc) -= 1
                    
                    if (temp7_1 == 1)
                        (*(*var_1f8 + 8))(var_1f8, 1)
            
            if (rsi_10 != 0)
                rsi_10[1].d -= 1
                
                if (rsi_10[1].d == 1)
                    (**rsi_10)(rsi_10)
                    int32_t temp9_1 = *(rsi_10 + 0xc)
                    *(rsi_10 + 0xc) -= 1
                    
                    if (temp9_1 == 1 && rsi_10 != 0)
                        (*(*rsi_10 + 8))(rsi_10, 1)
            
            rsi_2 = arg9
            r15_5 += 1
            r14_3 = &r14_3[2]
            i_11 = rsi_2[1].d
        while (r15_5 s< i_11)
        
        r12 = arg1
        r13_1 = 0
    
    int64_t* r10_3 = nullptr
    int64_t var_100_1 = -1
    uint64_t var_110
    uint64_t* rax_96 = &var_110
    int32_t var_118_1 = zmm9.d
    int32_t r9_8 = 0
    int32_t var_114_1 = zmm10.d
    zmm1_1 = _mm_cvtepi32_ps(zx.o(sx.d(var_20c) + sx.d(var_216)))
    int64_t* var_148 = nullptr
    int32_t var_140_1 = 0
    bool cond:4_1 = *(arg5 + 4) != 0
    int64_t var_138 = 0
    
    if (cond:4_1)
        rax_96 = arg5
    
    int64_t var_130
    __builtin_memset(&var_130, 0, 0x18)
    int32_t var_108_1 = zmm1_1.d
    zmm6.d = zmm1_1.d f* *(r12 + 0xac)
    var_110 = (_mm_unpacklo_ps(zmm8, zmm6.q)).q
    int64_t var_100_2 = var_1a0.q
    int32_t var_104_1 = (*rax_96).d
    char rax_99 = *(var_1f0 + var_1e8 + 0x20)
    int32_t var_f4_1 = var_1b0
    
    if (i_11 != 0)
        if (i_11 s> 0)
            sub_1405a5410(&var_148, i_11)
            r9_8 = var_140_1
            r10_3 = var_148
        
        int64_t* rdx_37 = *rsi_2
        int32_t i_7 = i_11
        int64_t* rcx_102 = &r10_3[sx.q(r9_8) * 2]
        int32_t i_5
        
        do
            *rcx_102 = *rdx_37
            void* rax_102 = rdx_37[1]
            rcx_102[1] = rax_102
            
            if (rax_102 != 0)
                *(rax_102 + 8) += 1
            
            rcx_102 = &rcx_102[2]
            rdx_37 = &rdx_37[2]
            i_5 = i_7
            i_7 -= 1
        while (i_5 != 1)
        var_140_1 = r9_8 + i_11
    
    int64_t rdi_5 = sx.q(*(r12 + 0x30))
    int32_t rax_103 = (rdi_5 + 1).d
    *(r12 + 0x30) = rax_103
    
    if (rax_103 s> *(r12 + 0x34))
        sub_1407755b0(r12 + 0x28)
    
    sub_140ee1f00(rdi_5 * 0x58 + *(r12 + 0x28), &var_148)
    int32_t rax_104 = *(r12 + 0xa8)
    
    if (rax_99 != 1)
        if (rax_104 == 0)
            goto label_140efa984
        
        rdi_5.b = 1
    else if (rax_104 == 0 || (rax_104 != 2 && rax_104 != 0))
        rdi_5.b = 1
    else
    label_140efa984:
        r13_1 = 1
        int64_t* rcx_106 = *var_148
        
        if (*((*(*rcx_106 + 0x20))(rcx_106, &var_c8) + 0x18) == 1)
            rdi_5.b = 1
        else
            rdi_5.b = 0
    
    if ((r13_1 & 1) != 0 && var_b8 != 0)
        var_b8[1].d -= 1
        
        if (var_b8[1].d == 1)
            (**var_b8)(var_b8)
            int32_t temp23_1 = *(var_b8 + 0xc)
            *(var_b8 + 0xc) -= 1
            
            if (temp23_1 == 1)
                (*(*var_b8 + 8))(var_b8, 1)
    
    if (rdi_5.b != 0)
        var_1b0 = *(r12 + 0x30) - 1
        sub_140ee0250(r12 + 0x38, &var_210, &var_1b0, nullptr)
    
    int64_t var_128
    sub_14094b310(&var_128)
    sub_14094b310(&var_138)
    result = sub_140596d80(&var_148)

*(r12 + 0xb0) = _mm_max_ss((*(r12 + 0xb0)).d, zmm8.d).d

if (arg3 != 0xffffffff)
    zmm8 = arg4

zmm6.d = zmm6.d f+ *(r12 + 0xb8)
int64_t rcx_113 = var_170
zmm0_1 = _mm_max_ss((*(r12 + 0xb4)).d, zmm8.d)
*(r12 + 0xb8) = zmm6.d
*(r12 + 0xb4) = zmm0_1.d

if (rcx_113 != 0)
    result = sub_140a74f90(rcx_113)

int64_t* rcx_114 = var_190

if (rcx_114 != 0)
    result = sub_140a74f90(rcx_114)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp4_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp4_1 == 1)
            result = (*(*rbx + 8))(rbx, 1)

__security_check_cookie(rax_1 ^ &var_248)
return result
