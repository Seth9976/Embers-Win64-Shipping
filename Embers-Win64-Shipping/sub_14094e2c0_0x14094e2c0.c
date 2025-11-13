// 函数: sub_14094e2c0
// 地址: 0x14094e2c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = 0
arg_10.q = 0
TEB* gsbase

if (data_143cecf88 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143cecf88)
    
    if (data_143cecf88 == 0xffffffff)
        sub_140b58260(&data_143cecf80, u"OnlineSubsystem", 1)
        _Init_thread_footer(&data_143cecf88)

int64_t rbx = data_143cecf80
j_sub_140b3db50()
int64_t* rax_2 = sub_140b3da90(&data_143de7d78, rbx)
int64_t r8_1 = *rax_2
int64_t* rax_3
int64_t r8_2
rax_3, r8_2 = (*(r8_1 + 0x50))(rax_2, 0, r8_1)
int128_t var_48
int64_t* rax_4
int32_t rbp
int64_t* r14

if (rax_3 == 0)
    rax_4 = &var_48
    var_48 = zx.o(0)
    rbp = 2
    r14 = nullptr
else
    int64_t r8_3 = *rax_3
    void var_38
    rax_4, r8_2 = (*(r8_3 + 0x68))(rax_3, &var_38, r8_3)
    rbp = 1
    r14 = *rax_4

int64_t* rdi = rax_4[1]
rax_4[1] = 0
*rax_4 = 0

if ((rbp.b & 2) != 0)
    void* rcx_3 = var_48:8.q
    rbp &= 0xfffffffd
    
    if (rcx_3 != 0)
        int32_t rax_5 = *(rcx_3 + 8)
        *(rcx_3 + 8) -= 1
        
        if (rax_5 == 1)
            int64_t* rbx_1 = var_48:8.q
            (**rbx_1)(rbx_1)
            int32_t rax_7 = *(rbx_1 + 0xc)
            *(rbx_1 + 0xc) -= 1
            
            if (rax_7 == 1)
                int64_t* rcx_5 = var_48:8.q
                (*(*rcx_5 + 8))(rcx_5, 1)

int64_t* var_30

if ((rbp.b & 1) != 0 && var_30 != 0)
    var_30[1].d -= 1
    
    if (var_30[1].d == 1)
        (**var_30)(var_30)
        int32_t rax_11 = *(var_30 + 0xc)
        *(var_30 + 0xc) -= 1
        
        if (rax_11 == 1)
            (*(*var_30 + 8))(var_30, 1)

int32_t rax_13 = arg2[1].d
int32_t result

if (rax_13 != 0)
    int64_t var_58 = 0
    int32_t i = 0
    int64_t var_50_1 = 0
    
    if (rax_13 s> 0)
        int64_t rbx_3 = 0
        
        do
            int64_t* rdx_2 = *arg2
            int32_t rax_15 = *(rdx_2 + rbx_3 + 8)
            int32_t r8_4 = rax_15 - 1
            
            if (rax_15 == 0)
                r8_4 = 0
            
            sub_140a20ba0(&var_58, *(rdx_2 + rbx_3), r8_4)
            sub_140a20ba0(&var_58, &data_142d404d4, 1)
            i += 1
            rbx_3 += 0x10
        while (i s< arg2[1].d)
    
    r8_2.b = 1
    result = (*(*r14 + 0x108))(r14, &var_58, r8_2)
    int64_t rcx_12 = var_58
    
    if (rcx_12 != 0)
        result = sub_140a74f90(rcx_12)
else
    result = (*(*r14 + 0x118))(r14)

if (rdi != 0)
    result = rdi[1].d
    rdi[1].d -= 1
    
    if (result == 1)
        result = (**rdi)(rdi)
        int32_t rsi_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rsi_1 == 1)
            return (*(*rdi + 8))(rdi, zx.q(rsi_1))

return result
