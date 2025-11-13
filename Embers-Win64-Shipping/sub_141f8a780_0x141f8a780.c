// 函数: sub_141f8a780
// 地址: 0x141f8a780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x28)

if (((*(r8 + 0xa4) u>> 1).b & 1) == 0)
    return 0

void* r12 = *(r8 + 0x68)
void* r15 = *(arg2 + 0x10)
int64_t* result_2 = nullptr
int64_t var_70 = 0
sub_1405947f0(&result_2, 0xf)
int32_t rsi = var_70:4.d
int32_t rbx = var_70.d + 0xf
var_70.d = rbx

if (rbx s> rsi)
    sub_140594770(&result_2)
    rsi = var_70:4.d
    rbx = var_70.d

int64_t* result_8 = result_2
UnDecorator::getReferenceType(result_8, u"_ClassNetCache", 0x1e)
int64_t arg_8 = *(r15 + 0x18)
int64_t* result_6
sub_140b63b70(&arg_8, &result_6)
int64_t* result_5
int32_t var_60
int32_t var_40

if (var_40 s> 1)
    int32_t rbx_1
    
    if (rbx == 0)
        rbx_1 = 0
    else
        rbx_1 = rbx - 1
    
    int32_t rdx_2
    
    if (var_40 == 0)
        rdx_2 = var_40 + 1
    
    if (var_40 != 0 || rbx_1 == 0)
        rdx_2 = 0
    
    result_2 = result_6
    int32_t rdx_4 = rdx_2 + var_40 + rbx_1
    result_6 = nullptr
    var_70.d = var_40
    int32_t var_3c
    var_70:4.d = var_3c
    var_40.q = 0
    
    if (rdx_4 s> var_3c)
        sub_1405947f0(&result_2, rdx_4)
    
    sub_140a20ba0(&result_2, result_8, rbx_1)
    result_5 = result_2
    var_60 = var_70.d
    int32_t var_5c_1 = var_70:4.d
else
    result_5 = result_8
    result_8 = nullptr
    var_60 = rbx
    int32_t var_5c = rsi

int64_t* result_10 = result_6

if (result_10 != 0)
    sub_140a74f90(result_10)

if (result_8 != 0)
    sub_140a74f90(result_8)

int64_t* result_1
sub_142168720(r12, &result_1, &result_5)
int64_t* result = result_1
void*** var_50

if (result == 0)
    int32_t* i = sub_140bdcf70(*(*(*(arg1 + 0x28) + 0x58) + 0x160), r15)
    int64_t* result_9 = j_sub_140a82f30(0x30)
    int64_t* result_7 = result_9
    
    if (result_9 == 0)
        result_7 = nullptr
    else
        __builtin_memset(result_9, 0, 0x14)
        result_9[3] = 0
        result_9[4] = 0
        result_9[5].b = 1
    
    result_2 = result_7
    void*** rax_11 = j_sub_140a82f30(0x18)
    
    if (rax_11 == 0)
        rax_11 = nullptr
    else
        rax_11[1].d = 1
        *rax_11 = &data_143214be8
        *(rax_11 + 0xc) = 1
        rax_11[2] = result_7
    
    void*** rbx_2 = rax_11
    int64_t* rsi_1 = var_50
    result_1 = result_2
    result_2 = nullptr
    
    if (rbx_2 == rsi_1)
    label_141f8a9d6:
        
        if (rbx_2 != 0)
            rbx_2[1].d -= 1
            
            if (rbx_2[1].d == 1)
                (**rbx_2)(rbx_2)
                int32_t temp4_1 = *(rbx_2 + 0xc)
                *(rbx_2 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rbx_2)[1](rbx_2, 1)
    else
        void*** var_70_2 = nullptr
        var_50 = rbx_2
        
        if (rsi_1 != 0)
            rsi_1[1].d -= 1
            
            if (rsi_1[1].d == 1)
                (**rsi_1)(rsi_1)
                int32_t temp5_1 = *(rsi_1 + 0xc)
                *(rsi_1 + 0xc) -= 1
                
                if (temp5_1 == 1)
                    (*(*rsi_1 + 8))(rsi_1, 1)
            
            rbx_2 = var_70_2
            goto label_141f8a9d6
    
    int64_t* result_3 = result_1
    
    if (result_3 != &result_5)
        int64_t* result_13 = result_5
        int32_t r8_3 = *(result_3 + 0xc)
        result_3[1].d = var_60
        
        if (var_60 != 0 || r8_3 != 0)
            sub_1405a4c70(result_3, var_60, r8_3)
            memcpy(*result_3, result_13, var_60 * 2)
        else
            *(result_3 + 0xc) = 0
    
    int32_t rsi_3 = 0
    
    for (; i != 0; i = *(i + 8))
        int32_t j = 0
        
        if (i[0xa] s> 0)
            int128_t* r14_1 = nullptr
            
            do
                int64_t r12_1 = *(i + 0x20)
                uint128_t zmm0_1 = *(r14_1 + r12_1)
                result_6.o = zmm0_1
                int64_t* result_12 = result_6
                char rdx_10 = _mm_bsrli_si128(zmm0_1, 8).b
                
                if (rdx_10 != 0)
                label_141f8aac3:
                    
                    if (result_12 != 0)
                        void* rax_20 = sub_140bdfab0()
                        void* rdx_11 = result_12[2]
                        int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                        
                        if (rax_21.d s<= *(rdx_11 + 0x38)
                                && *(*(rdx_11 + 0x30) + (rax_21 << 3)) == rax_20 + 0x30)
                            r12_1 = *(i + 0x20)
                        label_141f8aaf3:
                            int64_t* result_4 = result_1
                            int32_t r13_1 = rsi_3
                            arg_8.d = rsi_3 + 1
                            int64_t* rax_23 = sub_140cbc2c0(&result_6, &result_2)
                            int64_t rsi_5 = sx.q(result_4[4].d)
                            int32_t rcx_23 = (rsi_5 + 1).d
                            result_4[4].d = rcx_23
                            
                            if (rcx_23 s> *(result_4 + 0x24))
                                sub_1405c4d20(&result_4[3])
                            
                            rsi_3 = arg_8.d
                            int32_t* rdx_14 = result_4[3] + rsi_5 * 0x14
                            rdx_14[1] = *(r14_1 + r12_1 + 0x14)
                            *rdx_14 = r13_1
                            *(rdx_14 + 8) = *rax_23
                            rdx_14[4].w = 0x100
                            *(rdx_14 + 0x12) = 0
                else
                    if (result_12 != 0)
                        int64_t rcx_17 = *(result_12[1] + 0x10)
                        
                        if (((rcx_17 u>> 0xf).b & 1) == 0)
                            goto label_141f8aabb
                        
                        uint64_t rax_19
                        
                        if (((rcx_17 u>> 0x14).b & 1) == 0
                                || ((*(result_12[0xf] + 0xb0) u>> 0x14).b & 1) == 0)
                            rax_19.b = 0
                        else
                            rax_19.b = 1
                        
                        if (rax_19.b != 0)
                            goto label_141f8aaf3
                    
                label_141f8aabb:
                    
                    if (rdx_10 != 0)
                        goto label_141f8aac3
                
                j += 1
                r14_1 = &r14_1[2]
            while (j s< i[0xa])
    
    result_6.o = result_1.o
    
    if (var_50 != 0)
        var_50[1].d += 1
    
    sub_14215f5f0(r12, &result_5, &result_6)
    result = result_1

if (var_50 != 0)
    var_50[1].d -= 1
    
    if (var_50[1].d == 1)
        (**var_50)(var_50)
        int32_t temp1_1 = *(var_50 + 0xc)
        *(var_50 + 0xc) -= 1
        
        if (temp1_1 == 1)
            void** r8_8 = *var_50
            r8_8[1](var_50, 1, r8_8)

int64_t* result_11 = result_5

if (result_11 != 0)
    sub_140a74f90(result_11)

return result
