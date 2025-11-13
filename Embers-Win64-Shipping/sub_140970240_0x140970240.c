// 函数: sub_140970240
// 地址: 0x140970240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* arg_18 = arg3
arg3.b = 1
int64_t* r12 = arg2
char arg_20 = 0
int64_t* rbx = nullptr
int32_t rsi = 0
void* r14 = arg1
int64_t* rcx = arg2[2]
uint64_t result = 0
uint64_t result_1 = 0
int64_t* var_150 = nullptr
int64_t var_c0
(*(*rcx + 0x78))(rcx, &var_c0, arg3)
char var_1a8 = 1

if (*(r14 + 0x108) == 0 || *(r14 + 0x110) == 0)
    goto label_140970b81

int64_t* rcx_1 = *(r14 + 0x118)

if (rcx_1 == 0)
    goto label_140970b81

int32_t rax_1 = rcx_1[1].d

if (rax_1 s<= 0)
    goto label_140970b81

void* var_180_1 = nullptr
void* r15_1 = nullptr
bool cond:0_1 = rcx_1 != 0

if (rcx_1 != 0)
    if (rax_1 == 0)
        rcx_1 = nullptr
    else
        rcx_1[1].d = rax_1 + 1
        r15_1 = *(r14 + 0x110)
        var_180_1 = r15_1
    
    cond:0_1 = rcx_1 != 0

if (cond:0_1)
    rbx = rcx_1

int64_t* var_198 = r12[2]
int64_t* rax_4 = r12[3]
var_150 = rbx
int64_t* var_190_1 = rax_4

if (rax_4 != 0)
    rax_4[1].d += 1

char var_1d8_1 = 1
int64_t var_148
sub_141cce190(*(r14 + 0x108), &var_148, *r12, zx.q(r12[1].d), 1, &var_198)

if (var_190_1 != 0)
    var_190_1[1].d -= 1
    
    if (var_190_1[1].d == 1)
        (**var_190_1)(var_190_1)
        int32_t temp4_1 = *(var_190_1 + 0xc)
        *(var_190_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*var_190_1 + 8))(var_190_1, 1)

char var_13c

if (var_13c != 0)
    goto label_140970b81

int64_t* rbx_2 = r12[3]

if (rbx_2 != 0)
    rbx_2[1].d += 1

int64_t* rcx_5 = *(r15_1 + 0x60)
char r13_1 = *(r15_1 + 0xb4)

if (rcx_5 != 0 && r12[2] != 0)
    result = zx.q((*(*rcx_5 + 0x80))(rcx_5))

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp6_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

int64_t var_178

if (result.b == 0)
    result = 0
label_140970b81:
    var_178 = *r12
    int32_t var_170_2 = 0
    *r12 = var_178.o
else
    int64_t var_138
    
    if (r13_1 != 0)
        int64_t* r14_1 = *(r14 + 0x90)
        int64_t* r12_1 = nullptr
        uint64_t result_5 = &r14_1[sx.q(*(arg1 + 0x98))]
        uint64_t result_4 = result_5
        
        if (r14_1 != result_5)
            do
                uint64_t result_3 = *r14_1
                void* rdi = nullptr
                uint128_t var_168
                int64_t* var_160
                int64_t* rax_15
                
                if (result_3 == 0)
                    rsi |= 2
                    var_160 = nullptr
                    rax_15 = &var_168
                else
                    int64_t* rcx_8 = *(result_3 + 0x150)
                    rsi |= 1
                    var_198 = nullptr
                    var_190_1 = rcx_8
                    
                    if (rcx_8 == 0)
                        rax_15 = &var_198
                    else
                        int32_t rax_13 = rcx_8[1].d
                        
                        if (rax_13 == 0)
                            var_190_1 = nullptr
                            rax_15 = &var_198
                        else
                            rcx_8[1].d = rax_13 + 1
                            rax_15 = &var_198
                            rdi = *(result_3 + 0x148)
                
                *rax_15 = 0
                int64_t* rbx_3 = r12_1
                int64_t* rcx_9 = rax_15[1]
                
                if (rcx_9 != r12_1)
                    rax_15[1] = 0
                    r12_1 = rcx_9
                    
                    if (rbx_3 != 0)
                        rbx_3[1].d -= 1
                        
                        if (rbx_3[1].d == 1)
                            (**rbx_3)(rbx_3)
                            int32_t temp13_1 = *(rbx_3 + 0xc)
                            *(rbx_3 + 0xc) -= 1
                            
                            if (temp13_1 == 1)
                                (*(*rbx_3 + 8))(rbx_3, 1)
                
                if ((rsi.b & 2) != 0)
                    rsi &= 0xfffffffd
                    
                    if (var_160 != 0)
                        var_160[1].d -= 1
                        
                        if (var_160[1].d == 1)
                            (**var_160)(var_160)
                            int32_t temp16_1 = *(var_160 + 0xc)
                            *(var_160 + 0xc) -= 1
                            
                            if (temp16_1 == 1)
                                (*(*var_160 + 8))(var_160, 1)
                
                if ((rsi.b & 1) != 0)
                    rsi &= 0xfffffffe
                    
                    if (var_190_1 != 0)
                        var_190_1[1].d -= 1
                        
                        if (var_190_1[1].d == 1)
                            (**var_190_1)(var_190_1)
                            int32_t temp17_1 = *(var_190_1 + 0xc)
                            *(var_190_1 + 0xc) -= 1
                            
                            if (temp17_1 == 1)
                                (*(*var_190_1 + 8))(var_190_1, 1)
                
                if (rdi != 0 && *(r15_1 + 0xb5) == *(rdi + 0xb5) && *(r15_1 + 0xbd) == *(rdi + 0xbd)
                        && *(r15_1 + 0xc5) == *(rdi + 0xc5))
                    if (result_3 != 0)
                        void* rax_25 = sub_140986830()
                        void* rdx_3 = *(result_3 + 0x10)
                        int64_t rax_26 = sx.q(*(rax_25 + 0x38))
                        
                        if (rax_26.d s<= *(rdx_3 + 0x38)
                                && *(*(rdx_3 + 0x30) + (rax_26 << 3)) == rax_25 + 0x30)
                            var_198 = *(result_3 + 0x110)
                            void* rax_29 = *(result_3 + 0x118)
                            
                            if (rax_29 != 0)
                                *(rax_29 + 8) += 1
                            
                            var_168 = var_198.o
                            
                            if (rax_29 != 0)
                                *(rax_29 + 8) += 1
                            
                            void* r15_2 = arg1
                            void* r14_2 = r15_2 + 0xa0
                            void* r8_1
                            
                            if (*(r14_2 + 8) != *(r14_2 + 0x34))
                                int64_t* r15_3 = var_168.q
                                int32_t rax_32 = (*(*r15_3 + 0x88))(r15_3)
                                void* rcx_18 = *(r14_2 + 0x40)
                                r8_1 = r14_2 + 0x38
                                
                                if (rcx_18 != 0)
                                    r8_1 = rcx_18
                                
                                int32_t i =
                                    *(r8_1 + (((sx.q(*(r14_2 + 0x48)) - 1) & sx.q(rax_32)) << 2))
                                
                                if (i != 0xffffffff)
                                    int64_t* rax_34 = *r14_2
                                    
                                    do
                                        int64_t* rcx_19 = rax_34[sx.q(i) * 4]
                                        char rax_36
                                        rax_36, r8_1 = (*(*rcx_19 + 0x80))(rcx_19, r15_3)
                                        
                                        if (rax_36 != 0)
                                            if (i != 0xffffffff)
                                                sub_140974600(r14_2, i)
                                            
                                            break
                                        
                                        rax_34 = *r14_2
                                        i = rax_34[sx.q(i) * 4 + 3].d
                                    while (i != 0xffffffff)
                                
                                r15_2 = arg1
                            
                            rsi = (rsi | 4) & 0xfffffffb
                            
                            if (var_160 != 0)
                                var_160[1].d -= 1
                                
                                if (var_160[1].d == 1)
                                    (**var_160)(var_160)
                                    int32_t temp21_1 = *(var_160 + 0xc)
                                    *(var_160 + 0xc) -= 1
                                    
                                    if (temp21_1 == 1)
                                        (*(*var_160 + 8))(var_160, 1)
                            
                            int64_t* rcx_23 = var_198
                            char var_1a7 = 0
                            r8_1.b = 1
                            (*(*rcx_23 + 0x78))(rcx_23, &var_138, r8_1)
                            int64_t* rbx_7 = var_198
                            int64_t* rcx_24 = arg2[2]
                            int64_t* rax_41 = (*(*rcx_24 + 0x78))(rcx_24, &var_178, 0)
                            int16_t* const rdx_11
                            
                            if (rax_41[1].d == 0)
                                rdx_11 = &data_142d40450
                            else
                                rdx_11 = *rax_41
                            
                            (*(*rbx_7 + 0x10))(rbx_7, rdx_11, &var_1a7)
                            int64_t rcx_26 = var_178
                            
                            if (rcx_26 != 0)
                                sub_140a74f90(rcx_26)
                            
                            int64_t* rcx_27 = arg2[2]
                            int64_t* rdi_4 = var_198
                            (*(*rdi_4 + 0x28))(rdi_4, zx.q((*(*rcx_27 + 0x30))(rcx_27)))
                            uint128_t zmm0 = var_198.o
                            var_178.o = zmm0
                            int64_t* rax_45 = _mm_bsrli_si128(zmm0, 8).q
                            result_4 = result_3
                            
                            if (rax_45 != 0)
                                rax_45[1].d += 1
                            
                            var_168.q = &var_178
                            uint64_t* var_160_1 = &result_4
                            sub_1409465c0(r14_2, &result_1, &var_168, nullptr)
                            int32_t var_170
                            int64_t* rbx_9 = var_170.q
                            
                            if (rbx_9 != 0)
                                rbx_9[1].d -= 1
                                
                                if (rbx_9[1].d == 1)
                                    (**rbx_9)(rbx_9)
                                    int32_t temp23_1 = *(rbx_9 + 0xc)
                                    *(rbx_9 + 0xc) -= 1
                                    
                                    if (temp23_1 == 1)
                                        (*(*rbx_9 + 8))(rbx_9, 1)
                            
                            int64_t* r14_3 = *(r15_2 + 0xf0)
                            int64_t* rbx_10 = r14_3
                            void* rdi_5 = &r14_3[sx.q(*(r15_2 + 0xf8)) * 3]
                            
                            if (r14_3 != rdi_5)
                                do
                                    int64_t* rcx_33 = var_198
                                    
                                    if ((*(*rcx_33 + 0x80))(rcx_33, *rbx_10) != 0)
                                        int32_t rdx_17 = ((rbx_10 - r14_3) s/ 0x18).d
                                        
                                        if (rdx_17 != 0xffffffff)
                                            sub_140974890(r15_2 + 0xf0, rdx_17, 1, 1)
                                        
                                        break
                                    
                                    rbx_10 = &rbx_10[3]
                                while (rbx_10 != rdi_5)
                            
                            int64_t rcx_35 = var_138
                            result_1 = result_3
                            
                            if (rcx_35 != 0)
                                sub_140a74f90(rcx_35)
                            
                            if (rax_45 != 0)
                                rax_45[1].d -= 1
                                
                                if (rax_45[1].d == 1)
                                    (**rax_45)(rax_45)
                                    int32_t temp25_1 = *(rax_45 + 0xc)
                                    *(rax_45 + 0xc) -= 1
                                    
                                    if (temp25_1 == 1)
                                        (*(*rax_45 + 8))(rax_45, 1)
                            
                            r15_1 = var_180_1
                    
                    break
                
                r14_1 = &r14_1[1]
            while (r14_1 != result_4)
            
            if (r12_1 != 0)
                r12_1[1].d -= 1
                
                if (r12_1[1].d == 1)
                    (**r12_1)(r12_1)
                    int32_t temp19_1 = *(r12_1 + 0xc)
                    *(r12_1 + 0xc) -= 1
                    
                    if (temp19_1 == 1)
                        (*(*r12_1 + 8))(r12_1, 1)
        
        r14 = arg1
        r12 = arg2
    
    int32_t var_140
    int32_t temp7_1
    int32_t temp8_1
    temp7_1:temp8_1 = sx.q(var_140 + 7)
    int32_t count = (temp8_1 + (temp7_1 & 7)) s>> 3
    
    if (count s> 0)
        memcpy(*arg_18, var_148, count)
        var_1a8 = 0
    
    var_178 = *arg_18
    int32_t count_1 = count
    *r12 = var_178.o
    
    if (r13_1 != 0)
        result = result_1
    else
        int64_t* rdi_7 = *(r14 + 0x170)
        arg_20 = 0
        void* rax_63 = sub_140cde0b0()
        
        if ((sub_140b5b8a0(0, 0) & 1) != 0)
            sub_140d19010(rax_63, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        var_1d8_1.d = 0
        uint64_t result_2 = sub_140d2dfc0(rdi_7, rax_63, 0, 0, 0, 0, 0, 0, 0)
        uint64_t r8_5 = zx.q(*(r15_1 + 0x70))
        uint64_t rdx_22 = zx.q(*(r15_1 + 0x74))
        result = result_2
        result_1 = result_2
        int64_t r9_3 = *result_2
        (*(r9_3 + 0x308))(result_2, rdx_22, r8_5, r9_3)
        void* r13_2 = *(r14 + 0x140)
        void var_128
        void var_b0
        void* rax_67
        int32_t rsi_2
        
        if (r13_2 == 0)
            rsi_2 = rsi | 0x10
            rax_67 = sub_1423fd810(&var_b0, nullptr)
        else
            rsi_2 = rsi | 8
            sub_140596d10(&var_128, r13_2 + 0x400)
            void var_118
            sub_140596d10(&var_118, r13_2 + 0x410)
            int32_t var_108_1 = *(r13_2 + 0x420)
            int32_t var_104_1 = *(r13_2 + 0x424)
            void var_100
            sub_140596d10(&var_100, r13_2 + 0x428)
            void var_f0
            sub_140596d10(&var_f0, r13_2 + 0x438)
            uint64_t var_e0 = 0
            int32_t i_2 = *(r13_2 + 0x450)
            void* r14_4 = *(r13_2 + 0x448)
            int32_t i_3 = i_2
            
            if (i_2 != 0)
                sub_1405a4be0(&var_e0, i_2, 0)
                uint64_t rbx_15 = var_e0
                int32_t i_1
                
                do
                    *rbx_15 = 0
                    int32_t rdi_8 = *(r14_4 + 8)
                    int64_t r12_2 = *r14_4
                    *(rbx_15 + 8) = rdi_8
                    
                    if (rdi_8 != 0)
                        sub_1405a4c70(rbx_15, rdi_8, 0)
                        memcpy(*rbx_15, r12_2, rdi_8 * 2)
                    else
                        *(rbx_15 + 0xc) = 0
                    
                    rbx_15 += 0x10
                    r14_4 += 0x10
                    i_1 = i_2
                    i_2 -= 1
                while (i_1 != 1)
                result = result_1
                r12 = arg2
            else
                int32_t var_d4_1 = 0
            
            void var_d0
            sub_140596d10(&var_d0, r13_2 + 0x458)
            r15_1 = var_180_1
            rax_67 = &var_128
            r14 = arg1
        
        var_1d8_1.q = r12[2]
        (*(*result + 0x2e8))(result, r14, *(r14 + 0x750), rax_67, 0, 3, 0, 0)
        
        if ((rsi_2.b & 0x10) != 0)
            rsi_2 &= 0xffffffef
            sub_14094c030(&var_b0)
        
        if ((rsi_2.b & 8) != 0)
            sub_14094c030(&var_128)
        
        void* rcx_57 = *(result + 0x140)
        
        if (rcx_57 != 0)
            var_178 = 0
            int32_t var_170_1 = 0
            sub_141ccd980(rcx_57, &var_178)
        
        int64_t* rcx_58 = *(r14 + 0x208)
        (*(*rcx_58 + 8))(rcx_58, result)
        sub_14215ed70(r14, result)
    
    if (r15_1 + 0x60 != &var_138)
        *(r15_1 + 0x60) = 0
        int64_t* rbx_16 = *(r15_1 + 0x68)
        
        if (rbx_16 != 0)
            *(r15_1 + 0x68) = 0
            rbx_16[1].d -= 1
            
            if (rbx_16[1].d == 1)
                (**rbx_16)(rbx_16)
                int32_t temp10_1 = *(rbx_16 + 0xc)
                *(rbx_16 + 0xc) -= 1
                
                if (temp10_1 == 1)
                    (*(*rbx_16 + 8))(rbx_16, 1)
    
    __builtin_memset(r15_1 + 0xb4, 0, 0x15)
    *(r15_1 + 0x70) = 0
    
    if (var_1a8 != 0)
        goto label_140970b81
int64_t rcx_62 = var_c0

if (rcx_62 != 0)
    sub_140a74f90(rcx_62)

if (var_150 != 0)
    var_150[1].d -= 1
    
    if (var_150[1].d == 1)
        (**var_150)(var_150)
        int32_t temp2_1 = *(var_150 + 0xc)
        *(var_150 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*var_150 + 8))(var_150, 1)

return result
