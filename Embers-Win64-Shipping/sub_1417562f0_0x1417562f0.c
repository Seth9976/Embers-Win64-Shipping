// 函数: sub_1417562f0
// 地址: 0x1417562f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
uint64_t i_11 = zx.q(*(arg3 + 0x18))
uint64_t i_7 = 0
int64_t* rbx = nullptr
int64_t* var_b0 = nullptr
int32_t i_12 = i_11.d - data_1439b8da0
int32_t var_a4 = 0
int32_t i_17 = i_11.d

if (i_11.d s> 0)
    sub_14083a7e0(&var_b0)
    arg3 = arg_18
    rbx = var_b0

int32_t i = 0

if (i_11.d != 0)
    do
        int64_t i_5 = sx.q(i)
        i += 1
        int64_t rcx_1 = i_5 * 3
        int64_t rax_1 = *(arg3 + 0x28)
        *(rbx + (rcx_1 << 2)) = *(rax_1 + (rcx_1 << 2))
        *(rbx + (rcx_1 << 2) + 8) = *(rax_1 + (rcx_1 << 2) + 8)
    while (i u< i_11.d)

uint64_t i_8 = 0
char* i_15 = nullptr
int64_t var_b8 = 0

if (i_11.d != 0)
    sub_1405c5510(&i_8, i_11.d)
    i_15 = i_8

if (i_11.d s> 0)
    i_7 = i_11
    uint64_t i_1
    
    do
        int64_t rsi_1 = sx.q(var_b8.d)
        int32_t rax_3 = (rsi_1 + 1).d
        var_b8.d = rax_3
        
        if (rax_3 s> var_b8:4.d)
            sub_140679a80(&i_8)
            i_15 = i_8
        
        if (rsi_1 != neg.q(i_15))
            i_15[rsi_1] = 0
        
        i_1 = i_7
        i_7 -= 1
    while (i_1 != 1)

if (i_12 s> 0)
    int32_t r12_1 = (i_11 - 1).d
    uint64_t i_4 = zx.q(i_12)
    uint64_t i_2
    
    do
        int32_t j_2 = -1
        int64_t zmm2 = 0x7f7fffff
        int32_t r11_1 = -1
        int32_t r9 = i_7.d
        
        if (r12_1 != 0)
            uint128_t zmm0
            
            do
                int64_t r14 = sx.q(r9)
                
                if (i_15[r14] == 0)
                    int32_t j = r9 + 1
                    
                    if (j u< i_11.d)
                        float zmm1
                        int64_t zmm3
                        
                        if (i_11.d - j u>= 4)
                            int32_t j_5 = j + 2
                            
                            do
                                int64_t j_3 = sx.q(j)
                                
                                if (i_15[j_3] == 0)
                                    int64_t rax_9 = r14 * 3
                                    int64_t rcx_4 = j_3 * 3
                                    zmm3.d = (*(rbx + (rax_9 << 2))).d f- *(rbx + (rcx_4 << 2))
                                    zmm0.d =
                                        (*(rbx + (rax_9 << 2) + 4)).d f- *(rbx + (rcx_4 << 2) + 4)
                                    zmm1 = *(rbx + (rax_9 << 2) + 8) f- *(rbx + (rcx_4 << 2) + 8)
                                    zmm3.d = zmm3.d f* zmm3.d
                                    zmm0.d = zmm0.d f* zmm0.d
                                    zmm3.d = zmm3.d f+ zmm0.d
                                    zmm3.d = zmm3.d f+ zmm1 * zmm1
                                    
                                    if (not(zmm3.d f>= zmm2.d))
                                        zmm2 = zmm3
                                        r11_1 = r9
                                        j_2 = j
                                
                                if (i_15[j_3 + 1] == 0)
                                    int64_t rax_10 = r14 * 3
                                    int64_t rcx_5 = j_3 * 3
                                    zmm3.d =
                                        (*(rbx + (rax_10 << 2))).d f- *(rbx + (rcx_5 << 2) + 0xc)
                                    zmm0.d = (*(rbx + (rax_10 << 2) + 4)).d f-
                                        *(rbx + (rcx_5 << 2) + 0x10)
                                    zmm1 =
                                        *(rbx + (rax_10 << 2) + 8) f- *(rbx + (rcx_5 << 2) + 0x14)
                                    zmm3.d = zmm3.d f* zmm3.d
                                    zmm0.d = zmm0.d f* zmm0.d
                                    zmm3.d = zmm3.d f+ zmm0.d
                                    zmm3.d = zmm3.d f+ zmm1 * zmm1
                                    
                                    if (not(zmm3.d f>= zmm2.d))
                                        zmm2 = zmm3
                                        j_2 = j_5 - 1
                                        r11_1 = r9
                                
                                if (i_15[j_3 + 2] == 0)
                                    int64_t rax_11 = r14 * 3
                                    int64_t rcx_6 = j_3 * 3
                                    zmm3.d =
                                        (*(rbx + (rax_11 << 2))).d f- *(rbx + (rcx_6 << 2) + 0x18)
                                    zmm0.d = (*(rbx + (rax_11 << 2) + 4)).d f-
                                        *(rbx + (rcx_6 << 2) + 0x1c)
                                    zmm1 =
                                        *(rbx + (rax_11 << 2) + 8) f- *(rbx + (rcx_6 << 2) + 0x20)
                                    zmm3.d = zmm3.d f* zmm3.d
                                    zmm0.d = zmm0.d f* zmm0.d
                                    zmm3.d = zmm3.d f+ zmm0.d
                                    zmm3.d = zmm3.d f+ zmm1 * zmm1
                                    
                                    if (not(zmm3.d f>= zmm2.d))
                                        zmm2 = zmm3
                                        r11_1 = r9
                                        j_2 = j_5
                                
                                if (i_15[j_3 + 3] == 0)
                                    int64_t rax_12 = r14 * 3
                                    int64_t rcx_7 = j_3 * 3
                                    zmm3.d =
                                        (*(rbx + (rax_12 << 2))).d f- *(rbx + (rcx_7 << 2) + 0x24)
                                    zmm0.d = (*(rbx + (rax_12 << 2) + 4)).d f-
                                        *(rbx + (rcx_7 << 2) + 0x28)
                                    zmm1 =
                                        *(rbx + (rax_12 << 2) + 8) f- *(rbx + (rcx_7 << 2) + 0x2c)
                                    zmm3.d = zmm3.d f* zmm3.d
                                    zmm0.d = zmm0.d f* zmm0.d
                                    zmm3.d = zmm3.d f+ zmm0.d
                                    zmm3.d = zmm3.d f+ zmm1 * zmm1
                                    
                                    if (not(zmm3.d f>= zmm2.d))
                                        zmm2 = zmm3
                                        j_2 = j_5 + 1
                                        r11_1 = r9
                                
                                j += 4
                                j_5 += 4
                            while (j u< (i_11 - 3).d)
                        
                        for (; j u< i_11.d; j += 1)
                            int64_t j_1 = sx.q(j)
                            
                            if (i_15[j_1] == 0)
                                int64_t rcx_8 = j_1 * 3
                                int64_t rax_13 = r14 * 3
                                zmm3.d = (*(rbx + (rax_13 << 2))).d f- *(rbx + (rcx_8 << 2))
                                zmm0.d = (*(rbx + (rax_13 << 2) + 4)).d f- *(rbx + (rcx_8 << 2) + 4)
                                zmm1 = *(rbx + (rax_13 << 2) + 8) f- *(rbx + (rcx_8 << 2) + 8)
                                zmm3.d = zmm3.d f* zmm3.d
                                zmm0.d = zmm0.d f* zmm0.d
                                zmm3.d = zmm3.d f+ zmm0.d
                                zmm3.d = zmm3.d f+ zmm1 * zmm1
                                
                                if (not(zmm3.d f>= zmm2.d))
                                    zmm2 = zmm3
                                    r11_1 = r9
                                    j_2 = j
                
                r9 += 1
            while (r9 u< r12_1)
            
            i_7 = 0
            
            if (r11_1 != 0xffffffff)
                int64_t j_4 = sx.q(j_2)
                int64_t rdx_3 = sx.q(r11_1) * 3
                int64_t rax_15 = j_4 * 3
                zmm0.d = (*(rbx + (rax_15 << 2) + 8)).d f- *(rbx + (rdx_3 << 2) + 8)
                uint128_t zmm4
                zmm4.d = (*(rbx + (rax_15 << 2))).d f- *(rbx + (rdx_3 << 2))
                zmm2.d = (*(rbx + (rax_15 << 2) + 4)).d f- *(rbx + (rdx_3 << 2) + 4)
                zmm0.d = zmm0.d f* 0.5f
                zmm4.d = zmm4.d f* 0.5f
                zmm0.d = zmm0.d f+ *(rbx + (rdx_3 << 2) + 8)
                zmm2.d = zmm2.d f* 0.5f
                zmm4.d = zmm4.d f+ *(rbx + (rdx_3 << 2))
                zmm2.d = zmm2.d f+ *(rbx + (rdx_3 << 2) + 4)
                var_b8.d = zmm0.d
                *(rbx + (rdx_3 << 2)) = (_mm_unpacklo_ps(zmm4, zmm2)).q
                *(rbx + (rdx_3 << 2) + 8) = var_b8.d
                i_15[j_4] = 1
        
        i_2 = i_4
        i_4 -= 1
    while (i_2 != 1)

uint64_t i_9 = i_7
void** var_98 = &data_142fc4250
int32_t var_88 = 0
void** const var_78 = &data_142fc4220
int32_t var_80 = i_7.d
uint64_t i_10 = i_7
int64_t var_68 = 0
char var_60 = 0
sub_14172eb30(&var_98, &var_78)
uint64_t i_13 = zx.q(i_17)

if (i_13.d s> 0)
    char* i_18 = i_15
    char* i_16 = i_15
    int64_t* r12_2 = rbx
    i_8 = i_13
    uint64_t i_6 = zx.q(i_13.d)
    uint64_t i_3
    
    do
        if (*i_18 == 0)
            uint64_t i_14 = i_9
            int32_t r13_1 = var_80 + 1
            var_80 = r13_1
            int64_t rcx_10 = i_14 + (sx.q(var_88) << 3)
            uint64_t r15_5 = (rcx_10 - i_14 + 7) u>> 3
            
            if (i_14 u> rcx_10)
                r15_5 = 0
            
            if (r15_5 != 0)
                do
                    int64_t* rcx_11 = *i_14
                    
                    if (rcx_11 != 0)
                        (**rcx_11)(rcx_11, zx.q(r13_1))
                    
                    i_14 += 8
                    i_7 += 1
                while (i_7 != r15_5)
                
                r13_1 = var_80
                i_18 = i_16
                i_6 = i_8
            
            i_7 = 0
            int64_t rdx_6 = sx.q(r13_1 - 1) * 3
            *(i_10 + (rdx_6 << 2)) = *r12_2
            *(i_10 + (rdx_6 << 2) + 8) = r12_2[1].d
        
        i_18 = &i_18[1]
        r12_2 += 0xc
        i_3 = i_6
        i_6 -= 1
        i_16 = i_18
        i_8 = i_6
    while (i_3 != 1)

sub_141731520(&var_98, arg1, arg2, arg_18, arg4)
var_98 = &data_142fc4250
var_78 = &data_142fc4220

if (i_10 != 0)
    sub_140a74f90(i_10)

void** const result = &data_142fc4068
var_98 = &data_142fc4068

if (i_9 != 0)
    result = sub_140a74f90(i_9)

if (i_15 != 0)
    result = sub_140a74f90(i_15)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
