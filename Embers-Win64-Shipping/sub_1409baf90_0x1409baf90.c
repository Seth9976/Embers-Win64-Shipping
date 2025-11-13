// 函数: sub_1409baf90
// 地址: 0x1409baf90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t var_48 = arg5
int64_t r15 = 0
int128_t zmm7
int128_t var_58 = zmm7
void*** r13 = arg1
int64_t* rsi = arg2
int128_t zmm8
int128_t var_68 = zmm8
int128_t zmm9
int128_t var_78 = zmm9
int128_t zmm10
int128_t var_88 = zmm10
int128_t zmm11
int128_t var_98 = zmm11
int128_t zmm12
int128_t var_a8 = zmm12
int128_t zmm14 = arg3
arg6[1].d = 0

if (*(arg6 + 0xc) s<= 0xffffffff)
    sub_1405dadb0(arg6, 0)

TEB* gsbase
int64_t* r14 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))
int64_t* var_248 = r14

if (data_143cee760 s> *(r14 + 0x14))
    _Init_thread_header(&data_143cee760)
    
    if (data_143cee760 == 0xffffffff)
        __builtin_memset(&data_143cee710, 0, 0x2c)
        data_143cee73c = 0x80
        data_143cee740 = 0xffffffff
        data_143cee744 = 0
        data_143cee750 = 0
        data_143cee758 = 0
        atexit(sub_142cb9660)
        _Init_thread_footer(&data_143cee760)

if (data_143cee718 != data_143cee744)
    int32_t rax_3 = data_143cee71c
    data_143cee718 = 0
    
    if (rax_3 s< 0 && rax_3 != 0)
        sub_140638cc0(&data_143cee710, 0)
    
    data_143cee740 = 0xffffffff
    data_143cee744 = 0
    sub_140774790(&data_143cee720)
    int64_t rcx_2 = sx.q(data_143cee758)
    
    if (rcx_2 s> 0)
        void* rax_4 = data_143cee750
        void* rdi_1 = &data_143cee748
        
        if (rax_4 != 0)
            rdi_1 = rax_4
        
        __builtin_memset(rdi_1, 0xffffffff, rcx_2 << 2)

sub_140992690(&data_143cee710, rsi)

if (data_143cee778 s> *(r14 + 0x14))
    _Init_thread_header(&data_143cee778)
    
    if (data_143cee778 == 0xffffffff)
        data_143cee768 = 0
        data_143cee770.q = 0
        atexit(sub_142cb7a40)
        _Init_thread_footer(&data_143cee778)

int32_t rax_6 = data_143cee774
data_143cee770 = 0

if (rax_6 s< 0 && rax_6 != 0)
    sub_1405dadb0(&data_143cee768, 0)

if (data_143cee790 s> *(r14 + 0x14))
    _Init_thread_header(&data_143cee790)
    
    if (data_143cee790 == 0xffffffff)
        data_143cee780 = 0
        data_143cee788.q = 0
        atexit(sub_142cb7a60)
        _Init_thread_footer(&data_143cee790)

int32_t rax_8 = data_143cee78c
int32_t i_15 = data_143cee788

if (rax_8 s< 0)
    if (i_15 != 0)
        int64_t* rdi_5 = data_143cee780 + 8
        int32_t i
        
        do
            int64_t rcx_4 = *rdi_5
            
            if (rcx_4 != 0)
                sub_140a74f90(rcx_4)
            
            rdi_5 = &rdi_5[3]
            i = i_15
            i_15 -= 1
        while (i != 1)
        rax_8 = data_143cee78c
    
    data_143cee788 = 0
    
    if (rax_8 != 0)
        sub_1405a5130(&data_143cee780, 0)
else
    if (i_15 != 0)
        int64_t* rdi_3 = data_143cee780 + 8
        int32_t i_1
        
        do
            int64_t rcx_3 = *rdi_3
            
            if (rcx_3 != 0)
                sub_140a74f90(rcx_3)
            
            rdi_3 = &rdi_3[3]
            i_1 = i_15
            i_15 -= 1
        while (i_1 != 1)
    
    data_143cee788 = 0

if (data_143cee7a8 s> *(r14 + 0x14))
    _Init_thread_header(&data_143cee7a8)
    
    if (data_143cee7a8 == 0xffffffff)
        data_143cee798 = 0
        data_143cee7a0.q = 0
        atexit(sub_142cb7dc0)
        _Init_thread_footer(&data_143cee7a8)

int32_t rax_10 = data_143cee7a4
int32_t i_16 = data_143cee7a0

if (rax_10 s< 0)
    if (i_16 != 0)
        int64_t* rdi_9 = data_143cee798 + 8
        int32_t i_2
        
        do
            int64_t rcx_6 = *rdi_9
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rdi_9 = &rdi_9[3]
            i_2 = i_16
            i_16 -= 1
        while (i_2 != 1)
        rax_10 = data_143cee7a4
    
    data_143cee7a0 = 0
    
    if (rax_10 != 0)
        sub_1405a5130(&data_143cee798, 0)
else
    if (i_16 != 0)
        int64_t* rdi_7 = data_143cee798 + 8
        int32_t i_3
        
        do
            int64_t rcx_5 = *rdi_7
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rdi_7 = &rdi_7[3]
            i_3 = i_16
            i_16 -= 1
        while (i_3 != 1)
    
    data_143cee7a0 = 0

void* var_1d0
sub_14090aa40(&r13[5][0x2a], &var_1d0, data_143f35cc8)

if (data_143cee800 s> *(r14 + 0x14))
    _Init_thread_header(&data_143cee800)
    
    if (data_143cee800 == 0xffffffff)
        __builtin_memset(&data_143cee7b0, 0, 0x2c)
        data_143cee7dc = 0x80
        data_143cee7e0 = 0xffffffff
        data_143cee7e4 = 0
        data_143cee7f0 = 0
        data_143cee7f8 = 0
        atexit(sub_142cb8350)
        _Init_thread_footer(&data_143cee800)

sub_140908eb0(&data_143cee7b0)

if (data_143cee860 s> *(r14 + 0x14))
    _Init_thread_header(&data_143cee860)
    
    if (data_143cee860 == 0xffffffff)
        __builtin_memset(&data_143cee810, 0, 0x2c)
        data_143cee83c = 0x80
        data_143cee840 = 0xffffffff
        data_143cee844 = 0
        data_143cee850 = 0
        data_143cee858 = 0
        atexit(sub_142cb9e50)
        _Init_thread_footer(&data_143cee860)

if (data_143cee818 != data_143cee844)
    int32_t rax_14 = data_143cee81c
    data_143cee818 = 0
    
    if (rax_14 s< 0 && rax_14 != 0)
        sub_140638cc0(&data_143cee810, 0)
    
    data_143cee840 = 0xffffffff
    data_143cee844 = 0
    sub_140774790(&data_143cee820)
    int64_t rcx_9 = sx.q(data_143cee858)
    
    if (rcx_9 s> 0)
        void* rdx_2 = data_143cee850
        void* rdi_10 = &data_143cee848
        
        if (rdx_2 != 0)
            rdi_10 = rdx_2
        
        __builtin_memset(rdi_10, 0xffffffff, rcx_9 << 2)

uint32_t i_4 = 0
char var_278
int32_t var_264
int32_t i_14
int32_t var_250
int32_t var_1e8
int32_t* var_1e0

if (rsi[1].d s> 0)
    do
        int64_t rdi_11 = sx.q(*(*rsi + r15))
        
        if (data_143cee878 s> *(r14 + 0x14))
            _Init_thread_header(&data_143cee878)
            
            if (data_143cee878 == 0xffffffff)
                data_143cee868 = 0
                data_143cee870.q = 0
                atexit(sub_142cb94d0)
                _Init_thread_footer(&data_143cee878)
        
        sub_1409c3b80(r13, rdi_11.d, &data_143cee868)
        int32_t* j = data_143cee868
        
        for (void* rsi_1 = &j[sx.q(data_143cee870)]; j != rsi_1; j = &j[1])
            int64_t rcx_11 = sx.q(*j)
            bool cond:7_1 = data_143cee7b8 == data_143cee7e4
            var_264 = rcx_11.d
            
            if (cond:7_1)
            label_1409bb622:
                i_14 = 1
                sub_140998bf0(&data_143cee7b0, &var_264, &i_14)
            else
                void* rdx_4 = data_143cee7f0
                void* rax_21 = &data_143cee7e8
                
                if (rdx_4 != 0)
                    rax_21 = rdx_4
                
                int32_t rax_22 = *(rax_21 + ((sx.q(data_143cee7f8 - 1) & rcx_11) << 2))
                
                if (rax_22 == 0xffffffff)
                    goto label_1409bb622
                
                int64_t r9 = data_143cee7b0
                int64_t r8_3
                
                while (true)
                    r8_3 = sx.q(rax_22)
                    int64_t rdx_6 = r8_3 * 2
                    
                    if (*(r9 + (rdx_6 << 3)) == rcx_11.d)
                        break
                    
                    rax_22 = *(r9 + (rdx_6 << 3) + 8)
                    
                    if (rax_22 == 0xffffffff)
                        goto label_1409bb622
                
                if (rax_22 == 0xffffffff)
                    goto label_1409bb622
                
                int64_t r8_5 = r8_3 << 4
                void* r8_6 = r8_5 + r9
                
                if (r8_5 == neg.q(r9) || r8_6 == -4)
                    goto label_1409bb622
                
                *(r8_6 + 4) += 1
        
        if (data_143cee890 s> *(r14 + 0x14))
            _Init_thread_header(&data_143cee890)
            
            if (data_143cee890 == 0xffffffff)
                data_143cee880 = 0
                data_143cee888.q = 0
                atexit(sub_142cb9530)
                _Init_thread_footer(&data_143cee890)
        
        void* rbx = r13[5]
        int64_t r14_1 = rdi_11 * 5
        int64_t r9_1 = sx.q(*(*(rbx + 0xe0) + (r14_1 << 3) + 8))
        int32_t rcx_13 = data_143cee888
        
        if (r9_1.d s> rcx_13)
            bool cond:6_1 = r9_1.d s<= data_143cee88c
            rcx_13 = r9_1.d
            data_143cee888 = rcx_13
            
            if (not(cond:6_1))
                sub_1405a4cf0(&data_143cee880)
                rcx_13 = data_143cee888
        else if (r9_1.d s< rcx_13)
            int32_t rsi_3 = rcx_13 - r9_1.d
            
            if (rcx_13 != r9_1.d)
                int32_t rax_25 = rcx_13 - rsi_3
                
                if (rax_25 != r9_1.d)
                    int64_t rdi_12 = data_143cee880
                    memmove(rdi_12 + (r9_1 << 2), rdi_12 + (sx.q(rsi_3 + r9_1.d) << 2), 
                        (rax_25 - r9_1.d) << 2)
                    rcx_13 = data_143cee888
                
                data_143cee888 = rcx_13 - rsi_3
                sub_1405dac90(&data_143cee880)
                rcx_13 = data_143cee888
        
        int64_t rdi_13 = 0
        int64_t rax_28 = *(rbx + 0xe0)
        int32_t* r8_10 = *(rax_28 + (r14_1 << 3))
        uint64_t r9_3 = sx.q(*(rax_28 + (r14_1 << 3) + 8)) << 2 u>> 2
        
        if (r8_10 u> &r8_10[sx.q(*(rax_28 + (r14_1 << 3) + 8))])
            r9_3 = 0
        
        if (r9_3 != 0)
            do
                int64_t rax_31 = sx.q(*r8_10)
                r8_10 = &r8_10[1]
                *(data_143cee880 + (rdi_13 << 2)) = *(*(rbx + 0x38) + rax_31 * 0x18)
                rdi_13 += 1
            while (rdi_13 != r9_3)
            
            rcx_13 = data_143cee888
        
        for (int32_t* j_1 = data_143cee880; j_1 != &j_1[sx.q(rcx_13)]; j_1 = &j_1[1])
            int32_t rdi_14 = *j_1
            sub_1409afd50(&data_143cee810, &var_1e8)
            char var_270
            var_270.q = 0
            var_278.d = var_1e8
            *var_1e0 = rdi_14
            var_1e0[1] = 0xffffffff
            sub_1409b8a30(&data_143cee810, &var_250, rdi_14, var_1e0, var_278, nullptr)
        
        rsi = arg2
        i_4 += 1
        r14 = var_248
        r15 += 4
    while (i_4 s< rsi[1].d)

int32_t rdi_16 = data_143cee818 - data_143cee844

if (data_143cee8a8 s> *(r14 + 0x14))
    _Init_thread_header(&data_143cee8a8)
    
    if (data_143cee8a8 == 0xffffffff)
        data_143cee898 = 0
        data_143cee8a0.q = 0
        atexit(sub_142cb8740)
        _Init_thread_footer(&data_143cee8a8)

int32_t rax_36 = data_143cee8a4
data_143cee8a0 = 0

if (rax_36 s< 0 && rax_36 != 0)
    sub_1405dadb0(&data_143cee898, 0)
    rax_36 = data_143cee8a4

if (rdi_16 s> rax_36)
    sub_1405dadb0(&data_143cee898, rdi_16)

sub_1409b3af0(r13, rdi_16, &data_143cee898)

if (data_143cee900 s> *(r14 + 0x14))
    _Init_thread_header(&data_143cee900)
    
    if (data_143cee900 == 0xffffffff)
        __builtin_memset(&data_143cee8b0, 0, 0x2c)
        data_143cee8dc = 0x80
        data_143cee8e0 = 0xffffffff
        data_143cee8e4 = 0
        data_143cee8f0 = 0
        data_143cee8f8 = 0
        atexit(sub_142cba120)
        _Init_thread_footer(&data_143cee900)

sub_140908eb0(&data_143cee8b0)
void* r14_2 = var_1d0
int32_t i_5 = 0
int128_t zmm15 = 0x322bcc77
int64_t var_1f8
uint128_t zmm13 = zx.o(var_1f8)
i_14 = 0
int64_t var_1d8 = 0
int32_t var_1f0
int32_t var_238 = var_1f0
char i_13
int32_t j_11
int32_t j_12
int128_t var_188
int128_t var_158
int128_t var_148
int32_t rax_139

do
    var_264 = 0
    int64_t rcx_21 = 0
    i_4.b = i_5 == 0
    int64_t var_230_1 = 0
    bool cond:10_1 = rsi[1].d s<= 0
    i_13 = i_4.b
    
    if (cond:10_1)
        rax_139 = rsi[1].d
    else
        int32_t rdx_59
        
        do
            int64_t rsi_5 = sx.q(*(*rsi + (rcx_21 << 2)))
            void* rcx_22 = r13[5]
            int64_t rbx_1 = rsi_5 * 5
            var_250 = *(*(rcx_22 + 0xe0) + (rbx_1 << 3) + 0x20)
            
            if (arg4 == 0)
                sub_140908eb0(&data_143cee8b0)
                rcx_22 = r13[5]
            
            int32_t rdx_15 = 0
            int64_t rcx_23 = 0
            int32_t var_254_1 = 0
            int64_t var_1c0_1 = 0
            int64_t rax_42 = sx.q(*(*(rcx_22 + 0xe0) + (rbx_1 << 3) + 8))
            
            if (rax_42 s> 0)
                int64_t rax_43 = rsi_5 * 5
                int64_t var_1b8_1 = rax_43
                
                do
                    int64_t* r10_1 = r13[5]
                    int64_t r8_12 = r10_1[0x1c]
                    int32_t r11_1 = *(r8_12 + (rax_43 << 3) + 8)
                    int32_t var_24c
                    uint64_t rcx_24
                    uint64_t r8_15
                    char var_266
                    
                    if (rdx_15 s< r11_1)
                        int64_t r8_13 = *(r8_12 + (rax_43 << 3))
                        int64_t r9_5 = r10_1[7]
                        int32_t rdi_17 = *(r9_5 + sx.q(*(r8_13 + (rcx_23 << 2))) * 0x18)
                        sub_141cdf680(r10_1, &var_24c, rdi_17, 
                            *(r9_5
                                + sx.q(*(r8_13 + (sx.q(mods.dp.d(sx.q(rdx_15 + 1), r11_1)) << 2)))
                                * 0x18))
                        rcx_24 = sx.q(var_24c)
                        
                        if (rcx_24.d == data_143a1c6bc)
                            r8_15 = zx.q(var_266)
                        else
                            r8_15.b = *(r13[5][0xe] + rcx_24 * 0x18) == rdi_17
                            var_266 = r8_15.b
                    else
                        rcx_24 = zx.q(data_143a1c6bc)
                        var_24c = rcx_24.d
                        r8_15 = zx.q(var_266)
                    
                    if (arg4 == 0)
                        rbx_1.b = 0
                    else
                        void* rax_56
                        
                        if (data_143cee7b8 == data_143cee7e4)
                        label_1409bbb4c:
                            rax_56 = nullptr
                        else
                            void* rdx_21 = data_143cee7f0
                            void* rax_54 = &data_143cee7e8
                            
                            if (rdx_21 != 0)
                                rax_54 = rdx_21
                            
                            int32_t rax_55 =
                                *(rax_54 + ((sx.q(data_143cee7f8 - 1) & sx.q(rcx_24.d)) << 2))
                            
                            if (rax_55 == 0xffffffff)
                            label_1409bbb4c_1:
                                rax_56 = nullptr
                            else
                                int32_t* rdx_23
                                
                                while (true)
                                    int64_t rdi_20 = data_143cee7b0
                                    rdx_23 = sx.q(rax_55) << 4
                                    
                                    if (*(rdx_23 + rdi_20) == rcx_24.d)
                                        break
                                    
                                    rax_55 = *(rdx_23 + rdi_20 + 8)
                                    
                                    if (rax_55 == 0xffffffff)
                                        goto label_1409bbb4c_2
                                
                                if (rax_55 == 0xffffffff)
                                label_1409bbb4c_2:
                                    rax_56 = nullptr
                                else
                                    rax_56 = data_143cee7b0 + rdx_23
                        
                        if (*(rax_56 + 4) u<= 1)
                            rbx_1.b = 0
                        else
                            rbx_1.b = 1
                    
                    char var_268_1 = rbx_1.b
                    
                    if (rbx_1.b == i_4.b)
                        int64_t rdx_24 = r13[5][0xe]
                        int64_t rcx_27 = sx.q(rcx_24.d) * 3
                        int32_t j_20 = *(rdx_24 + (rcx_27 << 3))
                        int32_t j_19 = *(rdx_24 + (rcx_27 << 3) + 4)
                        j_11 = j_19
                        int32_t j_22 = j_19
                        j_12 = j_20
                        int32_t j_21 = j_20
                        
                        if (r8_15.b != 0)
                            j_12 = j_19
                            j_11 = j_20
                            int32_t j_23 = j_20
                            j_21 = j_19
                        
                        if (rbx_1.b == 0)
                            int64_t rdi_21 = sx.q(data_143cee788)
                            int32_t rax_61 = (rdi_21 + 1).d
                            bool cond:14_1 = rax_61 s<= data_143cee78c
                            data_143cee788 = rax_61
                            
                            if (not(cond:14_1))
                                sub_1405a4df0(&data_143cee780)
                            
                            int64_t rax_62 = data_143cee780
                            int64_t rcx_28 = rdi_21 * 3
                            arg5 = data_142d3f660
                            char var_178_1 = 6
                            char var_13c_1 = 1
                            *(rax_62 + (rcx_28 << 3)) = 0
                            *(rax_62 + (rcx_28 << 3) + 8) = 0
                            *(rax_62 + (rcx_28 << 3) + 0x10) = 0
                            int64_t var_138_1 = 0
                            int64_t rdx_26 = sx.q(data_143cee788 - 1) * 3
                            int64_t rcx_30 = data_143cee780
                            void* rdi_22 = rcx_30 + (rdx_26 << 3)
                            *(rcx_30 + (rdx_26 << 3)) = var_24c
                            int64_t rbx_2 = sx.q(*(rdi_22 + 0x10))
                            int32_t rax_66 = (rbx_2 + 1).d
                            *(rdi_22 + 0x10) = rax_66
                            
                            if (rax_66 s> *(rdi_22 + 0x14))
                                sub_14090a6a0(rdi_22 + 8)
                            
                            int64_t rax_67 = data_143f36118
                            rbx_1 = zx.q(var_268_1)
                            int64_t* rcx_34 = rbx_2 * 0x60 + *(rdi_22 + 8)
                            *(rcx_34 + 0x10) = var_178_1.o
                            *rcx_34 = rax_67
                            *(rcx_34 + 0x20) = arg5
                            rcx_34[1].d = 0
                            *(rcx_34 + 0x30) = var_158
                            *(rcx_34 + 0x40) = var_148
                            *(rcx_34 + 0x50) = var_138_1.o
                        
                        int32_t rax_68 = data_143a1c6b0
                        int64_t j_2 = 0
                        int32_t var_210 = rax_68
                        int64_t j_13 = 0
                        int32_t* var_208
                        
                        do
                            int64_t rcx_35 = sx.q(*(&j_21 + j_2))
                            bool cond:18_1 = data_143cee8b8 == data_143cee8e4
                            int32_t var_240 = rcx_35.d
                            int32_t rcx_40
                            
                            if (cond:18_1)
                            label_1409bbd32:
                                int32_t rcx_36 = *(data_143cee898 + (var_1d8 << 2))
                                var_1d8 += 1
                                int32_t var_234 = rcx_36
                                int32_t* rax_75 = sub_140998bf0(&data_143cee8b0, &var_240, &var_234)
                                int64_t* rcx_37 = *(r14_2 + 0x18)
                                int32_t* r13_1 = rax_75
                                int64_t rdi_26 = sx.q(var_240)
                                var_208 = rax_75
                                int64_t r8_17 = *rcx_37
                                int64_t rdx_34 = rdi_26 * 3
                                int64_t zmm0_2 = *(r8_17 + (rdx_34 << 2))
                                int32_t rcx_38 = *(r8_17 + (rdx_34 << 2) + 8)
                                int32_t rbx_6
                                int128_t zmm0_1
                                int128_t zmm1_1
                                int128_t zmm2
                                int128_t zmm3
                                
                                if (rbx_1.b == 0)
                                    zmm13 = sub_1409b31b0(arg1, &var_1e8, rsi_5.d)
                                    arg5.d = var_1e8.d f* zmm14.d
                                    zmm0_1.d = var_1e0.d.d f* zmm14.d
                                    arg5.d = arg5.d f+ zmm0_2.d
                                    int32_t var_1e4
                                    zmm2.d = var_1e4.d f* zmm14.d
                                    zmm3.d = rcx_38.d f+ zmm0_1.d
                                    zmm1_1.d = zmm0_2:4.d.d f+ zmm2.d
                                    rbx_6 = zmm3.d
                                    arg5 = _mm_unpacklo_ps(arg5, zmm1_1.q)
                                else
                                    zmm7 = data_143dbb1f8
                                    zmm8 = data_143dbb1fc
                                    zmm9 = data_143dbb200
                                    void* rbx_3 = *(gsbase->ThreadLocalStoragePointer
                                        + (zx.q(data_14401b1a0) << 3))
                                    int64_t r13_2
                                    
                                    if (data_143cee918 s<= *(rbx_3 + 0x14))
                                        r13_2 = 0
                                    else
                                        _Init_thread_header(&data_143cee918)
                                        r13_2 = 0
                                        
                                        if (data_143cee918 == 0xffffffff)
                                            data_143cee908 = 0
                                            data_143cee910 = 0
                                            atexit(sub_142cb80a0)
                                            _Init_thread_footer(&data_143cee918)
                                    
                                    sub_1409c46d0(arg1, rdi_26.d, &data_143cee908)
                                    
                                    if (data_143cee930 s> *(rbx_3 + 0x14))
                                        _Init_thread_header(&data_143cee930)
                                        
                                        if (data_143cee930 == 0xffffffff)
                                            data_143cee920 = 0
                                            data_143cee928.q = 0
                                            atexit(&data_142cb8980)
                                            _Init_thread_footer(&data_143cee930)
                                    
                                    int32_t r9_7 = data_143cee92c
                                    int32_t rbx_4 = 0
                                    data_143cee928 = 0
                                    
                                    if (r9_7 s< 0 && r9_7 != 0)
                                        sub_1405dadb0(&data_143cee920, 0)
                                        r9_7 = data_143cee92c
                                        rbx_4 = data_143cee928
                                    
                                    int32_t* r12 = data_143cee908
                                    void* rcx_42 = &r12[sx.q(data_143cee910.d)]
                                    uint64_t rax_86 = (rcx_42 - r12 + 3) u>> 2
                                    
                                    if (r12 u> rcx_42)
                                        rax_86 = 0
                                    
                                    if (rax_86 != 0)
                                        void* r8_18 = data_143cee750
                                        
                                        do
                                            int64_t rdi_27 = sx.q(*r12)
                                            
                                            if (data_143cee718 != data_143cee744)
                                                void* rdx_36 = &data_143cee748
                                                
                                                if (r8_18 != 0)
                                                    rdx_36 = r8_18
                                                
                                                int64_t rcx_46
                                                int64_t rdx_37
                                                
                                                for (int32_t k = *(rdx_36 + ((
                                                        sx.q(data_143cee758 - 1) & rdi_27) << 2)); 
                                                        k != 0xffffffff; 
                                                        k = *(rcx_46 + (rdx_37 << 2) + 4))
                                                    rdx_37 = sx.q(k) * 3
                                                    rcx_46 = data_143cee710
                                                    
                                                    if (*(rcx_46 + (rdx_37 << 2)) == rdi_27.d)
                                                        if (k != 0xffffffff)
                                                            data_143cee928 = rbx_4 + 1
                                                            
                                                            if (rbx_4 + 1 s> r9_7)
                                                                sub_1405a4cf0(&data_143cee920)
                                                            
                                                            *(data_143cee920
                                                                + (sx.q(rbx_4) << 2)) = rdi_27.d
                                                            int32_t var_128
                                                            zmm7, zmm8, zmm9, zmm13 =
                                                                sub_1409b31b0(arg1, &var_128, rdi_27.d)
                                                            r8_18 = data_143cee750
                                                            r9_7 = data_143cee92c
                                                            zmm7.d = zmm7.d f+ var_128
                                                            int32_t var_124
                                                            zmm8.d = zmm8.d f+ var_124
                                                            int32_t var_120
                                                            zmm9.d = zmm9.d f+ var_120
                                                            rbx_4 = data_143cee928
                                                        
                                                        break
                                            
                                            r12 = &r12[1]
                                            r13_2 += 1
                                        while (r13_2 != rax_86)
                                        
                                        r14_2 = var_1d0
                                    
                                    zmm2.d = zmm7.d f* zmm7.d
                                    zmm0_1.d = zmm8.d f* zmm8.d
                                    zmm1_1.d = zmm9.d f* zmm9.d
                                    zmm2.d = zmm2.d f+ zmm0_1.d
                                    zmm2.d = zmm2.d f+ zmm1_1.d
                                    
                                    if (not(zmm2.d f<= zmm15.d))
                                        zmm3.d = zmm2.d
                                        int128_t zmm5_1 = _mm_rsqrt_ss(zmm3.d, zmm3.d)
                                        zmm3.d = zmm3.d f* 0.5f
                                        zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                        zmm2.d = zmm3.d f* zmm0_1.d
                                        zmm1_1.d = 0.5f f- zmm2.d
                                        zmm0_1.d = zmm5_1.d f* zmm1_1.d
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        zmm0_1.d = zmm5_1.d f* zmm5_1.d
                                        zmm3.d = zmm3.d f* zmm0_1.d
                                        zmm0_1.d = zmm5_1.d f* (0.5f f- zmm3.d)
                                        zmm5_1.d = zmm5_1.d f+ zmm0_1.d
                                        var_240 = zmm5_1.d
                                        zmm7.d = zmm7.d f* zmm5_1.d
                                        zmm8.d = zmm8.d f* zmm5_1.d
                                        zmm9.d = zmm9.d f* zmm5_1.d
                                    
                                    int64_t r12_1 = 0
                                    int32_t* rbx_5 = data_143cee920
                                    void* rcx_49 = &rbx_5[sx.q(rbx_4)]
                                    uint64_t rdi_31 = (rcx_49 - rbx_5 + 3) u>> 2
                                    
                                    if (rbx_5 u> rcx_49)
                                        rdi_31 = 0
                                    
                                    if (rdi_31 != 0)
                                        do
                                            int32_t var_198
                                            arg5, zmm7, zmm8, zmm9, zmm10, zmm11, zmm12, zmm13 =
                                                sub_1409b31b0(arg1, &var_198, *rbx_5)
                                            int32_t var_194
                                            zmm0_1 = var_194
                                            int32_t var_18c
                                            zmm2.d = var_18c.d f+ zmm14.d
                                            zmm1_1 = var_198
                                            zmm3 = zmm2
                                            float zmm5_2 = zmm2.d
                                            zmm2.d = zmm2.d f* zmm1_1.d
                                            float var_190
                                            zmm3.d = zmm3.d f* var_190
                                            zmm2.d = zmm2.d f- zmm12.d
                                            zmm3.d = zmm3.d f- zmm10.d
                                            zmm2.d = zmm2.d f* zmm1_1.d
                                            zmm3.d = zmm3.d f* var_190
                                            zmm5_2 = (zmm5_2 f* zmm0_1.d f- zmm11.d) f* zmm0_1.d
                                                f+ zmm2.d
                                            zmm2.d = zmm8.d f* zmm0_1.d
                                            zmm0_1.d = zmm7.d f* zmm1_1.d
                                            zmm1_1.d = zmm9.d f* var_190
                                            zmm2.d = zmm2.d f+ zmm0_1.d
                                            zmm2.d = zmm2.d f+ zmm1_1.d
                                            zmm5_2 = (zmm5_2 f+ zmm3.d) f/ zmm2.d
                                            zmm2.d = zmm7.d f* zmm5_2
                                            zmm1_1.d = zmm8.d f* zmm5_2
                                            zmm2.d = zmm2.d f+ zmm12.d
                                            zmm0_1.d = zmm9.d f* zmm5_2
                                            float zmm4_2 = zmm11.d f+ zmm1_1.d
                                            zmm3.d = zmm10.d f+ zmm0_1.d
                                            var_1f8.d = zmm2.d
                                            zmm2.d = zmm2.d f- zmm12.d
                                            var_1f8:4.d = zmm4_2
                                            zmm4_2 = zmm4_2 f- zmm11.d
                                            int32_t var_1f0_1 = zmm3.d
                                            zmm3.d = zmm3.d f- zmm10.d
                                            zmm2.d = zmm2.d f* zmm2.d
                                            zmm3.d = zmm3.d f* zmm3.d
                                            zmm4_2 = zmm4_2 * zmm4_2 f+ zmm2.d f+ zmm3.d
                                            
                                            if (not(zmm4_2 f>= arg5.d))
                                                zmm13 = zx.o(var_1f8)
                                                var_238 = var_1f0_1
                                            
                                            rbx_5 = &rbx_5[1]
                                            _mm_min_ss(arg5.d, zmm4_2)
                                            r12_1 += 1
                                        while (r12_1 != rdi_31)
                                    
                                    rbx_6 = var_238
                                    arg5 = zmm13
                                    j_2 = j_13
                                    r13_1 = var_208
                                int64_t rdi_32 = sx.q(data_143cee7a0)
                                int32_t rax_94 = (rdi_32 + 1).d
                                bool cond:25_1 = rax_94 s<= data_143cee7a4
                                data_143cee7a0 = rax_94
                                
                                if (not(cond:25_1))
                                    sub_1405a4df0(&data_143cee798)
                                
                                int64_t rax_95 = data_143cee798
                                int64_t rcx_52 = rdi_32 * 3
                                zmm7 = data_142d3f660
                                var_158:8.d = rbx_6
                                char var_178_2 = 2
                                *(rax_95 + (rcx_52 << 3)) = 0
                                *(rax_95 + (rcx_52 << 3) + 8) = 0
                                *(rax_95 + (rcx_52 << 3) + 0x10) = 0
                                var_158.q = arg5.q
                                int64_t var_138_2 = 0
                                int64_t rdx_43 = sx.q(data_143cee7a0 - 1) * 3
                                int64_t rcx_54 = data_143cee798
                                void* rdi_33 = rcx_54 + (rdx_43 << 3)
                                *(rcx_54 + (rdx_43 << 3)) = var_234
                                int64_t rbx_7 = sx.q(*(rdi_33 + 0x10))
                                int32_t rax_99 = (rbx_7 + 1).d
                                *(rdi_33 + 0x10) = rax_99
                                
                                if (rax_99 s> *(rdi_33 + 0x14))
                                    sub_14090a6a0(rdi_33 + 8)
                                
                                int64_t rax_100 = data_143f35cc8
                                int64_t* rcx_58 = rbx_7 * 0x60 + *(rdi_33 + 8)
                                *(rcx_58 + 0x10) = var_178_2.o
                                *rcx_58 = rax_100
                                *(rcx_58 + 0x20) = zmm7
                                rcx_58[1].d = 0
                                *(rcx_58 + 0x30) = var_158
                                *(rcx_58 + 0x40) = var_148
                                *(rcx_58 + 0x50) = var_138_2.o
                                rcx_40 = *r13_1
                            else
                                void* rdx_28 = data_143cee8f0
                                void* rax_72 = &data_143cee8e8
                                
                                if (rdx_28 != 0)
                                    rax_72 = rdx_28
                                
                                int32_t rax_73 =
                                    *(rax_72 + ((sx.q(data_143cee8f8 - 1) & rcx_35) << 2))
                                
                                if (rax_73 == 0xffffffff)
                                    goto label_1409bbd32
                                
                                int32_t* rdx_30
                                
                                while (true)
                                    int64_t rdi_25 = data_143cee8b0
                                    rdx_30 = sx.q(rax_73) << 4
                                    
                                    if (*(rdx_30 + rdi_25) == rcx_35.d)
                                        break
                                    
                                    rax_73 = *(rdx_30 + rdi_25 + 8)
                                    
                                    if (rax_73 == 0xffffffff)
                                        goto label_1409bbd32
                                
                                if (rax_73 == 0xffffffff)
                                    goto label_1409bbd32
                                
                                void* rax_78 = data_143cee8b0
                                void* rax_79 = rax_78 + rdx_30
                                
                                if (rax_78 == neg.q(rdx_30) || rax_79 == -4)
                                    goto label_1409bbd32
                                
                                rcx_40 = *(rax_79 + 4)
                            
                            rbx_1 = zx.q(var_268_1)
                            *(&var_210 + j_2) = rcx_40
                            j_2 += 4
                            j_13 = j_2
                        while (j_2 s< 8)
                        
                        int32_t r15_3 = var_250
                        
                        if (rbx_1.b != 0)
                            r13 = arg1
                        else
                            if (data_143cee948 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer
                                    + (zx.q(data_14401b1a0) << 3))))
                                _Init_thread_header(&data_143cee948)
                                
                                if (data_143cee948 == 0xffffffff)
                                    data_143cee938 = 0
                                    data_143cee940.q = 0
                                    atexit(sub_142cb8d00)
                                    _Init_thread_footer(&data_143cee948)
                            
                            int32_t j_14 = data_143cee940
                            int32_t rbx_8
                            
                            if (data_143cee944 s>= 4)
                                if (j_14 != 0)
                                    int64_t* rdi_35 = data_143cee938 + 8
                                    int32_t j_3
                                    
                                    do
                                        int64_t rcx_61 = *rdi_35
                                        
                                        if (rcx_61 != 0)
                                            sub_140a74f90(rcx_61)
                                        
                                        rdi_35 = &rdi_35[3]
                                        j_3 = j_14
                                        j_14 -= 1
                                    while (j_3 != 1)
                                
                                rbx_8 = 0
                                goto label_1409bc3dd
                            
                            if (j_14 != 0)
                                int64_t* rdi_41 = data_143cee938 + 8
                                int32_t j_4
                                
                                do
                                    int64_t rcx_79 = *rdi_41
                                    
                                    if (rcx_79 != 0)
                                        sub_140a74f90(rcx_79)
                                    
                                    rdi_41 = &rdi_41[3]
                                    j_4 = j_14
                                    j_14 -= 1
                                while (j_4 != 1)
                            
                            bool cond:24_1 = data_143cee944 == 4
                            rbx_8 = 0
                            data_143cee940 = 0
                            
                            if (cond:24_1)
                            label_1409bc3dd:
                                int32_t j_16 = 4 - rbx_8
                                int32_t rax_103 = rbx_8 + j_16
                                bool cond:27_1 = rax_103 s<= data_143cee944
                                data_143cee940 = rax_103
                                
                                if (not(cond:27_1))
                                    sub_1405a4df0(&data_143cee938)
                                
                                int32_t* rdx_46 = data_143cee938 + sx.q(rbx_8) * 0x18
                                
                                if (j_16 != 0)
                                    void* rcx_63 = &rdx_46[5]
                                    int32_t j_5
                                    
                                    do
                                        rcx_63 += 0x18
                                        *rdx_46 = data_143a1c6b8
                                        rdx_46 = &rdx_46[6]
                                        *(rcx_63 - 0x28) = data_143a1c6b4
                                        *(rcx_63 - 0x24) = 0
                                        *(rcx_63 - 0x1c) = 0
                                        j_5 = j_16
                                        j_16 -= 1
                                    while (j_5 != 1)
                            else
                                sub_1405a5130(&data_143cee938, 4)
                                rbx_8 = data_143cee940
                                
                                if (rbx_8 s< 4)
                                    goto label_1409bc3dd
                                
                                if (rbx_8 s> 4)
                                    sub_1409d8830(&data_143cee938, 4, rbx_8 - 4, 0)
                            
                            int32_t j_7 = j_11
                            int32_t j_6 = j_12
                            *(data_143cee938 + 4) = j_7
                            *(data_143cee938 + 0x1c) = j_6
                            *(data_143cee938 + 0x34) = var_210
                            *(data_143cee938 + 0x4c) = rax_68
                            void* r10_2 = arg1[5]
                            int64_t rax_112 = *(r10_2 + 0xe0)
                            int32_t* rdi_36 = *(rax_112 + (var_1b8_1 << 3))
                            int32_t* rdx_47 = rdi_36
                            void* r8_22 = &rdi_36[sx.q(*(rax_112 + (var_1b8_1 << 3) + 8))]
                            
                            if (rdi_36 == r8_22)
                            label_1409bc4cb:
                                rdx_47 = nullptr
                            else
                                while (*(*(r10_2 + 0x38) + sx.q(*rdx_47) * 0x18) != j_6)
                                    rdx_47 = &rdx_47[1]
                                    
                                    if (rdx_47 == r8_22)
                                        goto label_1409bc4cb
                            
                            int32_t* rax_115 = &data_143a1c6b8
                            
                            if (rdx_47 != 0)
                                rax_115 = rdx_47
                            
                            int32_t rbx_9 = *rax_115
                            
                            if (rdi_36 == r8_22)
                            label_1409bc50d:
                                rdi_36 = nullptr
                            else
                                while (*(*(r10_2 + 0x38) + sx.q(*rdi_36) * 0x18) != j_7)
                                    rdi_36 = &rdi_36[1]
                                    
                                    if (rdi_36 == r8_22)
                                        goto label_1409bc50d
                            
                            int32_t* rax_117 = &data_143a1c6b8
                            
                            if (rdi_36 != 0)
                                rax_117 = rdi_36
                            
                            int32_t rdi_37 = *rax_117
                            int32_t var_100_1 = rdi_37
                            var_208.o = (data_143cee938 + 8).o
                            sub_14099a420(r10_2 + 0x1a8, &var_208)
                            int32_t var_f0_1 = rbx_9
                            var_208.o = (data_143cee938 + 0x20).o
                            sub_14099a420(&arg1[5][0x35], &var_208)
                            var_188.q = data_143cee938 + 0x38
                            var_188:8.d = rbx_9
                            var_208.o = var_188
                            sub_14099a420(&arg1[5][0x35], &var_208)
                            int32_t var_1a0_1 = rdi_37
                            var_208.o = (data_143cee938 + 0x50).o
                            sub_14099a420(&arg1[5][0x35], &var_208)
                            
                            if (data_143cee960 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer
                                    + (zx.q(data_14401b1a0) << 3))))
                                _Init_thread_header(&data_143cee960)
                                
                                if (data_143cee960 == 0xffffffff)
                                    data_143cee950 = 0
                                    data_143cee958.q = 0
                                    atexit(sub_142cb9a10)
                                    _Init_thread_footer(&data_143cee960)
                            
                            int32_t j_15 = data_143cee958
                            int32_t rdi_44
                            
                            if (data_143cee95c s< 0)
                                if (j_15 != 0)
                                    int64_t* rdi_43 = data_143cee950 + 8
                                    int32_t j_8
                                    
                                    do
                                        sub_1408464b0(rdi_43)
                                        rdi_43 = &rdi_43[4]
                                        j_8 = j_15
                                        j_15 -= 1
                                    while (j_8 != 1)
                                
                                bool cond:35_1 = data_143cee95c == 0
                                rdi_44 = 0
                                data_143cee958 = 0
                                
                                if (not(cond:35_1))
                                    sub_1405a51b0(&data_143cee950, 0)
                                    rdi_44 = data_143cee958
                            else
                                if (j_15 != 0)
                                    int64_t* rdi_39 = data_143cee950 + 8
                                    int32_t j_9
                                    
                                    do
                                        sub_1408464b0(rdi_39)
                                        rdi_39 = &rdi_39[4]
                                        j_9 = j_15
                                        j_15 -= 1
                                    while (j_9 != 1)
                                
                                rdi_44 = 0
                            
                            bool cond:36_1 = rdi_44 + 1 s<= data_143cee95c
                            data_143cee958 = rdi_44 + 1
                            
                            if (not(cond:36_1))
                                sub_1405c4e40(&data_143cee950)
                            
                            int64_t rdi_46 = sx.q(rdi_44) << 5
                            int32_t* rdi_47 = rdi_46 + data_143cee950
                            
                            if (rdi_46 == neg.q(data_143cee950))
                                rdi_47 = nullptr
                            else
                                *rdi_47 = data_143a1c6c4
                                *(rdi_47 + 8) = 0
                                *(rdi_47 + 0x10) = 0
                                rdi_47[6] = data_143a1c6c8
                                rdi_47[7].b = 0
                            
                            *rdi_47 = r15_3
                            
                            if (rdi_47 != &data_143cee930)
                                int32_t j_17 = rdi_47[4]
                                
                                if (j_17 != 0)
                                    int64_t* rbx_11 = *(rdi_47 + 8) + 8
                                    int32_t j_10
                                    
                                    do
                                        int64_t rcx_81 = *rbx_11
                                        
                                        if (rcx_81 != 0)
                                            sub_140a74f90(rcx_81)
                                        
                                        rbx_11 = &rbx_11[3]
                                        j_10 = j_17
                                        j_17 -= 1
                                    while (j_10 != 1)
                                
                                var_278.d = 0
                                sub_1409970d0(&rdi_47[2], data_143cee938, data_143cee940, 
                                    rdi_47[5], 0)
                            
                            rdi_47[7].b = 3
                            
                            if (data_143cee978 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer
                                    + (zx.q(data_14401b1a0) << 3))))
                                _Init_thread_header(&data_143cee978)
                                
                                if (data_143cee978 == 0xffffffff)
                                    data_143cee968 = 0
                                    data_143cee970.q = 0
                                    atexit(sub_142cb8cc0)
                                    _Init_thread_footer(&data_143cee978)
                            
                            int32_t rax_132 = data_143cee974
                            data_143cee970 = 0
                            
                            if (rax_132 s< 0 && rax_132 != 0)
                                sub_1405dadb0(&data_143cee968, 0)
                            
                            if (data_143cee990 s> *(var_248 + 0x14))
                                _Init_thread_header(&data_143cee990)
                                
                                if (data_143cee990 == 0xffffffff)
                                    data_143cee980 = 0
                                    data_143cee988.q = 0
                                    atexit(sub_142cb8ae0)
                                    _Init_thread_footer(&data_143cee990)
                            
                            int32_t rax_135 = data_143cee98c
                            data_143cee988 = 0
                            
                            if (rax_135 s< 0 && rax_135 != 0)
                                sub_1405dadb0(&data_143cee980, 0)
                            
                            r13 = arg1
                            zmm13, zmm14, zmm15 = sub_1409b4ab0(r13, &data_143cee950, 
                                &data_143cee968, &data_143cee980)
                            rbx_1 = sx.q(data_143cee770)
                            int32_t rdi_48 = *data_143cee968
                            int32_t rax_137 = (rbx_1 + 1).d
                            bool cond:39_1 = rax_137 s<= data_143cee774
                            data_143cee770 = rax_137
                            
                            if (not(cond:39_1))
                                sub_1405a4cf0(&data_143cee768)
                            
                            *(data_143cee768 + (rbx_1 << 2)) = rdi_48
                        
                        i_4 = zx.d(i_13)
                    
                    rdx_15 = var_254_1 + 1
                    rax_43 = var_1b8_1
                    rcx_23 = var_1c0_1 + 1
                    var_254_1 = rdx_15
                    var_1c0_1 = rcx_23
                while (rcx_23 s< rax_42)
            
            rdx_59 = var_264 + 1
            rsi = arg2
            rcx_21 = var_230_1 + 1
            var_264 = rdx_59
            var_230_1 = rcx_21
            rax_139 = rsi[1].d
        while (rdx_59 s< rax_139)
    
    i_5 = i_14 + 1
    i_14 = i_5
while (i_5 s< 2)

var_264 = 0

if (rax_139 s> 0)
    int64_t* r14_4 = var_248
    int64_t rcx_89 = 0
    int64_t var_230_2 = 0
    
    while (true)
        int64_t rsi_6 = sx.q(*(*rsi + (rcx_89 << 2)))
        int32_t var_254_2 = rsi_6.d
        int64_t r13_5 = rsi_6 * 5
        bool cond:11_1 = data_143cee9a8 s<= *(r14_4 + 0x14)
        int32_t rdi_49 = *(r13[5][0x1c] + (r13_5 << 3) + 0x20)
        var_250 = rdi_49
        
        if (not(cond:11_1))
            _Init_thread_header(&data_143cee9a8)
            
            if (data_143cee9a8 == 0xffffffff)
                data_143cee998 = 0
                data_143cee9a0 = 0
                atexit(sub_142cb9600)
                _Init_thread_footer(&data_143cee9a8)
        
        sub_1409c3d60(arg1, rsi_6.d, &data_143cee998)
        
        if (data_143cee9c0 s> *(r14_4 + 0x14))
            _Init_thread_header(&data_143cee9c0)
            
            if (data_143cee9c0 == 0xffffffff)
                data_143cee9b0 = 0
                data_143cee9b8.q = 0
                atexit(sub_142cb8b80)
                _Init_thread_footer(&data_143cee9c0)
        
        int32_t r10_3 = data_143cee9a0.d
        int32_t r15_4 = r10_3
        int32_t i_18 = data_143cee9b8
        int32_t rbx_14
        int32_t i_9
        
        if (r10_3 s> data_143cee9bc)
            if (i_18 != 0)
                int64_t* rbx_16 = data_143cee9b0 + 8
                int32_t i_6
                
                do
                    int64_t rcx_93 = *rbx_16
                    
                    if (rcx_93 != 0)
                        sub_140a74f90(rcx_93)
                    
                    rbx_16 = &rbx_16[3]
                    i_6 = i_18
                    i_18 -= 1
                while (i_6 != 1)
                r10_3 = data_143cee9a0.d
            
            bool cond:13_1 = data_143cee9bc == r15_4
            rbx_14 = 0
            data_143cee9b8 = 0
            
            if (cond:13_1)
                i_9 = 0
            else
                sub_1405a5130(&data_143cee9b0, r15_4)
                r10_3 = data_143cee9a0.d
                i_9 = 0
                rbx_14 = data_143cee9b8
        else
            if (i_18 != 0)
                int64_t* rbx_13 = data_143cee9b0 + 8
                int32_t i_7
                
                do
                    int64_t rcx_92 = *rbx_13
                    
                    if (rcx_92 != 0)
                        sub_140a74f90(rcx_92)
                    
                    rbx_13 = &rbx_13[3]
                    i_7 = i_18
                    i_18 -= 1
                while (i_7 != 1)
                r10_3 = data_143cee9a0.d
            
            i_9 = 0
            rbx_14 = 0
            data_143cee9b8 = 0
        
        if (r10_3 s> rbx_14)
            int32_t i_19 = r10_3 - rbx_14
            int32_t rax_144 = rbx_14 + i_19
            bool cond:16_1 = rax_144 s<= data_143cee9bc
            data_143cee9b8 = rax_144
            
            if (not(cond:16_1))
                sub_1405a4df0(&data_143cee9b0)
                r10_3 = data_143cee9a0.d
            
            int32_t* rdx_63 = data_143cee9b0 + sx.q(rbx_14) * 0x18
            
            if (i_19 != 0)
                void* rcx_95 = &rdx_63[5]
                int32_t i_8
                
                do
                    rcx_95 += 0x18
                    *rdx_63 = data_143a1c6b8
                    rdx_63 = &rdx_63[6]
                    *(rcx_95 - 0x28) = data_143a1c6b4
                    *(rcx_95 - 0x24) = 0
                    *(rcx_95 - 0x1c) = 0
                    i_8 = i_19
                    i_19 -= 1
                while (i_8 != 1)
                r10_3 = data_143cee9a0.d
        else if (r10_3 s< rbx_14)
            sub_1409d8830(&data_143cee9b0, r10_3, rbx_14 - r10_3, 0)
            r10_3 = data_143cee9a0.d
        
        int64_t r12_3 = arg1[5][0x1c]
        
        if (r10_3 s> 0)
            void* r14_6 = nullptr
            int64_t rbx_18 = 0
            
            do
                int64_t rdx_65 = sx.q(*(r14_6 + data_143cee998))
                
                if (data_143cee8b8 == data_143cee8e4)
                label_1409bcce1:
                    *(rbx_18 + data_143cee9b0 + 4) = rdx_65.d
                else
                    void* rcx_96 = data_143cee8f0
                    void* rax_154 = &data_143cee8e8
                    
                    if (rcx_96 != 0)
                        rax_154 = rcx_96
                    
                    int32_t rax_160 = *(rax_154 + ((sx.q(data_143cee8f8 - 1) & rdx_65) << 2))
                    int32_t rcx_97 = rax_160
                    
                    if (rax_160 == 0xffffffff)
                    label_1409bcce1_1:
                        *(rbx_18 + data_143cee9b0 + 4) = rdx_65.d
                    else
                        int64_t r9_10 = data_143cee8b0
                        int64_t r8_29
                        
                        while (true)
                            r8_29 = sx.q(rcx_97) * 2
                            
                            if (*(r9_10 + (r8_29 << 3)) == rdx_65.d)
                                break
                            
                            rcx_97 = *(r9_10 + (r8_29 << 3) + 8)
                            
                            if (rcx_97 == 0xffffffff)
                                goto label_1409bcce1_3
                        
                        if (rcx_97 == 0xffffffff)
                        label_1409bcce1_2:
                            *(rbx_18 + data_143cee9b0 + 4) = rdx_65.d
                        else
                            int64_t rcx_101 = r9_10 + (r8_29 << 3)
                            
                            if (rcx_101 == 0 || rcx_101 == -4)
                            label_1409bcce1_3:
                                *(rbx_18 + data_143cee9b0 + 4) = rdx_65.d
                            else
                                void* rax_161
                                
                                if (rax_160 == 0xffffffff)
                                label_1409bcdf1:
                                    rax_161 = nullptr
                                else
                                    int64_t rcx_104
                                    
                                    while (true)
                                        rcx_104 = sx.q(rax_160) * 2
                                        
                                        if (*(r9_10 + (rcx_104 << 3)) == rdx_65.d)
                                            break
                                        
                                        rax_160 = *(r9_10 + (rcx_104 << 3) + 8)
                                        
                                        if (rax_160 == 0xffffffff)
                                            goto label_1409bcdf1_1
                                    
                                    rax_161 = r9_10 + (rcx_104 << 3)
                                    
                                    if (rax_160 == 0xffffffff)
                                    label_1409bcdf1_1:
                                        rax_161 = nullptr
                                
                                *(rbx_18 + data_143cee9b0 + 4) = *(rax_161 + 4)
                
                int32_t var_1a0_2 = *(*(r12_3 + (r13_5 << 3)) + r14_6)
                var_188 = (data_143cee9b0 + ((sx.q(i_9) * 3 + 1) << 3)).o
                sub_14099a420(&arg1[5][0x35], &var_188)
                i_9 += 1
                rbx_18 += 0x18
                r14_6 += 4
            while (i_9 s< data_143cee9a0.d)
            
            rdi_49 = var_250
            rsi_6 = zx.q(var_254_2)
        
        int32_t r12_4
        
        if (data_143cee9d8 s<= *(var_248 + 0x14))
            r12_4 = 0
        else
            _Init_thread_header(&data_143cee9d8)
            r12_4 = 0
            
            if (data_143cee9d8 == 0xffffffff)
                data_143cee9c8 = 0
                data_143cee9d0.q = 0
                atexit(sub_142cb9a70)
                _Init_thread_footer(&data_143cee9d8)
        
        int32_t i_20 = data_143cee9d0
        int32_t rbx_23
        
        if (data_143cee9d4 s< 0)
            if (i_20 != 0)
                int64_t* rbx_22 = data_143cee9c8 + 8
                int32_t i_10
                
                do
                    sub_1408464b0(rbx_22)
                    rbx_22 = &rbx_22[4]
                    i_10 = i_20
                    i_20 -= 1
                while (i_10 != 1)
            
            bool cond:20_1 = data_143cee9d4 == 0
            rbx_23 = 0
            data_143cee9d0 = 0
            
            if (not(cond:20_1))
                sub_1405a51b0(&data_143cee9c8, 0)
                rbx_23 = data_143cee9d0
        else
            if (i_20 != 0)
                int64_t* rbx_20 = data_143cee9c8 + 8
                int32_t i_11
                
                do
                    sub_1408464b0(rbx_20)
                    rbx_20 = &rbx_20[4]
                    i_11 = i_20
                    i_20 -= 1
                while (i_11 != 1)
            
            rbx_23 = 0
        
        bool cond:21_1 = rbx_23 + 1 s<= data_143cee9d4
        data_143cee9d0 = rbx_23 + 1
        
        if (not(cond:21_1))
            sub_1405c4e40(&data_143cee9c8)
        
        int64_t rcx_109 = sx.q(rbx_23) << 5
        int32_t* rcx_110 = rcx_109 + data_143cee9c8
        
        if (rcx_109 == neg.q(data_143cee9c8))
            rcx_110 = nullptr
        else
            *rcx_110 = data_143a1c6c4
            *(rcx_110 + 8) = 0
            *(rcx_110 + 0x10) = 0
            rcx_110[6] = data_143a1c6c8
        
        *rcx_110 = rdi_49
        rcx_110[7].b = 3
        
        if (rcx_110 != &data_143cee9a8)
            int32_t i_17 = rcx_110[4]
            
            if (i_17 != 0)
                int64_t* rdi_51 = *(rcx_110 + 8) + 8
                int32_t i_12
                
                do
                    int64_t rcx_111 = *rdi_51
                    
                    if (rcx_111 != 0)
                        sub_140a74f90(rcx_111)
                    
                    rdi_51 = &rdi_51[3]
                    i_12 = i_17
                    i_17 -= 1
                while (i_12 != 1)
            
            var_278.d = 0
            sub_1409970d0(&rcx_110[2], data_143cee9b0, data_143cee9b8, rcx_110[5], 0)
        
        r14_4 = var_248
        
        if (data_143cee9f0 s> *(r14_4 + 0x14))
            _Init_thread_header(&data_143cee9f0)
            
            if (data_143cee9f0 == 0xffffffff)
                data_143cee9e0 = 0
                data_143cee9e8.q = 0
                atexit(sub_142cb8ce0)
                _Init_thread_footer(&data_143cee9f0)
        
        int32_t rax_167 = data_143cee9ec
        data_143cee9e8 = 0
        
        if (rax_167 s< 0 && rax_167 != 0)
            sub_1405dadb0(&data_143cee9e0, 0)
        
        if (data_143ceea08 s> *(r14_4 + 0x14))
            _Init_thread_header(&data_143ceea08)
            
            if (data_143ceea08 == 0xffffffff)
                data_143cee9f8 = 0
                data_143ceea00.q = 0
                atexit(sub_142cb8b40)
                _Init_thread_footer(&data_143ceea08)
        
        int32_t rax_169 = data_143ceea04
        data_143ceea00 = 0
        
        if (rax_169 s< 0 && rax_169 != 0)
            sub_1405dadb0(&data_143cee9f8, 0)
        
        void*** r15_5 = arg1
        sub_1409b4ab0(r15_5, &data_143cee9c8, &data_143cee9e0, &data_143cee9f8)
        int64_t rbx_24 = sx.q(data_143cee770)
        int64_t rdi_52 = sx.q(*data_143cee9e0)
        int32_t rax_171 = (rbx_24 + 1).d
        bool cond:31_1 = rax_171 s<= data_143cee774
        data_143cee770 = rax_171
        
        if (not(cond:31_1))
            sub_1405a4cf0(&data_143cee768)
        
        *(data_143cee768 + (rbx_24 << 2)) = rdi_52.d
        void* rbx_25 = r15_5[5]
        sub_1409bd4b0(rbx_25 + 0x200, &j_12, data_143f36118)
        int64_t j_18 = sx.q(j_12)
        void* const rbx_28
        
        if (j_18.d == 0xffffffff)
            rbx_28 = nullptr
        else
            void* rbx_26 = *(rbx_25 + 0x200) + j_18 * 0x18
            
            if (rbx_26 == 0 || rbx_26 == -8)
                rbx_28 = nullptr
            else
                rbx_28 = *(rbx_26 + 8)
                
                if (*(rbx_28 + 8) != 5)
                    rbx_28 = nullptr
        
        int32_t r13_6 = *(r15_5[5][0x1c] + rdi_52 * 0x28 + 8)
        
        if (r13_6 s> 0)
            do
                var_278.q = &i_13
                sub_1409c3aa0(r15_5, &i_14, rsi_6.d, r12_4, var_278)
                
                if (arg4 == 0)
                    r14_4.b = 0
                else
                    void* rax_180
                    
                    if (data_143cee7b8 == data_143cee7e4)
                    label_1409bd166:
                        rax_180 = nullptr
                    else
                        void* rdx_77 = data_143cee7f0
                        int64_t i_21 = sx.q(i_14)
                        void* rax_178 = &data_143cee7e8
                        
                        if (rdx_77 != 0)
                            rax_178 = rdx_77
                        
                        int32_t rax_179 = *(rax_178 + ((sx.q(data_143cee7f8 - 1) & i_21) << 2))
                        
                        if (rax_179 == 0xffffffff)
                        label_1409bd166_1:
                            rax_180 = nullptr
                        else
                            int64_t r8_36 = data_143cee7b0
                            int64_t rdx_79
                            
                            while (true)
                                rdx_79 = sx.q(rax_179) * 2
                                
                                if (*(r8_36 + (rdx_79 << 3)) == i_21.d)
                                    break
                                
                                rax_179 = *(r8_36 + (rdx_79 << 3) + 8)
                                
                                if (rax_179 == 0xffffffff)
                                    goto label_1409bd166_2
                            
                            if (rax_179 == 0xffffffff)
                            label_1409bd166_2:
                                rax_180 = nullptr
                            else
                                rax_180 = r8_36 + (rdx_79 << 3)
                    
                    if (*(rax_180 + 4) u<= 1)
                        r14_4.b = 0
                    else
                        r14_4.b = 1
                
                var_278.q = &i_13
                sub_1409c3aa0(r15_5, &j_11, rdi_52.d, r12_4, var_278)
                
                if (r14_4.b == 0)
                    r15_5.b = 1
                else
                    r15_5 = zx.q(*(sx.q(i_14) + **(rbx_28 + 0x18)))
                
                int64_t r14_8 = sx.q(data_143cee788)
                int32_t rax_183 = (r14_8 + 1).d
                bool cond:37_1 = rax_183 s<= data_143cee78c
                data_143cee788 = rax_183
                
                if (not(cond:37_1))
                    sub_1405a4df0(&data_143cee780)
                
                int32_t* rdx_82 = data_143cee780 + r14_8 * 0x18
                
                if (rdx_82 == 0)
                    rdx_82 = nullptr
                else
                    *rdx_82 = 0
                    *(rdx_82 + 8) = 0
                    *(rdx_82 + 0x10) = 0
                
                int128_t zmm6 = data_142d3f660
                *rdx_82 = j_11
                char var_13c_2 = r15_5.b
                int64_t r15_6 = sx.q(rdx_82[4])
                char var_178_3 = 6
                int64_t var_138_3 = 0
                int32_t rax_186 = (r15_6 + 1).d
                rdx_82[4] = rax_186
                
                if (rax_186 s> rdx_82[5])
                    sub_14090a6a0(&rdx_82[2])
                
                int64_t rax_187 = data_143f36118
                r12_4 += 1
                r15_5 = arg1
                int64_t* rcx_123 = r15_6 * 0x60 + *(rdx_82 + 8)
                *(rcx_123 + 0x10) = var_178_3.o
                *rcx_123 = rax_187
                rcx_123[1].d = 0
                *(rcx_123 + 0x20) = zmm6
                *(rcx_123 + 0x30) = var_158
                *(rcx_123 + 0x40) = var_148
                *(rcx_123 + 0x50) = var_138_3.o
            while (r12_4 s< r13_6)
            
            r14_4 = var_248
        
        int64_t rbx_29 = sx.q(arg6[1].d)
        int32_t rax_188 = (rbx_29 + 1).d
        arg6[1].d = rax_188
        
        if (rax_188 s> *(arg6 + 0xc))
            sub_1405a4cf0(arg6)
        
        int32_t rdx_86 = var_264 + 1
        rsi = arg2
        rcx_89 = var_230_2 + 1
        *(*arg6 + (rbx_29 << 2)) = rdi_52.d
        var_264 = rdx_86
        var_230_2 = rcx_89
        
        if (rdx_86 s>= rsi[1].d)
            break
        
        r13 = arg1

sub_1409dc390(arg1, &data_143cee780)
sub_1409de670(arg1, &data_143cee798)
int512_t zmm6_1
zmm6_1.o = var_48
return sub_1409b6930(arg1, rsi, 1, 1, 1, 0)
