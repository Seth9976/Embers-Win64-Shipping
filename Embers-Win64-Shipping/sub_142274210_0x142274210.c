// 函数: sub_142274210
// 地址: 0x142274210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x7a].d

if ((rax.b & 1) == 0)
    arg1[0x7a].d = rax | 1
    sub_14256a730(arg1)

char r8

if (arg2.d f!= (zx.o(0)).d)
    r8 = 0
else
    r8 = 1

sub_14227eff0(arg1, arg2, r8)
void* result = arg1[0x53]

if (result != 0 && *(result + 0x30) == arg1)
    int64_t rdi
    rdi.b = 0
    int32_t arg_c = 0
    void arg_10
    
    if (sub_141f8dba0(arg1, (*sub_140b5e500(&arg_10, 0x140)).q) != 0)
        int64_t rax_4 = arg1[0x4a]
        
        if (rax_4 == 0)
            arg_c = 0
            (*(*arg1 + 0x658))(arg1, (*sub_140b5e500(&arg_10, 0x145)).q)
        else if (arg1[0x53] != 0)
            rdi = 0
            
            if (rax_4 == arg1[0x54])
                rdi = 1
    
    int32_t* rax_7
    int512_t zmm1
    int128_t zmm6_1
    rax_7, zmm1, zmm6_1 = sub_140b5e500(&arg_10, 0x145)
    arg_c = 0
    
    if (sub_141f8dba0(arg1, (*rax_7).q) == 0)
        int32_t* rax_12
        rax_12, zmm1, zmm6_1 = sub_140b5e500(&arg_10, 0x142)
        arg_c = 0
        result = sub_141f8dba0(arg1, (*rax_12).q)
        
        if (result.b != 0)
            if (arg1[0x1e].b u< 3)
                int32_t* rax_13
                rax_13, zmm1, zmm6_1 = sub_140b5e500(&arg_10, 0x142)
                arg_c = 0
                
                if (sub_141f8dba0(arg1, (*rax_13).q) != 0)
                    void* rax_16 = (*(*arg1 + 0x150))(arg1)
                    int64_t zmm0_1
                    zmm0_1.d = (*(rax_16 + 0x520)).d f- *(arg1 + 0x314)
                    
                    if (not(zmm0_1.d f<= 0.25f))
                        int64_t r8_1 = *arg1
                        void var_48
                        int64_t* rax_17 = (*(r8_1 + 0x660))(arg1, &var_48, r8_1)
                        int32_t var_60_1 = rax_17[1].d
                        int64_t rax_19 = *arg1
                        int64_t var_68 = *rax_17
                        void var_3c
                        int64_t* rax_20 = (*(rax_19 + 0xd38))(arg1, &var_3c)
                        int32_t rax_21 = rax_20[1].d
                        int64_t var_58 = *rax_20
                        int32_t var_50_1 = rax_21
                        zmm1, zmm6_1 = sub_14256a6d0(arg1, &var_58, &var_68)
                        *(arg1 + 0x314) = *(rax_16 + 0x520)
            
            zmm1.o = zmm6_1
            return (*(*arg1 + 0xac0))(arg1, zmm1)
    else
        if (arg1[0x1e].b u< 3)
            (*(*arg1 + 0xb80))(arg1)
        
        result = (*(*arg1 + 0xd88))(arg1)
        rdi.b = result.b == 0
    
    if (rdi.b != 0)
        zmm1.o = zmm6_1
        return (*(*arg1 + 0xac0))(arg1, zmm1)

return result
