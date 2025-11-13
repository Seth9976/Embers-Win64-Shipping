// 函数: sub_142657070
// 地址: 0x142657070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg1[5]

if (r8 != 0)
    int32_t rax_1 = *(r8 + 0xc)
    void* const rax_8
    
    if (rax_1 s>= data_143e1d9b4)
        rax_8 = nullptr
    else
        int16_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_1)
        uint32_t rdx_1 = zx.d(temp0_1)
        int32_t rax_3 = temp1_1 + rdx_1
        rax_8 = *(data_143e1d9a0 + (sx.q(rax_3 s>> 0x10) << 3)) + sx.q(zx.d(rax_3.w) - rdx_1) * 0x18
    
    if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
        return r8

int32_t rbp = 0
void* rdi = nullptr
arg1[5] = 0

if (arg1[0x13].d s> 0)
    int64_t* r14_1 = nullptr
    
    while (true)
        rdi = *(r14_1 + arg1[0x12])
        
        if (rdi != 0)
            int32_t rax_11 = *(rdi + 0xc)
            void* const rax_15
            
            if (rax_11 s>= data_143e1d9b4)
                rax_15 = nullptr
            else
                uint32_t rdx_3 = zx.d(rax_11.w)
                
                if (rax_11 s< 0)
                    rax_11 += 0xffff
                    rdx_3 -= 0x10000
                
                rax_15 = *(data_143e1d9a0 + (sx.q(rax_11 s>> 0x10) << 3)) + sx.q(rdx_3) * 0x18
            
            if (((*(rax_15 + 8) u>> 0x1d).b & 1) == 0 && ((*(rdi + 0x2a8) u>> 3).b & 1) != 0)
                int32_t rcx_8
                rcx_8.b = *(arg1 + 0x3c) == 0
                
                if ((rcx_8.b & sub_140b5b8a0(arg1[7].d, 0)) != 0 || *(rdi + 0x260) == arg1[7])
                    arg1[5] = rdi
                    break
        
        rbp += 1
        r14_1 = &r14_1[1]
        
        if (rbp s>= arg1[0x13].d)
            rdi = arg1[5]
            break

if (rdi == 0 && arg2 == 1)
    int64_t* rax_22 = sub_1426a09e0()
    void var_48
    int64_t* rax_23 = sub_142427eb0(&var_48)
    int64_t rdx_5 = *arg1
    void* rax_25 = sub_1420efae0((*(rdx_5 + 0x150))(arg1, rdx_5), rax_22, nullptr, nullptr, rax_23)
    rdi = rax_25
    arg1[5] = rax_25

if (rdi == 0)
    return rdi

(*(*arg1 + 0x3a8))(arg1, rdi)
return arg1[5]
