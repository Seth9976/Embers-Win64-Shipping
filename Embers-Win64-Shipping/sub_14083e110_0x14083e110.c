// 函数: sub_14083e110
// 地址: 0x14083e110
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = data_14396f080
uint64_t i_4 = zx.q(*(arg4 + 0xb0))
int64_t r13 = sx.q(arg3)
char arg_10

if (rax != 0xffffffff)
    arg_10 = 1

if (rax == 0xffffffff || i_4.d s<= rax)
    arg_10 = 0

int64_t* rax_1 = arg5
arg5.b = 0
void*** (* var_88)() = j_sub_140597fc0
int32_t* rsi = *rax_1
int64_t* var_80 = &arg5
int64_t* rax_3 = sub_140a756e0(&var_88, &data_143958018) + 0x10
int64_t* var_68 = rax_3
int64_t rcx_1 = *rax_3
int64_t rcx_2 = rax_3[2]
char var_50 = 0
uint64_t result_1 = rax_3[3]
rax_3[3] = &var_68
int64_t* rax_4 = var_68
rax_4[4].d += 1
int64_t** var_80_1 = &arg5
uint32_t arg_20 = (i_4 << 3).d
arg5.b = 0
var_88 = j_sub_140597fc0
void* rax_6 = sub_140a756e0(&var_88, &data_143958018)
int64_t rcx_4 = sx.q(arg_20)
int32_t* r14_2 = (*(rax_6 + 0x10) + 3) & 0xfffffffffffffffc
void* rax_7 = r14_2 + rcx_4

if (rax_7 u> *(rax_6 + 0x18))
    sub_140b0e3d0(rax_6 + 0x10, (rcx_4 + 4).d)
    r14_2 = (*(rax_6 + 0x10) + 3) & 0xfffffffffffffffc
    rax_7 = sx.q((i_4 << 3).d) + r14_2

*(rax_6 + 0x10) = rax_7
char r12_1 = *(arg2 + 4)
void* rcx_7 = arg1 + 0xb0
void* rax_11 = *(rcx_7 + 0x100)
uint32_t zmm0_1
float zmm1_1

if (r12_1 - 1 u<= 1)
    int64_t r8_1 = *(arg4 + 0x18)
    
    if (rax_11 != 0)
        rcx_7 = rax_11
    
    int32_t rdx_5 = *(rcx_7 + r13 * 0x10)
    int32_t rcx_33 = *(arg4 + 0xb8)
    int64_t r9_6 = zx.q(rcx_33 * rdx_5) + r8_1
    int64_t r10_5 = zx.q((rdx_5 + 1) * rcx_33) + r8_1
    int64_t r11_5 = zx.q((rdx_5 + 2) * rcx_33) + r8_1
    uint64_t r8_2 = 0
    float zmm2
    
    if (r12_1 != 1)
        if (i_4.d u>= 4)
            void* r15_2 = &r14_2[5]
            
            do
                int64_t rdx_7 = sx.q(r8_2.d)
                int32_t rcx_36 = (r8_2 + 2).d
                zmm1_1 = *(r9_6 + (rdx_7 << 2)) f- *(arg2 + 0x2c)
                zmm2 = *(r10_5 + (rdx_7 << 2)) f- *(arg2 + 0x30)
                zmm0_1 = *(r11_5 + (rdx_7 << 2)) f- *(arg2 + 0x34)
                arg_20 = zmm2 * zmm2 + zmm1_1 * zmm1_1 f+ zmm0_1 f* zmm0_1
                *(r15_2 - 0x14) = not.d(arg_20 | 0x80000000)
                *(r15_2 - 0x10) = r8_2.d
                r8_2 = zx.q(r8_2.d + 4)
                zmm1_1 = *(r9_6 + (rdx_7 << 2) + 4) f- *(arg2 + 0x2c)
                zmm2 = *(r10_5 + (rdx_7 << 2) + 4) f- *(arg2 + 0x30)
                zmm0_1 = *(r11_5 + (rdx_7 << 2) + 4) f- *(arg2 + 0x34)
                arg_20 = zmm2 * zmm2 + zmm1_1 * zmm1_1 f+ zmm0_1 f* zmm0_1
                *(r15_2 - 0xc) = not.d(arg_20 | 0x80000000)
                *(r15_2 - 8) = rcx_36 - 1
                zmm1_1 = *(r9_6 + (rdx_7 << 2) + 8) f- *(arg2 + 0x2c)
                zmm2 = *(r10_5 + (rdx_7 << 2) + 8) f- *(arg2 + 0x30)
                zmm0_1 = *(r11_5 + (rdx_7 << 2) + 8) f- *(arg2 + 0x34)
                arg_20 = zmm2 * zmm2 + zmm1_1 * zmm1_1 f+ zmm0_1 f* zmm0_1
                *(r15_2 - 4) = not.d(arg_20 | 0x80000000)
                *r15_2 = rcx_36
                zmm2 = *(r10_5 + (rdx_7 << 2) + 0xc) f- *(arg2 + 0x30)
                zmm1_1 = *(r9_6 + (rdx_7 << 2) + 0xc) f- *(arg2 + 0x2c)
                zmm0_1 = *(r11_5 + (rdx_7 << 2) + 0xc) f- *(arg2 + 0x34)
                arg_20 = zmm2 * zmm2 + zmm1_1 * zmm1_1 f+ zmm0_1 f* zmm0_1
                *(r15_2 + 4) = not.d(arg_20 | 0x80000000)
                *(r15_2 + 8) = rcx_36 + 1
                r15_2 += 0x20
            while (r8_2.d u< (i_4 - 3).d)
        
        if (r8_2.d u< i_4.d)
            void* rcx_37 = &r14_2[r8_2 * 2]
            
            do
                int64_t rax_72 = sx.q(r8_2.d)
                zmm2 = *(r10_5 + (rax_72 << 2)) f- *(arg2 + 0x30)
                zmm1_1 = *(r9_6 + (rax_72 << 2)) f- *(arg2 + 0x2c)
                zmm0_1 = *(r11_5 + (rax_72 << 2)) f- *(arg2 + 0x34)
                *(rcx_37 + 4) = r8_2.d
                r8_2 = zx.q(r8_2.d + 1)
                arg_20 = zmm2 * zmm2 + zmm1_1 * zmm1_1 f+ zmm0_1 f* zmm0_1
                *rcx_37 = not.d(arg_20 | 0x80000000)
                rcx_37 += 8
            while (r8_2.d u< i_4.d)
    else
        if (i_4.d u>= 4)
            void* r15_1 = &r14_2[5]
            
            do
                int64_t rdx_6 = sx.q(r8_2.d)
                int32_t rcx_34 = (r8_2 + 2).d
                zmm2 = (*(r9_6 + (rdx_6 << 2)) f- *(arg2 + 0x2c)) f*
                    *(arg2 + 0x38) f+ (*(r10_5 + (rdx_6 << 2)) f- *(arg2 + 0x30)) f* *(arg2 + 0x3c)
                arg_20 = zmm2 + (*(r11_5 + (rdx_6 << 2)) f- *(arg2 + 0x34)) f* *(arg2 + 0x40)
                *(r15_1 - 0x14) = not.d(arg_20 | 0x80000000)
                *(r15_1 - 0x10) = r8_2.d
                r8_2 = zx.q(r8_2.d + 4)
                zmm2 = (*(r9_6 + (rdx_6 << 2) + 4) f- *(arg2 + 0x2c)) f*
                    *(arg2 + 0x38) f+ (*(r10_5 + (rdx_6 << 2) + 4) f- *(arg2 + 0x30)) f*
                    *(arg2 + 0x3c)
                arg_20 = zmm2 + (*(r11_5 + (rdx_6 << 2) + 4) f- *(arg2 + 0x34)) f* *(arg2 + 0x40)
                *(r15_1 - 0xc) = not.d(arg_20 | 0x80000000)
                *(r15_1 - 8) = rcx_34 - 1
                zmm2 = (*(r9_6 + (rdx_6 << 2) + 8) f- *(arg2 + 0x2c)) f*
                    *(arg2 + 0x38) f+ (*(r10_5 + (rdx_6 << 2) + 8) f- *(arg2 + 0x30)) f*
                    *(arg2 + 0x3c)
                arg_20 = zmm2 + (*(r11_5 + (rdx_6 << 2) + 8) f- *(arg2 + 0x34)) f* *(arg2 + 0x40)
                *(r15_1 - 4) = not.d(arg_20 | 0x80000000)
                *r15_1 = rcx_34
                zmm2 = (*(r10_5 + (rdx_6 << 2) + 0xc) f- *(arg2 + 0x30)) f* *(arg2 + 0x3c)
                    + (*(r9_6 + (rdx_6 << 2) + 0xc) f- *(arg2 + 0x2c)) f* *(arg2 + 0x38)
                arg_20 = zmm2 f+ (*(r11_5 + (rdx_6 << 2) + 0xc) f- *(arg2 + 0x34)) f* *(arg2 + 0x40)
                *(r15_1 + 4) = not.d(arg_20 | 0x80000000)
                *(r15_1 + 8) = rcx_34 + 1
                r15_1 += 0x20
            while (r8_2.d u< (i_4 - 3).d)
        
        if (r8_2.d u< i_4.d)
            void* rcx_35 = &r14_2[r8_2 * 2]
            
            do
                int64_t rax_54 = sx.q(r8_2.d)
                zmm2 = (*(r9_6 + (rax_54 << 2)) f- *(arg2 + 0x2c)) f* *(arg2 + 0x38)
                zmm0_1 = (*(r10_5 + (rax_54 << 2)) f- *(arg2 + 0x30)) f* *(arg2 + 0x3c)
                zmm1_1 = (*(r11_5 + (rax_54 << 2)) f- *(arg2 + 0x34)) f* *(arg2 + 0x40)
                *(rcx_35 + 4) = r8_2.d
                r8_2 = zx.q(r8_2.d + 1)
                arg_20 = zmm2 f+ zmm0_1 + zmm1_1
                *rcx_35 = not.d(arg_20 | 0x80000000)
                rcx_35 += 8
            while (r8_2.d u< i_4.d)
else
    zmm1_1 = (zx.o(0)).d
    
    if (rax_11 != 0)
        rcx_7 = rax_11
    
    uint64_t r8 = 0
    void* r11_2 = zx.q(*(rcx_7 + r13 * 0x10) * *(arg4 + 0xb8)) + *(arg4 + 0x18)
    
    if (r12_1 != 3)
        if (i_4.d u>= 4)
            int32_t r9_2 = 2
            void* r10_2 = r11_2 + 8
            void* rdx_3 = &r14_2[5]
            
            do
                zmm0_1 = *(r10_2 - 8)
                rdx_3 += 0x20
                arg_20 = zmm0_1
                r10_2 += 0x10
                uint32_t rcx_18 = arg_20
                uint32_t rcx_19 = not.d(rcx_18)
                
                if (zmm0_1 f>= zmm1_1)
                    rcx_19 = rcx_18 | 0x80000000
                
                *(rdx_3 - 0x34) = not.d(rcx_19)
                *(rdx_3 - 0x30) = r8.d
                zmm0_1 = *(r10_2 - 0x14)
                arg_20 = zmm0_1
                uint32_t rcx_21 = arg_20
                uint32_t rcx_22 = not.d(rcx_21)
                
                if (zmm0_1 f>= zmm1_1)
                    rcx_22 = rcx_21 | 0x80000000
                
                *(rdx_3 - 0x2c) = not.d(rcx_22)
                *(rdx_3 - 0x28) = r9_2 - 1
                zmm0_1 = *(r10_2 - 0x10)
                arg_20 = zmm0_1
                uint32_t rcx_24 = arg_20
                uint32_t rcx_25 = not.d(rcx_24)
                
                if (zmm0_1 f>= zmm1_1)
                    rcx_25 = rcx_24 | 0x80000000
                
                *(rdx_3 - 0x24) = not.d(rcx_25)
                *(rdx_3 - 0x20) = r9_2
                zmm0_1 = *(r10_2 - 0xc)
                arg_20 = zmm0_1
                uint32_t rcx_27 = arg_20
                uint32_t rcx_28 = not.d(rcx_27)
                
                if (zmm0_1 f>= zmm1_1)
                    rcx_28 = rcx_27 | 0x80000000
                
                int32_t rax_35 = r9_2 + 1
                r8 = zx.q(r8.d + 4)
                *(rdx_3 - 0x1c) = not.d(rcx_28)
                r9_2 += 4
                *(rdx_3 - 0x18) = rax_35
            while (r8.d u< (i_4 - 3).d)
        
        if (r8.d u< i_4.d)
            void* rdx_4 = &r14_2[r8 * 2]
            uint32_t* r9_3 = r11_2 + (r8 << 2)
            
            do
                zmm0_1 = *r9_3
                r9_3 = &r9_3[1]
                *(rdx_4 + 4) = r8.d
                rdx_4 += 8
                arg_20 = zmm0_1
                uint32_t rcx_30 = arg_20
                uint32_t rcx_31 = not.d(rcx_30)
                
                if (zmm0_1 f>= zmm1_1)
                    rcx_31 = rcx_30 | 0x80000000
                
                r8 = zx.q(r8.d + 1)
                *(rdx_4 - 8) = not.d(rcx_31)
            while (r8.d u< i_4.d)
    else
        if (i_4.d u>= 4)
            int32_t r9 = 2
            void* r10_1 = r11_2 + 8
            void* rdx_1 = &r14_2[5]
            
            do
                zmm0_1 = *(r10_1 - 8)
                r10_1 += 0x10
                arg_20 = zmm0_1
                rdx_1 += 0x20
                uint32_t rcx_8 = arg_20
                uint32_t rcx_9 = not.d(rcx_8)
                
                if (zmm0_1 f>= zmm1_1)
                    rcx_9 = rcx_8 | 0x80000000
                
                *(rdx_1 - 0x34) = rcx_9
                *(rdx_1 - 0x30) = r8.d
                zmm0_1 = *(r10_1 - 0x14)
                arg_20 = zmm0_1
                uint32_t rcx_10 = arg_20
                uint32_t rcx_11 = not.d(rcx_10)
                
                if (zmm0_1 f>= zmm1_1)
                    rcx_11 = rcx_10 | 0x80000000
                
                *(rdx_1 - 0x2c) = rcx_11
                *(rdx_1 - 0x28) = r9 - 1
                zmm0_1 = *(r10_1 - 0x10)
                arg_20 = zmm0_1
                uint32_t rcx_12 = arg_20
                uint32_t rcx_13 = not.d(rcx_12)
                
                if (zmm0_1 f>= zmm1_1)
                    rcx_13 = rcx_12 | 0x80000000
                
                *(rdx_1 - 0x24) = rcx_13
                *(rdx_1 - 0x20) = r9
                zmm0_1 = *(r10_1 - 0xc)
                arg_20 = zmm0_1
                uint32_t rcx_14 = arg_20
                uint32_t rcx_15 = not.d(rcx_14)
                
                if (zmm0_1 f>= zmm1_1)
                    rcx_15 = rcx_14 | 0x80000000
                
                int32_t rax_23 = r9 + 1
                *(rdx_1 - 0x1c) = rcx_15
                r9 += 4
                r8 = zx.q(r8.d + 4)
                *(rdx_1 - 0x18) = rax_23
            while (r8.d u< (i_4 - 3).d)
        
        if (r8.d u< i_4.d)
            void* rdx_2 = &r14_2[r8 * 2]
            uint32_t* r9_1 = r11_2 + (r8 << 2)
            
            do
                zmm0_1 = *r9_1
                r9_1 = &r9_1[1]
                *(rdx_2 + 4) = r8.d
                rdx_2 += 8
                arg_20 = zmm0_1
                uint32_t rcx_16 = arg_20
                uint32_t rcx_17 = not.d(rcx_16)
                
                if (zmm0_1 f>= zmm1_1)
                    rcx_17 = rcx_16 | 0x80000000
                
                r8 = zx.q(r8.d + 1)
                *(rdx_2 - 8) = rcx_17
            while (r8.d u< i_4.d)
uint64_t result

if (arg_10 != 0)
    arg_20.b = 0
    uint32_t* var_70_1 = &arg_20
    void*** (* var_78)() = j_sub_140597fc0
    void* rax_76 = sub_140a756e0(&var_78, &data_143958018)
    uint32_t rcx_40 = (i_4 << 3).d
    int64_t r12_4 = sx.q(rcx_40)
    int64_t* rbx_5 = (*(rax_76 + 0x10) + 3) & 0xfffffffffffffffc
    void* rax_77 = rbx_5 + r12_4
    
    if (rax_77 u> *(rax_76 + 0x18))
        sub_140b0e3d0(rax_76 + 0x10, rcx_40 + 4)
        rbx_5 = (*(rax_76 + 0x10) + 3) & 0xfffffffffffffffc
        rax_77 = rbx_5 + r12_4
    
    *(rax_76 + 0x10) = rax_77
    result = sub_140819b20(rbx_5, r14_2, i_4.d)
    
    if (i_4.d != 0)
        void* rcx_43 = rbx_5 + 4
        uint64_t i_3 = i_4
        uint64_t i
        
        do
            result = zx.q(*rcx_43)
            rcx_43 += 8
            *rsi = result.d
            rsi = &rsi[1]
            i = i_3
            i_3 -= 1
        while (i != 1)
else
    arg_10 = 0
    result = sub_140819000(r14_2, i_4.d, arg5.b)
    
    if (i_4.d != 0)
        void* r14_5 = &r14_2[1]
        uint64_t i_2 = i_4
        uint64_t i_1
        
        do
            result = zx.q(*r14_5)
            r14_5 += 8
            *rsi = result.d
            rsi = &rsi[1]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

if (var_50 == 0)
    int64_t* rax_78 = var_68
    char var_50_1 = 1
    rax_78[4].d -= 1
    int64_t* rcx_44 = var_68
    
    if (rcx_2 != rcx_44[2])
        sub_140b16b40(rcx_44, rcx_2)
        rcx_44 = var_68
    
    *rcx_44 = rcx_1
    result = result_1
    var_68[3] = result

return result
