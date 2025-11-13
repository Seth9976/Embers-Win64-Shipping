// 函数: sub_14225dd10
// 地址: 0x14225dd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
*arg1 = 0
arg1[1] = 0

if (arg5 != 0)
    sub_1405dadb0(arg1, arg5)

int64_t var_a8 = 0
void* rcx = nullptr
void* var_68 = nullptr
int32_t var_a0 = 0
int32_t var_7c = 0x80
int64_t var_98
__builtin_memset(&var_98, 0, 0x1c)
int32_t var_78 = 0xffffffff
int32_t var_74 = 0
int32_t var_60 = 0
int32_t var_118 = 0

if (arg5 != 0)
    char* r14_1 = arg4 + 0x30
    int32_t rcx_20
    
    do
        int64_t rbx_1 = sx.q(arg1[1].d)
        int32_t rax_2 = (rbx_1 + 1).d
        arg1[1].d = rax_2
        
        if (rax_2 s> *(arg1 + 0xc))
            sub_1405a4cf0(arg1)
        
        *(*arg1 + (rbx_1 << 2)) = 0xffffffff
        
        if ((*(r14_1 + 2) & 0x110) == 0 && (*r14_1 & 3) == 0)
            int64_t* rbx_2 = *(r14_1 - 0x30)
            int64_t* rsi_1 = *(r14_1 - 0x28)
            void var_d0
            int32_t r12_1 = *((*(*rbx_2 + 0xa0))(rbx_2, &var_d0) + 0xc)
            void var_c0
            uint8_t r15_2 = (*((*(*rsi_1 + 0xa0))(rsi_1, &var_c0) + 0xc) u>> 3).b & 1
            uint8_t r12_2 = (r12_1 u>> 3).b & 1
            
            if (r12_2 != 0 || r15_2 != 0)
                int32_t* var_110 = sub_14227b210(arg2, rbx_2)
                int32_t* rax_9 = sub_14227b210(arg3, rsi_1)
                int32_t* r9 = var_110
                uint32_t rdx_7 = (r9 u>> 4).d
                int32_t r8_1 = (0x9e3779b9 - rdx_7) ^ rdx_7 << 8
                int32_t r10_3 = neg.d(rdx_7 + r8_1) ^ r8_1 u>> 0xd
                int32_t rdx_10 = (rdx_7 - r8_1 - r10_3) ^ r10_3 u>> 0xc
                int32_t r8_4 = (r8_1 - rdx_10 - r10_3) ^ rdx_10 << 0x10
                int32_t r10_6 = (r10_3 - r8_4 - rdx_10) ^ r8_4 u>> 5
                int32_t rdx_13 = (rdx_10 - r8_4 - r10_6) ^ r10_6 u>> 3
                int32_t r8_7 = (r8_4 - rdx_13 - r10_6) ^ rdx_13 << 0xa
                int32_t r10_9 = (r10_6 - r8_7 - rdx_13) ^ r8_7 u>> 0xf
                int64_t* rsi_2
                
                if (var_a0 == var_74)
                labelid_18:
                    rsi_2 = sub_142258890(&var_a8, r10_9, &var_110)
                else
                    void var_70
                    void* rcx_8 = &var_70
                    
                    if (var_68 != 0)
                        rcx_8 = var_68
                    
                    int32_t rax_27 = *(rcx_8 + ((sx.q(var_60 - 1) & sx.q(r10_9)) << 2))
                    
                    if (rax_27 == 0xffffffff)
                    label_14225df4c:
                        rsi_2 = sub_142258890(&var_a8, r10_9, &var_110)
                    else
                        int64_t r8_9 = var_a8
                        int64_t* rdx_17
                        
                        while (true)
                            rdx_17 = sx.q(rax_27) * 0x60
                            
                            if (*(rdx_17 + r8_9) == r9)
                                break
                            
                            rax_27 = *(rdx_17 + r8_9 + 0x58)
                            
                            if (rax_27 == 0xffffffff)
                                goto label_14225df4c_2
                        
                        if (rax_27 == 0xffffffff)
                        label_14225df4c_1:
                            rsi_2 = sub_142258890(&var_a8, r10_9, &var_110)
                        else
                            void* rsi_3 = rdx_17 + r8_9
                            
                            if (rsi_3 == 0)
                            label_14225df4c_2:
                                rsi_2 = sub_142258890(&var_a8, r10_9, &var_110)
                            else
                                rsi_2 = rsi_3 + 8
                
                int32_t var_108
                sub_140865c40(rsi_2, &var_108, rax_9)
                int64_t rax_29 = sx.q(var_108)
                void* const r8_12
                
                if (rax_29.d == 0xffffffff)
                    r8_12 = nullptr
                else
                    r8_12 = *rsi_2 + rax_29 * 0x18
                
                int32_t* rax_30 = r8_12 + 8
                
                if (r8_12 == 0)
                    rax_30 = nullptr
                
                if (rax_30 == 0)
                    int64_t rbx_4 = sx.q(arg6[1].d)
                    int32_t rax_31 = (rbx_4 + 1).d
                    arg6[1].d = rax_31
                    
                    if (rax_31 s> *(arg6 + 0xc))
                        sub_1405fde00(arg6)
                    
                    int64_t rbx_5 = rbx_4 * 0x68
                    uint8_t* rbx_6 = rbx_5 + *arg6
                    
                    if (rbx_5 == neg.q(*arg6))
                        rbx_6 = nullptr
                    else
                        rbx_6[1] = 0
                        *(rbx_6 + 4) = 0xffffffff
                        *(rbx_6 + 8) = 0
                        *(rbx_6 + 0xc) = 0xffffffff
                        *(rbx_6 + 0x10) = 0
                        *(rbx_6 + 0x14) = 0xffffffff
                        *(rbx_6 + 0x18) = 0
                        *(rbx_6 + 0x20) = 0xffffffff
                        *(rbx_6 + 0x24) = 0
                        *(rbx_6 + 0x28) = 0xffffffff
                        *(rbx_6 + 0x2c) = 0
                        *(rbx_6 + 0x30) = 0xffffffff
                        *(rbx_6 + 0x34) = 0
                        __builtin_memset(&rbx_6[0x40], 0, 0x28)
                    
                    *rbx_6 = r12_2
                    sub_142278b10(&rbx_6[4], var_110)
                    rbx_6[1] = r15_2
                    sub_142278b10(&rbx_6[0x20], rax_9)
                    int32_t var_104 = arg6[1].d - 1
                    void** var_e0 = &var_110
                    int32_t* var_d8_1 = &var_104
                    int32_t var_100
                    sub_1408419d0(rsi_2, &var_100, &var_e0, nullptr)
                    rax_30 = *rsi_2 + sx.q(var_100) * 0x18 + 8
                
                *(*arg1 + (sx.q(var_118) << 2)) = *rax_30
        
        r14_1 = &r14_1[0x40]
        rcx_20 = var_118 + 1
        var_118 = rcx_20
    while (rcx_20 u< arg5)
    rcx = var_68

int32_t var_60_1 = 0

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1419fd020(&var_a8)
__security_check_cookie(rax_1 ^ &var_138)
return arg1
