// 函数: sub_1413f09f0
// 地址: 0x1413f09f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* var_30
sub_1407453e0(&var_30, arg1 + 0x1100)
int64_t* var_20
int64_t* rax = var_20
int32_t var_14
int32_t r9 = var_14

if (r9 s< rax[3].d)
    int64_t rax_1
    int64_t* r10_1
    
    while (true)
        r10_1 = var_30
        rax_1 = *r10_1
        
        if (*(rax_1 + (sx.q(r9) << 3)) == arg2)
            break
        
        int32_t var_24
        int32_t var_18 = var_18 & not.d(var_24)
        void var_28
        sub_14059bdd0(&var_28)
        r9 = var_14
        
        if (r9 s>= var_20[3].d)
            return var_20
    
    int64_t rdx_1 = sx.q(r9)
    void* r11_1 = &r10_1[2]
    
    if (*(r10_1 + 0x34) != 0)
        *(rax_1 + (sx.q(r10_1[6].d) << 3)) = r9
    
    int64_t rax_5 = *r10_1
    *(rax_5 + (rdx_1 << 3)) = 0xffffffff
    int32_t rax_6
    
    if (*(r10_1 + 0x34) s<= 0)
        rax_6 = -1
    else
        rax_6 = r10_1[6].d
    
    *(rax_5 + (rdx_1 << 3) + 4) = rax_6
    *(r10_1 + 0x34) += 1
    int32_t temp1_1
    int32_t temp2_1
    temp1_1:temp2_1 = sx.q(r9)
    r10_1[6].d = r9
    void* rcx_5 = *(r11_1 + 0x10)
    int64_t var_68 = arg2
    void* var_60_1 = arg1
    
    if (rcx_5 != 0)
        r11_1 = rcx_5
    
    int64_t rcx_6 = sx.q((temp2_1 + (temp1_1 & 0x1f)) s>> 5)
    *(r11_1 + (rcx_6 << 2)) &= not.d(rol.d(1, r9.b))
    
    if (sub_140a80f40() != 0)
        return sub_1413c8a00(&var_68)
    
    if (data_143f138f4 == 0)
        uint32_t rax_12
        
        if (data_143de5480 != 0)
            rax_12.b = GetCurrentThreadId() == data_143de5470
        
        if (data_143de5480 == 0 || rax_12.b != 0)
            int128_t var_58 = var_68.o
            return sub_1413c8a00(&var_58)
    
    void var_48
    void** rax_13 = sub_1413dd160(&var_48, nullptr, 0xff)
    *(*rax_13 + 0x10) = var_68.o
    void* rcx_11 = *rax_13
    int32_t r8_4 = rax_13[2].d
    int64_t* rdx_6 = rax_13[1]
    int64_t* rbx_1 = *(rcx_11 + 0x28)
    int64_t* arg_18 = rbx_1
    void* rsi_1 = &rbx_1[9]
    
    if (rbx_1 != 0)
        *rsi_1 += 1
        rbx_1 = arg_18
    
    rax = sub_1405e48c0(rcx_11, rdx_6, r8_4, 1)
    
    if (rbx_1 != 0)
        int32_t rdi_1 = *rsi_1
        *rsi_1 -= 1
        
        if (rdi_1 == 1)
            return sub_140a2f6e0(arg_18)

return rax
