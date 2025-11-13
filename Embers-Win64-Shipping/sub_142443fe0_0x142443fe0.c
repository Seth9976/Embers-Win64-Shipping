// 函数: sub_142443fe0
// 地址: 0x142443fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_208
int64_t rax_1 = __security_cookie ^ &var_208
(*(*arg2 + 0x1d8))(arg2, &data_143a30858)
int64_t r13 = sx.q(sub_140b4e7c0(arg2, &data_143a30858))
int512_t zmm1 = sub_140ce8e10(arg1, arg2)
int64_t* rdx_1 = arg2[1]
int32_t result_2 = 0
int32_t var_1c4 = 0
int32_t* r8 = *rdx_1

if (&r8[1] u> rdx_1[1])
    int32_t* rdx_2 = &result_2
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_2, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_2, 4)
else
    result_2 = *r8
    *rdx_1 += 4

int64_t* rcx_5 = arg2[1]
int32_t* rdx_3 = *rcx_5

if (&rdx_3[1] u> rcx_5[1])
    int32_t* rdx_4 = &var_1c4
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_4, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_4, 4)
else
    var_1c4 = *rdx_3
    *rcx_5 += 4

int64_t* rcx_7 = arg2[1]
int32_t var_1c0 = 0
int32_t var_1d0 = 0
int32_t* rdx_5 = *rcx_7

if (&rdx_5[1] u> rcx_7[1])
    int32_t* rdx_6 = &var_1c0
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_6, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_6, 4)
else
    var_1c0 = *rdx_5
    *rcx_7 += 4

int64_t* rcx_9 = arg2[1]
int32_t* rdx_7 = *rcx_9

if (&rdx_7[1] u> rcx_9[1])
    int32_t* rdx_8 = &var_1d0
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_8, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_8, 4)
else
    var_1d0 = *rdx_7
    *rcx_9 += 4

int64_t* rcx_11 = arg2[1]
int32_t result_1 = 0
int32_t* rdx_9 = *rcx_11

if (&rdx_9[1] u> rcx_11[1])
    int32_t* rdx_10 = &result_1
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_10, zmm1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_10, 4)
else
    result_1 = *rdx_9
    *rcx_11 += 4

int32_t i_5 = 0
int32_t var_4c = 0x10
void var_150
int512_t zmm1_1 = sub_14242a660(arg2, &var_150, zmm1)
int32_t i_2 = i_5
void* rdi = &var_150

if (i_2 != 0)
    int32_t i
    
    do
        int64_t rcx_14 = *rdi
        
        if (rcx_14 != 0)
            zmm1_1 = sub_140a74f90(rcx_14)
        
        rdi += 0x10
        i = i_2
        i_2 -= 1
    while (i != 1)

if (r13.d s>= 2)
    int64_t* rcx_15 = arg2[1]
    result_1 = 0
    var_1d0 = 0
    int32_t* rdx_12 = *rcx_15
    
    if (&rdx_12[1] u> rcx_15[1])
        int32_t* rdx_13 = &result_1
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_13, zmm1_1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_13, 4)
    else
        result_1 = *rdx_12
        *rcx_15 += 4
    
    int64_t* rcx_17 = arg2[1]
    int32_t* rdx_14 = *rcx_17
    
    if (&rdx_14[1] u> rcx_17[1])
        int32_t* rdx_15 = &var_1d0
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            sub_140b54070(arg2, rdx_15, zmm1_1)
        else
            (*(*arg2 + 0x150))(arg2, rdx_15, 4)
    else
        var_1d0 = *rdx_14
        *rcx_17 += 4

int64_t* rcx_19 = arg2[1]
int32_t var_1cc = 0
int32_t* rdx_16 = *rcx_19

if (&rdx_16[1] u> rcx_19[1])
    int32_t* rdx_17 = &var_1cc
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        sub_140b54070(arg2, rdx_17, zmm1_1)
    else
        (*(*arg2 + 0x150))(arg2, rdx_17, 4)
else
    var_1cc = *rdx_16
    *rcx_19 += 4

uint64_t var_1b8
int64_t var_1b0

if ((arg2[5].b & 1) != 0)
    int32_t rdi_1 = 0
    
    if (var_1cc s> 0)
        do
            var_1b8 = 0
            var_1b0 = 0
            zmm1_1 = sub_140a1d9d0(arg2, &var_1b8, zmm1_1)
            uint64_t rcx_22 = var_1b8
            
            if (rcx_22 != 0)
                zmm1_1 = sub_140a74f90(rcx_22)
            
            rdi_1 += 1
        while (rdi_1 s< var_1cc)

if ((r13 - 1).d u<= 3)
    int32_t i_4 = 0
    int32_t var_154_1 = 4
    void var_198
    zmm1_1 = sub_14242a4c0(arg2, &var_198, zmm1_1)
    int32_t i_3 = i_4
    void* r14_1 = &var_198
    
    if (i_3 != 0)
        int32_t i_1
        
        do
            int32_t j_1 = *(r14_1 + 8)
            void* rcx_24 = *r14_1
            
            if (j_1 != 0)
                int64_t* rdi_2 = rcx_24 + 0x10
                int32_t j
                
                do
                    int64_t rcx_25 = *rdi_2
                    
                    if (rcx_25 != 0)
                        zmm1_1 = sub_140a74f90(rcx_25)
                    
                    rdi_2 = &rdi_2[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
                rcx_24 = *r14_1
            
            if (rcx_24 != 0)
                zmm1_1 = sub_140a74f90(rcx_24)
            
            r14_1 += 0x10
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)

int64_t* rcx_26 = arg2[1]
int32_t result_3 = 0
int32_t* rdx_20 = *rcx_26
int32_t result

if (&rdx_20[1] u> rcx_26[1])
    int32_t* rdx_21 = &result_3
    
    if ((*(arg2 + 0x29) & 0x20) != 0)
        result = sub_140b54070(arg2, rdx_21, zmm1_1)
    else
        result = (*(*arg2 + 0x150))(arg2, rdx_21, 4)
else
    result = *rdx_20
    result_3 = result
    *rcx_26 += 4

int32_t rdi_3 = 0

if (result_3 s> 0)
    do
        if (r13 s>= 4)
            int64_t* rcx_28 = arg2[1]
            int64_t rax_31 = *rcx_28 + 4
            
            if (rax_31 u> rcx_28[1])
                int32_t result_4
                result_4.b = arg2[0xe] != 0
                result_1 = result_4
                (*(*arg2 + 0x150))(arg2, &result_1, 4)
            else
                *rcx_28 = rax_31
        
        int32_t var_1e0_1 = 1
        char var_1e8_1 = 0
        int64_t var_1a8_1 = 0
        int32_t var_1a0_1 = 0
        char var_19c_1 = 0
        var_1b8 = 0
        var_1b0.d = 0xffffffff
        sub_140bcfa90(&var_1b8, arg2, arg1, zmm1_1, rdi_3.b, var_1e8_1)
        result, zmm1_1 = sub_140bc0410(&var_1b8)
        rdi_3 += 1
    while (rdi_3 s< result_3)

if (r13.d s>= 3)
    int64_t* rcx_32 = arg2[1]
    result_2 = 0
    int32_t* rdx_24 = *rcx_32
    
    if (&rdx_24[1] u> rcx_32[1])
        int32_t* rdx_25 = &result_2
        
        if ((*(arg2 + 0x29) & 0x20) != 0)
            result = sub_140b54070(arg2, rdx_25, zmm1_1)
        else
            result = (*(*arg2 + 0x150))(arg2, rdx_25, 4)
    else
        result = *rdx_24
        result_2 = result
        *rcx_32 += 4
    
    int32_t rdi_4 = 0
    
    if (result_2 s> 0)
        do
            int64_t* rcx_34 = arg2[1]
            result_1 = 0
            int32_t* rdx_26 = *rcx_34
            
            if (&rdx_26[1] u> rcx_34[1])
                int32_t* rdx_27 = &result_1
                
                if ((*(arg2 + 0x29) & 0x20) != 0)
                    result = sub_140b54070(arg2, rdx_27, zmm1_1)
                else
                    result = (*(*arg2 + 0x150))(arg2, rdx_27, 4)
            else
                result = *rdx_26
                result_1 = result
                *rcx_34 += 4
            
            rdi_4 += 1
        while (rdi_4 s< result_2)

__security_check_cookie(rax_1 ^ &var_208)
return result
