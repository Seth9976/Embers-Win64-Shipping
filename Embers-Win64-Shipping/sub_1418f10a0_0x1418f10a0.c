// 函数: sub_1418f10a0
// 地址: 0x1418f10a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *(arg2 + 0x18)
int64_t rdi = 0
int64_t r14 = sx.q(rbx[4])
int64_t rbp = sx.q(*rbx)

if (r14.d s> 0)
    int32_t rdx = (r14 << 3).d
    int64_t rsi_1 = sx.q(rdx)
    rdi = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    int64_t rax_1 = rdi + rsi_1
    
    if (rax_1 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, rdx + 8)
        rdi = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_1 = rdi + rsi_1
    
    data_143f02bc8 = rax_1
    
    if (r14.d s> 0)
        int64_t rdx_2 = 0
        
        do
            void* rax_3 = *(rbx + 8)
            
            if ((rax_3.b & 1) != 0)
                rax_3 = (rax_3 s>> 1) + &rbx[2]
            
            *(rdi + (rdx_2 << 3)) = *(zx.q(*(rax_3 + (rdx_2 << 2))) + arg3)
            rdx_2 += 1
        while (rdx_2 s< r14)

int64_t rbx_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
int64_t rax_5 = rbx_3 + rbp

if (rax_5 u> data_143f02bd0)
    sub_140b0e3d0(&data_143f02bc8, (rbp + 0x10).d)
    rbx_3 = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    rax_5 = rbx_3 + rbp

data_143f02bc8 = rax_5
memcpy(rbx_3, arg3, rbp.d)
int64_t var_50 = rdi
int64_t var_40 = rbx_3

if (data_143f02ba8 == 0)
    void*** rcx_6 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_6 = &rcx_6[7]
    
    if (rax_6 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x40)
        rcx_6 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_6 = &rcx_6[7]
    
    data_143f02bac += 1
    data_143f02bc8 = rax_6
    *data_143f02ba0 = rcx_6
    data_143f02ba0 = &rcx_6[1]
    *(rcx_6 + 0x10) = arg2.o
    rcx_6[1] = 0
    *(rcx_6 + 0x20) = r14.d.o
    *rcx_6 = &data_142ff3e18
    rcx_6[6] = rbp.d.q
else
    if (rbp.d s> 0)
        memcpy(*(arg2 + 0x38), rbx_3, rbp.d)
    
    sub_141903810(arg2, rdi, r14.d)

int64_t* arg_20
int32_t result = sub_141980430(&data_143f02b98, &arg_20, 1)
int64_t* rcx_9 = arg_20

if (rcx_9 != 0)
    result = rcx_9[9].d
    rcx_9[9].d -= 1
    
    if (result == 1)
        return sub_140a2f6e0(rcx_9)

return result
