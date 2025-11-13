// 函数: sub_142219750
// 地址: 0x142219750
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_140d3e110(arg1 + 0x100)

if (result.b != 0)
    result = sub_142216be0(arg1)
    
    if (result != 1)
        result = sub_1422714e0(arg1 + 0xf0)
        
        if (result.b != 0)
            int64_t (* var_58)(int64_t* arg1, int64_t* arg2)
            char arg_8
            int64_t zmm0_1
            
            if (*sub_142230430(sub_140d3c6e0(arg1 + 0x100), &arg_8, arg2) != 3)
                arg2 = sub_1422273b0(arg1)
                sub_142227280(arg1)
                
                if ((*(arg1 + 0xe) & 8) == 0)
                    int64_t* rax_2 = sub_142565030()
                    void* rax_3 = rax_2[0x23]
                    
                    if (rax_3 == 0)
                        int64_t rdx_2 = *rax_2
                        (*(rdx_2 + 0x390))(rax_2, rdx_2)
                        rax_3 = rax_2[0x23]
                    
                    zmm0_1 = *(rax_3 + 0x98)
                else
                    zmm0_1 = *(arg1 + 0xc0)
                
                zmm0_1.d = zmm0_1.d f* 0.0174532924f
                char* var_48 = &arg_8
                arg_8 = 0
                int32_t arg_18
                int32_t* var_40_1 = &arg_18
                arg_18 = zmm0_1.d
                zmm0_1.d = zmm0_1.d f* 57.2957764f
                int32_t arg_10
                int32_t* var_38_1 = &arg_10
                char** var_50_1 = &var_48
                var_58 = sub_142211d40
                arg_10 = zmm0_1.d
                sub_14226a4e0(arg1 + 0xf0, &var_58)
                bool cond:0_1 = (*(arg1 + 0xe) & 0x40) == 0
                *(arg1 + 0xc0) = arg_10.d
                
                if (cond:0_1)
                    zmm0_1 = *(sub_142216770() + 0x9c)
                else
                    zmm0_1 = *(arg1 + 0x58)
                
                *(arg1 + 0x58) = zmm0_1.d
                char* var_50_2 = &arg_8
                arg_8.q = arg1
                var_58 = sub_142211f60
                sub_14226a4e0(arg1 + 0xf0, &var_58)
            
            void* rax_5 = sub_140d3c6e0(arg1 + 0xf8)
            int64_t* rcx_11
            
            if (rax_5 == 0)
                rcx_11 = nullptr
            else
                rcx_11 = *(rax_5 + 0xa0)
            
            int64_t r14
            r14.b = 0
            int64_t var_68 = 0
            int32_t var_60_1 = 0
            
            if (rcx_11 != 0)
                int64_t* rax_7 = (*(*rcx_11 + 0x2f0))(rcx_11, &var_58)
                r14 = 0
                var_68 = *rax_7
                float zmm2 = var_68:4.d
                zmm0_1 = var_68.d
                arg2.o = rax_7[1].d
                zmm0_1.d = zmm0_1.d f* zmm0_1.d
                arg2.d = arg2.d f* arg2.d
                
                if (zmm2 * zmm2 f+ zmm0_1.d f+ arg2.d > 9.99999905e-09f)
                    r14 = 1
            
            char rax_9
            int64_t r8_1
            rax_9, r8_1 = sub_142222800(arg1, arg2)
            
            if (rax_9 != 0)
                r8_1.b = 1
                sub_1422794c0(arg1 + 0xf0, &var_68)
            
            int32_t zmm0_2 = sub_14226e8b0(arg1 + 0xf0)
            char rax_10 = *(arg1 + 0xa)
            
            if (rax_10 == 1)
                arg2.o = 0x3d4ccccd
            else if (rax_10 != 2)
                arg2.o = 0x3f800000
            else
                arg2.o = *(arg1 + 0xc4)
            
            arg2.d = arg2.d f* zmm0_2
            sub_14227a360(arg1 + 0xf0, arg2)
            int128_t zmm0_3
            zmm0_3.d = sub_14226eaf0(arg1 + 0xf0).d f* *(arg1 + 0xc8)
            arg2.o = zmm0_3
            sub_14227a590(arg1 + 0xf0, arg2)
            char rdx_7 = *(arg1 + 0x24)
            char rsi_2 = -1
            char rcx_18
            
            if (rdx_7 u>= 1)
                rcx_18 = -1
                
                if (rdx_7 u< 0xff)
                    rcx_18 = rdx_7
            else
                rcx_18 = 1
            
            char rcx_19 = *(arg1 + 0x25)
            
            if (rcx_19 u< 1)
                rsi_2 = 1
            else if (rcx_19 u< 0xff)
                rsi_2 = rcx_19
            
            sub_14227a390(arg1 + 0xf0, zx.d(rcx_18))
            sub_14227a400(arg1 + 0xf0, zx.d(rsi_2))
            sub_142212e10(arg1)
            result = sub_142271960(arg1 + 0xf0)
            
            if (result.b == 0)
            label_142219a1b:
                
                if ((*(arg1 + 0xd) & 1) == 0 && r14.b == 0)
                    int512_t zmm1
                    zmm1.o = zx.o(0)
                    sub_14227aa30(arg1 + 0xf0, zmm1)
                    return sub_142275670(arg1 + 0xf0)
            else
                result = sub_142271780(arg1 + 0xf0)
                
                if (result.b == 0)
                    goto label_142219a1b

return result
