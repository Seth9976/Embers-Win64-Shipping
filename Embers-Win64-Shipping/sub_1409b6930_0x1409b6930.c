// 函数: sub_1409b6930
// 地址: 0x1409b6930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void*** arg_8 = arg1
int64_t r12 = 0
int64_t* r13 = arg2
void* var_68 = nullptr
int32_t rdx = 0
int32_t var_4c = 0
char r15 = arg3
void* var_58 = nullptr
void*** r14 = arg1
int32_t i_7 = 0
void* rsi = nullptr
int32_t rax = r13[1].d
int32_t i_6 = 0

if (rax s> 0)
    sub_1405a51b0(&var_58, rax)
    rsi = var_58
    rax = r13[1].d
    i_6 = i_7
    rdx = var_4c
    var_68 = rsi

int64_t rcx_1 = sx.q(rax - 1)
int64_t var_60 = rcx_1

if (rax - 1 s>= 0)
    bool cond:1_1
    
    do
        int64_t i_8 = sx.q(i_6)
        int64_t rbx_1 = sx.q(*(*r13 + (rcx_1 << 2)))
        i_6 = (i_8 + 1).d
        i_7 = i_6
        
        if (i_6 s> rdx)
            sub_1405c4e40(&var_58)
            rsi = var_58
            i_6 = i_7
            var_68 = rsi
        
        int32_t* rcx_5 = (i_8 << 5) + rsi
        *rcx_5 = data_143a1c6c4
        *(rcx_5 + 8) = 0
        *(rcx_5 + 0x10) = 0
        rcx_5[6] = data_143a1c6c8
        rcx_5[7].b = 0
        int64_t r15_1 = rbx_1 * 0x28
        int32_t* rdi_3 = (sx.q(i_6 - 1) << 5) + rsi
        *rdi_3 = *(r15_1 + r14[5][0x1c] + 0x20)
        rdi_3[6] = rbx_1.d
        void* rcx_7 = r14[5]
        int32_t rdx_4 = *(r15_1 + *(rcx_7 + 0xe0) + 8)
        
        if (rdx_4 s> rdi_3[5])
            sub_1405a5130(&rdi_3[2], rdx_4)
            rcx_7 = r14[5]
        
        int64_t rax_9 = *(rcx_7 + 0xe0)
        int32_t* r14_1 = *(r15_1 + rax_9)
        int64_t r15_2 = 0
        uint64_t r13_2 = sx.q(*(r15_1 + rax_9 + 8)) << 2 u>> 2
        
        if (r14_1 u> &r14_1[sx.q(*(r15_1 + rax_9 + 8))])
            r13_2 = 0
        
        if (r13_2 != 0)
            do
                int64_t rsi_1 = sx.q(rdi_3[4])
                int32_t rbx_2 = *r14_1
                int32_t rax_12 = (rsi_1 + 1).d
                rdi_3[4] = rax_12
                
                if (rax_12 s> rdi_3[5])
                    sub_1405a4df0(&rdi_3[2])
                
                int64_t rcx_10 = rsi_1 * 3
                int64_t rdx_6 = *(rdi_3 + 8)
                r14_1 = &r14_1[1]
                r15_2 += 1
                *(rdx_6 + (rcx_10 << 3)) = data_143a1c6b8
                *(rdx_6 + (rcx_10 << 3) + 4) = data_143a1c6b4
                *(rdx_6 + (rcx_10 << 3) + 8) = 0
                *(rdx_6 + (rcx_10 << 3) + 0x10) = 0
                int64_t rdx_7 = *(rdi_3 + 8)
                int64_t rcx_11 = sx.q(rdi_3[4]) * 3
                *(rdx_7 + (rcx_11 << 3) - 0x18) = rbx_2
                *(rdx_7 + (rcx_11 << 3) - 0x14) = data_143a1c6b4
            while (r15_2 != r13_2)
            
            rsi = var_68
        
        r14 = arg_8
        rcx_1 = var_60 - 1
        cond:1_1 = var_60 - 1 s>= 0
        rdx = var_4c
        r13 = arg2
        var_60 = rcx_1
    while (cond:1_1)
    r15 = arg3

void*** rax_17 = j_sub_140a82f30(0x18)

if (rax_17 == 0)
    rax_17 = nullptr
else
    *rax_17 = &data_142e3f738
    rax_17[1] = rsi
    rsi = nullptr
    rax_17[2].d = i_6
    i_6 = 0
    *(rax_17 + 0x14) = var_4c

arg_8 = rax_17
sub_1409afc10(r14, &arg_8)

if (i_6 != 0)
    int64_t* rbx_3 = rsi + 8
    int32_t i
    
    do
        sub_1408464b0(rbx_3)
        rbx_3 = &rbx_3[4]
        i = i_6
        i_6 -= 1
    while (i != 1)

if (rsi != 0)
    sub_140a74f90(rsi)

int64_t rdi_4 = 0
int64_t* rbx_4 = r14[0x77]
uint64_t rsi_3 = sx.q(r14[0x78].d) << 3 u>> 3

if (rbx_4 u> &rbx_4[r14[0x78]])
    rsi_3 = 0

if (rsi_3 != 0)
    do
        int64_t* rcx_17 = *rbx_4
        (*(*rcx_17 + 0x330))(rcx_17, r14, r13)
        rdi_4 += 1
        rbx_4 = &rbx_4[1]
    while (rdi_4 != rsi_3)

TEB* gsbase
int32_t* rbx_6 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143cee5c8 s> *rbx_6)
    _Init_thread_header(&data_143cee5c8)
    
    if (data_143cee5c8 == 0xffffffff)
        atexit(sub_142cb9000)
        _Init_thread_footer(&data_143cee5c8)

int32_t rax_23 = data_143cee5c4
data_143cee5c0 = 0

if (rax_23 s< 0 && rax_23 != 0)
    sub_1405dadb0(&data_143cee5b8, 0)

if (data_143cee5e0 s> *rbx_6)
    _Init_thread_header(&data_143cee5e0)
    
    if (data_143cee5e0 == 0xffffffff)
        atexit(sub_142cb9060)
        _Init_thread_footer(&data_143cee5e0)

int32_t rax_25 = data_143cee5dc
data_143cee5d8 = 0

if (rax_25 s< 0 && rax_25 != 0)
    sub_1405dadb0(&data_143cee5d0, 0)

if (data_143cee5f8 s> *rbx_6)
    _Init_thread_header(&data_143cee5f8)
    
    if (data_143cee5f8 == 0xffffffff)
        atexit(sub_142cb8720)
        _Init_thread_footer(&data_143cee5f8)

int32_t rax_27 = data_143cee5f4
data_143cee5f0 = 0

if (rax_27 s< 0 && rax_27 != 0)
    sub_1405dadb0(&data_143cee5e8, 0)

int32_t* rsi_4 = *r13
void* rbp = &rsi_4[sx.q(r13[1].d)]

if (rsi_4 != rbp)
    int64_t* r13_3 = nullptr
    int64_t* rax_29 = nullptr
    void** rcx_19 = nullptr
    
    if (arg6 != 0)
        r13_3 = &data_143cee5e8
    
    if (arg5 != 0)
        rax_29 = &data_143cee5d0
    
    int64_t* var_60_1 = rax_29
    
    if (r15 != 0)
        rcx_19 = &data_143cee5b8
    
    void** var_68_1 = rcx_19
    
    do
        int64_t rbx_7 = sx.q(*rsi_4)
        j_sub_141ccff80(r14[5], rbx_7.d, rcx_19, rax_29, r13_3)
        
        if (r14[0xc1] != 0)
            int32_t r10_1 = r14[0xd8].d
            int32_t rax_34
            void* rdx_11
            int64_t rdi_5
            void* r11_1
            
            if (r10_1 != *(r14 + 0x6ec))
                r11_1 = &r14[0xde]
                void* rcx_21 = r14[0xdf]
                rdi_5 = sx.q(r14[0xe0].d - 1)
                
                if (rcx_21 != 0)
                    r11_1 = rcx_21
                
                int64_t rax_33 = rbx_7 & rdi_5
                rdx_11 = r11_1 + (rax_33 << 2)
                rax_34 = *(r11_1 + (rax_33 << 2))
            
            if (r10_1 == *(r14 + 0x6ec) || rax_34 == 0xffffffff)
            label_1409b6d9d:
                sub_1409afd50(&r14[0xcd], &var_58)
                int32_t* rdx_14 = i_7.q
                int64_t* var_78_1
                var_78_1.d = var_58.d
                *rdx_14 = rbx_7.d
                rdx_14[1] = 0xffffffff
                sub_1409b8a30(&r14[0xcd], &arg_8, rbx_7.d, rdx_14, var_78_1.d, nullptr)
            else
                int64_t r8_2 = r14[0xd7]
                
                while (true)
                    int64_t rcx_22 = sx.q(rax_34) * 3
                    
                    if (*(r8_2 + (rcx_22 << 2)) == rbx_7.d)
                        int64_t rdx_16 = sx.q(*rdx_11)
                        int32_t i_1
                        int64_t rcx_25
                        void* rcx_26
                        
                        if (r10_1 - *(r14 + 0x6ec) != 0)
                            rcx_25 = rdx_16 * 3
                            int64_t rax_38 = sx.q(*(r8_2 + (rcx_25 << 2) + 8)) & rdi_5
                            rcx_26 = r11_1 + (rax_38 << 2)
                            i_1 = *(r11_1 + (rax_38 << 2))
                        
                        if (r10_1 - *(r14 + 0x6ec) == 0 || i_1 == 0xffffffff)
                        label_1409b6e6e:
                            sub_14090a460(&r14[0xd7], rdx_16.d, 1)
                        else
                            do
                                if (i_1 == rdx_16.d)
                                    *rcx_26 = *(r8_2 + (rcx_25 << 2) + 4)
                                    goto label_1409b6e6e
                                
                                int64_t i_4 = sx.q(i_1)
                                i_1 = *(r8_2 + ((i_4 * 3 + 1) << 2))
                                rcx_26 = r8_2 + ((i_4 * 3 + 1) << 2)
                            while (i_1 != 0xffffffff)
                            
                            sub_14090a460(&r14[0xd7], rdx_16.d, i_1 + 2)
                        
                        break
                    
                    rax_34 = *(r8_2 + ((rcx_22 + 1) << 2))
                    rdx_11 = r8_2 + ((rcx_22 + 1) << 2)
                    
                    if (rax_34 == 0xffffffff)
                        goto label_1409b6d9d
        
        rax_29 = var_60_1
        rsi_4 = &rsi_4[1]
        rcx_19 = var_68_1
    while (rsi_4 != rbp)
    
    r13 = arg2

if (data_143cee5d8 s> 0)
    sub_1409b7340(r14, &data_143cee5d0, 0)

if (data_143cee5c0 s> 0)
    sub_1409b5be0(r14, &data_143cee5b8, arg4)

if (data_143cee5f0 s> 0)
    sub_1409b6250(r14, &data_143cee5e8)

void* r15_3 = *r13
int64_t rbp_1 = sx.q(r13[1].d) << 2
int64_t* result = r15_3 + rbp_1
uint64_t rbp_2 = rbp_1 u>> 2

if (r15_3 u> result)
    rbp_2 = 0

if (rbp_2 != 0)
    do
        int64_t rbx_8 = sx.q(*r15_3)
        
        if (r14[0x7c].d != *(r14 + 0x40c))
            void* r9_3 = &r14[0x82]
            void* rcx_34 = r14[0x83]
            int64_t r11_2 = sx.q(r14[0x84].d - 1)
            
            if (rcx_34 != 0)
                r9_3 = rcx_34
            
            int64_t rax_45 = rbx_8 & r11_2
            void* rdx_17 = r9_3 + (rax_45 << 2)
            int32_t i_2 = *(r9_3 + (rax_45 << 2))
            
            if (i_2 != 0xffffffff)
                int64_t r8_6 = r14[0x7b]
                
                do
                    int64_t rcx_35 = sx.q(i_2) * 3
                    
                    if (*(r8_6 + (rcx_35 << 2)) == rbx_8.d)
                        int64_t rdx_19 = sx.q(*rdx_17)
                        int64_t rcx_36 = rdx_19 * 3
                        int64_t rax_48 = sx.q(*(r8_6 + (rcx_36 << 2) + 8)) & r11_2
                        void* rcx_37 = r9_3 + (rax_48 << 2)
                        int32_t j = *(r9_3 + (rax_48 << 2))
                        
                        while (j != 0xffffffff)
                            if (j == rdx_19.d)
                                *rcx_37 = *(r8_6 + (rcx_36 << 2) + 4)
                                break
                            
                            int64_t j_1 = sx.q(j)
                            j = *(r8_6 + ((j_1 * 3 + 1) << 2))
                            rcx_37 = r8_6 + ((j_1 * 3 + 1) << 2)
                        
                        sub_14090a460(&r14[0x7b], rdx_19.d, 1)
                        break
                    
                    i_2 = *(r8_6 + ((rcx_35 + 1) << 2))
                    rdx_17 = r8_6 + ((rcx_35 + 1) << 2)
                while (i_2 != 0xffffffff)
        
        result = zx.q(r14[0x90].d)
        
        if (result.d != *(r14 + 0x4ac))
            void* r9_4 = &r14[0x96]
            void* rcx_41 = r14[0x97]
            int64_t r11_3 = sx.q(r14[0x98].d - 1)
            
            if (rcx_41 != 0)
                r9_4 = rcx_41
            
            int64_t rax_53 = rbx_8 & r11_3
            void* rdx_20 = r9_4 + (rax_53 << 2)
            result = zx.q(*(r9_4 + (rax_53 << 2)))
            
            if (result.d != 0xffffffff)
                int64_t r8_7 = r14[0x8f]
                
                do
                    int64_t rcx_42 = sx.q(result.d) * 3
                    
                    if (*(r8_7 + (rcx_42 << 2)) == rbx_8.d)
                        int64_t rdx_22 = sx.q(*rdx_20)
                        int64_t rcx_43 = rdx_22 * 3
                        int64_t rax_56 = sx.q(*(r8_7 + (rcx_43 << 2) + 8)) & r11_3
                        void* rcx_44 = r9_4 + (rax_56 << 2)
                        int32_t i_3 = *(r9_4 + (rax_56 << 2))
                        
                        while (i_3 != 0xffffffff)
                            if (i_3 == rdx_22.d)
                                *rcx_44 = *(r8_7 + (rcx_43 << 2) + 4)
                                break
                            
                            int64_t i_5 = sx.q(i_3)
                            i_3 = *(r8_7 + ((i_5 * 3 + 1) << 2))
                            rcx_44 = r8_7 + ((i_5 * 3 + 1) << 2)
                        
                        result = sub_14090a460(&r14[0x8f], rdx_22.d, 1)
                        break
                    
                    result = zx.q(*(r8_7 + ((rcx_42 + 1) << 2)))
                    rdx_20 = r8_7 + ((rcx_42 + 1) << 2)
                while (result.d != 0xffffffff)
        
        r15_3 += 4
        r12 += 1
    while (r12 != rbp_2)

return result
