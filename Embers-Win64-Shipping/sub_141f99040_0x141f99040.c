// 函数: sub_141f99040
// 地址: 0x141f99040
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* arg_18 = arg3
void* r13 = arg3
int64_t* r12 = arg2

if (*(arg1 + 0x34) == 0xffffffff)
    *arg2 = -1
    return arg2

void* rdx = arg1[5]

if (((*(rdx + 0xa4) u>> 1).b & 1) == 0 && r13 != 0
        && (*(arg3 + 0xa0) + 7) s>> 3 s> sx.q(data_143a2d8b0))
    *(arg3 + 0x29) |= 1
    *r12 = -1
    return r12

void* rsi_1

if (arg1[7].d != 0xffffffff)
    rsi_1 = rdx

if (arg1[7].d == 0xffffffff || *(rdx + 0x1508) != 0)
    int32_t rcx_3 = arg1[6].d
    rsi_1 = rdx
    
    if (test_bit(rcx_3, 0xb))
        uint64_t rax_2
        rax_2.b = 1
        
        if (*(rdx + 0x1508) == 2)
            rax_2.b = not.b((rcx_3 u>> 0xc).b)
            rax_2.b &= 1
            arg1[6].d = rcx_3 | 0x1000
        
        if (rax_2.b != 0)
            uint32_t rcx_5 = zx.d(*(arg3 + 0xf0)) | 2
            *(arg3 + 0xf0) = rcx_5.b
            arg1[6].d &= 0xffffffef
            rsi_1 = arg1[5]
            arg1[6].d |= (not.d(rcx_5 u>> 5) & 1) << 4

int32_t i_2 = 0
int64_t rdi = sx.q((*(rsi_1 + 0xa0) << 3) - *(rsi_1 + 0x130) - 0x235)
int64_t rax_11
int32_t rdx_1
rdx_1:rax_11 = sx.o(rdi)
int64_t i_5 = (rax_11 + (zx.q(rdx_1) & 7)) & 0xfffffffffffffff8
*(rsi_1 + 0x1708) = 0

if (*(rsi_1 + 0x170c) s<= 0xffffffff)
    sub_1405c5570(rsi_1 + 0x1700, 0)

void* rcx_12 = arg1[5]

if (((*(rcx_12 + 0xa4) u>> 1).b & 1) == 0)
    (*(*arg1 + 0x2b8))(arg1, rsi_1 + 0x1700)
    rcx_12 = arg1[5]

int64_t* rcx_13 = *(rcx_12 + 0x58)
uint32_t rdx_4 = 0

if (*(rsi_1 + 0x1708) == 0)
    rdx_4 = zx.d(arg4)

int64_t rax_18 = *rcx_13
uint32_t arg_8 = rdx_4

if ((*(rax_18 + 0x368))(rcx_13, rdx_4) != 0)
    (*(*arg1 + 0x2c0))(arg1, r13)
    char rax_21 = arg_8.b
    
    if ((*(r13 + 0xf1) & 4) != 0)
        rax_21 = 0
    
    arg_8.b = rax_21

int64_t* var_180 = nullptr

if (arg_8.b != 0)
    void* rdx_6 = arg1[5]
    
    if (*(rdx_6 + 0x358) == *(r13 + 0xd8) && ((*(rdx_6 + 0x370) ^ *(r13 + 0xf0)) & 0x20) == 0
            && *(rdx_6 + 0x270) != 0)
        int64_t rax_24 = *(rdx_6 + 0x268)
        
        if (rax_24 != 0 && rax_24 == *(rdx_6 + 0x5e0) && *(rdx_6 + 0x320) + *(r13 + 0xa0) s<= rdi)
            (*(*(rdx_6 + 0x280) + 0x158))(rdx_6 + 0x280, *(r13 + 0x90))
            void* rcx_18 = arg1[5]
            *(rcx_18 + 0x370) |= *(r13 + 0xf0) & 2
            void* rcx_19 = arg1[5]
            *(rcx_19 + 0x370) |= *(r13 + 0xf0) & 4
            void* rcx_20 = arg1[5]
            r13 = rcx_20 + 0x280
            var_180 = *(rcx_20 + 0x278)
            arg_18 = r13
            sub_14214e9b0(rcx_20)
            void* rcx_21 = *(arg1[5] + 0x58)
            *(rcx_21 + 0x264) -= 1

int64_t i = *(r13 + 0xa0)
int64_t var_1a0

if (i s<= rdi)
    int64_t rdi_2 = sx.q(*(rsi_1 + 0x1708))
    int32_t rax_36 = (rdi_2 + 1).d
    *(rsi_1 + 0x1708) = rax_36
    
    if (rax_36 s> *(rsi_1 + 0x170c))
        sub_1405a4d70(rsi_1 + 0x1700)
    
    *(*(rsi_1 + 0x1700) + (rdi_2 << 3)) = r13
else
    var_1a0 = *(r13 + 0x90)
    arg_8.b = 0
    
    if (i s> 0)
        int64_t i_4 = i_5
        
        do
            void*** rax_31 = j_sub_140a82f30(0x118)
            void*** r12_1
            
            if (rax_31 == 0)
                r12_1 = nullptr
            else
                r12_1 = sub_141f79e30(rax_31, arg1, 0)
            
            int64_t i_3 = i_4
            
            if (i s<= i_4)
                i_3 = i
            
            (*r12_1)[0x2b](r12_1, var_1a0, i_3)
            int32_t rcx_24 = *(rsi_1 + 0x1708)
            *(rsi_1 + 0x1708) = rcx_24 + 1
            
            if (rcx_24 + 1 s> *(rsi_1 + 0x170c))
                sub_1405a4d70(rsi_1 + 0x1700)
            
            i -= i_3
            var_1a0 += i_3 s>> 3
            *(*(rsi_1 + 0x1700) + (sx.q(rcx_24) << 3)) = r12_1
        while (i s> 0)
        
        r13 = arg_18
        r12 = arg2

uint32_t rdx_12 = zx.d(*(r13 + 0xf0))
int32_t rcx_28 = *(rsi_1 + 0x1708)
char r8_2 = rdx_12.b
int32_t rax_38 = data_143f3bc3c
int32_t r9_1 = arg1[0xa].d + rcx_28
int64_t i_6 = -1
int32_t r10_3 = (rdx_12 u>> 2 & 1) + 0x100

if (rax_38 s> 0 && rcx_28 s>= rax_38 && ((*(arg1[5] + 0xa4) u>> 1).b & 1) == 0 && r9_1 s< r10_3)
    rdx_12.b |= 0x20
    *(r13 + 0xf0) = rdx_12.b
    arg1[6].d |= 0x100
    r8_2 = *(r13 + 0xf0)

uint64_t var_190
char var_178

if ((r8_2 & 0x20) != 0 && r9_1 s>= r10_3)
    int64_t* rax_40
    int512_t zmm1
    rax_40, zmm1 = _vfprintf_p_l(&var_178, u"Outgoing reliable buffer overflow", u"NetworkErrors")
    int64_t* rax_41 = sub_140ac6680(rax_40)
    var_190 = 0
    int32_t rsi_3 = rax_41[1].d
    int64_t r15_1 = *rax_41
    int32_t var_188_1 = rsi_3
    
    if (rsi_3 != 0)
        sub_1405a4c70(&var_190, rsi_3, 0)
        memcpy(var_190, r15_1, rsi_3 * 2)
    else
        int32_t var_184_1 = 0
    
    int64_t* var_170
    
    if (var_170 != 0)
        var_170[1].d -= 1
        
        if (var_170[1].d == 1)
            (**var_170)(var_170)
            int32_t rdi_3 = *(var_170 + 0xc)
            *(var_170 + 0xc) -= 1
            
            if (rdi_3 == 1)
                (*(*var_170 + 8))(var_170, zx.q(rdi_3))
    
    int64_t* rcx_46 = arg1[5]
    void* rdx_16 = *rcx_46[0x262]
    
    if (rdx_16 != 0 && (*(rdx_16 + 0x30) & 2) == 0)
        void** var_158
        sub_141f79e30(&var_158, rdx_16, 0)
        char var_68
        char var_68_1 = var_68 | 0x20
        var_158 = &data_143286f68
        arg_8.b = 6
        int64_t* var_150
        char* rdx_17 = *var_150
        
        if (&rdx_17[1] u> var_150[1])
            sub_140b53380(&var_158, &arg_8, 1)
        else
            arg_8.b = *rdx_17
            *var_150 += 1
        
        sub_140a1d9d0(&var_158, &var_190, zmm1)
        int64_t r9_3
        r9_3.b = 1
        int64_t* rcx_41 = *rcx_46[0x262]
        (*(*rcx_41 + 0x2c8))(rcx_41, &i_5, &var_158, r9_3, -1, var_1a0)
        var_158 = &data_143286b38
        int64_t var_50
        
        if (var_50 != 0)
            sub_140a74f90(var_50)
        
        int64_t var_60
        
        if (var_60 != 0)
            sub_140a74f90(var_60)
        
        int64_t var_c8
        
        if (var_c8 != 0)
            sub_140a74f90(var_c8)
        
        sub_140b4cb40(&var_158)
        rcx_46 = arg1[5]
    
    rdx_16.b = 1
    (*(*rcx_46 + 0x2a8))(rcx_46, rdx_16)
    sub_14213f9e0(arg1[5])
    uint64_t rcx_48 = var_190
    *r12 = -1
    
    if (rcx_48 != 0)
        sub_140a74f90(rcx_48)
    
    return r12

int32_t i_1 = 0

if (*(rsi_1 + 0x1708) s> 0)
    int64_t rcx_49 = 0
    int64_t var_1a0_1 = 0
    
    do
        void*** rdi_5 = *(*(rsi_1 + 0x1700) + (rcx_49 << 3))
        char rdx_21 = *(rdi_5 + 0xf1)
        rdi_5[0x1e].b ^= (*(r13 + 0xf0) ^ rdi_5[0x1e].b) & 0x20
        char rax_53 = rdi_5[0x1e].b
        char rcx_50 = ((rax_53 ^ *(r13 + 0xf0)) & 2) ^ rax_53
        rdi_5[0x1e].b = rcx_50
        char rax_54 = ((rcx_50 ^ *(r13 + 0xf0)) & 4) ^ rcx_50
        rdi_5[0x1e].b = rax_54
        char rcx_51 = ((rax_54 ^ *(r13 + 0xf0)) & 8) ^ rax_54
        rdi_5[0x1e].b = rcx_51
        *(rdi_5 + 0xf2) = *(r13 + 0xf2)
        char r8_6 = ((rcx_51 ^ *(r13 + 0xf0)) & 0x10) ^ rcx_51
        rdi_5[0x1e].b = r8_6
        rdi_5[0x1b].d = *(r13 + 0xd8)
        *(rdi_5 + 0xdc) = *(r13 + 0xdc)
        rdi_5[0x1c] = *(r13 + 0xe0)
        
        if ((rdx_21 & 2) == 0)
            char rax_59 = (*(r13 + 0xf1) & 4) | rdx_21
            rdx_21 = rax_59
            *(rdi_5 + 0xf1) = rax_59
        
        char rdx_22
        
        if (*(rsi_1 + 0x1708) s<= 1)
            rdx_22 = r8_6
        else
            char rcx_52 = 0
            
            if (i_1 == 0)
                rcx_52 = -0x80
            
            rcx_52 = rcx_52 | (r8_6 & 0x3f) | 0x40
            rdi_5[0x1e].b = rcx_52
            int32_t rax_61
            rax_61.b = i_1 == *(rsi_1 + 0x1708) - 1
            rax_61.b |= rdx_21 & 0xfe
            rdx_22 = -3
            *(rdi_5 + 0xf1) = rax_61.b
            
            if (i_1 == 0)
                rdx_22 = -1
            
            rdx_22 &= rcx_52
            rdi_5[0x1e].b = rdx_22
            
            if ((*(r13 + 0xf0) & 4) == 0 || *(rsi_1 + 0x1708) - 1 != i_1)
                rdx_22 &= 0xfb
                rdi_5[0x1e].b = rdx_22
            else
                rdx_22 = (rdx_22 & 0xfb) | 4
                rdi_5[0x1e].b = rdx_22
        
        int64_t* rcx_57 = arg1[5]
        void*** r15_2 = var_180
        int32_t r15_3
        
        if (rcx_57[0x2a1].b != 0)
            r15_3 = sub_1421536e0(rcx_57, rdi_5, arg_8.b, arg5)
        else
            if ((rdx_22 & 0x20) == 0)
                r15_2 = rdi_5
                rcx_57[0x4f] = 0
            else if (var_180 != 0)
                rdi_5[0x18] = var_180[0x18]
                arg5 = sub_141f7bf90(var_180, rdi_5)
                *(arg1[5] + 0x278) = r15_2
            else
                rdi_5[0x18] = 0
                int64_t rdx_23 = sx.q(*(arg1 + 0x34))
                int64_t rcx_53 = *(arg1[5] + 0x1320)
                *(rcx_53 + (rdx_23 << 2)) += 1
                rdi_5[0x1d].d = *(rcx_53 + (rdx_23 << 2))
                arg1[0xa].d += 1
                void*** rax_65 = j_sub_140a82f30(0x118)
                
                if (rax_65 == 0)
                    r15_2 = nullptr
                else
                    void*** rax_66
                    rax_66, arg5 = sub_141f79b40(rax_65, rdi_5)
                    r15_2 = rax_66
                
                void* j = arg1[0xc]
                void* rcx_55 = &arg1[0xc]
                
                for (; j != 0; j = *rcx_55)
                    rcx_55 = j + 0xc0
                
                *rcx_55 = r15_2
                *(arg1[5] + 0x278) = r15_2
            
            rcx_57 = arg1[5]
            rdi_5 = r15_2
            
            if (rcx_57[0x2a1].b == 0)
                rdi_5[0x1e].b &= 0xfe
                int32_t rax_71 = sub_1421536e0(arg1[5], rdi_5, arg_8.b, arg5)
                r15_3 = rax_71
                
                if (arg1[7].d == 0xffffffff && (arg1[6].d & 0x800) != 0)
                    var_190.d = rax_71
                    var_190:4.d = rax_71
                    arg1[7] = var_190
                
                if ((rdi_5[0x1e].b & 4) != 0)
                    (*(*arg1 + 0x270))(arg1)
            else
                r15_3 = sub_1421536e0(rcx_57, rdi_5, arg_8.b, arg5)
        
        if (var_1a0_1 != 0)
            i_6:4.d = r15_3
        else
            i_5.d = r15_3
            i_5:4.d = r15_3
            i_6 = i_5
        
        arg5 = sub_141f7bf90(arg1[5] + 0x280, rdi_5)
        void* rcx_62 = arg1[5]
        i_1 += 1
        int64_t var_170_1 = *(rcx_62 + 0x5e0)
        var_178 = *(rcx_62 + 0x569) & 1
        *(rcx_62 + 0x260) = var_178.o
        rcx_49 = var_1a0_1 + 1
        var_1a0_1 = rcx_49
    while (i_1 s< *(rsi_1 + 0x1708))
    
    r8_2 = *(r13 + 0xf0)

if ((r8_2 & 2) != 0 && *(arg1[5] + 0x1508) == 0)
    arg1[7] = i_6

for (; i_2 s>= 0; i_2 += 1)
    if (i_2 s>= *(rsi_1 + 0x1708))
        break
    
    int64_t* rcx_65 = *(*(rsi_1 + 0x1700) + (sx.q(i_2) << 3))
    
    if (rcx_65 != r13 && rcx_65 != 0)
        (**rcx_65)(rcx_65, 1)

*arg2 = i_6
return arg2
