// 函数: sub_142794150
// 地址: 0x142794150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
int64_t rax_1 = __security_cookie ^ &var_198
sub_141ee9830(arg1)
void* rax_3

if (*(arg1 + 0xa8) == 0)
    rax_3 = sub_141ee69e0(arg1)

char rax_5

if (*(arg1 + 0xa8) != 0 || rax_3 != 0)
    void* rax_4 = *(arg1 + 0xa8)
    
    if (rax_4 == 0)
        rax_4 = sub_141ee69e0(arg1)
    
    rax_5 = sub_14243ade0(rax_4)

int64_t r15

if ((*(arg1 + 0xa8) == 0 && rax_3 == 0) || rax_5 == 0)
    r15.b = 0
else
    r15.b = 1

void* rsi = *(arg1 + 0xa0)
int64_t* i_1 = nullptr
int32_t var_128 = 0
void* rax_6 = sub_1425b0750()
void* const r14_1

if (rax_6 == 0)
    r14_1 = nullptr
else
    void* rax_7 = sub_142459c10()
    
    if (rax_7 == 0)
        r14_1 = nullptr
    else
        int64_t rax_8 = sx.q(*(rax_7 + 0x38))
        
        if (rax_8.d s> *(rax_6 + 0x38))
            r14_1 = nullptr
        else
            r14_1 = rax_6
            
            if (*(*(rax_6 + 0x30) + (rax_8 << 3)) != rax_7 + 0x30)
                r14_1 = nullptr

int64_t* r8 = &i_1

if (r14_1 != sub_142459c10())
    sub_1417ea690(rsi, rax_6, r8)
else
    sub_1417ea490(rsi, rax_6, r8)

int64_t** var_140 = nullptr
int32_t var_138 = 0
void* rax_11 = sub_14258d940()
void* r14_2

if (rax_11 == 0)
    r14_2 = nullptr
else
    void* rax_12 = sub_142459c10()
    
    if (rax_12 == 0)
        r14_2 = nullptr
    else
        int64_t rax_13 = sx.q(*(rax_12 + 0x38))
        
        if (rax_13.d s> *(rax_11 + 0x38))
            r14_2 = nullptr
        else
            r14_2 = rax_11
            
            if (*(*(rax_11 + 0x30) + (rax_13 << 3)) != rax_12 + 0x30)
                r14_2 = nullptr

int64_t* r8_1 = &var_140

if (r14_2 != sub_142459c10())
    sub_1417ea690(rsi, rax_11, r8_1)
else
    sub_1417ea490(rsi, rax_11, r8_1)

int32_t var_5c = 0x80
int64_t* var_88 = nullptr
int32_t var_80 = 0
int64_t var_78
__builtin_memset(&var_78, 0, 0x1c)
int32_t var_58 = 0xffffffff
int32_t var_54 = 0
void* var_48 = nullptr
int32_t var_40 = 0

if (r15.b != 0)
    void* rax_16 = *(arg1 + 0xf8)
    int128_t var_168
    void* var_158_1
    int64_t* var_148_1
    void* const r12_2
    
    if (rax_16 == 0)
        int64_t* rcx_10 = *(arg1 + 0xa0)
        (*(*rcx_10 + 0x150))(rcx_10)
        var_168 = zx.o(0)
        var_148_1 = var_168:8.q
        var_158_1 = var_168.q
        r12_2 = nullptr
    else
        void* rcx_7 = *(rax_16 + 0x288)
        int64_t* rax_17 = *(rax_16 + 0x290)
        var_158_1 = rcx_7
        var_148_1 = rax_17
        
        if (rax_17 != 0)
            rax_17[1].d += 1
        
        if (rcx_7 == 0)
            r12_2 = nullptr
        else
            void* rax_18 = sub_142232f80(rcx_7)
            
            if (rax_18 == 0)
                r12_2 = nullptr
            else
                void* rax_19 = sub_142776620()
                void* rcx_8 = *(rax_18 + 0x10)
                int64_t rdx_5 = sx.q(*(rax_19 + 0x38))
                
                if (rdx_5.d s> *(rcx_8 + 0x38)
                        || *(*(rcx_8 + 0x30) + (rdx_5 << 3)) != rax_19 + 0x30)
                    r12_2 = nullptr
                else
                    r12_2 = *(rax_18 + 0x2a0)
    
    int64_t (* var_108)(int64_t* arg1, int64_t* arg2)
    int64_t* var_e0
    int64_t (* var_c8)(int64_t* arg1, float (* arg2)[0x4])
    int128_t var_a0
    
    for (int64_t* i = i_1; i != &i[sx.q(var_128)]; i = &i[1])
        int64_t* rbx_2 = *i
        void* j = rbx_2[0x18]
        
        if (j == 0)
            void* rax_52 = *(arg1 + 0xf0)
            
            if (rax_52 != 0)
                **(arg1 + 0x130) = *(rax_52 + 0x28)
                *(*(arg1 + 0x130) + 8) = *(*(arg1 + 0xf0) + 0x30)
                *(*(arg1 + 0x130) + 0x14) = *(*(arg1 + 0xf0) + 0x3c)
                *(*(arg1 + 0x130) + 0x18) = *(*(arg1 + 0xf0) + 0x40)
            
            int64_t* var_118_1 = rbx_2
            void*** rax_60 = j_sub_140a82f30(0x2a0)
            void*** r15_1
            
            if (rax_60 == 0)
                r15_1 = nullptr
            else
                int64_t var_f8_1 = 0
                var_108 = sub_14278ebc0
                var_e0 = rbx_2
                void** const var_a8_1 = &data_142d42ed8
                void** const var_e8_1 = &data_142da2668
                var_c8 = j_sub_1427890d0
                int64_t var_b8_1 = 0
                var_a0 = arg1.o
                r15_1 = sub_141d2e500(rax_60, arg1, &var_c8, &var_108)
            
            int64_t r14_4 = sx.q(*(arg1 + 0x118))
            int32_t rax_62 = (r14_4 + 1).d
            *(arg1 + 0x118) = rax_62
            
            if (rax_62 s> *(arg1 + 0x11c))
                sub_1405a4d70(arg1 + 0x110)
            
            *(*(arg1 + 0x110) + (r14_4 << 3)) = r15_1
            int64_t r14_5 = sx.q(*(arg1 + 0x128))
            int32_t rax_64 = (r14_5 + 1).d
            *(arg1 + 0x128) = rax_64
            
            if (rax_64 s> *(arg1 + 0x12c))
                sub_1405a4d70(arg1 + 0x120)
            
            *(*(arg1 + 0x120) + (r14_5 << 3)) = rbx_2
            j_sub_14222ba80(var_158_1, rbx_2, r15_1)
            
            if (r12_2 != 0)
                if (*(arg1 + 0xb9) != 0)
                    sub_142775fe0(r12_2, rbx_2, arg1)
                
                int64_t r8_6
                r8_6.b = 1
                int64_t var_170_1 = 0
                void* rax_67 = (*(*rbx_2 + 0x6a8))(rbx_2, 0, r8_6)
                
                if (rax_67 != 0 && (*(rax_67 + 0xc) & 4) != 0)
                    sub_142775fe0(r12_2, rbx_2, rbx_2)
        else
            void* rax_27 = sub_14258d940()
            void* rdx_6 = *(j + 0x10)
            int64_t rax_28 = sx.q(*(rax_27 + 0x38))
            
            if (rax_28.d s<= *(rdx_6 + 0x38) && *(*(rdx_6 + 0x30) + (rax_28 << 3)) == rax_27 + 0x30)
                var_168.q = j
                uint32_t rcx_13 = (j u>> 4).d
                int32_t rdx_8 = (0x9e3779b9 - rcx_13) ^ rcx_13 << 8
                int32_t r9_3 = neg.d(rdx_8 + rcx_13) ^ rdx_8 u>> 0xd
                int32_t rcx_16 = (rcx_13 - rdx_8 - r9_3) ^ r9_3 u>> 0xc
                int32_t rdx_11 = (rdx_8 - rcx_16 - r9_3) ^ rcx_16 << 0x10
                int32_t r9_6 = (r9_3 - rdx_11 - rcx_16) ^ rdx_11 u>> 5
                int32_t rcx_19 = (rcx_16 - rdx_11 - r9_6) ^ r9_6 u>> 3
                int32_t rdx_14 = (rdx_11 - rcx_19 - r9_6) ^ rcx_19 << 0xa
                int32_t r9_9 = (r9_6 - rdx_14 - rcx_19) ^ rdx_14 u>> 0xf
                int64_t* rsi_1
                
                if (var_80 == var_54)
                label_1427944c7:
                    rsi_1 = sub_1413b8b20(&var_88, r9_9, &var_168)
                else
                    void var_50
                    void* rcx_20 = &var_50
                    
                    if (var_48 != 0)
                        rcx_20 = var_48
                    
                    int32_t rax_49 = *(rcx_20 + ((sx.q(var_40 - 1) & sx.q(r9_9)) << 2))
                    
                    if (rax_49 == 0xffffffff)
                    label_1427944c7_1:
                        rsi_1 = sub_1413b8b20(&var_88, r9_9, &var_168)
                    else
                        int64_t* rdx_18 = var_88
                        
                        while (rdx_18[sx.q(rax_49) * 4] != j)
                            rax_49 = rdx_18[sx.q(rax_49) * 4 + 3].d
                            
                            if (rax_49 == 0xffffffff)
                                goto label_1427944c7_3
                        
                        if (rax_49 == 0xffffffff)
                        label_1427944c7_2:
                            rsi_1 = sub_1413b8b20(&var_88, r9_9, &var_168)
                        else
                            void* rsi_2 = &rdx_18[sx.q(rax_49) * 4]
                            
                            if (rsi_2 == 0)
                            label_1427944c7_3:
                                rsi_1 = sub_1413b8b20(&var_88, r9_9, &var_168)
                            else
                                rsi_1 = rsi_2 + 8
                
                int64_t r14_3 = sx.q(rsi_1[1].d)
                int32_t rcx_24 = (r14_3 + 1).d
                rsi_1[1].d = rcx_24
                
                if (rcx_24 s> *(rsi_1 + 0xc))
                    sub_1405a4d70(rsi_1)
                
                *(*rsi_1 + (r14_3 << 3)) = rbx_2
    
    int64_t** r13_1 = var_140
    int64_t var_178_2 = 0
    void* rcx_38 = &r13_1[sx.q(var_138)]
    uint64_t rbx_6 = (rcx_38 - r13_1 + 7) u>> 3
    
    if (r13_1 u> rcx_38)
        rbx_6 = 0
    
    if (rbx_6 != 0)
        int64_t rcx_39 = 0
        uint64_t rax_69 = rbx_6
        
        do
            int64_t* rbx_7 = *r13_1
            
            if (rbx_7[0x18] == 0)
                void* rax_70 = *(arg1 + 0xf0)
                
                if (rax_70 != 0)
                    **(arg1 + 0x130) = *(rax_70 + 0x28)
                    *(*(arg1 + 0x130) + 8) = *(*(arg1 + 0xf0) + 0x30)
                    *(*(arg1 + 0x130) + 0x14) = *(*(arg1 + 0xf0) + 0x3c)
                    *(*(arg1 + 0x130) + 0x18) = *(*(arg1 + 0xf0) + 0x40)
                
                int32_t var_150
                sub_1405ba560(&var_88, &var_150, rbx_7)
                int64_t rax_78 = sx.q(var_150)
                int64_t rcx_46
                
                if (rax_78.d != 0xffffffff)
                    rcx_46 = rax_78 << 5
                
                void* rcx_48
                
                if (rax_78.d == 0xffffffff || rcx_46 == neg.q(var_88))
                    rcx_48 = nullptr
                else
                    rcx_48 = &var_88[rax_78 * 4 + 1]
                
                void* var_118_2 = rcx_48
                void*** rax_79 = j_sub_140a82f30(0x2a0)
                void*** r15_2
                
                if (rax_79 == 0)
                    r15_2 = nullptr
                else
                    void** const var_e8_2 = &data_142e345d8
                    int64_t var_b8_2 = 0
                    var_108 = j_sub_142788d50
                    var_a0.q = rbx_7
                    void** const var_a8_2 = &data_142da2668
                    var_c8 = sub_14278ebc0
                    int64_t var_f8_2 = 0
                    var_e0.o = arg1.o
                    int64_t* var_d0_1 = rbx_7
                    r15_2 = sub_141d2e500(rax_79, arg1, &var_108, &var_c8)
                
                int64_t r14_6 = sx.q(*(arg1 + 0x118))
                int32_t rax_81 = (r14_6 + 1).d
                *(arg1 + 0x118) = rax_81
                
                if (rax_81 s> *(arg1 + 0x11c))
                    sub_1405a4d70(arg1 + 0x110)
                
                *(*(arg1 + 0x110) + (r14_6 << 3)) = r15_2
                int64_t r14_7 = sx.q(*(arg1 + 0x128))
                int32_t rax_83 = (r14_7 + 1).d
                *(arg1 + 0x128) = rax_83
                
                if (rax_83 s> *(arg1 + 0x12c))
                    sub_1405a4d70(arg1 + 0x120)
                
                *(*(arg1 + 0x120) + (r14_7 << 3)) = rbx_7
                j_sub_14222ba80(var_158_1, rbx_7, r15_2)
                
                if (r12_2 != 0)
                    if (*(arg1 + 0xb9) != 0)
                        sub_142775fe0(r12_2, rbx_7, arg1)
                    
                    int64_t r8_12
                    r8_12.b = 1
                    var_168.q = 0
                    void* rax_86 = (*(*rbx_7 + 0x6a8))(rbx_7, 0, r8_12)
                    
                    if (rax_86 != 0 && (*(rax_86 + 0xc) & 4) != 0)
                        sub_142775fe0(r12_2, rbx_7, rbx_7)
                
                rax_69 = rbx_6
                rcx_39 = var_178_2
            
            rcx_39 += 1
            r13_1 = &r13_1[1]
            var_178_2 = rcx_39
        while (rcx_39 != rax_69)
    
    if (var_148_1 != 0)
        var_148_1[1].d -= 1
        
        if (var_148_1[1].d == 1)
            (**var_148_1)(var_148_1)
            int32_t temp1_1 = *(var_148_1 + 0xc)
            *(var_148_1 + 0xc) -= 1
            
            if (temp1_1 == 1)
                (*(*var_148_1 + 8))(var_148_1, 1)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

void* result = sub_140597460(&var_88)
int64_t** rcx_60 = var_140

if (rcx_60 != 0)
    result = sub_140a74f90(rcx_60)

int64_t* i_2 = i_1

if (i_2 != 0)
    result = sub_140a74f90(i_2)

__security_check_cookie(rax_1 ^ &var_198)
return result
