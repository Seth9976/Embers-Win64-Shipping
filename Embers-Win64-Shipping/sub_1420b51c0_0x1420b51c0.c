// 函数: sub_1420b51c0
// 地址: 0x1420b51c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t rsi = 0
int128_t zmm7 = arg3
arg7[1].d = 0

if (*(arg7 + 0xc) != 0)
    sub_1405c5570(arg7, 0)

TEB* gsbase

if (data_143f48010 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143f48010)
    
    if (data_143f48010 == 0xffffffff)
        sub_140b58170(&data_143f48008, "CapsuleOverlapComponents", 1)
        _Init_thread_footer(&data_143f48010)

void var_108
void var_d8
sub_141eb54c0(&var_d8, data_143f48008, &var_108, 0, nullptr)
sub_141eb8b70(&var_d8, arg6)
int32_t r14 = 0
int64_t var_f8 = 0
int32_t var_f0 = 0
int32_t var_100 = 0
char var_fc = 0
int64_t rbx

while (true)
    int32_t rax_4
    
    if (r14 s< 0 || r14 s>= arg4[1].d)
        rax_4.b = 0
    else
        rax_4.b = 1
    
    if (rax_4.b == 0)
        break
    
    rbx = zx.q(*(sx.q(r14) + *arg4))
    void* rax_6
    rax_6, zmm7 = sub_141ec4150()
    rax_4 = sub_141ebfb60(rax_6, 0, rbx.d)
    var_100 |= 1 << (rax_4 u% 0x20)
    r14 += 1

void* rax_7
int32_t zmm6_1
rax_7, zmm6_1 = sub_1423de540(data_143f5b298, arg1, 1)

if (rax_7 != 0)
    int32_t var_e4_1 = zmm7.d
    void* var_118_1 = &var_d8
    int32_t var_e0_1 = zmm6_1
    int32_t var_e8
    int32_t* var_120_1 = &var_e8
    var_e8 = 3
    sub_141ec85d0(rax_7, &var_f8, arg2, &data_14399f720, &var_100, var_120_1, var_118_1)

if (var_f0 s> 0)
    do
        rbx = var_f8 + ((sx.q(rsi) * 3 + 1) << 3)
        
        if (sub_140d3e110(rbx) != 0)
            if (arg5 == 0)
            label_1420b539b:
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
                    goto label_1420b539b
        
        rsi += 1
    while (rsi s< var_f0)

int64_t rcx_20 = var_f8
rbx.b = arg7[1].d s> 0

if (rcx_20 != 0)
    sub_140a74f90(rcx_20)

int64_t var_78

if (var_78 != 0)
    sub_140a74f90(var_78)

int64_t var_98

if (var_98 != 0)
    sub_140a74f90(var_98)

__security_check_cookie(rax_1 ^ &var_148)
return zx.q(rbx.b)
