// 函数: sub_140859420
// 地址: 0x140859420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 3)
    return 

int32_t rsi_1 = arg2

if (*(arg1 + 0x6bc) != 0)
    sub_1408622c0(arg1)
    arg2, arg3 = sub_14084fd50(arg1)

void* rcx_1 = *(arg1 + 0x28)

if (rcx_1 != 0)
    void* rax_2 = *(rcx_1 + 0xa8)
    
    if (rax_2 == 0)
        rax_2, arg3 = sub_141ee69e0(rcx_1)
        rcx_1 = *(arg1 + 0x28)
    
    sub_141f25960(rcx_1, *(rax_2 + 0x520), arg3)

if ((*(arg1 + 0x6b8) & 0x10) != 0)
    if (*(arg1 + 0x6bc) != 0)
        sub_1408622c0(arg1)
        sub_14084fd50(arg1)
    
    if (*(arg1 + 0x10) != 0xffffffff)
        int64_t* rbx_1 = *(arg1 + 0x20)
        void* rbp_1 = *(arg1 + 0x18)
        
        if (rbx_1 != 0)
            rbx_1[1].d += 1
            
            if (rbx_1 != 0)
                rbx_1[1].d -= 1
                
                if (rbx_1[1].d == 1)
                    (**rbx_1)(rbx_1)
                    int32_t rax_6 = *(rbx_1 + 0xc)
                    *(rbx_1 + 0xc) -= 1
                    
                    if (rax_6 == 1)
                        (*(*rbx_1 + 8))(rbx_1, 1)
        
        if (rbp_1 != 0)
            sub_1408612e0(rbp_1, arg1)
    
    *(arg1 + 0x6b8) &= 0xffffffef

void* rcx_7 = *(arg1 + 0x18)

if (rcx_7 == 0)
    rsi_1 = 2
else
    sub_140858cf0(rcx_7, arg1)
    *(arg1 + 0x6b8) &= 0xfffffeff

int32_t rax_8 = *(arg1 + 0x6e8)
int64_t r15

if (rax_8 == 4)
    rsi_1 = 2
    r15.b = 1
else if (rax_8 == 3)
    r15.b = 1
else
    r15.b = 0

if (rsi_1 == 1)
    sub_140859950(arg1, 0)
else if (rsi_1 == 0)
    arg2.b = 1
    sub_140859950(arg1, arg2.b)
    r15.b = *(arg1 + 0x6e8) != 4
else if (rsi_1 == 2)
    sub_140857cf0(arg1)
    r15.b = *(arg1 + 0x6e8) != 4

int64_t* i = *(arg1 + 0xa0)
char r9 = 0

for (; i != &i[sx.q(*(arg1 + 0xa8)) * 2]; i = &i[2])
    if (*(*i + 0x24) - 3 u> 1)
        r9 = 1
        break

if ((*(arg1 + 0x6e4) & 0xfffffffb) != 0)
    *(arg1 + 0x6e4) = 0

if (r9 == 0)
    if (*(arg1 + 0x6e8) - 3 u> 1)
        *(arg1 + 0x6e8) = 3
    
    sub_14084b160(arg1)
    return 

if (r15.b != 0)
    sub_140859ab0(arg1)
    int64_t rcx_14 = *(arg1 + 0x28)
    
    if (rcx_14 != 0)
        if ((*(arg1 + 0x6b8) & 0x400) == 0)
            sub_140820ac0(rcx_14 + 0x418, arg1 + 0x150, nullptr)
            rcx_14 = *(arg1 + 0x28)
        
        void* rdx_5 = *(arg1 + 0x18)
        
        if (((*(rdx_5 + 0xd68) u>> 3).b & 1) != 0)
            sub_140820ac0(rcx_14 + 0x418, rdx_5 + 0x478, nullptr)
            sub_140820ac0(*(arg1 + 0x28) + 0x418, *(arg1 + 0x18) + 0x7e0, nullptr)
        
        int64_t* i_1 = *(arg1 + 0xa0)
        
        for (void* rbp_4 = &i_1[sx.q(*(arg1 + 0xa8)) * 2]; i_1 != rbp_4; i_1 = &i_1[2])
            int64_t* rbx_2 = i_1[1]
            
            if (rbx_2 != 0)
                rbx_2[1].d += 1
            
            sub_1407e8260(*i_1, (*(arg1 + 0x6b8) u>> 0xa).b & 1)
            
            if (rbx_2 != 0)
                rbx_2[1].d -= 1
                
                if (rbx_2[1].d == 1)
                    (**rbx_2)(rbx_2)
                    int32_t rax_14 = *(rbx_2 + 0xc)
                    *(rbx_2 + 0xc) -= 1
                    
                    if (rax_14 == 1)
                        (*(*rbx_2 + 8))(rbx_2, 1)
        
        *(arg1 + 0x6b8) |= 0x400

if ((*(arg1 + 0x6e8) & 0xfffffffb) != 0)
    *(arg1 + 0x6b8) |= 8
    int32_t i_2 = 0
    *(arg1 + 0x6e8) = 0
    
    if (*(arg1 + 0xa8) s> 0)
        int64_t* rbx_3 = nullptr
        
        do
            sub_14080c880(*(rbx_3 + *(arg1 + 0xa0)), 0)
            i_2 += 1
            rbx_3 = &rbx_3[2]
        while (i_2 s< *(arg1 + 0xa8))

if (r15.b != 0)
    sub_140855510(arg1)

if (*(arg1 + 0x6e8) - 3 u> 1)
    sub_14084b670(arg1)
    void* rcx_26 = *(arg1 + 0x18)
    *(arg1 + 0x6b8) |= 4
    int128_t zmm6_1 = sub_140849460(rcx_26, arg1)
    void* rax_17 = *(arg1 + 0x28)
    void** rax
    
    if (rax_17 == 0)
        rax = nullptr
    else
        rax = *(rax_17 + 0x408)
    
    uint64_t i_5 = zx.q(*(rax + 0x42c))
    
    if (i_5.d s> 0)
        int128_t var_38_1 = zmm6_1
        
        if (not(rax[0x86].d.d f<= 9.99999994e-09f))
            if (((*(arg1 + 0x6b8) u>> 4).b & 1) == 0)
                if (*(arg1 + 0x6bc) != 0)
                    sub_1408622c0(arg1)
                    sub_14084fd50(arg1)
                
                char r14_1 = *(arg1 + 0x6b8) & 1
                int128_t zmm6_2 = sub_14085bac0(arg1, 1)
                
                if (i_5.d s> 0)
                    uint64_t i_4 = i_5
                    uint64_t i_3
                    
                    do
                        int64_t* rbx_5 = nullptr
                        int64_t* arg_8 = nullptr
                        int64_t rdx_14
                        int512_t zmm1_1
                        rdx_14, zmm1_1 = sub_140b33630("Niagara")
                        
                        if (*(arg1 + 0x6e8) != 4)
                            int64_t* rbx_4 = *(arg1 + 0x20)
                            
                            if (rbx_4 != 0)
                                rbx_4[1].d += 1
                            
                            zmm1_1.o = zmm6_2
                            zmm6_2 = sub_14085fa90(*(arg1 + 0x18), rdx_14, &arg_8)
                            
                            if (rbx_4 != 0)
                                rbx_4[1].d -= 1
                                
                                if (rbx_4[1].d == 1)
                                    (**rbx_4)(rbx_4)
                                    int32_t rax_22 = *(rbx_4 + 0xc)
                                    *(rbx_4 + 0xc) -= 1
                                    
                                    if (rax_22 == 1)
                                        (*(*rbx_4 + 8))(rbx_4, 1)
                            
                            rbx_5 = arg_8
                        
                        sub_140b37f60("Niagara")
                        
                        if (rbx_5 != 0)
                            rbx_5[9].d -= 1
                            
                            if (rbx_5[9].d == 1)
                                zmm6_2 = sub_140a2f6e0(arg_8)
                        
                        i_3 = i_4
                        i_4 -= 1
                    while (i_3 != 1)
                
                sub_14085bac0(arg1, r14_1)
            
            *(arg1 + 0x3c) = 0

int64_t* rcx_35 = *(arg1 + 0x28)

if (rcx_35 != 0)
    sub_141ee8470(rcx_35)
