// 函数: sub_1420b2dd0
// 地址: 0x1420b2dd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
int32_t rdi = 0
arg7[1].d = 0

if (*(arg7 + 0xc) != 0)
    sub_1405c5570(arg7, 0)

TEB* gsbase

if (data_143f48000 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f48000)
    
    if (data_143f48000 == 0xffffffff)
        sub_140b58170(&data_143f47ff8, "BoxOverlapComponents", 1)
        _Init_thread_footer(&data_143f48000)

void var_f8
void var_b8
sub_141eb54c0(&var_b8, data_143f47ff8, &var_f8, 0, nullptr)
sub_141eb8b70(&var_b8, arg6)
int64_t var_e8 = 0
int32_t r14 = 0
int32_t var_e0 = 0
int32_t var_f0 = 0
char var_ec = 0

while (true)
    int32_t rax_4
    
    if (r14 s< 0 || r14 s>= arg4[1].d)
        rax_4.b = 0
    else
        rax_4.b = 1
    
    if (rax_4.b == 0)
        break
    
    rax_4 = sub_141ebfb60(sub_141ec4150(), 0, zx.d(*(sx.q(r14) + *arg4)))
    var_f0 |= 1 << (rax_4 u% 0x20)
    r14 += 1

void* rax_7 = sub_1423de540(data_143f5b298, arg1, 1)

if (rax_7 != 0)
    void* var_108_1 = &var_b8
    int32_t var_d8
    int32_t* var_110_1 = &var_d8
    int32_t var_d4_1 = *arg3
    int32_t* var_118_1 = &var_f0
    int32_t var_d0_1 = arg3[1]
    int32_t var_cc_1 = arg3[2]
    var_d8 = 1
    sub_141ec85d0(rax_7, &var_e8, arg2, &data_14399f720, var_118_1, var_110_1, var_108_1)

int64_t rbx

if (var_e0 s> 0)
    do
        rbx = var_e8 + ((sx.q(rdi) * 3 + 1) << 3)
        
        if (sub_140d3e110(rbx) != 0)
            if (arg5 == 0)
            label_1420b2fab:
                int64_t rax_14 = sub_140d3c6e0(rbx)
                rbx = sx.q(arg7[1].d)
                int32_t rcx_17 = (rbx + 1).d
                arg7[1].d = rcx_17
                
                if (rcx_17 s> *(arg7 + 0xc))
                    sub_1405a4d70(arg7)
                
                *(*arg7 + (rbx << 3)) = rax_14
            else
                void* rax_11 = sub_140d3c6e0(rbx)
                int64_t rdx_4 = sx.q(*(arg5 + 0x38))
                void* rax_12 = *(rax_11 + 0x10)
                
                if (rdx_4.d s<= *(rax_12 + 0x38)
                        && *(*(rax_12 + 0x30) + (rdx_4 << 3)) == arg5 + 0x30)
                    goto label_1420b2fab
        
        rdi += 1
    while (rdi s< var_e0)

int64_t rcx_20 = var_e8
rbx.b = arg7[1].d s> 0

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t var_58

if (var_58 != 0)
    sub_140a74f90(var_58)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

__security_check_cookie(rax_1 ^ &var_138)
return zx.q(rbx.b)
