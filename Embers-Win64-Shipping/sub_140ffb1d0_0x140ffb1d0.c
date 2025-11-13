// 函数: sub_140ffb1d0
// 地址: 0x140ffb1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = *(arg2 + 0x18)
int64_t rdi = 0
int64_t rbx = 0
void* r14 = arg1
int64_t r13 = sx.q(rsi[4])
uint32_t count = *rsi

if (r13.d s> 0)
    int32_t rdx = (r13 << 3).d
    int64_t r14_1 = sx.q(rdx)
    rdi = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    int64_t rax_1 = r14_1 + rdi
    
    if (rax_1 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, rdx + 8)
        rdi = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_1 = r14_1 + rdi
    
    data_143f02bc8 = rax_1
    
    if (r13.d s> 0)
        int64_t rdx_2 = 0
        
        do
            void* rax_3 = *(rsi + 8)
            
            if ((rax_3.b & 1) != 0)
                rax_3 = (rax_3 s>> 1) + &rsi[2]
            
            *(rdi + (rdx_2 << 3)) = *(zx.q(*(rax_3 + (rdx_2 << 2))) + arg3)
            rdx_2 += 1
        while (rdx_2 s< r13)
    
    r14 = arg1

if (count != 0)
    int64_t count_1 = sx.q(count)
    rbx = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    int64_t rax_5 = rbx + count_1
    
    if (rax_5 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, count + 0x10)
        rbx = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_5 = rbx + count_1
    
    data_143f02bc8 = rax_5
    memcpy(rbx, arg3, count)

bool cond:0 = data_143f02ba8 == 0
int64_t var_78 = *(r14 + 0x150)
int64_t var_70 = *(r14 + 0x168)
int64_t var_60 = rdi
int32_t var_58 = r13.d
int64_t var_50 = rbx

if (cond:0)
    void*** rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_9 = &rcx_5[9]
    
    if (rax_9 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x50)
        rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_9 = &rcx_5[9]
    
    data_143f02bac += 1
    int128_t zmm0 = var_78.o
    data_143f02bc8 = rax_9
    *data_143f02ba0 = rcx_5
    data_143f02ba0 = &rcx_5[1]
    *(rcx_5 + 0x10) = zmm0
    rcx_5[1] = 0
    *rcx_5 = &data_142efaeb0
    *(rcx_5 + 0x20) = arg2.o
    *(rcx_5 + 0x30) = var_58.o
    rcx_5[8] = count.q
else
    sub_140fdb1a0(&var_78)

arg3.b = 1
int64_t* arg_20
int32_t result = sub_141980430(&data_143f02b98, &arg_20, arg3.b)
int64_t* rcx_8 = arg_20

if (rcx_8 != 0)
    result = rcx_8[9].d
    rcx_8[9].d -= 1
    
    if (result == 1)
        return sub_140a2f6e0(rcx_8)

return result
