// 函数: sub_142682070
// 地址: 0x142682070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_178
int64_t rax_1 = __security_cookie ^ &var_178
int64_t** r12 = arg4
void var_d8
sub_1426022c0(&var_d8)
uint32_t rax_2
void* rsi_1

if (data_143de5480 != 0)
    rsi_1 = &var_d8
    rax_2.b = GetCurrentThreadId() == data_143de5470

if (data_143de5480 == 0 || rax_2.b != 0)
    rsi_1 = &arg1[0xc]

sub_142611af0(rsi_1, arg1[1], 0x800, nullptr)
int32_t rax_3 = r12[1].d
int64_t* r9 = *r12
int128_t zmm1 = *(arg2 + 4) ^ 0x80000000
float var_108 = (*arg2 ^ 0x80000000).d
int32_t r15_1 = 0
int32_t var_104 = (*(arg2 + 8)).d
int32_t var_100 = zmm1.d
zmm1 = *(arg3 + 4)
float var_118 = (*arg3 ^ 0x80000000).d
int128_t* r14
r14.b = 0
int32_t var_148 = 1
int64_t var_130
int64_t* var_150 = &var_130
int32_t var_114 = (*(arg3 + 8)).d
int32_t var_110 = (zmm1 ^ 0x80000000).d
var_130 = 0
int32_t var_128 = 0
int32_t rax_4
int128_t zmm6
rax_4, zmm6 = sub_14260d860(rsi_1, &var_108, &var_118, r9, rax_3, var_150, var_148)
arg5[1].d = 0

if (*(arg5 + 0xc) s<= 0xffffffff)
    sub_1405a51b0(arg5, 0)

if (((rax_4 u>> 0x1e).b & 1) != 0)
    int64_t rbx_3 = sx.q(arg5[1].d)
    int64_t rsi_2 = sx.q(var_128)
    int32_t rax_5 = (rbx_3 + rsi_2).d
    arg5[1].d = rax_5
    
    if (rax_5 s> *(arg5 + 0xc))
        sub_1405c4e40(arg5)
    
    memset((rbx_3 << 5) + *arg5, 0, rsi_2 << 5)
    int64_t* rbx_4 = *arg5
    
    if (var_128 s> 0)
        int64_t* r12_1 = nullptr
        
        do
            int64_t rax_6 = var_130
            int32_t zmm0_1 = *(r12_1 + rax_6 + 0x10)
            *rbx_4 = (_mm_unpacklo_ps(*(r12_1 + rax_6 + 0xc) ^ zmm6, 
                (*(r12_1 + rax_6 + 0x14) ^ zmm6).q)).q
            rbx_4[1].d = zmm0_1
            int64_t rdx_3 = *(r12_1 + var_130)
            rbx_4[2] = rdx_3
            void* rcx_8 = arg1[1]
            r14 = zx.q(*(r12_1 + var_130 + 0x18))
            char var_138 = 0x3f
            sub_1426101c0(rcx_8, rdx_3, &var_138)
            uint32_t rax_10 = zx.d(var_138)
            int64_t* var_120
            var_120.d = rax_10
            int64_t* rax_11 = sub_1426569e0(*arg1, rax_10)
            int16_t rcx_11
            
            if (rax_11 == 0)
                rcx_11 = 0
            else
                void* rax_12 = rax_11[0x23]
                
                if (rax_12 != 0)
                    rcx_11 = *(rax_12 + 0x44)
                else
                    (*(*rax_11 + 0x390))(rax_11)
                    rax_12 = rax_11[0x23]
                    
                    if (rax_12 == 0)
                        rcx_11 = 0
                    else
                        rcx_11 = *(rax_12 + 0x44)
            
            rbx_4[3].d = (zx.d(rcx_11) << 8 | var_120.d) << 8 | zx.d(r14.b)
            
            if (arg6 != 0 && (r14.b & 4) != 0)
                int128_t* rax_15 = sub_14260fdc0(arg1[1], rbx_4[2])
                
                if (rax_15 != 0)
                    *(rbx_4 + 0x1c) = rax_15[2].d
                    int64_t rsi_4 = sx.q(arg6[1].d)
                    int32_t rcx_19 = (rsi_4 + 1).d
                    arg6[1].d = rcx_19
                    
                    if (rcx_19 s> *(arg6 + 0xc))
                        sub_1405a4cf0(arg6)
                    
                    *(*arg6 + (rsi_4 << 2)) = rax_15[2].d
            
            rbx_4 = &rbx_4[4]
            r15_1 += 1
            r12_1 = &r12_1[4]
        while (r15_1 s< var_128)
        
        r12 = arg4
        rbx_4 = *arg5
    
    r14.b = 1
    rbx_4[sx.q(arg5[1].d) * 4 - 2] = (*r12)[sx.q(r12[1].d) - 1]

sub_142609160(var_130)
sub_142602500(&var_d8)
__security_check_cookie(rax_1 ^ &var_178)
return zx.q(r14.b)
