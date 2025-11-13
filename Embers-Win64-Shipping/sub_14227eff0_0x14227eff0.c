// 函数: sub_14227eff0
// 地址: 0x14227eff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t zmm7_1
zmm6, zmm7_1 = sub_1424239c0(arg1[0x69], arg2)
int64_t* rdi = arg1[0x53]

if (rdi != 0)
    void* rax_1 = sub_142531230()
    void* rdx_1 = rdi[2]
    int64_t rax_2 = sx.q(*(rax_1 + 0x38))
    
    if (rax_2.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_2 << 3)) == rax_1 + 0x30)
        char rax_4 = (arg1[0x87].d).b
        uint128_t var_168
        int128_t var_f8
        int64_t arg_8
        
        if ((rax_4 & 8) != 0)
            memset(&var_168, 0, 0x88)
            int64_t* rdi_1 = rdi[0xe]
            int32_t var_160_1 = 0x3f800000
            uint64_t r14
            r14.b = 0
            
            if ((*(*arg1 + 0xc70))(arg1, rdi_1) != 0 && (*(*rdi_1 + 0x2d8))(rdi_1, &arg_8) != 0)
                char rax_9
                rax_9, zmm7_1 = sub_14226ca40(arg1, arg_8, zx.d(*(arg1 + 0x453)), 1, &var_168)
                r14 = zx.q(rax_9)
            
            void* rax_10 = sub_140d3c6e0(arg1 + 0x45c)
            
            if (r14.b == 0)
                rdi = nullptr
            else
                rdi = sub_140d3c6e0(&var_f8)
            
            zmm6 = sub_141f0f860(rax_10, rdi)
            sub_140d3a3a0(arg1 + 0x45c, rdi)
            rax_4 = (arg1[0x87].d).b
        
        if ((rax_4 & 0x10) != 0)
            int32_t* r15_2 = arg1 + 0x464
            int32_t i = 0
            int128_t var_38_1 = zmm6
            int64_t r14_1 = 0
            zmm6 = zx.o(0)
            
            do
                uint128_t var_d8
                memset(&var_d8, 0, 0x88)
                int64_t rax_12 = arg1[0x69]
                rdi.b = 0
                int32_t var_d0_1 = 0x3f800000
                int128_t var_68
                
                if (rax_12 == 0 || i s>= 0xb)
                label_14227f1e9:
                    memset(&var_168, 0, 0x88)
                    int32_t var_160_2 = 0x3f800000
                    int128_t var_158
                    int128_t var_c8_1 = var_158
                    var_d8 = var_168
                    int128_t var_138
                    int128_t var_a8_1 = var_138
                    uint128_t var_148
                    uint128_t var_b8_1 = var_148
                    int128_t var_118
                    int128_t var_88_1 = var_118
                    uint128_t var_128
                    uint128_t var_98_1 = var_128
                    var_68 = var_f8
                    uint128_t var_108
                    uint128_t var_78_1 = var_108
                    int64_t var_e8
                    uint64_t var_58_1 = var_e8
                else
                    arg_8.d = *(r14_1 + rax_12 + 0x28)
                    arg_8:4.d = (*(r14_1 + rax_12 + 0x2c)).d
                    
                    if (zmm6.d f== *(r14_1 + rax_12 + 0x30))
                        goto label_14227f1e9
                    
                    char rax_13
                    rax_13, zmm7_1 = sub_14226ca40(arg1, arg_8, zx.d(*(arg1 + 0x453)), 1, &var_d8)
                    rdi = zx.q(rax_13)
                    
                    if (rax_13 == 0)
                        goto label_14227f1e9
                
                void* rax_14 = sub_140d3c6e0(r15_2)
                
                if (rdi.b == 0)
                    rdi = nullptr
                else
                    rdi = sub_140d3c6e0(&var_68)
                
                zmm6 = sub_141f10360(i, rax_14, rdi)
                sub_140d3a3a0(r15_2, rdi)
                i += 1
                r15_2 = &r15_2[2]
                r14_1 += 0xc
            while (i s< 0xb)

(*(*arg1 + 0xc58))(arg1, zmm7_1, zx.q(arg3))
return sub_142274970(arg1, zmm7_1, arg3) __tailcall
