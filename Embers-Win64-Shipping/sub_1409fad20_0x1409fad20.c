// 函数: sub_1409fad20
// 地址: 0x1409fad20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r14 = arg2
int64_t arg_18 = 0
sub_1422883b0(arg1, arg2, 0)
*arg1 = &data_142e4b498
arg1[0x2a] = 0
arg1[0x2b] = 0
arg1[0x2c] = (*(*r14 + 0x690))(r14)
sub_141f15fd0(r14, &arg1[0x2d], arg1[0x21][1].d)
int64_t rdi = sx.q(r14[0x8a].d)
int64_t rbx = sx.q(arg1[0x2b].d)
int32_t rax_3 = (rbx + rdi).d
arg1[0x2b].d = rax_3

if (rax_3 s> *(arg1 + 0x15c))
    sub_1405a4d70(&arg1[0x2a])

memset(&arg1[0x2a][rbx], 0, rdi << 3)
int32_t rbp = 0
int32_t arg_8 = 0

if (rdi.d s> 0)
    int64_t r15_1 = 0
    int64_t r12_1 = 0
    
    do
        int64_t* rsi_2 = r14[0x89] + r12_1
        
        if (rsi_2[3].d s> 0 && rsi_2[1].d s> 0)
            int64_t* rax_5 = j_sub_140a82f30(0x3c0)
            int64_t* r14_1
            
            if (rax_5 == 0)
                r14_1 = nullptr
            else
                r14_1 = sub_1409faa10(rax_5, (arg1[0x21][1].d).b)
            
            uint64_t i_1 = zx.q(rsi_2[1].d)
            int32_t rax_7 = 0
            void* var_98 = nullptr
            int32_t var_90_1 = 0
            int32_t temp1_1 = i_1.d
            
            if (temp1_1 s> 0)
                var_90_1 = i_1.d
                sub_1407755b0(&var_98)
            else if (temp1_1 s< 0)
                int32_t rbx_2 = neg.d(i_1.d)
                
                if (rbx_2 != 0)
                    int32_t rcx_8 = neg.d(rbx_2 + i_1.d)
                    
                    if (rcx_8 != 0)
                        memmove(sx.q(i_1.d) * 0x58, nullptr, rcx_8 * 0x58)
                        rax_7 = var_90_1
                    
                    var_90_1 = rax_7 - rbx_2
                    sub_14083ac10(&var_98)
            
            if (i_1.d s> 0)
                int64_t r11_1 = 0
                int64_t rbx_3 = 0
                uint64_t i
                
                do
                    sub_1409fff20(var_98 + r11_1, *rsi_2 + rbx_3)
                    rbx_3 += 0x4c
                    r11_1 += 0x58
                    i = i_1
                    i_1 -= 1
                while (i != 1)
            
            if (&r14_1[0x25] != &rsi_2[2])
                int64_t rdi_1 = sx.q(rsi_2[3].d)
                int64_t rbp_1 = rsi_2[2]
                int32_t r8_3 = *(r14_1 + 0x134)
                r14_1[0x26].d = rdi_1.d
                
                if (rdi_1.d != 0 || r8_3 != 0)
                    sub_1405c4a90(&r14_1[0x25], rdi_1.d, r8_3)
                    memcpy(r14_1[0x25], rbp_1, (rdi_1 << 2).d)
                else
                    *(r14_1 + 0x134) = rdi_1.d
                
                rbp = arg_8
            
            sub_1423691c0(&r14_1[1], &r14_1[0x27], &var_98, 4, 0)
            sub_141997e80(&r14_1[0x12])
            sub_141997e80(&r14_1[1])
            sub_141997e80(&r14_1[0x1a])
            sub_141997e80(&r14_1[0x22])
            sub_141997e80(&r14_1[0x27])
            int64_t rax_13 = (*(*arg2 + 0x548))(arg2, zx.q(rbp))
            *r14_1 = rax_13
            
            if (rax_13 == 0)
                *r14_1 = sub_14210f630(0)
            
            r14_1[0x69].b = *(rsi_2 + 0x3d)
            arg1[0x2a][r15_1] = r14_1
            
            if (data_143f0f21f != 0)
                uint64_t rdx_10 = zx.q(data_143f0f1a0)
                
                if (((*(&data_143f025fc + sx.q(rdx_10.d) * 0x14) u>> 0x13).b & 1) != 0
                        && test_bit(data_143f13cd8, rdx_10))
                    void*** var_88 = arg1
                    int64_t* var_80_1 = r14_1
                    
                    if (sub_140a80f40() == 0)
                        uint32_t rax_22
                        
                        if (data_143f138f4 == 0 && data_143de5480 != 0)
                            rax_22.b = GetCurrentThreadId() == data_143de5470
                        
                        if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_22.b == 0))
                            void var_68
                            int64_t* rax_23 = sub_140a01c40(&var_68, nullptr, 0xff)
                            *(*rax_23 + 0x10) = var_88.o
                            void* rcx_27 = *rax_23
                            int64_t* rdi_2 = *(rcx_27 + 0x28)
                            
                            if (rdi_2 != 0)
                                rdi_2[9].d += 1
                            
                            sub_140a064d0(rcx_27, rax_23[1], rax_23[2].d, 1)
                            
                            if (rdi_2 != 0)
                                rdi_2[9].d -= 1
                                
                                if (rdi_2[9].d == 1)
                                    sub_140a2f6e0(rdi_2)
                        else
                            int128_t var_78 = var_88.o
                            sub_1409fc430(&var_78)
                    else
                        sub_1409fc430(&var_88)
            
            void* rcx_29 = var_98
            
            if (rcx_29 != 0)
                sub_140a74f90(rcx_29)
            
            r14 = arg2
        
        rbp += 1
        r15_1 += 1
        r12_1 += 0x40
        arg_8 = rbp
    while (r15_1 s< rdi)

return arg1
