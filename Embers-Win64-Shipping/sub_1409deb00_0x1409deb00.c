// 函数: sub_1409deb00
// 地址: 0x1409deb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1a8
int64_t rax_1 = __security_cookie ^ &var_1a8
void*** rdi = arg1
int64_t r13 = sx.q(arg3[1].d)
uint64_t* r15 = arg4
int64_t rsi = sx.q(arg2)
TEB* gsbase
void* rax_3 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
int32_t var_128 = rsi.d
int32_t var_170 = r13.d

if (data_143cee260 s> *(rax_3 + 0x14))
    _Init_thread_header(&data_143cee260)
    
    if (data_143cee260 == 0xffffffff)
        atexit(sub_142cb9d20)
        _Init_thread_footer(&data_143cee260)

int32_t r8 = data_143cee25c
data_143cee258 = 0

if (r8 s< 0 && r8 != 0)
    sub_1405dadb0(&data_143cee250, 0)
    r8 = data_143cee25c

if (&data_143cee250 != arg3)
    int64_t rdi_1 = sx.q(arg3[1].d)
    int64_t rbx_1 = *arg3
    data_143cee258 = rdi_1.d
    
    if (rdi_1.d != 0 || r8 != 0)
        sub_140638750(&data_143cee250, rdi_1.d, r8)
        memcpy(data_143cee250, rbx_1, (rdi_1 << 2).d)
    else
        data_143cee25c = 0
    
    rdi = arg1

if (r13.d s> 1)
    sub_140626020(data_143cee250, data_143cee258)

int64_t rdx_4 = rsi * 3
int64_t rax_5 = rdi[5][0xe]
int32_t r12 = *(rax_5 + (rdx_4 << 3) + 4)
int32_t rcx_3 = *(rax_5 + (rdx_4 << 3))
int32_t var_d0 = r12
int32_t var_c4 = r12

if (data_143cee278 s> *(rax_3 + 0x14))
    _Init_thread_header(&data_143cee278)
    
    if (data_143cee278 == 0xffffffff)
        atexit(sub_142cb81c0)
        _Init_thread_footer(&data_143cee278)

int32_t rax_7 = data_143cee274
data_143cee270 = 0

if (rax_7 s< 0 && rax_7 != 0)
    sub_14090a730(&data_143cee268, 0)

void* rcx_4 = rdi[5]
int64_t* var_108 = &data_143cee268
int32_t var_100 = rsi.d
var_108.o = var_108.o
sub_14099a640(rcx_4 + 0x200, &var_108)

if (data_143cee290 s> *(rax_3 + 0x14))
    _Init_thread_header(&data_143cee290)
    
    if (data_143cee290 == 0xffffffff)
        atexit(sub_142cb8da0)
        _Init_thread_footer(&data_143cee290)

int32_t rax_9 = data_143cee28c
data_143cee288 = 0

if (rax_9 s< 0 && rax_9 != 0)
    sub_1405dadb0(&data_143cee280, 0)

int32_t rax_10 = *(r15 + 0xc)
r15[1].d = 0

if (rax_10 s< 0 && rax_10 != 0)
    sub_1405dadb0(r15, 0)
    rax_10 = *(r15 + 0xc)

if (r13.d s> rax_10)
    sub_1405dadb0(r15, r13.d)

if (data_143cee2a8 s> *(rax_3 + 0x14))
    _Init_thread_header(&data_143cee2a8)
    
    if (data_143cee2a8 == 0xffffffff)
        atexit(sub_142cba740)
        _Init_thread_footer(&data_143cee2a8)

int32_t i_8 = data_143cee2a0
int64_t* rdi_2 = data_143cee298

if (data_143cee2a4 s< 0)
    if (i_8 != 0)
        int32_t i
        
        do
            int64_t rcx_9 = *rdi_2
            
            if (rcx_9 != 0)
                sub_140a74f90(rcx_9)
            
            rdi_2 = &rdi_2[3]
            i = i_8
            i_8 -= 1
        while (i != 1)
    
    bool cond:5_1 = data_143cee2a4 == 0
    data_143cee2a0 = 0
    
    if (not(cond:5_1))
        sub_1405a5130(&data_143cee298, 0)
else
    if (i_8 != 0)
        int32_t i_1
        
        do
            int64_t rcx_8 = *rdi_2
            
            if (rcx_8 != 0)
                sub_140a74f90(rcx_8)
            
            rdi_2 = &rdi_2[3]
            i_1 = i_8
            i_8 -= 1
        while (i_1 != 1)
    
    data_143cee2a0 = 0

if (r13.d s> data_143cee2a4)
    sub_1405a5130(&data_143cee298, r13.d)

int64_t var_140 = r13
int128_t var_b8
int64_t var_a8

if (r13 s> 0)
    int64_t rbx_3 = 0
    
    do
        int64_t rdi_3 = sx.q(data_143cee2a0)
        int32_t rax_12 = (rdi_3 + 1).d
        bool cond:6_1 = rax_12 s<= data_143cee2a4
        data_143cee2a0 = rax_12
        
        if (not(cond:6_1))
            sub_1405a4df0(&data_143cee298)
        
        int64_t* rdx_9 = data_143cee298 + rdi_3 * 0x18
        
        if (rdx_9 == 0)
            rdx_9 = nullptr
        else
            *rdx_9 = 0
            rdx_9[1] = 0
            rdx_9[2].d = data_143a1c6b4
        
        int64_t rax_15 = data_143cee250
        void* rcx_11 = arg1[5]
        var_108 = rdx_9
        var_100 = rcx_3
        int64_t zmm1_1
        zmm1_1.d = *(rax_15 + (rbx_3 << 2))
        int32_t var_fc_1 = r12
        int64_t var_f8 = zmm1_1
        var_a8 = zmm1_1
        var_b8 = var_108.o
        sub_14099a1f0(rcx_11 + 0x150, &var_b8)
        rbx_3 += 1
    while (rbx_3 s< r13)
    
    rsi = zx.q(var_128)
    r15 = arg4

sub_1409b5680(arg1, &data_143cee298, &data_143cee280)
int64_t rdi_4 = sx.q(data_143cee288)

if (rdi_4.d != 0)
    int32_t rax_16 = r15[1].d
    int32_t rdx_11 = rdi_4.d + rax_16
    
    if (rdx_11 s> *(r15 + 0xc))
        sub_1405dadb0(r15, rdx_11)
        rax_16 = r15[1].d
    
    memcpy(*r15 + (sx.q(rax_16) << 2), data_143cee280, (rdi_4 << 2).d)
    r15[1].d += rdi_4.d

if (data_143cee2ac s> *(rax_3 + 0x14))
    _Init_thread_header(&data_143cee2ac)
    
    if (data_143cee2ac == 0xffffffff)
        atexit(sub_142cba2f0)
        _Init_thread_footer(&data_143cee2ac)

if (data_143cee2b0 s> *(rax_3 + 0x14))
    _Init_thread_header(&data_143cee2b0)
    
    if (data_143cee2b0 == 0xffffffff)
        atexit(sub_142cb9550)
        _Init_thread_footer(&data_143cee2b0)

if (data_143cee2c8 s> *(rax_3 + 0x14))
    _Init_thread_header(&data_143cee2c8)
    
    if (data_143cee2c8 == 0xffffffff)
        atexit(sub_142cba400)
        _Init_thread_footer(&data_143cee2c8)

if (data_143cee2e0 s> *(rax_3 + 0x14))
    _Init_thread_header(&data_143cee2e0)
    
    if (data_143cee2e0 == 0xffffffff)
        atexit(sub_142cb8e80)
        _Init_thread_footer(&data_143cee2e0)

sub_1409d9b90(&data_143990ea0)

if (data_143990ef8 != data_143990f24)
    int32_t rax_23 = data_143990efc
    data_143990ef8 = 0
    
    if (rax_23 s< 0 && rax_23 != 0)
        sub_1405a5130(&data_143990ef0, 0)
    
    data_143990f20 = 0xffffffff
    data_143990f24 = 0
    sub_140774790(&data_143990f00)
    int64_t rcx_17 = sx.q(data_143990f38)
    
    if (rcx_17 s> 0)
        void* rax_24 = data_143990f30
        void* rdi_6 = &data_143990f28
        
        if (rax_24 != 0)
            rdi_6 = rax_24
        
        __builtin_memset(rdi_6, 0xffffffff, rcx_17 << 2)

int32_t rax_25 = data_143cee2c4
int32_t i_9 = data_143cee2c0

if (rax_25 s< 0)
    if (i_9 != 0)
        int64_t* rdi_10 = data_143cee2b8 + 8
        int32_t i_2
        
        do
            int64_t rcx_19 = *rdi_10
            
            if (rcx_19 != 0)
                sub_140a74f90(rcx_19)
            
            rdi_10 = &rdi_10[4]
            i_2 = i_9
            i_9 -= 1
        while (i_2 != 1)
        rax_25 = data_143cee2c4
    
    data_143cee2c0 = 0
    
    if (rax_25 != 0)
        sub_1405a51b0(&data_143cee2b8, 0)
else
    if (i_9 != 0)
        int64_t* rdi_8 = data_143cee2b8 + 8
        int32_t i_3
        
        do
            int64_t rcx_18 = *rdi_8
            
            if (rcx_18 != 0)
                sub_140a74f90(rcx_18)
            
            rdi_8 = &rdi_8[4]
            i_3 = i_9
            i_9 -= 1
        while (i_3 != 1)
    
    data_143cee2c0 = 0

void*** rbx_4 = arg1
int32_t var_16c = 0
int32_t* var_e8
sub_1409c2bd0(rbx_4[5], &var_e8, rsi.d)
int32_t* rcx_21 = var_e8
int32_t* var_138_1 = rcx_21
int32_t var_e0
uint64_t rdx_14 = &rcx_21[sx.q(var_e0)]
int32_t* rax_27 = rcx_21
uint64_t var_150 = rdx_14
uint64_t var_160
int32_t var_158
int64_t* var_120
int32_t var_118
void* const var_68
int32_t var_58
int32_t var_54

if (rcx_21 != rdx_14)
    int64_t rsi_2 = r13
    
    do
        int64_t rax_28 = sx.q(*rax_27)
        int32_t r13_1 = -1
        void* r10_1 = rbx_4[5]
        int32_t rdi_11 = 0
        int32_t var_c8 = rax_28.d
        int32_t r15_2 = -1
        int32_t var_12c_1 = 0xffffffff
        int64_t rcx_22 = rax_28 * 5
        int32_t var_130_1 = 0xffffffff
        int64_t rdx_15 = *(r10_1 + 0xe0)
        int64_t rax_29 = sx.q(*(rdx_15 + (rcx_22 << 3) + 8))
        int32_t* r11_1 = *(rdx_15 + (rcx_22 << 3))
        int64_t rdx_16 = 0
        int32_t var_cc_1 = rax_29.d
        int32_t* r8_7 = r11_1
        uint64_t r9_1 = rax_29 << 2 u>> 2
        
        if (r11_1 u> &r11_1[rax_29])
            r9_1 = 0
        
        if (r9_1 != 0)
            do
                int32_t rax_32 = *(*(r10_1 + 0x38) + sx.q(*r8_7) * 0x18)
                
                if (rax_32 == rcx_3)
                    r13_1 = rdi_11
                else if (rax_32 == r12)
                    r15_2 = rdi_11
                
                rdi_11 += 1
                r8_7 = &r8_7[1]
                rdx_16 += 1
            while (rdx_16 != r9_1)
            
            rsi_2 = var_140
            var_12c_1 = r13_1
            var_130_1 = r15_2
        
        int32_t rdi_12 = r11_1[sx.q(r13_1)]
        var_58 = rdi_12
        int32_t rbx_5 = r11_1[sx.q(r15_2)]
        var_54 = rbx_5
        int32_t var_d8
        sub_1409bd380(&data_143990ea0, &var_d8, &var_58)
        int64_t rax_35 = sx.q(var_d8)
        void* const rcx_24
        
        if (rax_35.d == 0xffffffff)
            rcx_24 = nullptr
        else
            rcx_24 = data_143990ea0 + rax_35 * 0x14
        
        int32_t* rax_37 = rcx_24 + 8
        
        if (rcx_24 == 0)
            rax_37 = nullptr
        
        int32_t r8_9
        
        if (rax_37 == 0)
            int32_t rax_38 = var_16c
            var_120.d = rdi_12
            var_108 = &var_120
            var_120:4.d = rbx_5
            var_100.q = &var_16c
            void var_98
            sub_140999300(&data_143990ea0, &var_98, &var_108, nullptr)
            var_118 = rbx_5
            var_160 = &var_118
            int32_t var_114_1 = rdi_12
            var_158.q = &var_16c
            void var_94
            sub_140999300(&data_143990ea0, &var_94, &var_160, nullptr)
            int32_t rdx_22 = data_143cee2c0 + var_170
            
            if (rdx_22 s> data_143cee2c4)
                sub_1405a51b0(&data_143cee2b8, rdx_22)
            
            int64_t r12_1 = 0
            
            if (rsi_2 s> 0)
                do
                    int64_t r13_2 = sx.q(data_143cee2c0)
                    int32_t rax_39 = (r13_2 + 1).d
                    bool cond:10_1 = rax_39 s<= data_143cee2c4
                    data_143cee2c0 = rax_39
                    
                    if (not(cond:10_1))
                        sub_1405c4e40(&data_143cee2b8)
                    
                    int32_t* rcx_27 = (r13_2 << 5) + data_143cee2b8
                    var_b8:8.d = rdi_12
                    var_b8:0xc.d = rbx_5
                    *rcx_27 = data_143a1c6b4
                    *(rcx_27 + 8) = 0
                    *(rcx_27 + 0x10) = 0
                    rcx_27[6] = data_143a1c6b8
                    int32_t* rdx_26 = (sx.q(data_143cee2c0 - 1) << 5) + data_143cee2b8
                    *rdx_26 = *(data_143cee280 + (r12_1 << 2))
                    int64_t zmm1_2
                    zmm1_2.d = *(data_143cee250 + (r12_1 << 2))
                    var_b8.q = &rdx_26[2]
                    var_a8 = zmm1_2
                    int128_t var_88 = var_b8
                    int64_t var_78_1 = zmm1_2
                    sub_14099a860(&arg1[5][0x35], &var_88)
                    r12_1 += 1
                while (r12_1 s< rsi_2)
                
                r15_2 = var_130_1
                r13_1 = var_12c_1
            
            var_16c += var_170
            r8_9 = rax_38
            r12 = var_d0
        else
            r8_9 = *rax_37
        
        var_68:4.d = r8_9
        int32_t temp14_1
        int32_t temp15_1
        temp14_1:temp15_1 = sx.q(r13_1 - r15_2)
        rdi_12.b = r13_1 s> r15_2
        rcx_24.b = (temp15_1 ^ temp14_1) - temp14_1 s> 1
        rdi_12.b ^= rcx_24.b
        int32_t var_60
        var_60.b = rdi_12.b
        
        if (rdi_12.b == 0)
            r15_2 = r13_1
        
        var_68.d = mods.dp.d(sx.q(r15_2 + 1), var_cc_1)
        sub_140998d40(&data_143990ef0, &var_c8, &var_68)
        rbx_4 = arg1
        rax_27 = &var_138_1[1]
        var_138_1 = rax_27
    while (rax_27 != var_150)
    
    rsi = zx.q(var_128)
    r13 = var_140
    rcx_21 = var_e8

if (rcx_21 != 0)
    sub_140a74f90(rcx_21)

sub_1409b5360(rbx_4, &data_143cee2b8, &data_143cee2d0)
sub_1409c2bd0(rbx_4[5], &var_e8, rsi.d)
int32_t rdi_13 = var_e0
var_68 = nullptr
int32_t var_5c = 0
int32_t i_13 = 0

if (rdi_13 s> 0)
    sub_1405a51b0(&var_68, rdi_13)

sub_1409c2bd0(rbx_4[5], &var_108, rsi.d)
int64_t* rdx_35 = var_108
var_120 = rdx_35
void* rcx_35 = rdx_35 + (sx.q(var_100) << 2)
int64_t* rax_58 = rdx_35
var_150 = rcx_35

if (rdx_35 != rcx_35)
    while (true)
        int64_t rdi_14 = sx.q(*rax_58)
        void* rax_59 = rbx_4[5]
        var_160 = 0
        int64_t rdx_36 = rdi_14 * 5
        int64_t rcx_36 = *(rax_59 + 0xe0)
        uint64_t r15_4 = zx.q(*(rcx_36 + (rdx_36 << 3) + 8))
        int32_t rbx_6 = *(rcx_36 + (rdx_36 << 3) + 0x20)
        int64_t rsi_4 = *(rcx_36 + (rdx_36 << 3))
        var_158 = r15_4.d
        
        if (r15_4.d != 0)
            sub_1405c4a90(&var_160, r15_4.d, 0)
            memcpy(var_160, rsi_4, r15_4.d << 2)
            r15_4 = zx.q(var_158)
        else
            int32_t var_154_1 = 0
        
        int64_t i_16 = sx.q(i_13)
        int32_t i_15 = (i_16 + 1).d
        i_13 = i_15
        
        if (i_15 s> var_5c)
            sub_1405c4e40(&var_68)
        
        int32_t rdx_41 = var_170 + r15_4.d
        void* rcx_42 = (i_16 << 5) + var_68
        *rcx_42 = data_143a1c6c4
        *(rcx_42 + 8) = 0
        *(rcx_42 + 0x10) = 0
        *(rcx_42 + 0x18) = data_143a1c6c8
        *rcx_42 = rbx_6
        *(rcx_42 + 0x1c) = 0
        
        if (rdx_41 s> *(rcx_42 + 0x14))
            sub_1405a5130(rcx_42 + 8, rdx_41)
        
        char rax_67
        
        if (data_143990ef8 == data_143990f24)
        label_1409df4e9:
            rax_67 = 0
            var_58.q = 0
        else
            void* rcx_44 = data_143990f30
            void* rax_65 = &data_143990f28
            
            if (rcx_44 != 0)
                rax_65 = rcx_44
            
            int32_t rax_66 = *(rax_65 + ((sx.q(data_143990f38 - 1) & rdi_14) << 2))
            
            if (rax_66 == 0xffffffff)
                goto label_1409df4e9
            
            int64_t r8_17 = data_143990ef0
            int64_t rcx_45
            
            while (true)
                rcx_45 = sx.q(rax_66)
                int64_t rdx_44 = rcx_45 * 3
                
                if (*(r8_17 + (rdx_44 << 3)) == rdi_14.d)
                    break
                
                rax_66 = *(r8_17 + (rdx_44 << 3) + 0x10)
                
                if (rax_66 == 0xffffffff)
                    goto label_1409df4e9
            
            if (rax_66 == 0xffffffff)
                goto label_1409df4e9
            
            void* rcx_46 = r8_17 + rcx_45 * 0x18
            
            if (rcx_46 == 0)
                goto label_1409df4e9
            
            rax_67 = (*(rcx_46 + 0xc)).b
            var_58.q = *(rcx_46 + 4)
        
        int64_t r12_2 = 0
        int64_t var_138_2 = 0
        
        if (r15_4.d s> 0)
            int64_t rax_68 = sx.q(var_58)
            var_118.q = r15_4
            
            while (true)
                if (r12_2 == rax_68 && r13 s> 0)
                    int64_t r12_3 = 0
                    int64_t r13_3 = r13 - 1
                    
                    do
                        int64_t rbx_7 = sx.q(*(rcx_42 + 0x10))
                        int64_t r15_5 = r12_3
                        
                        if (rax_67 != 0)
                            r15_5 = r13_3
                        
                        int32_t rax_70 = (rbx_7 + 1).d
                        *(rcx_42 + 0x10) = rax_70
                        
                        if (rax_70 s> *(rcx_42 + 0x14))
                            sub_1405a4df0(rcx_42 + 8)
                        
                        int64_t rdx_46 = rbx_7 * 3
                        int64_t rdi_15 = *(rcx_42 + 8)
                        r12_3 += 1
                        r13_3 -= 1
                        *(rdi_15 + (rdx_46 << 3)) = data_143a1c6b8
                        *(rdi_15 + (rdx_46 << 3) + 4) = data_143a1c6b4
                        *(rdi_15 + (rdx_46 << 3) + 8) = 0
                        *(rdi_15 + (rdx_46 << 3) + 0x10) = 0
                        *(rdi_15 + (rdx_46 << 3)) =
                            *(data_143cee2d0 + ((sx.q(var_54) + r15_5) << 2))
                    while (r12_3 s< var_140)
                    
                    r12_2 = var_138_2
                    r15_4 = var_118.q
                
                int64_t rbx_8 = sx.q(*(rcx_42 + 0x10))
                int32_t rax_74 = (rbx_8 + 1).d
                *(rcx_42 + 0x10) = rax_74
                
                if (rax_74 s> *(rcx_42 + 0x14))
                    sub_1405a4df0(rcx_42 + 8)
                
                int64_t rdx_48 = rbx_8 * 3
                int64_t rdi_16 = *(rcx_42 + 8)
                *(rdi_16 + (rdx_48 << 3)) = data_143a1c6b8
                *(rdi_16 + (rdx_48 << 3) + 4) = data_143a1c6b4
                uint64_t rax_77 = var_160
                *(rdi_16 + (rdx_48 << 3) + 8) = 0
                *(rdi_16 + (rdx_48 << 3) + 0x10) = 0
                int32_t rax_78 = *(rax_77 + (r12_2 << 2))
                r12_2 += 1
                uint64_t temp26_1 = r15_4
                r15_4 -= 1
                *(rdi_16 + (rdx_48 << 3)) = rax_78
                rax_68 = sx.q(var_58)
                var_118.q = r15_4
                var_138_2 = r12_2
                
                if (temp26_1 == 1)
                    break
                
                r13 = var_140
        
        uint64_t rax_79 = var_160
        
        if (rax_79 != 0)
            sub_140a74f90(rax_79)
        
        rbx_4 = arg1
        rax_58 = var_120 + 4
        var_120 = rax_58
        
        if (rax_58 == var_150)
            break
        
        r13 = var_140
    
    rdi_13 = var_e0
    rdx_35 = var_108

if (rdx_35 != 0)
    sub_140a74f90(rdx_35)

var_150 = 0
uint64_t r10_3 = 0
int32_t var_144 = 0

if (rdi_13 != 0)
    sub_1405c4a90(&var_150, rdi_13, 0)
    memcpy(var_150, var_e8, rdi_13 << 2)
    r10_3 = var_150

int32_t r8_20 = rdi_13 - 1
int32_t temp11
int32_t temp12
temp11:temp12 = sx.q(rdi_13)
int32_t i_14 = (temp12 - temp11) s>> 1

if (i_14 s> 0)
    uint64_t i_12 = zx.q(i_14)
    uint64_t rdx_52 = r10_3
    uint64_t i_4
    
    do
        int64_t rdi_17 = r10_3 + (sx.q(r8_20) << 2)
        
        if (rdx_52 != rdi_17)
            int32_t rax_85 = *rdx_52
            *rdx_52 = *rdi_17
            *rdi_17 = rax_85
        
        rdx_52 += 4
        r8_20 -= 1
        i_4 = i_12
        i_12 -= 1
    while (i_4 != 1)

r8_20.b = 1
sub_1409b6930(rbx_4, &var_150, r8_20.b, 0, 0, 0)
uint64_t rcx_58 = var_150

if (rcx_58 != 0)
    sub_140a74f90(rcx_58)

if (data_143cee2f8 s> *(rax_3 + 0x14))
    _Init_thread_header(&data_143cee2f8)
    
    if (data_143cee2f8 == 0xffffffff)
        atexit(sub_142cb85d0)
        _Init_thread_footer(&data_143cee2f8)

int32_t i_10 = data_143cee2f0

if (data_143cee2f4 s< 0)
    if (i_10 != 0)
        int64_t* rdi_21 = data_143cee2e8 + 8
        int32_t i_5
        
        do
            int64_t rcx_60 = *rdi_21
            
            if (rcx_60 != 0)
                sub_140a74f90(rcx_60)
            
            rdi_21 = &rdi_21[4]
            i_5 = i_10
            i_10 -= 1
        while (i_5 != 1)
    
    bool cond:12_1 = data_143cee2f4 == 0
    data_143cee2f0 = 0
    
    if (not(cond:12_1))
        sub_1405a51b0(&data_143cee2e8, 0)
else
    if (i_10 != 0)
        int64_t* rdi_19 = data_143cee2e8 + 8
        int32_t i_6
        
        do
            int64_t rcx_59 = *rdi_19
            
            if (rcx_59 != 0)
                sub_140a74f90(rcx_59)
            
            rdi_19 = &rdi_19[4]
            i_6 = i_10
            i_10 -= 1
        while (i_6 != 1)
    
    data_143cee2f0 = 0

int32_t rbx_11 = var_170

if (rbx_11 + 1 s> data_143cee2f4)
    sub_1405a51b0(&data_143cee2e8, rbx_11 + 1)

int64_t rdi_22 = sx.q(data_143cee2f0)
int32_t rax_87 = (rdi_22 + 1).d
bool cond:13 = rax_87 s<= data_143cee2f4
data_143cee2f0 = rax_87

if (not(cond:13))
    sub_1405c4e40(&data_143cee2e8)

int64_t rdx_57 = rdi_22 << 5
int32_t* rdx_58 = rdx_57 + data_143cee2e8

if (rdx_57 == neg.q(data_143cee2e8))
    rdx_58 = nullptr
else
    *rdx_58 = data_143a1c6b4
    rdx_58[1] = data_143a1c6b4
    *(rdx_58 + 8) = 0
    *(rdx_58 + 0x10) = 0
    rdx_58[6] = data_143a1c6bc

*rdx_58 = rcx_3
rdx_58[1] = *data_143cee280

if (rdx_58 != &data_143cee260)
    int64_t rbx_10 = sx.q(data_143cee270)
    int64_t rsi_6 = data_143cee268
    int32_t r8_21 = rdx_58[5]
    rdx_58[4] = rbx_10.d
    
    if (rbx_10.d != 0 || r8_21 != 0)
        sub_1409da0d0(&rdx_58[2], rbx_10.d, r8_21)
        memcpy(*(rdx_58 + 8), rsi_6, (rbx_10 * 0x60).d)
    else
        rdx_58[5] = 0
    
    rbx_11 = var_170

int32_t r15_6 = 0

if (var_140 s> 0)
    int32_t r8_24 = rbx_11 - 1
    int64_t rsi_7 = 0
    int32_t var_174_1 = r8_24
    
    do
        int64_t rdi_24 = sx.q(data_143cee2f0)
        int32_t rax_93 = (rdi_24 + 1).d
        bool cond:15_1 = rax_93 s<= data_143cee2f4
        data_143cee2f0 = rax_93
        
        if (not(cond:15_1))
            sub_1405c4e40(&data_143cee2e8)
            r8_24 = var_174_1
        
        int64_t rdx_63 = rdi_24 << 5
        int32_t* rdx_64 = rdx_63 + data_143cee2e8
        
        if (rdx_63 == neg.q(data_143cee2e8))
            rdx_64 = nullptr
        else
            *rdx_64 = data_143a1c6b4
            rdx_64[1] = data_143a1c6b4
            *(rdx_64 + 8) = 0
            *(rdx_64 + 0x10) = 0
            rdx_64[6] = data_143a1c6bc
        
        *rdx_64 = *(data_143cee280 + (rsi_7 << 2))
        int32_t* rax_98
        
        if (r15_6 != r8_24)
            rax_98 = data_143cee280 + (sx.q(r15_6) << 2) + 4
        else
            rax_98 = &var_c4
        
        rdx_64[1] = *rax_98
        
        if (rdx_64 != &data_143cee260)
            int64_t rbx_12 = sx.q(data_143cee270)
            int64_t r12_4 = data_143cee268
            int32_t r8_25 = rdx_64[5]
            rdx_64[4] = rbx_12.d
            
            if (rbx_12.d != 0 || r8_25 != 0)
                sub_1409da0d0(&rdx_64[2], rbx_12.d, r8_25)
                memcpy(*(rdx_64 + 8), r12_4, (rbx_12 * 0x60).d)
            else
                rdx_64[5] = 0
            
            r8_24 = var_174_1
        
        r15_6 += 1
        rsi_7 += 1
    while (rsi_7 s< var_140)

var_160 = 0
var_158.q = 0
sub_1409b37f0(arg1, &data_143cee2e8, &var_160)
uint64_t rcx_69 = var_160

if (rcx_69 != 0)
    sub_140a74f90(rcx_69)

__builtin_memset(&var_160, 0, 0x20)
sub_1409b4ab0(arg1, &var_68, &var_160, &var_150)
uint64_t rcx_71 = var_160

if (rcx_71 != 0)
    sub_140a74f90(rcx_71)

uint64_t rcx_72 = var_150

if (rcx_72 != 0)
    sub_140a74f90(rcx_72)

sub_140992690(&arg1[0x7b], &var_e8)
int32_t* result = sub_140992690(&arg1[0x8f], &var_e8)
int32_t i_11 = i_13
void* const rsi_8 = var_68

if (i_11 != 0)
    int64_t* rdi_27 = rsi_8 + 8
    int32_t i_7
    
    do
        result = sub_1408464b0(rdi_27)
        rdi_27 = &rdi_27[4]
        i_7 = i_11
        i_11 -= 1
    while (i_7 != 1)

if (rsi_8 != 0)
    result = sub_140a74f90(rsi_8)

int32_t* rcx_77 = var_e8

if (rcx_77 != 0)
    result = sub_140a74f90(rcx_77)

__security_check_cookie(rax_1 ^ &var_1a8)
return result
