// 函数: sub_141ec6df0
// 地址: 0x141ec6df0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140af5690(data_143ddb400, u"/Script/Engine.CollisionProfile", 0, 1, &data_143de5780)
int32_t rbx = 0

while (true)
    int64_t* rax
    
    if (rbx s< 0 || rbx s>= *(arg1 + 0x40))
        rax.b = 0
    else
        rax.b = 1
    
    if (rax.b == 0)
        break
    
    int64_t* rcx_2 = *(arg1 + 0x38)
    
    if (rcx_2[sx.q(rbx) * 9] == data_143f3a508)
        int64_t rcx_3 = rcx_2[sx.q(rbx) * 9 + 7]
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        int32_t rcx_6 = *(arg1 + 0x40)
        int32_t rax_3 = rcx_6 - rbx
        
        if (rax_3 != 1)
            int64_t r9_1 = *(arg1 + 0x38)
            memmove(r9_1 + sx.q(rbx) * 0x48, r9_1 + sx.q(rbx + 1) * 0x48, (rax_3 - 1) * 0x48)
            rcx_6 = *(arg1 + 0x40)
        
        *(arg1 + 0x40) = rcx_6 - 1
        sub_141d264e0(arg1 + 0x38)
    
    rbx += 1

int64_t var_b0 = 0
int32_t var_a8 = 0
sub_1405947f0(&var_b0, 0x13)
int32_t rax_9 = var_a8 + 0x13
var_a8 = rax_9

if (rax_9 s> 0)
    sub_140594770(&var_b0)

UnDecorator::getReferenceType(var_b0, u"EngineTraceChannel", 0x26)
int64_t var_c0 = 0
int32_t var_b8 = 0
sub_1405947f0(&var_c0, 0x11)
int32_t rax_10 = var_b8 + 0x11
var_b8 = rax_10

if (rax_10 s> 0)
    sub_140594770(&var_c0)

UnDecorator::getReferenceType(var_c0, u"GameTraceChannel", 0x22)
void* rax_11 = sub_1424a60f0()
void* rax_12 = sub_1424aa2a0()
TEB* gsbase
int32_t* rbx_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14

if (data_143f3a888 s> *rbx_2)
    _Init_thread_header(&data_143f3a888)
    
    if (data_143f3a888 == 0xffffffff)
        sub_1405947f0(&data_143f3a878, 0xc)
        int32_t rax_70 = data_143f3a880 + 0xc
        bool cond:0_1 = rax_70 s<= data_143f3a884
        data_143f3a880 = rax_70
        
        if (not(cond:0_1))
            sub_140594770(&data_143f3a878)
        
        UnDecorator::getReferenceType(data_143f3a878, u"DisplayName", 0x18)
        atexit(sub_142cfb2e0)
        _Init_thread_footer(&data_143f3a888)

if (data_143f3a8a0 s> *rbx_2)
    _Init_thread_header(&data_143f3a8a0)
    
    if (data_143f3a8a0 == 0xffffffff)
        sub_1405947f0(&data_143f3a890, 0xb)
        int32_t rax_71 = data_143f3a898 + 0xb
        bool cond:1_1 = rax_71 s<= data_143f3a89c
        data_143f3a898 = rax_71
        
        if (not(cond:1_1))
            sub_140594770(&data_143f3a890)
        
        UnDecorator::getReferenceType(data_143f3a890, u"ScriptName", 0x16)
        atexit(sub_142cfb550)
        _Init_thread_footer(&data_143f3a8a0)

if (data_143f3a8b8 s> *rbx_2)
    _Init_thread_header(&data_143f3a8b8)
    
    if (data_143f3a8b8 == 0xffffffff)
        sub_1405947f0(&data_143f3a8a8, 0xb)
        int32_t rax_72 = data_143f3a8b0 + 0xb
        bool cond:2_1 = rax_72 s<= data_143f3a8b4
        data_143f3a8b0 = rax_72
        
        if (not(cond:2_1))
            sub_140594770(&data_143f3a8a8)
        
        UnDecorator::getReferenceType(data_143f3a8a8, u"TraceQuery", 0x16)
        atexit(sub_142cfb570)
        _Init_thread_footer(&data_143f3a8b8)

if (data_143f3a8d0 s> *rbx_2)
    _Init_thread_header(&data_143f3a8d0)
    
    if (data_143f3a8d0 == 0xffffffff)
        sub_1405947f0(&data_143f3a8c0, 2)
        int32_t rax_73 = data_143f3a8c8 + 2
        bool cond:3_1 = rax_73 s<= data_143f3a8cc
        data_143f3a8c8 = rax_73
        
        if (not(cond:3_1))
            sub_140594770(&data_143f3a8c0)
        
        UnDecorator::getReferenceType(data_143f3a8c0, &(*U"RGBXYZF10|")[7], 4)
        atexit(sub_142cfb590)
        _Init_thread_footer(&data_143f3a8d0)

if (data_143f3a8e8 s> *rbx_2)
    _Init_thread_header(&data_143f3a8e8)
    
    if (data_143f3a8e8 == 0xffffffff)
        sub_1405947f0(&data_143f3a8d8, 7)
        int32_t rax_74 = data_143f3a8e0 + 7
        bool cond:4_1 = rax_74 s<= data_143f3a8e4
        data_143f3a8e0 = rax_74
        
        if (not(cond:4_1))
            sub_140594770(&data_143f3a8d8)
        
        UnDecorator::getReferenceType(data_143f3a8d8, u"Hidden", 0xe)
        atexit(&data_142cfb500)
        _Init_thread_footer(&data_143f3a8e8)

int64_t rdi_3 = sx.q(*(rax_11 + 0x48))
int32_t rbx_3 = 0
*(arg1 + 0x130) = 0

if (*(arg1 + 0x134) != rdi_3.d)
    sub_140638c50(arg1 + 0x128, rdi_3.d)
    rbx_3 = *(arg1 + 0x130)

int32_t rax_17 = rbx_3 + rdi_3.d
*(arg1 + 0x130) = rax_17

if (rax_17 s> *(arg1 + 0x134))
    sub_1405a4d70(arg1 + 0x128)

memset(*(arg1 + 0x128) + (sx.q(rbx_3) << 3), 0, rdi_3 << 3)
bool cond:5 = *(arg1 + 0x154) == 0
*(arg1 + 0x150) = 0

if (not(cond:5))
    sub_1405dadb0(arg1 + 0x148, 0)

bool cond:6 = *(arg1 + 0x144) == 0
*(arg1 + 0x140) = 0

if (not(cond:6))
    sub_1405dadb0(arg1 + 0x138, 0)

if (data_143f3a900 s> *rbx_2)
    _Init_thread_header(&data_143f3a900)
    
    if (data_143f3a900 == 0xffffffff)
        sub_1405947f0(&data_143f3a8f0, 5)
        int32_t rax_75 = data_143f3a8f8 + 5
        bool cond:7_1 = rax_75 s<= data_143f3a8fc
        data_143f3a8f8 = rax_75
        
        if (not(cond:7_1))
            sub_140594770(&data_143f3a8f0)
        
        UnDecorator::getReferenceType(data_143f3a8f0, u"ECC_", 0xa)
        atexit(&data_142cfb530)
        _Init_thread_footer(&data_143f3a900)

sub_1424a6270()
sub_1424a62d0()
int32_t rdi_4 = 0
int64_t rsi_1 = 0
void* var_f8
int32_t var_f0
int64_t* i_2
int16_t* var_d0
int32_t var_c8
char arg_18

if (rdi_3 s> 0)
    do
        sub_140bded20(rax_11, &var_d0, rdi_4)
        int32_t rcx_23 = data_143f3a8f8
        int32_t rcx_24
        
        if (rcx_23 == 0)
            rcx_24 = 0
        else
            rcx_24 = rcx_23 - 1
        
        int32_t rax_21 = var_c8
        int32_t rbx_4
        
        if (rax_21 == 0)
            rbx_4 = 0
        else
            rbx_4 = rax_21 - 1
        
        if (rcx_24 s>= 0)
            if (rcx_24 s< rbx_4)
                rbx_4 = rcx_24
            
            if (rbx_4 != 0)
                if (rax_21 != rbx_4)
                    int16_t* rcx_27 = var_d0
                    memmove(rcx_27, &rcx_27[sx.q(rbx_4)], (rax_21 - rbx_4) * 2)
                    rax_21 = var_c8
                
                rax_21 -= rbx_4
                var_c8 = rax_21
        
        int16_t* const rdx_9 = &data_142d40450
        
        if (rax_21 != 0)
            rdx_9 = var_d0
        
        sub_140b58260(&var_f8, rdx_9, 1)
        
        if (rdi_4 - 8 u<= 0x17)
            void* rbx_5 = var_f8
            
            if (rbx_5 != 0)
                var_f0.q = rax_12
                int64_t* i_3
                
                if (rax_12 == 0)
                    i_3 = nullptr
                else
                    i_3 = *(rax_12 + 0x50)
                
                i_2 = i_3
                int32_t var_e0_1 = 0xffffffff
                int16_t var_dc_1 = 0x101
                char var_da_1 = 0
                sub_140be1e30(&var_f0)
                
                for (int64_t* i = i_2; i != 0; i = i_2)
                    int64_t rax_24 = i[5]
                    arg_18.q = rax_24
                    
                    if (rax_24 == rbx_5)
                        break
                    
                    i_2 = i[4]
                    sub_140be1e30(&var_f0)
        else
            int64_t rbx_6
            
            if (rdi_4 - 3 u<= 1)
                if (data_143f3a808 s> *rbx_2)
                    _Init_thread_header(&data_143f3a808)
                    
                    if (data_143f3a808 == 0xffffffff)
                        data_143f3a800 = 0xffffffff
                        data_143f3a804 = 1
                        _Init_thread_footer(&data_143f3a808)
                
                if (rdi_4 s< 0x20)
                    int32_t rax_31 = data_143f3a800 & not.d(1 << (rdi_4 u% 0x20))
                    data_143f3a804 &= rax_31
                    data_143f3a800 = rax_31
                
                rbx_6 = sx.q(*(arg1 + 0x150))
                int32_t rax_32 = (rbx_6 + 1).d
                *(arg1 + 0x150) = rax_32
                
                if (rax_32 s> *(arg1 + 0x154))
                    sub_1405a4cf0(arg1 + 0x148)
                
                *(*(arg1 + 0x148) + (rbx_6 << 2)) = rdi_4
            else if (rdi_4 s< 0x20)
                rbx_6 = sx.q(*(arg1 + 0x140))
                int32_t rax_27 = (rbx_6 + 1).d
                *(arg1 + 0x140) = rax_27
                
                if (rax_27 s> *(arg1 + 0x144))
                    sub_1405a4cf0(arg1 + 0x138)
                
                *(*(arg1 + 0x138) + (rbx_6 << 2)) = rdi_4
        
        *(*(arg1 + 0x128) + (rsi_1 << 3)) = var_f8
        int16_t* rcx_35 = var_d0
        
        if (rcx_35 != 0)
            sub_140a74f90(rcx_35)
        
        rdi_4 += 1
        rsi_1 += 1
    while (rsi_1 s< rdi_3)

sub_142277d10(&data_143f3a640, 2)
sub_14227a280(&data_143f3a640, 8, 0)
void* rdi_5 = arg1
int32_t rdx_12 = *(rdi_5 + 0x50)
void* rbx_7 = rdi_5 + 0x48
int64_t rcx_36 = *rbx_7
arg_18 = 0
var_f8 = rbx_7
sub_141eb1c90(rcx_36, rdx_12, arg1.b)
int64_t r12_1 = 0
int32_t i_1 = 0

if (*(rdi_5 + 0x50) s> 0)
    int32_t r13_1 = 1
    
    do
        char* r14_3 = *rbx_7 + r12_1
        uint64_t rdi_6 = zx.q(*r14_3)
        
        if ((rdi_6 - 8).d u<= 0x17)
            bool rdx_13 = sub_140b5b8a0(*(r14_3 + 4), 0) == 0
            
            if ((*(r14_3 + 8) != 0 | rdx_13) == 0)
                sub_14227a280(&data_143f3a640, rdi_6.d, zx.d(r14_3[1]))
                rbx_7 = var_f8
            else
                uint64_t rsi_2 = rdi_6 << 3
                sub_140b63b70(*(arg1 + 0x128) + rsi_2, &var_f0)
                sub_140b63b70(&r14_3[4], &var_d0)
                int32_t* rcx_41 = *(arg1 + 0x148)
                void* rdx_16 = &rcx_41[sx.q(*(arg1 + 0x150))]
                
                if (rcx_41 != rdx_16)
                    while (*rcx_41 != rdi_6.d)
                        rcx_41 = &rcx_41[1]
                        
                        if (rcx_41 == rdx_16)
                            goto label_141ec7338
                    
                    goto label_141ec73f1
                
            label_141ec7338:
                int32_t* rcx_42 = *(arg1 + 0x138)
                void* rdx_17 = &rcx_42[sx.q(*(arg1 + 0x140))]
                
                if (rcx_42 == rdx_17)
                label_141ec735d:
                    int16_t* rdx_18 = &data_142d40450
                    
                    if (var_c8 != 0)
                        rdx_18 = var_d0
                    
                    *(*(arg1 + 0x128) + rsi_2) = *sub_140b58260(&arg_18, rdx_18, 1)
                    uint32_t rsi_3 = zx.d(*r14_3)
                    
                    if (r14_3[2] == 0)
                        void* rcx_54 = arg1 + 0x138
                        int64_t rbx_10 = sx.q(*(rcx_54 + 8))
                        int32_t rax_57 = (rbx_10 + 1).d
                        *(rcx_54 + 8) = rax_57
                        
                        if (rax_57 s> *(rcx_54 + 0xc))
                            sub_1405a4cf0(rcx_54)
                            rcx_54 = arg1 + 0x138
                        
                        *(*rcx_54 + (rbx_10 << 2)) = rsi_3
                        
                        if (r14_3[3] != 0)
                            uint32_t rbx_11 = zx.d(*r14_3)
                            sub_141ec40e0()
                            
                            if (rbx_11 u< 0x20)
                                data_143f3a804 |= 1 << (rbx_11 u% 0x20)
                    else
                        if (data_143f3a808 s> *rbx_2)
                            _Init_thread_header(&data_143f3a808)
                            
                            if (data_143f3a808 == 0xffffffff)
                                data_143f3a800 = 0xffffffff
                                data_143f3a804 = 1
                                _Init_thread_footer(&data_143f3a808)
                        
                        if (rsi_3 u< 0x20)
                            int32_t rax_47 = data_143f3a800 & not.d(1 << (rsi_3 u% 0x20))
                            data_143f3a804 &= rax_47
                            data_143f3a800 = rax_47
                        
                        int64_t* rcx_45 = arg1 + 0x148
                        uint32_t rsi_4 = zx.d(*r14_3)
                        int64_t rbx_9 = sx.q(rcx_45[1].d)
                        int32_t rax_48 = (rbx_9 + 1).d
                        rcx_45[1].d = rax_48
                        
                        if (rax_48 s> *(rcx_45 + 0xc))
                            sub_1405a4cf0(rcx_45)
                            rcx_45 = arg1 + 0x148
                        
                        *(*rcx_45 + (rbx_9 << 2)) = rsi_4
                    
                    int16_t* rcx_58 = var_d0
                    
                    if (rcx_58 != 0)
                        sub_140a74f90(rcx_58)
                    
                    int64_t rcx_59 = var_f0.q
                    
                    if (rcx_59 != 0)
                        sub_140a74f90(rcx_59)
                    
                    sub_14227a280(&data_143f3a640, rdi_6.d, zx.d(r14_3[1]))
                    rbx_7 = var_f8
                else
                    while (*rcx_42 != rdi_6.d)
                        rcx_42 = &rcx_42[1]
                        
                        if (rcx_42 == rdx_17)
                            goto label_141ec735d
                    
                label_141ec73f1:
                    rbx_7 = var_f8
                    int32_t rcx_47 = *(rbx_7 + 8)
                    int32_t rax_51 = rcx_47 - i_1
                    
                    if (rax_51 != 1)
                        int64_t r9_2 = *rbx_7
                        memmove(r9_2 + sx.q(i_1) * 0xc, r9_2 + sx.q(r13_1) * 0xc, 
                            (rax_51 - 1) * 0xc)
                        rcx_47 = *(rbx_7 + 8)
                    
                    *(rbx_7 + 8) = rcx_47 - 1
                    sub_140775970(rbx_7)
                    int16_t* rcx_52 = var_d0
                    i_1 -= 1
                    r13_1 -= 1
                    r12_1 -= 0xc
                    
                    if (rcx_52 != 0)
                        sub_140a74f90(rcx_52)
                    
                    int64_t rcx_53 = var_f0.q
                    
                    if (rcx_53 != 0)
                        sub_140a74f90(rcx_53)
        
        rdi_5 = arg1
        i_1 += 1
        r13_1 += 1
        r12_1 += 0xc
    while (i_1 s< *(rdi_5 + 0x50))

int64_t* r14_4 = rdi_5 + 0xd8
sub_141c9c3e0(r14_4, 0)
int32_t rsi_5 = 0

while (true)
    bool rax_59
    
    if (rsi_5 s< 0 || rsi_5 s>= *(rdi_5 + 0x80))
        rax_59 = false
    else
        rax_59 = true
    
    if (rax_59 == 0)
        break
    
    int64_t rdx_23 = *(rdi_5 + 0x78)
    int64_t rcx_62 = sx.q(rsi_5) * 2
    void* rax_60 = *(rdx_23 + (rcx_62 << 3))
    var_f8 = rax_60
    void* rcx_63 = *(rdx_23 + (rcx_62 << 3) + 8)
    int32_t rcx_64
    rcx_64.b = sub_140b5b8a0(rax_60.d, 0) == 0
    
    if ((var_f8:4.d != 0 | rcx_64.b) != 0)
        int32_t rcx_65
        rcx_65.b = sub_140b5b8a0(rcx_63.d, 0) == 0
        
        if ((rcx_63:4.d != 0 | rcx_65.b) != 0)
            sub_1405b3620(r14_4, &var_f0)
            *i_2 = var_f8
            i_2[1] = rcx_63
            i_2[2].d = 0xffffffff
            int64_t rbx_12 = *i_2
            sub_1405b8300(r14_4, &arg_18, (rbx_12 u>> 0x20).d + sub_140b5ead0(rbx_12.d), i_2, 
                var_f0, nullptr)
            rdi_5 = arg1
    
    rsi_5 += 1

int64_t* r15_1 = rdi_5 + 0x38
sub_141ec21c0(rdi_5, r15_1, rax_11, rdi_5 + 0x58)
void* r14_5 = rdi_5 + 0x88
sub_141c9c3e0(r14_5, 0)
int32_t rsi_6 = 0
bool result

while (true)
    if (rsi_6 s< 0 || rsi_6 s>= *(rdi_5 + 0x70))
        result = false
    else
        result = true
    
    if (result == 0)
        break
    
    int64_t rdx_27 = *(rdi_5 + 0x68)
    int64_t rcx_72 = sx.q(rsi_6) * 2
    int64_t rax_65 = *(rdx_27 + (rcx_72 << 3))
    void* rcx_73 = *(rdx_27 + (rcx_72 << 3) + 8)
    int32_t rcx_74
    rcx_74.b = sub_140b5b8a0(rax_65.d, 0) == 0
    
    if ((rax_65:4.d != 0 | rcx_74.b) != 0)
        int32_t rcx_75
        rcx_75.b = sub_140b5b8a0(rcx_73.d, 0) == 0
        
        if ((rcx_73:4.d != 0 | rcx_75.b) != 0)
            int64_t var_88 = 0
            int16_t var_80_1 = 0
            char var_7e_1 = 1
            void var_7d
            sub_142259c00(&var_7d)
            int64_t var_5c_1 = 0
            int64_t var_50_1 = 0
            int64_t var_48_1 = 0
            
            if (sub_141ec34a0(rdi_5, r15_1, rcx_73, &var_88) != 0)
                sub_1405b3620(r14_5, &var_f0)
                *i_2 = rax_65
                i_2[1] = rcx_73
                i_2[2].d = 0xffffffff
                int64_t rbx_14 = *i_2
                sub_1405b8300(r14_5, &arg_18, (rbx_14 u>> 0x20).d + sub_140b5ead0(rbx_14.d), i_2, 
                    var_f0, nullptr)
                rdi_5 = arg1
            
            if (var_50_1 != 0)
                sub_140a74f90(var_50_1)
    
    rsi_6 += 1

int64_t rcx_82 = var_c0

if (rcx_82 != 0)
    result = sub_140a74f90(rcx_82)

int64_t rcx_83 = var_b0

if (rcx_83 == 0)
    return result

return sub_140a74f90(rcx_83)
