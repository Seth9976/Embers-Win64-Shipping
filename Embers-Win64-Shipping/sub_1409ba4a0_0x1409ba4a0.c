// 函数: sub_1409ba4a0
// 地址: 0x1409ba4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int64_t rbp = 0
char r12 = arg3
int32_t rax_2 = *(arg5 + 0xc)
arg5[1].d = 0

if (rax_2 s< 0 && rax_2 != 0)
    sub_1405dadb0(arg5, 0)

TEB* gsbase
void* r13 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))

if (data_143ceeab0 s> *(0x14 + r13))
    _Init_thread_header(&data_143ceeab0)
    
    if (data_143ceeab0 == 0xffffffff)
        atexit(sub_142cba620)
        _Init_thread_footer(&data_143ceeab0)

int32_t i_6 = data_143ceeaa8
int64_t* rbx = data_143ceeaa0

if (data_143ceeaac s< 0)
    if (i_6 != 0)
        int32_t i
        
        do
            int64_t rcx_3 = *rbx
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rbx = &rbx[3]
            i = i_6
            i_6 -= 1
        while (i != 1)
    
    bool cond:2_1 = data_143ceeaac == 0
    data_143ceeaa8 = 0
    
    if (not(cond:2_1))
        sub_1405a5130(&data_143ceeaa0, 0)
else
    if (i_6 != 0)
        int32_t i_1
        
        do
            int64_t rcx_2 = *rbx
            
            if (rcx_2 != 0)
                sub_140a74f90(rcx_2)
            
            rbx = &rbx[3]
            i_1 = i_6
            i_6 -= 1
        while (i_1 != 1)
    
    data_143ceeaa8 = 0

int32_t rax_5 = arg2[1].d

if (rax_5 s> data_143ceeaac)
    sub_1405a5130(&data_143ceeaa0, rax_5)
    rax_5 = arg2[1].d

int32_t* rsi_1 = *arg2
uint64_t r14_1 = sx.q(rax_5) << 2 u>> 2

if (rsi_1 u> &rsi_1[sx.q(rax_5)])
    r14_1 = 0

int128_t var_b8
int64_t* var_78

if (r14_1 != 0)
    do
        int64_t rdi = sx.q(data_143ceeaa8)
        int32_t rbx_1 = *rsi_1
        int32_t rax_8 = (rdi + 1).d
        bool cond:3_1 = rax_8 s<= data_143ceeaac
        data_143ceeaa8 = rax_8
        
        if (not(cond:3_1))
            sub_1405a4df0(&data_143ceeaa0)
        
        int64_t* rdx_2 = data_143ceeaa0 + rdi * 0x18
        
        if (rdx_2 == 0)
            rdx_2 = nullptr
        else
            *rdx_2 = 0
            rdx_2[1] = 0
            rdx_2[2].d = data_143a1c6b4
        
        void* rcx_5 = arg1[5]
        var_78 = rdx_2
        int32_t var_70_1 = rbx_1
        var_b8 = var_78.o
        sub_140999b70(rcx_5 + 0x150, &var_b8)
        rsi_1 = &rsi_1[1]
        rbp += 1
    while (rbp != r14_1)
    
    r12 = arg3

uint64_t* rbx_4 = arg5
void*** rsi_2 = arg1
sub_1409b5680(arg1, &data_143ceeaa0, rbx_4)

if (data_143ceeac8 s> *(0x14 + r13))
    _Init_thread_header(&data_143ceeac8)
    
    if (data_143ceeac8 == 0xffffffff)
        atexit(sub_142cb98f0)
        _Init_thread_footer(&data_143ceeac8)

int32_t rax_12 = data_143ceeac4
int32_t i_7 = data_143ceeac0
int64_t rdi_1

if (rax_12 s< 0)
    if (i_7 != 0)
        int64_t* rbx_6 = data_143ceeab8 + 8
        int32_t i_2
        
        do
            sub_1408464b0(rbx_6)
            rbx_6 = &rbx_6[4]
            i_2 = i_7
            i_7 -= 1
        while (i_2 != 1)
        rax_12 = data_143ceeac4
        rbx_4 = arg5
    
    rdi_1 = 0
    data_143ceeac0 = 0
    
    if (rax_12 != 0)
        sub_1405a51b0(&data_143ceeab8, 0)
else
    if (i_7 != 0)
        int64_t* rbx_3 = data_143ceeab8 + 8
        int32_t i_3
        
        do
            sub_1408464b0(rbx_3)
            rbx_3 = &rbx_3[4]
            i_3 = i_7
            i_7 -= 1
        while (i_3 != 1)
        rbx_4 = arg5
    
    rdi_1 = 0
    data_143ceeac0 = 0

void* var_d0
sub_14090aa40(&arg1[5][0x2a], &var_d0, data_143f35cc8)
int64_t* rax_13 = arg2
int32_t i_5 = 0

if (rax_13[1].d s> 0)
    void* r13_1 = var_d0
    int64_t rcx_12 = 0
    int128_t zmm6
    int128_t var_48_1 = zmm6
    int64_t var_c8_1 = 0
    int32_t i_4
    
    do
        int32_t r14_2 = data_143a1c6b4
        int64_t rbp_1 = sx.q(*(*rax_13 + rcx_12))
        int32_t r15_1 = *(*rbx_4 + rcx_12)
        int32_t var_120
        
        if (r12 != 0)
            int64_t r12_2 = rbp_1 << 5
            int32_t rbx_7 = 0
            int32_t rax_17 = *(r12_2 + *rsi_2[5] + 0x18)
            
            if (rax_17 s> 0)
                do
                    int64_t* rdx_5 = rsi_2[5]
                    int64_t rax_18 = *rdx_5
                    int32_t* rcx_15
                    
                    if (rbx_7 s< 0 || rbx_7 s>= *(r12_2 + rax_18 + 0x18))
                        rcx_15 = &data_143a1c6bc
                    else
                        rcx_15 = *(r12_2 + rax_18 + 0x10) + rdi_1
                    
                    int64_t rcx_16 = sx.q(*rcx_15) * 3
                    int64_t rax_20 = rdx_5[0xe]
                    int64_t rsi_3 = sx.q(*(rax_20 + (rcx_16 << 3)))
                    int64_t rcx_17 = sx.q(*(rax_20 + (rcx_16 << 3) + 4))
                    var_120 = rcx_17.d
                    int64_t rdx_6 = **(r13_1 + 0x18)
                    int128_t zmm0_1
                    zmm0_1, zmm6 = sub_140addc20(arg4, rdx_6 + rsi_3 * 0xc, rdx_6 + rcx_17 * 0xc)
                    
                    if (not(zmm0_1.d f>= zmm6.d))
                        r14_2 = var_120
                        
                        if (rsi_3.d != rbp_1.d)
                            r14_2 = rsi_3.d
                    
                    rsi_2 = arg1
                    rbx_7 += 1
                    rdi_1 += 4
                while (rbx_7 s< rax_17)
        
        if (data_143ceeae0 s> *(r13 + 0x14))
            _Init_thread_header(&data_143ceeae0)
            
            if (data_143ceeae0 == 0xffffffff)
                atexit(sub_142cb79c0)
                _Init_thread_footer(&data_143ceeae0)
        
        int64_t* r12_3 = rsi_2[5]
        int64_t rdi_3 = rbp_1 << 5
        int64_t rsi_4 = *r12_3
        int64_t r10_1 = sx.q(*(rdi_3 + rsi_4 + 0x18))
        
        if (r10_1.d s<= data_143ceead8)
            int32_t rax_25 = data_143ceead8
            
            if (r10_1.d s< rax_25)
                int32_t rbx_9 = rax_25 - r10_1.d
                
                if (rax_25 != r10_1.d)
                    int32_t rax_26 = rax_25 - rbx_9
                    
                    if (rax_26 != r10_1.d)
                        int64_t r9 = data_143ceead0
                        memmove(r9 + (r10_1 << 2), r9 + (sx.q(rbx_9 + r10_1.d) << 2), 
                            (rax_26 - r10_1.d) << 2)
                    
                    data_143ceead8 -= rbx_9
                    sub_1405dac90(&data_143ceead0)
        else
            bool cond:6_1 = r10_1.d s<= data_143ceeadc
            data_143ceead8 = r10_1.d
            
            if (not(cond:6_1))
                sub_1405a4cf0(&data_143ceead0)
        
        int64_t rcx_23 = 0
        int32_t* r8_5 = *(rdi_3 + rsi_4 + 0x10)
        uint64_t r11_2 = sx.q(*(rdi_3 + rsi_4 + 0x18)) << 2 u>> 2
        
        if (r8_5 u> &r8_5[sx.q(*(rdi_3 + rsi_4 + 0x18))])
            r11_2 = 0
        
        if (r11_2 != 0)
            do
                int64_t r9_1 = r12_3[0xe]
                int64_t r10_2 = sx.q(*r8_5) * 3
                int32_t rdx_10 = *(r9_1 + (r10_2 << 3))
                
                if (rdx_10 == rbp_1.d)
                    rdx_10 = *(r9_1 + (r10_2 << 3) + 4)
                
                r8_5 = &r8_5[1]
                *(data_143ceead0 + (rcx_23 << 2)) = rdx_10
                rcx_23 += 1
            while (rcx_23 != r11_2)
        
        int32_t* rdi_4 = data_143ceead0
        int32_t* var_d8_1 = rdi_4
        void* rax_34 = &rdi_4[sx.q(data_143ceead8)]
        var_120.q = rax_34
        
        if (rdi_4 != rax_34)
            char rcx_24 = arg3
            
            do
                int32_t rdi_5 = *rdi_4
                
                if (rcx_24 == 0 || rdi_5 == r14_2)
                    int64_t rbx_10 = sx.q(data_143ceeac0)
                    int32_t rax_35 = (rbx_10 + 1).d
                    bool cond:9_1 = rax_35 s<= data_143ceeac4
                    data_143ceeac0 = rax_35
                    
                    if (not(cond:9_1))
                        sub_1405c4e40(&data_143ceeab8)
                    
                    int64_t rcx_26 = rbx_10 << 5
                    int32_t* rcx_27 = rcx_26 + data_143ceeab8
                    int32_t var_118_1
                    var_118_1.q = rcx_27
                    
                    if (rcx_26 == neg.q(data_143ceeab8))
                        var_118_1.q = 0
                    else
                        *rcx_27 = data_143a1c6c4
                        *(rcx_27 + 8) = 0
                        *(rcx_27 + 0x10) = 0
                        rcx_27[6] = data_143a1c6c8
                        rcx_27[7].b = 0
                    
                    int32_t rsi_5 = data_143a1c6c8
                    
                    if (data_143ceeaf8 s> *(r13 + 0x14))
                        _Init_thread_header(&data_143ceeaf8)
                        
                        if (data_143ceeaf8 == 0xffffffff)
                            atexit(sub_142cb8080)
                            _Init_thread_footer(&data_143ceeaf8)
                    
                    sub_1409c46d0(arg1, rbp_1.d, &data_143ceeae8)
                    int32_t* r12_4 = data_143ceeae8
                    void* rax_41 = &r12_4[sx.q(data_143ceeaf0)]
                    void* var_e8 = rax_41
                    
                    if (r12_4 != rax_41)
                        do
                            int32_t rbx_11 = *r12_4
                            
                            if (sub_1409be740(arg1, rbx_11, rdi_5) != 0xffffffff)
                                rsi_5 = rbx_11
                                break
                            
                            r12_4 = &r12_4[1]
                        while (r12_4 != var_e8)
                    
                    int32_t rbx_12 = data_143a1c6c8
                    char var_127_1 = 1
                    
                    if (rsi_5 != rbx_12)
                        int32_t rax_43 = sub_1409be740(arg1, rsi_5, rbp_1.d)
                        int32_t rax_44 = sub_1409be740(arg1, rsi_5, rdi_5)
                        int32_t rcx_35 = *(arg1[5][0x1c] + sx.q(rsi_5) * 0x28 + 8) - 1
                        
                        if (rax_43 != rcx_35 || rax_44 != 0)
                            if (rax_43 s> rax_44)
                                var_127_1 = 0
                            else if (rax_44 == rcx_35 && rax_43 == 0)
                                var_127_1 = 0
                    
                    void* rdx_17 = arg1[5]
                    int32_t rax_46
                    
                    if (rsi_5 != rbx_12)
                        rax_46 = *(*(rdx_17 + 0xe0) + sx.q(rsi_5) * 0x28 + 0x20)
                    else
                        void* var_a0
                        
                        if (*(rdx_17 + 0x120) - *(rdx_17 + 0x14c) s<= 0)
                            rax_46 = data_143a1c6c4
                        else
                            rax_46 = *(sub_1407453e0(&var_a0, rdx_17 + 0x118) + 0x1c)
                    
                    int32_t* rbx_13 = var_118_1.q
                    void** r10_3 = &rbx_13[2]
                    var_e8 = r10_3
                    *rbx_13 = rax_46
                    int64_t r12_6 = sx.q(r10_3[1].d)
                    
                    if (r12_6.d s< 3)
                        r10_3[1].d = 3
                        int32_t j_2 = 3 - r12_6.d
                        
                        if (*(r10_3 + 0xc) s< 3)
                            sub_1405a4df0(r10_3)
                            r10_3 = var_e8
                        
                        void* r8_10 = *r10_3 + r12_6 * 0x18
                        
                        if (j_2 != 0)
                            void* rcx_40 = r8_10 + 0x14
                            int32_t j
                            
                            do
                                *r8_10 = data_143a1c6b8
                                r8_10 += 0x18
                                *(rcx_40 - 0x10) = data_143a1c6b4
                                *(rcx_40 - 0xc) = 0
                                *(rcx_40 - 4) = 0
                                rcx_40 += 0x18
                                j = j_2
                                j_2 -= 1
                            while (j != 1)
                        
                        rbx_13 = var_118_1.q
                    else if (r12_6.d s> 3)
                        sub_1409d8830(r10_3, 3, (r12_6 - 3).d, 0)
                        r10_3 = var_e8
                    
                    var_78.d = rbp_1.d
                    *(*r10_3 + 4) = rbp_1.d
                    void* rax_53 = *r10_3
                    
                    if (var_127_1 == 0)
                        *(rax_53 + 0x1c) = rdi_5
                        var_78:4.d = rdi_5
                        int32_t var_70_3 = rbp_1.d
                        *(*r10_3 + 0x34) = r15_1
                    else
                        *(rax_53 + 0x1c) = r15_1
                        var_78:4.d = rbp_1.d
                        int32_t var_70_2 = rdi_5
                        *(*r10_3 + 0x34) = rdi_5
                    
                    if (rsi_5 != data_143a1c6c8)
                        int32_t j_1 = 0
                        
                        if (rbx_13[4] s> 0)
                            int64_t** rsi_6 = &var_78
                            int64_t r12_7 = sx.q(rsi_5) * 5
                            
                            do
                                void* r11_3 = arg1[5]
                                int64_t rcx_42 = *(r11_3 + 0xe0)
                                int32_t* r8_12 = *(rcx_42 + (r12_7 << 3))
                                void* r9_2 = &r8_12[sx.q(*(rcx_42 + (r12_7 << 3) + 8))]
                                
                                if (r8_12 == r9_2)
                                label_1409bac9b:
                                    r8_12 = nullptr
                                else
                                    while (*(*(r11_3 + 0x38) + sx.q(*r8_12) * 0x18) != *rsi_6)
                                        r8_12 = &r8_12[1]
                                        
                                        if (r8_12 == r9_2)
                                            goto label_1409bac9b
                                
                                int32_t* rax_58 = &data_143a1c6b8
                                
                                if (r8_12 != 0)
                                    rax_58 = r8_12
                                
                                var_b8:8.d = *rax_58
                                var_b8.q = *(rbx_13 + 8) + ((sx.q(j_1) * 3 + 1) << 3)
                                var_e8.o = var_b8
                                sub_14099a420(r11_3 + 0x1a8, &var_e8)
                                j_1 += 1
                                rsi_6 += 4
                            while (j_1 s< rbx_13[4])
                    
                    rax_34 = var_120.q
                    rcx_24 = arg3
                
                rdi_4 = &var_d8_1[1]
                var_d8_1 = rdi_4
            while (rdi_4 != rax_34)
            
            r13_1 = var_d0
        
        rdi_1 = 0
        i_4 = i_5 + 1
        rax_13 = arg2
        rcx_12 = var_c8_1 + 4
        rsi_2 = arg1
        r12 = arg3
        rbx_4 = arg5
        i_5 = i_4
        var_c8_1 = rcx_12
    while (i_4 s< rax_13[1].d)

if (data_143ceeb10 s> *(0x14 + r13))
    _Init_thread_header(&data_143ceeb10)
    
    if (data_143ceeb10 == 0xffffffff)
        atexit(sub_142cb8c60)
        _Init_thread_footer(&data_143ceeb10)

int32_t rax_61 = data_143ceeb0c
data_143ceeb08 = 0

if (rax_61 s< 0 && rax_61 != 0)
    sub_1405dadb0(&data_143ceeb00, 0)

if (data_143ceeb28 s> *(0x14 + r13))
    _Init_thread_header(&data_143ceeb28)
    
    if (data_143ceeb28 == 0xffffffff)
        atexit(&data_142cb89e0)
        _Init_thread_footer(&data_143ceeb28)

int32_t rax_63 = data_143ceeb24
data_143ceeb20 = 0

if (rax_63 s< 0 && rax_63 != 0)
    sub_1405dadb0(&data_143ceeb18, 0)

int64_t result = sub_1409b4ab0(rsi_2, &data_143ceeab8, &data_143ceeb00, &data_143ceeb18)
__security_check_cookie(rax_1 ^ &var_148)
return result
