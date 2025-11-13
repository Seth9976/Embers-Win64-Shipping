// 函数: sub_141ad5310
// 地址: 0x141ad5310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result
uint32_t zmm6[0x4]
result, zmm6 = sub_141e1eab0(sub_141e23160(arg1), arg2)
int32_t rbx = arg1[3].d
arg1[0x12].d = 0

if (*(arg1 + 0x94) != rbx)
    result = sub_1405dadb0(&arg1[0x11], rbx)

if (rbx s> 0)
    uint32_t var_48_1[0x4] = zmm6
    int32_t rax_2 = (*(*arg1 + 0xd0))(arg1)
    int32_t rdi_1 = *(arg1 + 0x34)
    uint32_t zmm9[0x4] = 0x3f800000
    int64_t r14_1 = sx.q(rax_2)
    void var_a0
    int32_t i_5
    
    if (r14_1.d != rdi_1)
        zmm6 = 0x3f800000
        zmm6[0] = 1f f- *(arg1[0xb] + (r14_1 << 2))
        zmm6 = _mm_min_ss(__andps_xmmxud_memxud(zmm6, data_142d3f770)[0], 0x3f800000)
        
        if (rdi_1 == 0xffffffff)
            zmm6 = zx.o(0)
        else if (arg1[6].b != 1)
            zmm6[0] = zmm6[0] f* *(arg1[4] + (r14_1 << 2))
        else
            void* rbx_1 = arg2[1]
            
            if (rbx_1 == 0)
                arg1[2]
                zmm6 = zx.o(0)
            else
                void* rax_3 = sub_1424682e0()
                int32_t arg_18 = 0xffffffff
                int32_t arg_1c = 0
                
                if (rax_3 != 0)
                    int64_t arg_20
                    sub_140d3a3a0(&arg_20, rax_3)
                    arg_18.q = arg_20
                
                sub_141ab41e0(rbx_1, &i_5, &arg_18)
                int64_t i_6 = sx.q(i_5)
                void* rbx_2
                
                if (i_6.d == 0xffffffff)
                    rbx_2 = nullptr
                else
                    void* rcx_6 = *(rbx_1 + 0x100)
                    
                    if (rcx_6 != 0)
                        rbx_1 = rcx_6
                    
                    rbx_2 = rbx_1 + (i_6 << 6)
                
                void* rcx_9 = rbx_2 + 8
                
                if (rbx_2 == 0)
                    rcx_9 = nullptr
                
                int64_t rdx_4
                
                if (rcx_9 != 0)
                    rdx_4 = sx.q(*(rcx_9 + 0x28))
                
                int64_t* rcx_10
                
                if (rcx_9 == 0 || rdx_4.d == 0)
                    rcx_10 = nullptr
                else
                    void* rax_5 = *(rcx_9 + 0x20)
                    
                    if (rax_5 != 0)
                        rcx_9 = rax_5
                    
                    rcx_10 = *(rcx_9 + (rdx_4 << 3) - 8)
                
                if (rcx_10 == 0)
                    arg1[2]
                    zmm6 = zx.o(0)
                else
                    (*(*rcx_10 + 0xd0))(rcx_10, *(arg1[4] + (r14_1 << 2)))
                    zmm6 = zx.o(0)
        
        int32_t i = 0
        
        if (arg1[0xe].d s> 0)
            int64_t rcx_12 = 0
            
            do
                rcx_12 += 4
                i += 1
                *(rcx_12 + arg1[0xd] - 4) = zmm6[0]
            while (i s< arg1[0xe].d)
        
        if (not(zmm6[0] f!= 0f) && rdi_1 != 0xffffffff)
            public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
                &var_a0, arg2)
            uint32_t var_8c_1 = (*(arg2 + 0x14))[0]
            uint32_t var_88_1 = arg2[3].d[0]
            int64_t var_98_1 = arg2[1]
            int32_t var_90_1 = 0
            sub_141e32270((sx.q(*(arg1 + 0x34)) << 4) + arg1[2], &var_a0)
        
        int32_t i_1 = 0
        
        if (arg1[0xa].d s> 0)
            int64_t rbx_3 = 0
            
            do
                void* rbp_3 = sx.q(i_1) * 0x30 + arg1[9]
                sub_141defc90(rbp_3, zmm6[0])
                int32_t zmm2_1
                
                if (rbx_3 != r14_1)
                    zmm2_1 = (zx.o(0)).d
                else
                    zmm2_1 = 0x3f800000
                
                sub_141df0060(rbp_3, (*(arg1[0xb] + (rbx_3 << 2)))[0], zmm2_1)
                i_1 += 1
                rbx_3 += 1
            while (i_1 s< arg1[0xa].d)
        
        if (*(arg1 + 0x32) != 0)
            sub_140dd5b90(&i_5, *arg2)
            sub_141e29640((r14_1 << 4) + arg1[2], &i_5)
        
        *(arg1 + 0x34) = r14_1.d
    
    int128_t zmm8 = 0x3727c5ac
    int32_t i_2 = 0
    
    if (arg1[0xa].d s> 0)
        int64_t r14_2 = 0
        uint32_t* r15_1 = nullptr
        uint32_t zmm7_1[0x4]
        
        do
            int64_t* rbx_5 = arg1[9] + r14_2
            int64_t rdi_2 = arg1[0xb]
            zmm7_1, zmm8, zmm9 = sub_141df01a0(rbx_5, arg2[3].d)
            uint32_t zmm0_1[0x4] = rbx_5[3].d
            i_2 += 1
            *(r15_1 + rdi_2) = zmm0_1[0]
            zmm7_1[0] = zmm7_1[0] f+ zmm0_1[0]
            r15_1 = &r15_1[1]
            r14_2 += 0x30
        while (i_2 s< arg1[0xa].d)
        
        if (not(zmm7_1[0] f<= zmm8.d))
            int64_t rcx_24 = 0
            zmm7_1[0] = zmm7_1[0] f- zmm9[0]
            
            if (not(__andps_xmmxud_memxud(zmm7_1, data_142d3f770)[0] f<= zmm8.d))
                int32_t i_3 = 0
                zmm9[0] = zmm9[0] f/ zmm7_1[0]
                
                if (arg1[0xc].d s> 0)
                    do
                        int64_t rax_12 = arg1[0xb]
                        rcx_24 += 4
                        i_3 += 1
                        zmm9[0] = zmm9[0] f* *(rax_12 + rcx_24 - 4)
                        *(rax_12 + rcx_24 - 4) = zmm9[0]
                    while (i_3 s< arg1[0xc].d)
    
    result = arg1[3].d
    int32_t rbx_6 = 0
    
    if (result s> 0)
        uint32_t (* rdi_3)[0x4] = nullptr
        
        do
            zmm6 = *(rdi_3 + arg1[0xb])
            
            if (not(zmm6[0] f<= zmm8.d))
                public: __cdecl std::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0>::_Callable_base<class <lambda_508dc996854572947a45292d62928d80>, 0><class <lambda_508dc996854572947a45292d62928d80> &>(class <lambda_508dc996854572947a45292d62928d80> &)(
                    &var_a0, arg2)
                zmm6[0] = zmm6[0] f* arg2[2].d
                uint32_t var_8c_2 = (*(arg2 + 0x14))[0]
                uint32_t var_88_2 = arg2[3].d[0]
                uint32_t var_90_2 = zmm6[0]
                int64_t var_98_2 = arg2[1]
                sub_141e32270((sx.q(rbx_6) << 4) + arg1[2], &var_a0)
                int64_t rbp_4 = sx.q(arg1[0x12].d)
                int32_t rax_15 = (rbp_4 + 1).d
                arg1[0x12].d = rax_15
                
                if (rax_15 s> *(arg1 + 0x94))
                    sub_1405a4cf0(&arg1[0x11])
                
                *(arg1[0x11] + (rbp_4 << 2)) = rbx_6
            
            result = arg1[3].d
            rbx_6 += 1
            rdi_3 = &(*rdi_3)[1]
        while (rbx_6 s< result)
    
    if (arg1[8] != 0)
        i_5 = 0
        int32_t i_4 = 0
        
        if (result s> 0)
            int64_t r12_1 = 0
            int64_t rdi_4 = 0
            
            do
                int32_t j = 0
                int64_t r14_3 = arg1[0xf]
                zmm6 = *(arg1[0xb] + (r12_1 << 2))
                bool cond:1_1 = *(rdi_4 + r14_3 + 0x38) s<= 0
                *(rdi_4 + r14_3 + 0x10) = zmm6[0]
                
                if (not(cond:1_1))
                    int64_t rbp_5 = 0
                    
                    do
                        float* r15_2 = *(rdi_4 + r14_3 + 0x30)
                        float zmm0_2 = sub_141e41040(arg1[8], j)
                        
                        if (r14_1 != r12_1)
                            zmm9[0] = zmm9[0] f/ zmm0_2
                            zmm0_2 = zmm9[0]
                        
                        j += 1
                        *(r15_2 + rbp_5) = zmm0_2 f* zmm6[0]
                        rbp_5 += 4
                    while (j s< *(rdi_4 + r14_3 + 0x38))
                    
                    i_4 = i_5
                
                i_4 += 1
                r12_1 += 1
                rdi_4 += 0x40
                i_5 = i_4
            while (i_4 s< arg1[3].d)
        
        result = sub_141e653f0(&arg1[0xf])

return result
