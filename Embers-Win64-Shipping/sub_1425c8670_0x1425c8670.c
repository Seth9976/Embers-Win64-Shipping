// 函数: sub_1425c8670
// 地址: 0x1425c8670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
int64_t* rsi = arg3
void* var_140 = arg2
void* r14 = arg4
int128_t* var_178 = nullptr
int64_t var_170 = 1
int64_t var_138 = 0
char var_168 = 0
int128_t var_160 = zx.o(0)
int64_t result_1 = 0
int64_t result = sub_1407c3b60(&var_178)
int128_t* r9 = var_178
uint64_t result_8 = zx.q(var_170.d)
*r9 = var_168.o
r9[1] = var_160
r9[2] = result_1.o
r9[3].q = var_138

while (result_8.d s> 0)
    int32_t result_3 = (result_8 - 1).d
    int32_t rbx = result_8.d - result_3
    int128_t* rcx_1 = sx.q(result_3) * 0x38
    var_168.o = *(rcx_1 + r9)
    var_160 = *(rcx_1 + r9 + 0x10)
    result_1.o = *(rcx_1 + r9 + 0x20)
    uint64_t var_138_1 = *(rcx_1 + r9 + 0x30)
    
    if (rbx != 1)
        memmove(sx.q(result_3) * 0x38 + r9, sx.q(result_3 + 1) * 0x38 + r9, (rbx - 1) * 0x38)
    
    result_8 = sx.q(result_3)
    int64_t rdx_3
    
    if (result_1 != 0)
        rdx_3 = *(*(result_1 + 8) + 0x10)
    
    void* var_110
    int32_t var_100
    void* i_2
    uint128_t var_c0
    
    if (result_1 == 0 || ((rdx_3 u>> 0x14).b & 1) != 0)
        if (var_168 != 0)
            result = (*(*rsi + 0x18))(rsi, &var_168)
            r9 = var_178
        else
            int64_t r13_4 = arg1
            
            if (result_1 != 0)
                uint128_t zmm0 = *(result_1 + 0x10)
                var_c0 = zmm0
                
                if (_mm_bsrli_si128(zmm0, 8).b != 0)
                    r13_4 += sx.q(*(result_1 + 0x4c))
                else
                    void* rdi_7 = var_c0.q
                    
                    if (rdi_7 == 0)
                        r13_4 += sx.q(*(result_1 + 0x4c))
                    else
                        int64_t rdi_8 = *(rdi_7 + 8)
                        sub_140cea1e0()
                        
                        if (rdi_8 != &data_143e1b870)
                            r13_4 = arg1 + sx.q(*(result_1 + 0x4c))
            
            (*(*rsi + 8))(rsi, &var_168)
            uint64_t result_12 = result_8
            var_168 = 1
            result_8 = zx.q(result_8.d + 1)
            var_170.d = result_8.d
            
            if (result_8.d s> var_170:4.d)
                sub_1407c3b60(&var_178)
                result_8 = zx.q(var_170.d)
            
            r9 = var_178
            uint128_t* rcx_42 = result_12 * 0x38
            *(rcx_42 + r9) = var_168.o
            *(rcx_42 + r9 + 0x10) = var_160
            *(rcx_42 + r9 + 0x20) = result_1.o
            *(rcx_42 + r9 + 0x30) = var_138_1
            void* rax_45
            
            if (result_1 == 0)
                rax_45 = var_140
            else
                int64_t rcx_43 = *(*(result_1 + 8) + 0x10)
                
                if (((rcx_43 u>> 0x14).b & 1) != 0)
                    rax_45 = *(result_1 + 0x78)
                    var_140 = rax_45
                else if (((rcx_43 u>> 0x1a).b & 1) == 0)
                    rax_45 = var_140
                else
                    rax_45 = *(result_1 + 0x78)
                    var_140 = rax_45
            
            int64_t r15_3 = 0
            int32_t r12_5 = 0
            int32_t rsi_6 = 0
            int64_t var_d0 = 0
            int32_t var_c4_1 = 0
            
            if (rax_45 != 0)
                var_110 = rax_45
                void* i_3 = *(rax_45 + 0x50)
                var_100 = 0xffffffff
                int16_t var_fc_1 = 0x101
                char var_fa_1 = 0
                sub_1406328d0(&var_110)
                void* i_4
                
                for (void* i = i_3; i != 0; i = i_4)
                    char rax_50
                    
                    if (*(r14 + 0x10) != 0)
                        void* rcx_46 = r14 + 0x30
                        var_c0.q = result_1
                        void* rax_47 = *(r14 + 0x20)
                        i_2 = i
                        
                        if (rax_47 != 0)
                            rcx_46 = rax_47
                        
                        rax_50 = (*(r14 + 0x10))((*(*rcx_46 + 8))(rcx_46), &i_2, &var_c0)
                    
                    if (*(r14 + 0x10) == 0 || rax_50 != 0)
                        int64_t rax_51 = *(i + 8)
                        int64_t r14_4 = sx.q(rsi_6)
                        char var_b0_1 = 0
                        uint128_t var_a8_1 = zx.o(0)
                        int64_t var_98_1 = r13_4
                        rsi_6 = (r14_4 + 1).d
                        int64_t var_88_1 = 0
                        
                        if (rsi_6 s> r12_5)
                            sub_1407c3b60(&var_d0)
                            r12_5 = var_c4_1
                            r15_3 = var_d0
                        
                        uint128_t* rcx_49 = r14_4 * 0x38
                        r14 = arg4
                        *(rcx_49 + r15_3) = var_b0_1.o
                        *(rcx_49 + r15_3 + 0x10) = var_a8_1
                        *(rcx_49 + r15_3 + 0x20) = i.o
                        *(rcx_49 + r15_3 + 0x30) = rax_51
                    
                    i_4 = *(i + 0x20)
                    sub_1406328d0(&var_110)
                
                r9 = var_178
            
            result = zx.q(rsi_6 - 1)
            int64_t r14_5 = sx.q(result.d)
            
            if (result.d s>= 0)
                void* rdi_10 = r14_5 * 0x38 + r15_3
                int64_t temp4_1
                
                do
                    int64_t rsi_7 = sx.q(result_8.d)
                    result_8 = zx.q((rsi_7 + 1).d)
                    var_170.d = result_8.d
                    
                    if (result_8.d s> var_170:4.d)
                        result = sub_1407c3b60(&var_178)
                        r9 = var_178
                        result_8 = zx.q(var_170.d)
                    
                    int128_t* rcx_52 = rsi_7 * 0x38
                    *(rcx_52 + r9) = *rdi_10
                    *(rcx_52 + r9 + 0x10) = *(rdi_10 + 0x10)
                    *(rcx_52 + r9 + 0x20) = *(rdi_10 + 0x20)
                    uint128_t zmm1 = zx.o(*(rdi_10 + 0x30))
                    rdi_10 -= 0x38
                    temp4_1 = r14_5
                    r14_5 -= 1
                    *(rcx_52 + r9 + 0x30) = zmm1.q
                while (temp4_1 - 1 s>= 0)
            
            if (r15_3 != 0)
                result = sub_140a74f90(r15_3)
                r9 = var_178
            
            rsi = arg3
            r14 = arg4
    else
        void* var_108
        int64_t rax_11
        char* rdx_4
        
        if (((rdx_3 u>> 0x15).b & 1) == 0)
            rax_11 = *rsi
            int64_t result_9
            
            if (((rdx_3 u>> 0x2e).b & 1) == 0)
                rdx_4 = &var_168
                
                if (((rdx_3 u>> 0x2f).b & 1) != 0)
                    if (var_168 != 0)
                        result = (*(rax_11 + 0x10))(rsi, rdx_4)
                        r9 = var_178
                    else
                        (*rax_11)(rsi, rdx_4)
                        uint64_t result_11 = result_8
                        var_168 = 1
                        result_8 = zx.q(result_8.d + 1)
                        var_170.d = result_8.d
                        
                        if (result_8.d s> var_170:4.d)
                            sub_1407c3b60(&var_178)
                            result_8 = zx.q(var_170.d)
                        
                        r9 = var_178
                        int128_t* rcx_32 = result_11 * 0x38
                        *(rcx_32 + r9) = var_168.o
                        *(rcx_32 + r9 + 0x10) = var_160
                        *(rcx_32 + r9 + 0x20) = result_1.o
                        *(rcx_32 + r9 + 0x30) = var_138_1
                        result = result_1
                        void* rsi_5 = sx.q(*(result + 0x4c)) + arg1
                        int32_t rdx_12 = *(result + 0x90)
                        void* r13_3 = *(result + 0x78)
                        int32_t rdi_5 = *(rsi_5 + 8)
                        int32_t rdi_6 = rdi_5 - 1
                        var_100.o = *(result + 0x80)
                        
                        if (rdi_5 - 1 s< 0)
                            rsi = arg3
                        else
                            int32_t r12_4 = rdx_12 * rdi_6
                            int32_t r14_3 = rol.d(1, rdi_6.b)
                            int32_t rdx_13 = neg.d(rdx_12)
                            result_9.d = rdx_13
                            int32_t temp5_1
                            
                            do
                                void* rcx_34
                                
                                if (rdi_6 s>= 0 && rdi_6 s< *(rsi_5 + 0x28))
                                    void* rax_30 = *(rsi_5 + 0x20)
                                    rcx_34 = rsi_5 + 0x10
                                    
                                    if (rax_30 != 0)
                                        rcx_34 = rax_30
                                
                                if (rdi_6 s< 0 || rdi_6 s>= *(rsi_5 + 0x28)
                                        || (*(rcx_34 + (zx.q(rdi_6) u>> 5 << 2)) & r14_3) == 0)
                                    result.b = 0
                                else
                                    result.b = 1
                                
                                if (result.b != 0)
                                    var_108.o = zx.o(0)
                                    var_110.b = 0
                                    int64_t rax_33
                                    
                                    if (*(rsi_5 + 8) != *(rsi_5 + 0x34))
                                        rax_33 = sx.q(r12_4) + *rsi_5
                                    else
                                        rax_33 = 0
                                    
                                    int64_t result_5 = sx.q(result_8.d)
                                    int64_t var_f8_3 = rax_33
                                    int64_t rax_35 = *(r13_3 + 8)
                                    result_8 = zx.q((result_5 + 1).d)
                                    int64_t var_e8_3 = 0
                                    var_170.d = result_8.d
                                    
                                    if (result_8.d s> var_170:4.d)
                                        sub_1407c3b60(&var_178)
                                        r9 = var_178
                                        rdx_13 = result_9.d
                                        result_8 = zx.q(var_170.d)
                                    
                                    result = result_5
                                    int128_t* rcx_36 = result_5 * 0x38
                                    *(rcx_36 + r9) = var_110.o
                                    *(rcx_36 + r9 + 0x10) = var_100.o
                                    *(rcx_36 + r9 + 0x20) = r13_3.o
                                    *(rcx_36 + r9 + 0x30) = rax_35
                                
                                r12_4 += rdx_13
                                r14_3 = ror.d(r14_3, 1)
                                temp5_1 = rdi_6
                                rdi_6 -= 1
                            while (temp5_1 - 1 s>= 0)
                            rsi = arg3
                            r14 = arg4
                else if (*(result_1 + 0x38) s<= 1)
                    result = (*(rax_11 + 0x28))(rsi, rdx_4, 0)
                    r9 = var_178
                else
                    (*rax_11)(rsi, rdx_4)
                    int32_t i_1 = 0
                    
                    if (*(result_1 + 0x38) s> 0)
                        do
                            (*(*rsi + 0x28))(rsi, &var_168, zx.q(i_1))
                            i_1 += 1
                        while (i_1 s< *(result_1 + 0x38))
                    
                    result = (*(*rsi + 0x10))(rsi, &var_168)
                    r9 = var_178
            else
                char* rdx_7 = &var_168
                
                if (var_168 != 0)
                    result = (*(rax_11 + 0x18))(rsi, rdx_7)
                    r9 = var_178
                else
                    result = (*(rax_11 + 8))(rsi, rdx_7)
                    uint64_t result_10 = result_8
                    var_168 = 1
                    result_8 = zx.q(result_8.d + 1)
                    var_170.d = result_8.d
                    
                    if (result_8.d s> var_170:4.d)
                        result = sub_1407c3b60(&var_178)
                        result_8 = zx.q(var_170.d)
                    
                    r9 = var_178
                    int128_t* rcx_19 = result_10 * 0x38
                    *(rcx_19 + r9) = var_168.o
                    *(rcx_19 + r9 + 0x10) = var_160
                    *(rcx_19 + r9 + 0x20) = result_1.o
                    *(rcx_19 + r9 + 0x30) = var_138_1
                    int64_t result_7 = result_1
                    result_9 = result_7
                    
                    if (result_7 != 0)
                        result = *(result_7 + 8)
                    
                    if (result_7 == 0 || ((*(result + 0x10) u>> 0x2e).b & 1) == 0)
                        result_7 = 0
                        result_9 = 0
                    
                    void** rsi_3 = sx.q(*(result_7 + 0x4c)) + arg1
                    void* i_5 = *(result_7 + 0x80)
                    char r13_2 = (*(result_7 + 0xa0)).b
                    int32_t rdi_3 = rsi_3[1].d
                    int32_t rdi_4 = rdi_3 - 1
                    uint64_t var_50_1 = *(result_7 + 0x98)
                    i_2 = i_5
                    
                    if (rdi_3 - 1 s< 0)
                        rsi = arg3
                    else
                        int32_t r15_2 = rol.d(1, rdi_4.b)
                        int32_t rcx_23 = var_50_1:4.d
                        r13_2 = not.b(r13_2) & 1
                        int64_t r10_1 = sx.q(neg.d(rcx_23))
                        var_c0.q = r10_1
                        int64_t r12_2 = sx.q(rcx_23 * rdi_4)
                        int32_t temp7_1
                        
                        do
                            void* rcx_25
                            
                            if (r13_2 == 0)
                                if (rdi_4 s>= 0 && rdi_4 s< rsi_3[3].d)
                                    rcx_25 = rsi_3[2]
                                    
                                    if ((rcx_25.b & 1) != 0)
                                        rcx_25 = (rcx_25 s>> 1) + &rsi_3[2]
                                    
                                    goto label_1425c8b0b
                                
                                result.b = 0
                            else if (rdi_4 s< 0 || rdi_4 s>= rsi_3[5].d)
                                result.b = 0
                            else
                                void* rax_22 = rsi_3[4]
                                rcx_25 = &rsi_3[2]
                                
                                if (rax_22 != 0)
                                    rcx_25 = rax_22
                                
                            label_1425c8b0b:
                                int32_t rax_23 = rdi_4
                                
                                if (rdi_4 s< 0)
                                    rax_23 = rdi_4 + 0x1f
                                
                                if ((*(rcx_25 + (sx.q(rax_23 s>> 5) << 2)) & r15_2) == 0)
                                    result.b = 0
                                else
                                    result.b = 1
                            
                            if (result.b != 0)
                                int32_t rax_25 = rsi_3[1].d
                                void* rcx_27
                                
                                if (r13_2 != 0)
                                    if (rax_25 != *(rsi_3 + 0x34))
                                        rcx_27 = *rsi_3 + r12_2
                                    else
                                        rcx_27 = nullptr
                                else if (rax_25 != *(rsi_3 + 0x24))
                                    void* rax_26 = *rsi_3
                                    
                                    if ((rax_26.b & 1) != 0)
                                        rax_26 = (rax_26 s>> 1) + rsi_3
                                    
                                    rcx_27 = rax_26 + r12_2
                                else
                                    rcx_27 = nullptr
                                
                                int64_t result_4 = sx.q(result_8.d)
                                var_100.q = *(result_7 + 0x78)
                                int64_t rax_29 = *(i_5 + 8)
                                var_110.b = 0
                                result_8 = zx.q((result_4 + 1).d)
                                var_108 = rcx_27
                                void* var_f8_2 = rcx_27
                                void* i_6 = i_5
                                int64_t var_e8_2 = 0
                                var_170.d = result_8.d
                                
                                if (result_8.d s> var_170:4.d)
                                    sub_1407c3b60(&var_178)
                                    r9 = var_178
                                    result_7 = result_9
                                    i_5 = i_2
                                    r10_1 = var_c0.q
                                    result_8 = zx.q(var_170.d)
                                
                                result = result_4
                                int128_t* rcx_30 = result_4 * 0x38
                                *(rcx_30 + r9) = var_110.o
                                *(rcx_30 + r9 + 0x10) = var_100.o
                                *(rcx_30 + r9 + 0x20) = i_6.o
                                *(rcx_30 + r9 + 0x30) = rax_29
                            
                            r12_2 += r10_1
                            r15_2 = ror.d(r15_2, 1)
                            temp7_1 = rdi_4
                            rdi_4 -= 1
                        while (temp7_1 - 1 s>= 0)
                        rsi = arg3
                        r14 = arg4
        else
            rdx_4 = &var_168
            rax_11 = *rsi
            
            if (var_168 != 0)
                result = (*(rax_11 + 0x10))(rsi, rdx_4)
                r9 = var_178
            else
                (*rax_11)(rsi, rdx_4)
                result_8 = zx.q(result_3 + 1)
                var_168 = 1
                var_170.d = result_8.d
                
                if (result_8.d s> var_170:4.d)
                    sub_1407c3b60(&var_178)
                    result_8 = zx.q(var_170.d)
                
                r9 = var_178
                result = sx.q(result_3)
                int128_t* rcx_7 = result * 0x38
                *(rcx_7 + r9) = var_168.o
                *(rcx_7 + r9 + 0x10) = var_160
                *(rcx_7 + r9 + 0x20) = result_1.o
                *(rcx_7 + r9 + 0x30) = var_138_1
                int64_t result_6 = result_1
                
                if (result_6 != 0)
                    result = *(result_6 + 8)
                
                if (result_6 == 0 || ((zx.q(*(result + 0x10)) u>> 0x15).b & 1) == 0)
                    result_6 = nullptr
                
                void** rdi_2 = sx.q(*(result_6 + 0x4c)) + arg1
                void* r13_1 = *(result_6 + 0x78)
                char r12_1 = not.b((*(result_6 + 0x80)).b) & 1
                int32_t r14_1 = rdi_2[1].d
                int32_t r14_2 = r14_1 - 1
                int32_t rcx_10 = *(r13_1 + 0x3c)
                
                if (r14_1 - 1 s< 0)
                    r14 = arg4
                else
                    int64_t r15_1 = sx.q(rcx_10 * r14_2)
                    int32_t temp6_1
                    
                    do
                        var_108.o = zx.o(0)
                        var_110.b = 0
                        void* rax_15
                        
                        if (rdi_2[1].d != 0)
                            void* rax_16 = *rdi_2
                            
                            if (r12_1 == 0 && (rax_16.b & 1) != 0)
                                rax_16 = (rax_16 s>> 1) + rdi_2
                            
                            rax_15 = rax_16 + r15_1
                        else
                            rax_15 = nullptr
                        
                        int64_t rsi_1 = sx.q(result_8.d)
                        void* var_f8_1 = rax_15
                        result = *(r13_1 + 8)
                        result_8 = zx.q((rsi_1 + 1).d)
                        int64_t var_e8_1 = 0
                        int64_t result_2 = result
                        var_170.d = result_8.d
                        
                        if (result_8.d s> var_170:4.d)
                            result = sub_1407c3b60(&var_178)
                            r9 = var_178
                            result_8 = zx.q(var_170.d)
                        
                        r15_1 += sx.q(neg.d(rcx_10))
                        int128_t* rcx_13 = rsi_1 * 0x38
                        temp6_1 = r14_2
                        r14_2 -= 1
                        *(rcx_13 + r9) = var_110.o
                        *(rcx_13 + r9 + 0x10) = var_100.o
                        *(rcx_13 + r9 + 0x20) = r13_1.o
                        *(rcx_13 + r9 + 0x30) = result_2
                    while (temp6_1 - 1 s>= 0)
                    rsi = arg3
                    r14 = arg4

if (r9 != 0)
    result = sub_140a74f90(r9)

__security_check_cookie(rax_1 ^ &var_198)
return result
