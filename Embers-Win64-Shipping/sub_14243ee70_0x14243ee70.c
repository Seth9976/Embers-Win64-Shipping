// 函数: sub_14243ee70
// 地址: 0x14243ee70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_f8
int64_t rax_1 = __security_cookie ^ &var_f8
void* rbp = nullptr
int64_t r13 = sx.q(arg4)
int32_t rcx = *(arg1 + 0x20)
uint64_t rsi = 0
void* r15_1

if (rcx s<= 0)
label_14243eede:
    rsi = sx.q(*(arg1 + 0x20))
    r15_1 = arg1 + 0x18
    int32_t rax_4 = (rsi + 1).d
    *(r15_1 + 8) = rax_4
    
    if (rax_4 s> *(r15_1 + 0xc))
        sub_14090a6a0(r15_1)
    
    int64_t rax_5 = *r15_1
    uint64_t rdi_2 = rsi * 0x60
    *(rdi_2 + rax_5) = 0
    *(rdi_2 + rax_5 + 8) = 0
    *(rdi_2 + rax_5 + 0x18) = 0
    *(rdi_2 + rax_5 + 0x20) = 0
    *(rdi_2 + rax_5 + 0x30) = 0
    *(rdi_2 + rax_5 + 0x38) = 0
    __builtin_memset(rdi_2 + rax_5 + 0x48, 0, 0x18)
    int64_t rbx_1 = *(arg1 + 0x18)
    *(rbx_1 + rdi_2 + 0x48) = r13.d
    *(rbx_1 + rdi_2 + 0x4c) = arg5
    *(rbx_1 + rdi_2 + 0x58) = sub_142430740(arg1, rsi.d)
    *(rbx_1 + rdi_2 + 0x5c) = sub_142430740(arg1, rsi.d)
else
    r15_1 = arg1 + 0x18
    int32_t* rax_3 = *(arg1 + 0x18) + 0x4c
    
    while (rax_3[-1] != r13.d || *rax_3 != arg5)
        rsi = zx.q(rsi.d + 1)
        rax_3 = &rax_3[0x18]
        
        if (rsi.d s>= rcx)
            goto label_14243eede

int64_t r9 = *(arg1 + 0x28)
int64_t rdx_3 = sx.q(*(sx.q(rsi.d) * 0x60 + *r15_1 + 0x58))
int64_t rdi_3 = sx.q(*((rdx_3 << 6) + r9 + 0x38))

if (rdi_3.d != rdx_3.d)
    void* r8_4 = (rdi_3 << 6) + r9
    *((sx.q(*(r8_4 + 0x3c)) << 6) + r9 + 0x38) = *(r8_4 + 0x38)
    *((sx.q(*(r8_4 + 0x38)) << 6) + *(arg1 + 0x28) + 0x3c) = *(r8_4 + 0x3c)
    *(r8_4 + 0x3c) = rdi_3.d
    *(r8_4 + 0x38) = rdi_3.d
else
    rdi_3 = sx.q(*(arg1 + 0x30))
    int32_t rax_12 = (rdi_3 + 1).d
    *(arg1 + 0x30) = rax_12
    
    if (rax_12 s> *(arg1 + 0x34))
        sub_1405c4fe0(arg1 + 0x28)
    
    int64_t r9_2 = r13 * 5
    int64_t rcx_8 = rdi_3 << 6
    __builtin_memset(rcx_8 + *(arg1 + 0x28), 0, 0x40)
    int64_t rax_14 = *(arg1 + 0x28)
    *(rax_14 + rcx_8 + 0x34) = rsi.d
    *(rax_14 + rcx_8 + 0x3c) = rdi_3.d
    *(rax_14 + rcx_8 + 0x38) = rdi_3.d
    int32_t r8 = *((r9_2 << 3) + &data_1439c85ec)
    int64_t* rsi_2 = *(arg1 + 0x28) + rcx_8
    int32_t rcx_9 = *((r9_2 << 3) + 0x1439c85e8)
    int32_t rcx_11 = divu.dp.d(0:(arg5 - 1 + rcx_9), rcx_9) * (&data_1439c85f4)[r9_2 * 2]
    *(rsi_2 + 0x1c) = rcx_11
    int32_t r15_3 = divu.dp.d(0:(arg5 - 1 + r8), r8) * rcx_11
    rsi_2[3].d = r15_3
    
    if (data_143f0f1ca == 0)
        rsi_2[2] = sub_140a82f30(zx.q(r15_3), 0)
    else
        char rcx_12 = (data_1439c7a34).b
        uint64_t r9_3 = zx.q((&data_1439c85f4)[r9_2 * 2])
        int128_t var_98
        int128_t* var_c8_1 = &var_98
        var_98 = zx.o(0)
        char var_70_1 = 0
        int32_t var_88_1 = 1
        int64_t* rcx_13 = data_143f0f180
        int128_t var_84_1 = data_143dbb1e0
        int32_t var_74_1 = (1 << rcx_12) - 1
        int64_t var_68_1 = 0
        int32_t var_60_1 = 0
        int64_t var_b8
        (*(*rcx_13 + 0x4a0))(rcx_13, &var_b8, &data_143f02b98, r9_3, r15_3, 0x601, var_c8_1)
        
        if (rsi_2 != &var_b8)
            int64_t* rbx_2 = *rsi_2
            *rsi_2 = var_b8
            var_b8 = 0
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    char rax_26
                    
                    if (rbx_2[2].b == 0 && data_143f0f1d0 == 0)
                        rax_26 = sub_1405949a0()
                    
                    if (rbx_2[2].b != 0 || (data_143f0f1d0 == 0 && rax_26 != 0))
                        (**rbx_2)(rbx_2, 1)
                    else
                        bool z_1
                        
                        if (0 == *(rbx_2 + 0xc))
                            *(rbx_2 + 0xc) = 1
                            z_1 = true
                        else
                            *(rbx_2 + 0xc)
                            z_1 = false
                        
                        if (z_1)
                            int32_t rax_28 = sub_140a20af0()
                            
                            if (rax_28 != 0)
                                rbp = *((zx.q(rax_28) u>> 0xe << 3) + &data_143cf0bf8)
                                    + (zx.q(rax_28) & 0x3fff) * 0x18
                            
                            *(rbp + 8) = rbx_2
                            sub_1405a42f0(&data_143f02390, rax_28)
        
        sub_14081c9d0(&var_b8)
        int64_t* rcx_19 = data_143f0f180
        rsi_2[2] = (*(*rcx_19 + 0x158))(rcx_19, &data_143f02b98, *rsi_2, 0, r15_3, 2)

void* rdx_12 = (sx.q(rdi_3.d) << 6) + *(arg1 + 0x28)
*(arg1 + 0x38) += 1
*arg3 = *(rdx_12 + 0x10)
arg3[1].d = *(rdx_12 + 0x18)
*(arg3 + 0xc) = *(rdx_12 + 0x1c)
*arg2 = rdi_3.d
__security_check_cookie(rax_1 ^ &var_f8)
return arg2
