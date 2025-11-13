// 函数: sub_140bc6290
// 地址: 0x140bc6290
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
char arg_8 = 0
char* var_148 = &arg_8
int32_t r14 = arg2
void*** (* var_150)() = sub_140884c50
void* rax = sub_140a756e0(&var_150, &data_14397f5f0)
int64_t rcx_1 = *(rax + 0x40)
*(rax + 0x40) = arg1
sub_140bc3310(arg1)

if (r14 == 0)
    uint64_t rbx_1 = *(arg1 + 0x1c)
    int32_t* rsi_1 = **(arg1 + 0xf8)
    *(arg1 + 0x100) = rsi_1
    *(arg1 + 0x128) = sx.q(rsi_1[1]) + rsi_1
    *(arg1 + 0x168) = sx.q(rsi_1[2]) + rsi_1
    *(arg1 + 0x17c) = (sx.q(rsi_1[3] - rsi_1[2]) u>> 2).d
    *(arg1 + 0x120) = sx.q(rsi_1[3]) + rsi_1
    int64_t rax_10 = sx.q(*(arg1 + 0x188))
    void* rcx_6 = sx.q(rsi_1[4]) + rsi_1
    *(arg1 + 0x190) = rcx_6
    *(arg1 + 0x198) = rcx_6 + (rax_10 << 3)
    void* r14_2 = sx.q(rsi_1[5]) + rsi_1
    *(arg1 + 0x100) = sx.q(rsi_1[6]) - rsi_1 + r14_2 + rsi_1
    void* rax_16
    int512_t zmm1_1
    rax_16, zmm1_1 = sub_140d2f0c0(sub_140cddea0(), 0, rbx_1, 0, 0, 0)
    *(arg1 + 0x38) = rax_16
    void* rdx = rax_16
    
    if (rax_16 == 0)
        uint64_t rbx_2 = *(arg1 + 0x1c)
        uint32_t rcx_11
        rcx_11.b = (rbx_2 u>> 0x20).d == 0
        
        if ((rcx_11.b & sub_140b5b8a0(rbx_2.d, rdx.d)) != 0)
            sub_140d19010(0, 
                NewObject with empty name can't be used to create default subobjects (inside of UObject "
            "derived class constructor) as it produces incon")
        
        void* rax_19
        rax_19, zmm1_1 = sub_140d2dfc0(sub_140cddea0(), nullptr, rbx_2, 1, 0, 0, 0, 0, 0)
        int32_t rcx_13 = *(arg1 + 0x18)
        *(arg1 + 0x38) = rax_19
        *(rax_19 + 0x54) = rcx_13
        *(*(arg1 + 0x38) + 0x50) = *rsi_1
        *(*(arg1 + 0x38) + 0x70) = 0x206
        *(*(arg1 + 0x38) + 0x74) = 0
        void* rcx_17 = *(arg1 + 0x38)
        *(rcx_17 + 8) |= 0x80000
        rdx = *(arg1 + 0x38)
        *(arg1 + 0x77) = 1
    
    int64_t rax_21 = sx.q(rsi_1[8])
    
    if (rax_21.d s>= 0)
        int64_t* rax_23 = (rax_21 << 4) + *(arg1 + 0x148)
        *rax_23 = rdx
        *(rax_23 + 0xc) = 0
        rdx = *(arg1 + 0x38)
    
    sub_140bc2910(arg1, rdx, *(arg1 + 0x77) == 0)
    sub_140bd0aa0(arg1, r14_2, sx.q(rsi_1[6]), zmm1_1)
    r14 = arg_10
    *(arg1 + 0x1a0) = 2

int64_t rsi_2 = *(arg1 + 0x100)
void* r12 = arg1 + 0xf8
int64_t* rax_24 = *r12
int64_t rbx_7 = (zx.q(rax_24[3].b) << 0x20 | zx.q(rax_24[1].d)) - rsi_2 + *rax_24
void** var_128
sub_140b4c2a0(&var_128)
int64_t* var_120
var_120[2] = rsi_2
*var_120 = rsi_2
var_120[1] = rsi_2 + rbx_7
var_128 = &data_142e85d38
void* rax_29 = *(arg1 + 0x38)
int128_t var_98
__builtin_memset(&var_98, 0, 0x3c)
sub_140b55560(&var_128, *(rax_29 + 0x70))
var_128[0x1d](&var_128, zx.q(*(*(arg1 + 0x38) + 0x74)))
var_128[0x19](&var_128, (*(*(arg1 + 0x38) + 0x50) u>> 0xd).b & 1)
int64_t rdx_6
rdx_6.b = 1
var_128[0x14](&var_128, rdx_6)
int64_t rdx_7
rdx_7.b = 1
var_128[0x1b](&var_128, rdx_7)

if (*(*(arg1 + 0x38) + 0x50) s< 0)
    int64_t rdx_8
    rdx_8.b = 1
    var_128[0xc](&var_128, rdx_8)

char var_fe
char var_fe_1 = var_fe | 0x10
int64_t r8_5 = *(arg1 + 0x198)
var_98:8.q = arg1 + 0x10
int128_t var_88
var_88:8.q = *(arg1 + 0x128)
int64_t rcx_29 = sx.q(r14)
int128_t var_78
var_78.q = *(arg1 + 0xc8) + 0x268
var_88.q = arg1 + 0x140
int64_t var_68 = *(arg1 + 0x120)
int32_t var_60 = *(arg1 + 0x118)
void* var_58 = arg1 + 0x108
int64_t rax_46 = *(arg1 + 0x190)
var_78:8.q = arg1 + 0x130
uint64_t rdx_9 = zx.q(*(rax_46 + (rcx_29 << 3)))
int32_t* rbx_8 = r8_5 + (rdx_9 << 3)
int64_t r13 = r8_5 + ((zx.q(*(rax_46 + (rcx_29 << 3) + 4)) + rdx_9) << 3)

if (rbx_8 u< r13)
    TEB* gsbase
    int32_t* r12_2 = *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3)) + 0x14
    
    do
        int64_t* rsi_5 = zx.q(*rbx_8) * 0x30 + *(arg1 + 0x120)
        char r14_3 = rsi_5[5].b
        
        if (data_143e1aa74 s> *r12_2)
            _Init_thread_header(&data_143e1aa74)
            
            if (data_143e1aa74 == 0xffffffff)
                char rax_73
                
                if (data_143de5429 != 0 || data_143de542a == 0)
                    rax_73 = 0
                else
                    rax_73 = 1
                
                data_143e1aa70 = rax_73
                _Init_thread_footer(&data_143e1aa74)
        
        if (data_143e1aa7c s> *r12_2)
            _Init_thread_header(&data_143e1aa7c)
            
            if (data_143e1aa7c == 0xffffffff)
                char rax_72
                
                if (data_143de5429 == 0 || data_143de542a != 0)
                    rax_72 = 0
                else
                    rax_72 = 1
                
                data_143e1aa78 = rax_72
                _Init_thread_footer(&data_143e1aa7c)
        
        if ((data_143e1aa70 != 0 && (r14_3 & 2) != 0) || (data_143e1aa78 != 0 && (r14_3 & 1) != 0))
            *(*(arg1 + 0x130) + sx.q(*rbx_8) * 0x10 + 8) = 1
            
            if (rbx_8[1] == 1)
                int64_t rdx_10 = *(*(arg1 + 0x120) + zx.q(*rbx_8) * 0x30)
                *(arg1 + 0x100) += rdx_10
                *var_120 += rdx_10
        else if (rbx_8[1] != 0)
            int64_t rdx_12 = sx.q(*rbx_8)
            int64_t rsi_6 = *rsi_5
            
            if (((*(*(*(arg1 + 0x130) + rdx_12 * 0x10) + 8) u>> 0xa).b & 1) == 0)
                *var_120 += rsi_6
            else
                sub_140bc5f30(arg1, rdx_12.d, &var_128)
            
            *(arg1 + 0x100) += rsi_6
        else
            sub_140bc5c50(arg1, *rbx_8)
        
        rbx_8 = &rbx_8[2]
    while (rbx_8 u< r13)
    
    r14 = arg_10
    r12 = arg1 + 0xf8

uint64_t rax_61 = zx.q(r14 + 1)

if (rax_61.d s>= *(arg1 + 0x188))
    *(arg1 + 0x1a2) = 1
    *(arg1 + 0x168) = 0
    *(arg1 + 0x17c) = 0
    int64_t* arg_20
    sub_140a3cd60(r12, sub_140a956a0(&arg_20))
    int64_t* rsi_7 = arg_20
    
    if (rsi_7 != 0)
        int32_t rax_65 = *(rsi_7 + 0xc)
        *(rsi_7 + 0xc) -= 1
        
        if (rax_65 == 1 && rsi_7 != 0)
            sub_140a99090(rsi_7)
            j_sub_140a74f90(rsi_7)
    
    *(arg1 + 0x1a0) = 3
    
    if (*(arg1 + 0x110) != 0)
        void* rbx_10 = *(arg1 + 0xc8)
        int64_t* rax_67 = j_sub_140a82f30(0x10)
        
        if (rax_67 != 0)
            *rax_67 = 0
            rax_67[1] = arg1
            int32_t temp0_4 = *(rbx_10 + 0x160)
            *(rbx_10 + 0x160) = rax_67
            void** rcx_49 = temp0_4
            *rcx_49
            *rcx_49 = rax_67
    else
        int64_t* rcx_47 = *(arg1 + 0xe0)
        rcx_47[2].d -= 1
        
        if (rcx_47[2].d == 1)
            sub_140bc7180(rcx_47)
else
    int64_t* rcx_42 = rax_61 * 0x30 + *(arg1 + 0xe8)
    rcx_42[2].d -= 1
    
    if (rcx_42[2].d == 1)
        sub_140bc7180(rcx_42)

if (r14 == 0)
    void* rcx_50 = *(arg1 + 0xc8)
    *(rcx_50 + 0x380) -= zx.q(*(*(arg1 + 0x180) + 4))
    
    if (*(rcx_50 + 0x378) != r14)
        sub_140bd1150(rcx_50)

sub_140b4cb40(&var_128)
sub_140bc5ba0(arg1)
arg_10.b = 0
int32_t* var_138 = &arg_10
void*** (* var_140)() = sub_140884c50
*(sub_140a756e0(&var_140, &data_14397f5f0) + 0x40) = rcx_1
return 2
