// 函数: sub_1422119d0
// 地址: 0x1422119d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result = sub_140d3e110(&arg1[0x80])

if (result.b != 0)
    int64_t* rax = sub_140d3c6e0(&arg1[0x7c])
    int32_t r12_1 = 0
    void* const r15_1
    
    if (rax == 0)
        r15_1 = nullptr
    else
        r15_1 = rax[0x14]
    
    char rax_2
    
    if (rax != 0)
        rax_2 = (*(*rax + 0x4c0))(rax)
    
    int64_t r13
    
    if (rax == 0 || rax_2 != 0)
        r13.b = 1
    else
        r13.b = 0
    
    int32_t var_a8_1 = sub_142216be0(arg1)
    uint8_t rax_4 = arg1[6].b
    int512_t zmm1
    zmm1.o = *(arg1 + 0x38)
    uint8_t rsi_1 = rax_4 u>> 2 & 1
    char var_a4_1 = arg1[3].b
    int128_t var_68 = *(arg1 + 0x28)
    int128_t var_58_1 = zmm1.o
    int32_t var_88
    
    if (rax != 0)
        void* rax_6 = sub_142591550()
        void* rdx = rax[2]
        int64_t rax_7 = sx.q(*(rax_6 + 0x38))
        
        if (rax_7.d s<= *(rdx + 0x38) && *(*(rdx + 0x30) + (rax_7 << 3)) == rax_6 + 0x30)
            if (*data_143f51090 == 0 || (arg1[7].b & 0x10) == 0)
                if (*(sub_140d3c6e0(&arg1[0x80]) + 0x8b) != 0)
                    if (*(sub_140d3c6e0(&arg1[0x80]) + 0x8b) == 1)
                        sub_142277d10(&var_68, 0)
                        var_a8_1 = 2
                else
                    sub_142277d10(&var_68, 2)
            else
                sub_142277d10(&var_68, 0)
                var_a8_1 = 2
            
            if (*data_143f51090 == 0 || (arg1[7].b & 0x20) == 0)
                var_a4_1 = (*(*rax + 0x4d8))(rax)
                int128_t* rax_15
                rax_15, zmm1 = sub_1422651e0(&var_88, &var_68, &rax[0x5a])
                var_68 = *rax_15
                zmm1.o = rax_15[1]
            else
                zmm1.o = *(arg1 + 0x38)
                var_68 = *(arg1 + 0x28)
            
            int128_t var_58_2 = zmm1.o
            
            if (rsi_1 == 0 || (*(rax + 0x2b4) & 4) == 0)
                rsi_1 = 0
            else
                rsi_1 = 1
    
    char arg_18
    char rax_18 = *sub_142230430(sub_140d3c6e0(&arg1[0x80]), &arg_18, zmm1)
    result = zx.d(*sub_142230430(sub_140d3c6e0(&arg1[0x80]), &arg_18, zmm1))
    arg_18 = result.b
    
    if (var_a8_1 != 0)
        void* rax_21 = *(arg1 + 0xa0)
        char rax_22
        
        if (rax_21 == 0)
            rax_22 = arg1[6].b
        else
            rax_22 = *(rax_21 + 0xc)
        
        int32_t r14_1
        
        if (r15_1 == 0)
            r14_1 = 0
        else
            r14_1 = *(r15_1 + 0xc)
        
        if (rax != 0)
            r12_1 = *(rax + 0xc)
        
        int64_t* rbx_1
        
        if ((rax_22 & 1) == 0 || r13.b != 0)
            rbx_1.b = 0
        else
            rbx_1.b = 1
        
        int16_t r15_2 = *arg1
        uint32_t var_a0
        sub_141eb5f10(&var_a0, var_a4_1, *(arg1 + 7), &var_68)
        int32_t var_98
        int32_t rdx_5 = var_98
        
        if (rbx_1.b != 0)
            rdx_5 |= 4
        
        if (rsi_1 != 0)
            rdx_5 |= 8
        
        if (r13.b != 0)
            rdx_5 |= 0x10
        
        if ((rax_4 & 8) != 0)
            rdx_5 |= 0x20
        
        uint32_t rcx_16 = var_a0
        int32_t var_7c_1 = rdx_5
        int32_t var_9c
        int32_t var_80_1 = var_9c
        uint32_t var_84_1 = rcx_16
        uint32_t var_9c_1 = rcx_16
        int32_t var_94_1 = rdx_5
        int32_t rdx_6 = rdx_5 | 1
        bool cond:0_1 = arg_18 != 2
        var_a0 = zx.d(r15_2)
        int32_t var_98_1 = r12_1
        zmm1.o = var_a0.o
        var_88 = r14_1
        int128_t zmm0_4 = var_88.o
        *arg2 = zmm1.o
        int32_t var_7c_2 = rdx_6
        var_68 = zmm0_4
        
        if (not(cond:0_1))
            int32_t var_7c_3 = rdx_6 | 2
        
        result = (var_68:8.q u>> 0x20).d | 2
        uint32_t result_1 = result
        
        if (rax_18 == 3)
            result |= 1
            uint32_t result_2 = result
        
        zmm1.o = var_68
        arg2[1] = var_88.o
        arg2[2] = zmm1.o

return result
