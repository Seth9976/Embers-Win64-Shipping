// 函数: sub_141b155d0
// 地址: 0x141b155d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_158
int64_t rax_1 = __security_cookie ^ &var_158
int32_t i = 0
uint64_t rdx = zx.q(data_14401b1a0)
TEB* gsbase
void* ThreadLocalStoragePointer = gsbase->ThreadLocalStoragePointer
void* r13 = arg1
void* var_100 = arg4
void* rbx = *(ThreadLocalStoragePointer + (rdx << 3))
float var_128
int64_t* var_f0

if (data_143f2c670 s> *(rbx + 0x14))
    _Init_thread_header(&data_143f2c670)
    
    if (data_143f2c670 == 0xffffffff)
        if (data_143f2c610 s> *(rbx + 0x14))
            _Init_thread_header(&data_143f2c610)
            
            if (data_143f2c610 == 0xffffffff)
                var_f0 = nullptr
                int64_t var_e8_1 = 0
                int32_t* rax_65 = sub_141a387d0(&var_128)
                int128_t zmm0_5 = var_f0.o
                data_143f2c5f8.d = *rax_65
                data_143f2c5f8:4.o = zmm0_5
                data_143f2c608:4.d = 0
                _Init_thread_footer(&data_143f2c610)
        
        int64_t zmm1 = data_143f2c608
        data_143f2c658.o = data_143f2c5f8
        data_143f2c668 = zmm1
        _Init_thread_footer(&data_143f2c670)

int64_t* rdi_1 = *(arg4 + 0x10)
void* const r8_10

if (rdi_1[1].d == *(rdi_1 + 0x34))
label_141b15789:
    r8_10 = nullptr
else
    int32_t rbx_1 = data_143f2c658
    int32_t r8_2 = (sub_1405be5b0(&data_143f2c65c) - rbx_1) ^ rbx_1 u>> 0xd
    int32_t rdx_3 = (0x9e3779b9 - r8_2 - rbx_1) ^ r8_2 << 8
    void* rcx_4 = rdi_1[8]
    int32_t rbx_4 = (rbx_1 - rdx_3 - r8_2) ^ rdx_3 u>> 0xd
    int32_t r8_5 = (r8_2 - rdx_3 - rbx_4) ^ rbx_4 u>> 0xc
    int32_t rdx_6 = (rdx_3 - r8_5 - rbx_4) ^ r8_5 << 0x10
    int32_t rbx_7 = (rbx_4 - rdx_6 - r8_5) ^ rdx_6 u>> 5
    int32_t r8_8 = (r8_5 - rdx_6 - rbx_7) ^ rbx_7 u>> 3
    int32_t rdx_9 = (rdx_6 - r8_8 - rbx_7) ^ r8_8 << 0xa
    void* r8_9 = &rdi_1[7]
    
    if (rcx_4 != 0)
        r8_9 = rcx_4
    
    int32_t rax_19 =
        *(r8_9 + (((sx.q(rdi_1[9].d) - 1) & sx.q((rbx_7 - rdx_9 - r8_8) ^ rdx_9 u>> 0xf)) << 2))
    
    if (rax_19 == 0xffffffff)
    label_141b15789_1:
        r8_10 = nullptr
    else
        int64_t r10_1 = *rdi_1
        
        while (true)
            int64_t rdx_14 = sx.q(rax_19) * 5
            r8_10 = r10_1 + (rdx_14 << 3)
            
            if (*(r10_1 + (rdx_14 << 3)) == data_143f2c658 && *(r8_10 + 0x14) == data_143f2c668:4.d
                    && ((*(r8_10 + 8) ^ data_143f2c660) | (*(r8_10 + 0xc) ^ data_143f2c664)
                    | (*(r8_10 + 0x10) ^ data_143f2c668.d) | (*(r8_10 + 4) ^ data_143f2c65c)) == 0)
                break
            
            rax_19 = *(r8_10 + 0x20)
            
            if (rax_19 == 0xffffffff)
                goto label_141b15789_2
        
        if (rax_19 == 0xffffffff)
        label_141b15789_2:
            r8_10 = nullptr

void* rax_20 = r8_10 + 0x18

if (r8_10 == 0)
    rax_20 = nullptr

void* const rbx_12

if (rax_20 == 0)
    rbx_12 = nullptr
else
    rbx_12 = *rax_20

float rax_21 = *(arg3 + 0x24)
void** r12_2 = 0x10
int64_t r8_11

if (rax_21 == 0x80000000)
    int64_t* r8_12 = 0x10
    
    if (*(arg3 + 0x20) != 0)
        r8_12 = 4
    
    r8_11 = *(r8_12 + arg3)
else
    var_128 = rax_21
    int32_t var_124_1 = 0
    r8_11 = var_128.q

uint128_t var_a0
sub_141b19c60(r13, &var_a0, r8_11, rbx_12)
int64_t var_118
int32_t var_7c

if (var_7c != 0)
    if (data_143f2c638 s> *(rbx + 0x14))
        _Init_thread_header(&data_143f2c638)
        
        if (data_143f2c638 == 0xffffffff)
            int64_t rax_66 = data_143f2c630
            
            if (rax_66 == 0)
                rax_66 = sub_141a54240(&data_143f2c630, 0)
            
            data_143f2c628 = rax_66
            _Init_thread_footer(&data_143f2c638)
    
    int64_t rbx_13 = data_143f2c628
    void* r14_2 = arg5
    
    if (sub_141aef6b0(r14_2 + 0x60, rbx_13) == 0)
        void*** rax_25 = sub_141af2a00()
        void** r14_3 = &rax_25[3]
        
        if (rax_25 == -0x10)
            r14_3 = nullptr
        
        if (r14_3 != 0)
            void* rax_26
            
            if (*r14_3 != 0)
                rax_26 = r14_3[1]
            
            if (*r14_3 == 0 || rax_26 == 0 || *(rax_26 + 8) s<= 0)
                if (rax_25 != 0)
                    rax_25[1].d += 1
                
                *r14_3 = &rax_25[2]
                int64_t* rcx_14 = r14_3[1]
                
                if (rax_25 != rcx_14)
                    if (rax_25 != 0)
                        *(rax_25 + 0xc) += 1
                        rcx_14 = r14_3[1]
                    
                    if (rcx_14 != 0)
                        int32_t temp8_1 = *(rcx_14 + 0xc)
                        *(rcx_14 + 0xc) -= 1
                        
                        if (temp8_1 == 1)
                            (*(*rcx_14 + 8))(rcx_14, 1)
                    
                    r14_3[1] = rax_25
                
                if (rax_25 != 0)
                    rax_25[1].d -= 1
                    
                    if (rax_25[1].d == 1)
                        (**rax_25)(rax_25)
                        int32_t temp7_1 = *(rax_25 + 0xc)
                        *(rax_25 + 0xc) -= 1
                        
                        if (temp7_1 == 1)
                            (*rax_25)[1](rax_25, 1)
        
        var_128.q = &rax_25[2]
        
        if (rax_25 != 0)
            rax_25[1].d += 1
        
        var_118 = rbx_13
        sub_1405a72d0(arg5 + 0x60, &var_118, &var_128)
        
        if (rax_25 != 0)
            rax_25[1].d -= 1
            
            if (rax_25[1].d == 1)
                (**rax_25)(rax_25)
                int32_t temp2_1 = *(rax_25 + 0xc)
                *(rax_25 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*rax_25)[1](rax_25, 1)
        
        if (rax_25 != 0)
            rax_25[1].d -= 1
            
            if (rax_25[1].d == 1)
                (**rax_25)(rax_25)
                int32_t temp4_1 = *(rax_25 + 0xc)
                *(rax_25 + 0xc) -= 1
                
                if (temp4_1 == 1)
                    (*rax_25)[1](rax_25, 1)
        
        r14_2 = arg5
        r13 = arg1
    
    float rax_34 = *(arg3 + 0x24)
    int64_t rdx_23
    
    if (rax_34 == 0x80000000)
        int64_t* rdx_24 = 0x10
        
        if (*(arg3 + 0x20) != 0)
            rdx_24 = 4
        
        rdx_23 = *(rdx_24 + arg3)
    else
        var_128 = rax_34
        int32_t var_124_2 = 0
        rdx_23 = var_128.q
    
    float zmm6_1 = sub_141a47d70(r13, rdx_23)
    
    if (((*(r13 + 0x664) u>> 9).b & 1) != 0)
        int32_t rax_37 = *(arg3 + 0x24)
        var_128 = 1f
        int64_t rdx_25
        
        if (rax_37 == 0x80000000)
            int64_t* rdx_26 = 0x10
            
            if (*(arg3 + 0x20) != 0)
                rdx_26 = 4
            
            rdx_25 = *(rdx_26 + arg3)
        else
            var_118.d = rax_37
            var_118:4.d = 0
            rdx_25 = var_118
        
        zmm6_1 = sub_141a467f0(r13 + 0x5c0, rdx_25, &var_128) * var_128
    
    char rdi_4 = *(r13 + 0x660)
    char var_c8
    char var_c8_1 = var_c8 & 0xfc
    int64_t* rax_38 = sub_140a82f30(0x30, 8)
    uint128_t zmm0_2 = var_a0
    var_f0 = rax_38
    char rcx_25 = var_c8_1 | 1
    int64_t* rcx_26 = &var_f0
    
    if ((rcx_25 & 2) == 0)
        rcx_26 = rax_38
    
    *(rcx_26 + 8) = zmm0_2
    *rcx_26 = &data_14305d9d8
    int128_t var_90
    *(rcx_26 + 0x18) = var_90
    int64_t var_80
    rcx_26[5] = var_80
    float var_ac_1 = zmm6_1
    uint128_t var_c0_1 = *(r14_2 + 0x124)
    char var_a8_1 = rdi_4
    int32_t var_b0_1 = *(r14_2 + 0x188)
    sub_141aebb80(sub_1405a8fd0(r14_2 + 0xb0, sub_1405be5b0(r14_2 + 0x110), r14_2 + 0x110), rbx_13, 
        &var_f0)
    
    if ((rcx_25 & 1) != 0)
        int64_t* rcx_30 = &var_f0
        
        if ((rcx_25 & 2) == 0)
            rcx_30 = var_f0
        
        (**rcx_30)(rcx_30, 0)
        
        if ((rcx_25 & 2) == 0)
            sub_140a74f90(var_f0)

char result = sub_141a58000(var_100, arg3)

if (result != 0)
    sub_141a52af0(&var_118, arg3)
    result = sub_141b19c60(r13, &var_f0, var_118, rbx_12)
    int32_t var_cc
    int32_t r14_5 = var_cc
    
    if (r14_5 != 0)
        if (data_143f2c650 s> *(rbx + 0x14))
            _Init_thread_header(&data_143f2c650)
            
            if (data_143f2c650 == 0xffffffff)
                int64_t rax_63 = data_143f2c648
                
                if (rax_63 == 0)
                    rax_63 = sub_141a54240(&data_143f2c648, 0)
                
                data_143f2c640 = rax_63
                _Init_thread_footer(&data_143f2c650)
        
        int64_t rbx_14 = data_143f2c640
        
        if (sub_141aef6b0(arg5 + 0x60, rbx_14) == 0)
            void*** rax_47 = sub_141af35b0()
            void** r12_3 = &rax_47[3]
            
            if (rax_47 == -0x10)
                r12_3 = nullptr
            
            if (r12_3 != 0)
                void* rax_48
                
                if (*r12_3 != 0)
                    rax_48 = r12_3[1]
                
                if (*r12_3 == 0 || rax_48 == 0 || *(rax_48 + 8) s<= 0)
                    if (rax_47 != 0)
                        rax_47[1].d += 1
                    
                    *r12_3 = &rax_47[2]
                    int64_t* rcx_37 = r12_3[1]
                    
                    if (rax_47 != rcx_37)
                        if (rax_47 != 0)
                            *(rax_47 + 0xc) += 1
                            rcx_37 = r12_3[1]
                        
                        if (rcx_37 != 0)
                            int32_t temp11_1 = *(rcx_37 + 0xc)
                            *(rcx_37 + 0xc) -= 1
                            
                            if (temp11_1 == 1)
                                (*(*rcx_37 + 8))(rcx_37, 1)
                        
                        r12_3[1] = rax_47
                    
                    if (rax_47 != 0)
                        rax_47[1].d -= 1
                        
                        if (rax_47[1].d == 1)
                            (**rax_47)(rax_47)
                            int32_t temp10_1 = *(rax_47 + 0xc)
                            *(rax_47 + 0xc) -= 1
                            
                            if (temp10_1 == 1)
                                (*rax_47)[1](rax_47, 1)
            
            var_100 = &rax_47[2]
            void*** var_f8_1 = rax_47
            
            if (rax_47 != 0)
                rax_47[1].d += 1
            
            sub_141b0f5f0(arg5 + 0x60, rbx_14, &var_100)
            
            if (rax_47 != 0)
                rax_47[1].d -= 1
                
                if (rax_47[1].d == 1)
                    (**rax_47)(rax_47)
                    int32_t temp6_1 = *(rax_47 + 0xc)
                    *(rax_47 + 0xc) -= 1
                    
                    if (temp6_1 == 1)
                        (*rax_47)[1](rax_47, 1)
            
            r13 = arg1
            r12_2 = 0x10
        
        float zmm6_2 = sub_141a47d70(r13, var_118)
        
        if (((*(r13 + 0x664) u>> 9).b & 1) != 0)
            int32_t rax_56 = *(arg3 + 0x24)
            var_128 = 1f
            void* rdx_35
            
            if (rax_56 == 0x80000000)
                if (*(arg3 + 0x20) != 0)
                    r12_2 = 4
                
                rdx_35 = *(r12_2 + arg3)
            else
                void* var_110
                var_110.d = rax_56
                var_110:4.d = 0
                rdx_35 = var_110
            
            zmm6_2 = sub_141a467f0(r13 + 0x5c0, rdx_35, &var_128) * var_128
        
        int32_t r8_20
        
        do
            r8_20 = 1 << i.b
            
            if ((r8_20 & r14_5) != 0 && (r8_20 & var_7c) != 0)
                uint64_t rax_57 = zx.q(i.b)
                float zmm0_3 = *(&var_a0 + (rax_57 << 2))
                *(&var_f0 + (rax_57 << 2)) = zmm0_3 + zmm0_3 f- *(&var_f0 + (rax_57 << 2))
                r14_5 = var_cc | r8_20
                var_cc = r14_5
            
            i += 1
        while (i s< 9)
        
        char rdi_6 = *(r13 + 0x660)
        char var_78
        char var_78_1 = var_78 & 0xfc
        uint128_t* rax_58 = sub_140a82f30(0x30, 8, r8_20)
        char result_1 = var_78_1 | 1
        var_a0.q = rax_58
        uint128_t* rcx_47 = &var_a0
        
        if ((result_1 & 2) == 0)
            rcx_47 = rax_58
        
        *(rcx_47 + 8) = var_f0.o
        *rcx_47 = &data_14305d9d8
        int128_t var_e0
        *(rcx_47 + 0x18) = var_e0
        int64_t var_d0
        *(rcx_47 + 0x28) = var_d0
        float var_5c_1 = zmm6_2
        uint128_t var_70_1 = *(arg5 + 0x124)
        char var_58_1 = rdi_6
        int32_t var_60_1 = *(arg5 + 0x188)
        sub_141aebb80(sub_1405a8fd0(arg5 + 0xb0, sub_1405be5b0(arg5 + 0x110), arg5 + 0x110), 
            rbx_14, &var_a0)
        result = result_1
        
        if ((result & 1) != 0)
            uint128_t* rcx_51 = &var_a0
            
            if ((result & 2) == 0)
                rcx_51 = var_a0.q
            
            char var_78_3 = result & 0xfe
            result = (**rcx_51)(rcx_51, 0)
            
            if ((var_78_3 & 2) == 0)
                result = sub_140a74f90(var_a0.q)

__security_check_cookie(rax_1 ^ &var_158)
return result
