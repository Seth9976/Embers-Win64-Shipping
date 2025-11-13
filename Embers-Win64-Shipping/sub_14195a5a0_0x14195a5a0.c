// 函数: sub_14195a5a0
// 地址: 0x14195a5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rsi = *(arg2 + 0x18)
int64_t rdi = 0
int64_t rbx = 0
int32_t rax_1 = data_143f01c4c + 1
void* r14 = arg2
int32_t arg_20 = rax_1
int64_t r13 = sx.q(rsi[4])
int64_t r15 = sx.q(*rsi)
data_143f01c4c = rax_1

if (r13.d s> 0)
    int32_t rdx = (r13 << 3).d
    int64_t r14_1 = sx.q(rdx)
    rdi = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    int64_t rax_2 = r14_1 + rdi
    
    if (rax_2 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, rdx + 8)
        rdi = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_2 = r14_1 + rdi
    
    data_143f02bc8 = rax_2
    
    if (r13.d s> 0)
        int64_t rdx_2 = 0
        
        do
            void* rax_4 = *(rsi + 8)
            
            if ((rax_4.b & 1) != 0)
                rax_4 = (rax_4 s>> 1) + &rsi[2]
            
            *(rdi + (rdx_2 << 3)) = *(zx.q(*(rax_4 + (rdx_2 << 2))) + arg3)
            rdx_2 += 1
        while (rdx_2 s< r13)
    
    r14 = arg2

if (r15.d s> 0)
    rbx = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
    int64_t rax_6 = r15 + rbx
    
    if (rax_6 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, (r15 + 0x10).d)
        rbx = (data_143f02bc8 + 0xf) & 0xfffffffffffffff0
        rax_6 = r15 + rbx
    
    data_143f02bc8 = rax_6
    memcpy(rbx, arg3, r15.d)

bool cond:0 = data_143f02ba8 == 0
int32_t var_44 = arg_20
void* var_68 = r14
int64_t var_60 = rdi
int32_t var_58 = r13.d
int64_t var_50 = rbx
int32_t var_48 = r15.d

if (cond:0)
    void*** rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
    void* rax_8 = &rcx_5[7]
    
    if (rax_8 u> data_143f02bd0)
        sub_140b0e3d0(&data_143f02bc8, 0x40)
        rcx_5 = (data_143f02bc8 + 7) & 0xfffffffffffffff8
        rax_8 = &rcx_5[7]
    
    data_143f02bac += 1
    uint128_t zmm0 = var_68.o
    data_143f02bc8 = rax_8
    *data_143f02ba0 = rcx_5
    data_143f02ba0 = &rcx_5[1]
    *(rcx_5 + 0x10) = zmm0
    rcx_5[1] = 0
    *(rcx_5 + 0x20) = var_58.o
    *rcx_5 = &data_142ffb028
    rcx_5[6] = var_48.q
else
    sub_141953150(&var_68)

arg3.b = 1
int32_t result = sub_141980430(&data_143f02b98, &arg_20, arg3.b)
int64_t* rcx_8 = arg_20.q

if (rcx_8 != 0)
    result = rcx_8[9].d
    rcx_8[9].d -= 1
    
    if (result == 1)
        return sub_140a2f6e0(rcx_8)

return result
