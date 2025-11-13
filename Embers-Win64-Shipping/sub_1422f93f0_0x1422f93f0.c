// 函数: sub_1422f93f0
// 地址: 0x1422f93f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t r12 = arg1
int64_t* rax_2 = std::_Get_future_error_what(arg1)
int64_t* r14 = rax_2
sub_1419a4390(rax_2)
int32_t* rsi = nullptr
int32_t var_5c = 0x80
int64_t var_d8 = 0
int32_t var_d0 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x2c)
int32_t var_54 = 0
int64_t var_48 = 0
int32_t var_40 = 0
int32_t var_58 = 0xffffffff
void** i = data_143f1da58
int32_t* var_108
int32_t var_f4
int32_t var_f0
void*** i_2
void** var_c8
int64_t var_b0

while (i != 0)
    int32_t* rax_3 = i[2]
    
    if (rax_3[2] == 0)
        rsi = rax_3
    
    if (rsi != 0)
        int32_t j = 0
        
        if (rsi[0x14] s> 0)
            do
                var_f0 = r12
                int32_t j_2 = j
                
                if (sub_1419d8600(rsi, &var_f0) != 0)
                    sub_1419a2ec0(r14, &var_b0, rsi, j)
                    
                    if (var_b0 == 0)
                        int16_t var_128
                        var_128.d = j
                        sub_140af98a0("Unknown", 0x10db, 
                            Missing global shader %s's permutation %i, Please make sure cooking was "
                        "successful.", *(rsi + 0x18))
                        sub_140afbb40()
                        var_128.q = &var_d8
                        int64_t* var_120
                        i_2 = sub_1422dd950(rsi, j, r12, nullptr, var_128, var_120)
                        var_108 = rsi
                        var_c8 = &var_108
                        int64_t var_100
                        var_100.d = j
                        void**** var_c0_1 = &i_2
                        sub_142136080(&var_88, &var_f4, &var_c8, nullptr)
                
                j += 1
            while (j s< rsi[0x14])
    
    i = *i
    rsi = nullptr

void*** i_1 = data_143f1da60
i_2 = i_1

while (i_1 != 0)
    int64_t* r15_2 = i_1[2]
    var_c8 = r15_2
    void* rcx_5 = *r15_2[4]
    void* rax_7 = nullptr
    
    if (*(rcx_5 + 8) == 0)
        rax_7 = rcx_5
    
    void var_a0
    
    if (rax_7 != 0 && *sub_1419a2fc0(r14, &var_a0, r15_2) == 0)
        bool cond:2_1 = r15_2[5].d s<= 0
        int32_t rdi_1 = 0
        var_108 = nullptr
        int32_t r13_1 = 0
        int64_t var_100_1 = 0
        int32_t j_1 = 0
        
        if (not(cond:2_1))
            void** rbx = var_c8
            int64_t* r15_1 = nullptr
            
            do
                void* r12_1 = nullptr
                int32_t var_ec_1 = 0
                void* rcx_7 = *(r15_1 + rbx[4])
                var_f0 = arg1
                
                if (*(rcx_7 + 8) == 0)
                    r12_1 = rcx_7
                
                if (sub_1419d8600(r12_1, &var_f0) == 0)
                    break
                
                int64_t rsi_1 = sx.q(rdi_1)
                rdi_1 = (rsi_1 + 1).d
                var_100_1.d = rdi_1
                
                if (rdi_1 s> r13_1)
                    sub_1405a4d70(&var_108)
                    r13_1 = var_100_1:4.d
                    rdi_1 = var_100_1.d
                
                j_1 += 1
                r15_1 = &r15_1[1]
                *(var_108 + (rsi_1 << 3)) = r12_1
            while (j_1 s< rbx[5].d)
            
            i_1 = i_2
            r15_2 = var_c8
            r12 = arg1
        
        if (rdi_1 == r15_2[5].d)
            sub_140af98a0("Unknown", 0x110e, 
                Missing global shader pipeline %s, Please make sure cooking was successful.", *r15_2)
            sub_140afbb40()
            int64_t rax_12
            
            if (*(r15_2 + 0x9c) != 0 && (r12 u> 0x1e || not(test_bit(0x6562c800, r12))))
                rax_12 = sx.q(r12)
            
            if (*(r15_2 + 0x9c) == 0 || (r12 u<= 0x1e && test_bit(0x6562c800, r12))
                    || (*(rax_12 * 0x14 + &data_143f025fc) & 1) != 0)
                int64_t r12_2 = 0
                int64_t* r14_1 = r15_2[4]
                uint64_t r13_3 = sx.q(r15_2[5].d) << 3 u>> 3
                
                if (r14_1 u> &r14_1[r15_2[5]])
                    r13_3 = 0
                
                if (r13_3 != 0)
                    do
                        var_b0 = *r14_1
                        int32_t var_a8_1 = 0
                        sub_142146a90(&var_88, &var_f4, &var_b0)
                        int64_t rax_16 = sx.q(var_f4)
                        void* const rdx_12
                        
                        if (rax_16.d == 0xffffffff)
                            rdx_12 = nullptr
                        else
                            rdx_12 = (rax_16 << 5) + var_88
                        
                        i_2 = nullptr
                        int64_t* rcx_14 = rdx_12 + 0x10
                        
                        if (rdx_12 == 0)
                            rcx_14 = nullptr
                        
                        int64_t* rcx_15 = *rcx_14
                        void* rax_18 = (*(*rcx_15 + 0x10))(rcx_15)
                        void* rdi_2
                        
                        if (*(rax_18 + 0x4e0) == *(rax_18 + 0x50c))
                        label_1422f97f0:
                            rdi_2 = sub_1422d4dc0(rax_18 + 0x4d8, 0, &i_2)
                        else
                            void* rcx_16 = rax_18 + 0x510
                            void* rax_20 = *(rcx_16 + 8)
                            
                            if (rax_20 != 0)
                                rcx_16 = rax_20
                            
                            int32_t rax_21 = *rcx_16
                            
                            if (rax_21 == 0xffffffff)
                            label_1422f97f0_1:
                                rdi_2 = sub_1422d4dc0(rax_18 + 0x4d8, 0, &i_2)
                            else
                                int64_t* rcx_19
                                
                                while (true)
                                    rcx_19 = (sx.q(rax_21) << 5) + *(rax_18 + 0x4d8)
                                    
                                    if (*rcx_19 == 0)
                                        break
                                    
                                    rax_21 = rcx_19[3].d
                                    
                                    if (rax_21 == 0xffffffff)
                                        goto label_1422f97f0_2
                                
                                if (rax_21 == 0xffffffff || rcx_19 == 0)
                                label_1422f97f0_2:
                                    rdi_2 = sub_1422d4dc0(rax_18 + 0x4d8, 0, &i_2)
                                else
                                    rdi_2 = &rcx_19[1]
                        
                        int64_t rsi_2 = sx.q(*(rdi_2 + 8))
                        int32_t rcx_21 = (rsi_2 + 1).d
                        *(rdi_2 + 8) = rcx_21
                        
                        if (rcx_21 s> *(rdi_2 + 0xc))
                            sub_1405a4d70(rdi_2)
                        
                        r14_1 = &r14_1[1]
                        r12_2 += 1
                        *(*rdi_2 + (rsi_2 << 3)) = r15_2
                    while (r12_2 != r13_3)
            else
                sub_1422ddb90(r12, r15_2, &var_108, &var_d8)
        
        int32_t* rax_24 = var_108
        
        if (rax_24 != 0)
            sub_140a74f90(rax_24)
        
        r14 = rax_2
        r12 = arg1
    
    i_1 = *i_1
    i_2 = i_1

if (var_d0 s> 0)
    i_2 = nullptr
    int64_t var_e0_1 = 0
    var_108 = nullptr
    int32_t var_100_2 = 0
    sub_1405947f0(&var_108, 8)
    int32_t rax_25 = var_100_2 + 8
    var_100_2 = rax_25
    
    if (rax_25 s> 0)
        sub_140594770(&var_108)
    
    sub_1405a7220(var_108, 8, "Globals", 8, 0x3f)
    int16_t var_128_1
    var_128_1.q = &var_108
    sub_1422dcec0(data_143f56338, &var_d8, 1, 0, var_128_1, &i_2, 0)
    int64_t rax_26 = sx.q(data_143f0f1a0)
    int64_t r8_9
    
    if (rax_26.d u> 0x18 || not(test_bit(0x100a040, rax_26.d)))
        r8_9 = *(&data_143f025f0 + rax_26 * 0x14)
    
    if ((rax_26.d u<= 0x18 && test_bit(0x100a040, rax_26.d)) || r8_9 == data_143f025b8
            || (rax_26.d u<= 0x30 && test_bit(0x1000030320000, rax_26)) || r8_9 == data_143f025c0
            || (rax_26.d u<= 0x1f && test_bit(0xc8451800, rax_26.d)) || r8_9 == data_143f025b0
            || rax_26.d - 0x19 u<= 1 || r8_9 == data_143f025d0 || *(data_143f56338 + 0x101) == 0)
        var_108 = nullptr
        int64_t var_100_3 = 1
        sub_1405a4cf0(&var_108)
        *var_108 = 0
        sub_1422e35e0(data_143f56338, u"Global", &var_108)
        int32_t* rcx_30 = var_108
        
        if (rcx_30 != 0)
            sub_140a74f90(rcx_30)

int32_t var_40_1 = 0

if (var_48 != 0)
    sub_140a74f90(var_48)

int64_t var_80
bool cond:1 = var_80:4.d == 0
var_80.d = 0

if (not(cond:1))
    sub_1405a51b0(&var_88, 0)

int32_t var_58_1 = 0xffffffff
int32_t var_54_1 = 0
int64_t var_78
sub_14059a8e0(&var_78, 0)
int64_t var_68

if (var_68 != 0)
    sub_140a74f90(var_68)

int64_t rcx_35 = var_88

if (rcx_35 != 0)
    sub_140a74f90(rcx_35)

int64_t result = sub_140596e10(&var_d8)
__security_check_cookie(rax_1 ^ &var_148)
return result
