// 函数: sub_142796000
// 地址: 0x142796000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg2
void* r15 = arg1
(*(*arg2 + 0x1d8))(rsi, &data_1439a9528)
void** var_e8
sub_140b4c130(&var_e8, rsi)
var_e8 = &data_142fc3e60
int64_t* rax_1 = j_sub_140a82f30(0x108)

if (rax_1 != 0)
    rax_1 = sub_1417047d0(rax_1)

sub_140ce8e10(r15, rsi)

if (sub_140b4e7c0(rsi, &data_1439a9528) s< 7 && *(r15 + 0x58) != 0)
    *(r15 + 0x5c) = *(r15 + 0x5c) * 1000000f

int64_t rbx = rsi[0xe]

if (sub_140b4e7c0(rsi, &data_1439a9528) s>= 3)
    int64_t* rcx_6 = rsi[1]
    int64_t rax_5 = *rcx_6 + 4
    
    if (rax_5 u> rcx_6[1])
        int32_t rax_6
        rax_6.b = rbx != 0
        int32_t arg_18 = rax_6
        (*(*rsi + 0x150))(rsi, &arg_18, 4)
    else
        *rcx_6 = rax_5

if (sub_140b4e7c0(rsi, &data_1439a9528) s>= 4)
    int64_t* rcx_9 = *(r15 + 0xc0)
    (*(*rcx_9 + 0x18))(rcx_9, &var_e8)
    void* r14_1 = *(r15 + 0xc0)
    int64_t rbx_1 = data_143f37078
    int64_t rdi_1 = data_143f37588
    char rax_10 = sub_141d1d910(r14_1, rdi_1, rbx_1)
    int64_t var_128
    void* const rax_14
    
    if (rax_10 != 0)
        var_128 = rdi_1
        int64_t var_120_1 = rbx_1
        int32_t arg_20
        sub_141d1ca50(r14_1 + 8, &arg_20, &var_128)
        int64_t rax_11 = sx.q(arg_20)
        
        if (rax_11.d == 0xffffffff)
            rax_14 = nullptr
        else
            rax_14 = rax_11 * 0x30 + *(r14_1 + 8)
    
    void* const r13_1
    
    if (rax_10 == 0 || *(rax_14 + 0x10) != 0x14)
        r13_1 = nullptr
    else
        int32_t var_148
        sub_141d1ca50(r14_1 + 8, &var_148, &var_128)
        int64_t rax_15 = sx.q(var_148)
        
        if (rax_15.d == 0xffffffff)
            r13_1 = *0x20
        else
            r13_1 = *(rax_15 * 0x30 + *(r14_1 + 8) + 0x20)
    
    void* r14_2 = *(r15 + 0xc0)
    int64_t rbx_2 = data_143f37078
    int64_t rdi_2 = data_143f375b0
    char rax_19 = sub_141d1d910(r14_2, rdi_2, rbx_2)
    int64_t var_118
    void* const rax_23
    
    if (rax_19 != 0)
        var_118 = rdi_2
        int64_t var_110_1 = rbx_2
        int32_t var_144
        sub_141d1ca50(r14_2 + 8, &var_144, &var_118)
        int64_t rax_20 = sx.q(var_144)
        
        if (rax_20.d == 0xffffffff)
            rax_23 = nullptr
        else
            rax_23 = rax_20 * 0x30 + *(r14_2 + 8)
    
    int64_t rcx_16
    
    if (rax_19 == 0 || *(rax_23 + 0x10) != 0x1b)
        rcx_16 = 0
    else
        int32_t var_140
        sub_141d1ca50(r14_2 + 8, &var_140, &var_118)
        int64_t rax_24 = sx.q(var_140)
        
        if (rax_24.d == 0xffffffff)
            rcx_16 = *0x20
        else
            rcx_16 = *(rax_24 * 0x30 + *(r14_2 + 8) + 0x20)
    
    if (r13_1 != 0)
        if (rcx_16 == 0)
            void var_108
            int64_t* rax_28 = sub_140b58170(&var_108, &data_1437020ab, (rcx_16 + 1).d)
            int64_t r8_8 = data_143f37078
            int64_t* rdx_10 = data_143f375b0
            char var_150 = 1
            int32_t rax_29 = var_150.d
            void* const var_158 = *rax_28
            void* rcx_19 = *(r15 + 0xc0)
            void* const var_138 = var_158
            int32_t var_130_1 = rax_29
            void* rax_30 = sub_141d2b090(rcx_19, rdx_10, r8_8, &var_138)
            int64_t rdx_11 = data_143f37078
            void* rcx_20 = *(r15 + 0xc0)
            var_158 = rax_30
            int32_t rax_31 = sub_141d1f690(rcx_20, rdx_11)
            
            if (rax_31 s> 0)
                void* const rsi_1 = var_158
                int64_t i = 0
                int64_t r14_3 = 0
                
                do
                    int64_t rax_32 = *(r13_1 + 8)
                    void* rbx_3 = *(rax_32 + (i << 3))
                    *(rax_32 + (i << 3)) = 0
                    var_158 = rbx_3
                    void*** rax_33 = j_sub_140a82f30(0x18)
                    
                    if (rax_33 != 0)
                        rax_33[1].d = 1
                        *(rax_33 + 0xc) = 1
                        *rax_33 = &data_142d42ea8
                        rax_33[2] = rbx_3
                    
                    var_150.q = rax_33
                    void** rcx_22 = *(rsi_1 + 8) + r14_3
                    
                    if (rcx_22 != &var_158)
                        *rcx_22 = var_158
                        var_158 = nullptr
                        sub_1405aeff0(&rcx_22[1], &var_150)
                    
                    int64_t* rbx_4 = var_150.q
                    
                    if (rbx_4 != 0)
                        rbx_4[1].d -= 1
                        
                        if (rbx_4[1].d == 1)
                            (**rbx_4)(rbx_4)
                            int32_t rax_37 = *(rbx_4 + 0xc)
                            *(rbx_4 + 0xc) -= 1
                            
                            if (rax_37 == 1)
                                (*(*rbx_4 + 8))(rbx_4, 1)
                    
                    i += 1
                    r14_3 += 0x10
                while (i s< sx.q(rax_31))
                
                rsi = arg2
                r15 = arg1
        
        sub_141d20d80(*(r15 + 0xc0), data_143f37588, data_143f37078)

if (sub_140b4e7c0(rsi, &data_1439a9528) s< 9)
    sub_141d28a80(*(r15 + 0xc0))
    void var_100
    *(r15 + 0xa8) = *sub_140b214c0(&var_100)

if (rax_1 != 0)
    sub_1417065e0(rax_1)
    j_sub_140a74f90(rax_1)

return sub_140b4cb40(&var_e8)
