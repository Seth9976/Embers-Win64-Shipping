// 函数: sub_142bc2010
// 地址: 0x142bc2010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = arg7
int32_t rdi = 0
void* r14 = arg9
char* var_98 = nullptr
int32_t rcx = 0x60
int64_t r12 = *(r14 + 0x2f0)
int32_t rax
rax.b = ((r10 - 0x3000) & 0xffffefff) == 0
arg7.b = rax.b

if (rax.b != 0)
    rcx = 0x201

int64_t* rax_2 = *arg8
int64_t r11 = *rax_2
int64_t var_48 = 0
int64_t* var_88 = rax_2
int64_t var_80
__builtin_memset(&var_80, 0, 0x30)
int64_t var_58
var_58:4.d = r10
void* var_50 = arg1
var_48.d = 0
int64_t rax_3 = sub_142b99a90(r11, 8, 0, rcx, 0, &arg9)
int32_t rbx = arg9.d
int64_t var_68 = rax_3

if (rbx == 0)
    var_58.d = rcx
    int64_t var_60_1 = rax_3
else
    sub_142b99980(r11, rax_3)
    rbx = arg9.d
    rax_3 = 0
    var_68 = 0

if (rbx == 0)
    int512_t zmm0_1 = memset(arg1, 0, 0xbc)
    bool cond:1_1 = arg7.b != 0
    int32_t rax_4 = 0x30
    *(arg1 + 0x20) = 0xff9c0000
    
    if (cond:1_1)
        rax_4 = 0x201
    
    *(arg1 + 0x24) = 0x320000
    *(arg1 + 0xb8) = rax_4
    *(arg1 + 0x2c) = 2
    *(arg1 + 0x30) = 0x10000
    *(arg1 + 0x3c) = 0x10000
    *(arg1 + 0x9c) = 0x2210
    __builtin_memcpy(arg1, 
        "\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00\xff\xff\x00\x00", 
        0x18)
    *(arg1 + 0x80) = 0xffff
    *(arg1 + 0x84) = 0xffff
    *(arg1 + 0x88) = 0xffff
    *(arg1 + 0xac) = 0xffff
    int32_t rax_6
    
    if (arg2[2].d == 0)
        int32_t rax_7 = sub_142b97060(arg4, arg2[3].d, arg5)
        rbx = rax_7
        
        if (rax_7 == 0)
            int32_t rax_8 = sub_142b96670(arg4, *(arg2 + 0x1c), &var_98)
            rbx = rax_8
            
            if (rax_8 == 0)
                rax_6 = *(arg2 + 0x1c)
                goto label_142bc21fe
    else
        int32_t rax_5 = sub_142bc0190(arg2, arg3, &var_98, &arg9, zmm0_1, arg5)
        rbx = rax_5
        
        if (rax_5 == 0)
            rax_6 = arg9.d
        label_142bc21fe:
            char* rdx_4 = var_98
            rbx = sub_142bc11d0(&var_88, rdx_4, &rdx_4[zx.q(rax_6)])
        
        if (arg2[2].d == 0)
            sub_142b97020(arg4, &var_98)
        else if (arg2[5] == 0)
            sub_142b97020(*arg2, &var_98)
        
        if (rbx == 0 && *(arg1 + 0x84) == 0xffff)
            int32_t rax_10
            int512_t zmm0_2
            rax_10, zmm0_2 = sub_142bbd060(arg8, arg1, 0, 0, arg5)
            rbx = rax_10
            
            if (rax_10 == 0)
                char r15_1 = arg7.b
                
                if (r15_1 == 0)
                    int32_t rcx_11 = *(*(r14 + 0xd0) + 0x5c)
                    
                    if (rcx_11 != 0xffffffff)
                        *(arg1 + 0x2c8) = rcx_11
                        
                        if (*(*(r14 + 0xd0) + 0x5c) != 0)
                            do
                                *(*(r14 + 0xd0) + 0x5c) =
                                    (*(r12 + 0x28))(zx.q(*(*(r14 + 0xd0) + 0x5c)))
                            while (*(*(r14 + 0xd0) + 0x5c) s< 0)
                    else
                        void* r14_1 = *(r14 + 0x90)
                        *(arg1 + 0x2c8) = *(r14_1 + 0x60)
                        
                        if (*(r14_1 + 0x60) != 0)
                            int32_t i
                            
                            do
                                i = (*(r12 + 0x28))(zx.q(*(r14_1 + 0x60)))
                                *(r14_1 + 0x60) = i
                            while (i s< 0)
                    
                    if (*(arg1 + 0x2c8) == 0)
                        *(arg1 + 0x2c8) = *(arg1 + 0x218)
                
                int32_t rax_18 = *(arg1 + 0x21c)
                
                if (rax_18 != 0)
                    int32_t rax_19 = sub_142b97060(arg4, *(arg1 + 0x74) + rax_18 + arg6, arg5)
                    rbx = rax_19
                    
                    if (rax_19 == 0)
                        int32_t rax_20 = sub_142bc0670(arg1 + 0x290, arg4, 1, r15_1, zmm0_2)
                        rbx = rax_20
                        
                        if (rax_20 == 0)
                            void* rax_21 = *(arg1 + 0x290)
                            rbx = 0
                            arg7 = 0
                            int64_t r15_2 = *(rax_21 + 0x30)
                            *(arg1 + 0x2c0) = 0
                            int32_t rax_22
                            
                            if (*(arg1 + 0x2b0) == 0)
                                rax_22 = sub_142bc0820(arg1 + 0x290, arg5)
                                arg7 = rax_22
                                rbx = rax_22
                            
                            if (*(arg1 + 0x2b0) != 0 || rax_22 == 0)
                                int32_t r9_3 = *(arg1 + 0x2a0)
                                
                                if (r9_3 != 0)
                                    int64_t* rax_23 = sub_142b99a90(r15_2, 8, 0, r9_3 + 1, 0, &arg7)
                                    rbx = arg7
                                    
                                    if (rbx == 0)
                                        int64_t r10_1 = *(arg1 + 0x2b8)
                                        int32_t i_1 = 1
                                        *rax_23 = r10_1
                                        
                                        if (*(arg1 + 0x2a0) u>= 1)
                                            do
                                                uint64_t i_2 = zx.q(i_1)
                                                int32_t rax_26 = *(*(arg1 + 0x2b0) + (i_2 << 2)) - 1
                                                
                                                if (rax_26 u>= rdi)
                                                    if (rax_26 u> *(arg1 + 0x2ac))
                                                        rax_26 = *(arg1 + 0x2ac)
                                                    
                                                    rdi = rax_26
                                                
                                                i_1 += 1
                                                rax_23[i_2] = zx.q(rdi) + r10_1
                                            while (i_1 u<= *(arg1 + 0x2a0))
                                        
                                        rbx = arg7
                                        *(arg1 + 0x2c0) = rax_23
    rax_3 = var_68

sub_142b99980(*var_88, rax_3)
return zx.q(rbx)
