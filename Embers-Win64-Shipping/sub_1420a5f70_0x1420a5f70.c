// 函数: sub_1420a5f70
// 地址: 0x1420a5f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rsi = arg3
uint64_t result
result.b = arg1[0x50].d.b & 5

if (result.b == 1 && arg1[0x44] != 0)
    int64_t rbx
    int64_t arg_10 = rbx
    result = zx.q(*(arg1 + 0x23c)) & 0x60
    int64_t rbp
    int64_t var_18_1 = rbp
    int32_t i_2 = 0
    
    if (result.b != 0x60)
        goto label_1420a606d
    
    uint64_t r14
    r14.b = 1
    int32_t i = 0
    
    if (arg1[0x4a].d s> 0)
        rbp = 0
        int128_t zmm6
        int128_t zmm7
        
        do
            int64_t r15_1 = arg1[0x49]
            int32_t rsi_1 = 0
            
            if (*(r15_1 + rbp + 0x10) s> 0)
                rbx = 0
                
                while (r14.b != 0)
                    result = *(r15_1 + rbp + 8)
                    int64_t* rcx = *(rbx + result)
                    
                    if (rcx != 0)
                        result, zmm6, zmm7 = sub_141ddd150(rcx, 0x3f800000, arg4.d)
                        r14 = zx.q(r14.b)
                        
                        if (result.b != 0)
                            r14 = 0
                    
                    rsi_1 += 1
                    rbx += 8
                    
                    if (rsi_1 s>= *(r15_1 + rbp + 0x10))
                        break
            
            i += 1
            rbp += 0x18
        while (i s< arg1[0x4a].d)
        
        if (r14.b == 0)
            rsi = arg3
        label_1420a606d:
            int128_t zmm9
            zmm9.d = arg2.d f* arg1[0x46].d
            rbp.b = 0
            rbx.b = 0
            int128_t var_48_1 = zmm6
            zmm6 = *(arg1 + 0x284)
            int128_t var_58_1 = zmm7
            zmm7 = zx.o(0)
            
            if ((arg1[0x50].b & 2) != 0)
                zmm6.d = zmm6.d f- zmm9.d
                
                if (not(zmm6.d f>= zmm7.d))
                    if ((*(arg1 + 0x23c) & 1) == 0)
                        zmm6 = zx.o(0)
                        rbx.b = 1
                    else
                        sub_1420ab490(arg1, zx.o(0), rsi, 0)
                        zmm6 = sub_1420ab490(arg1, *(arg1[0x44] + 0x28), rsi, 1)
                        
                        do
                            zmm6.d = zmm6.d f+ *(arg1[0x44] + 0x28)
                        while (zmm6.d f< zmm7.d)
                        
                        rbp.b = 1
            else
                zmm6.d = zmm6.d f+ zmm9.d
                arg4 = *(arg1[0x44] + 0x28)
                
                if (not(zmm6.d f<= arg4.d))
                    if ((*(arg1 + 0x23c) & 1) == 0 || arg4.d f<= zmm7.d)
                        zmm6 = arg4
                        rbx.b = 1
                    else
                        sub_1420ab490(arg1, arg4, rsi, 0)
                        zmm6 = sub_1420ab490(arg1, zx.o(0), rsi, 1)
                        int32_t i_1 = *(arg1[0x44] + 0x28)
                        
                        if (not(zmm6.d f<= i_1))
                            do
                                zmm6.d = zmm6.d f- i_1
                            while (zmm6.d f> i_1)
                        
                        rbp.b = 1
            
            int128_t zmm6_1 = sub_1420ab490(arg1, zmm6, rsi, 0)
            
            if (rbx.b != 0)
                (*(*arg1 + 0x638))(arg1)
                int64_t rbx_1 = *arg1
                void arg_8
                int64_t* rax_6
                int512_t zmm2_1
                rax_6, zmm2_1, zmm6_1 = sub_140b58260(&arg_8, u"Finished", 1)
                zmm2_1.o = zmm6_1
                (*(rbx_1 + 0x668))(arg1, *rax_6, zmm2_1, 0)
                
                if ((arg1[0x50].b & 1) != 0)
                    int64_t rax_7 = *arg1
                    int64_t rdx_2
                    rdx_2.b = 1
                    *(arg1 + 0x28c) += 1
                    (*(rax_7 + 0x660))(arg1, rdx_2)
            
            result = sub_14243ade0((*(*arg1 + 0x150))(arg1))
            
            if (result.b != 0)
                result = zx.q(arg1[0x50].d)
                
                if ((result.b & 1) != 0 && (result.b & 2) == 0 && (*(arg1 + 0x23c) & 1) == 0
                        && arg1[0x4f].d s> 0)
                    int32_t zmm1_2 = data_143a2e320
                    int64_t rbx_2 = 0
                    
                    do
                        int64_t* rsi_3 = arg1[0x4e] + rbx_2
                        float zmm0_1 = *(rsi_3 + 0xc) f- zmm6_1.d
                        
                        if (not(zmm0_1 f<= zmm7.d))
                            if (zmm0_1 f>= zmm1_2)
                                break
                            
                            void*** rax_10
                            int128_t zmm8_1
                            rax_10, zmm7, zmm8_1 = sub_141f88540()
                            result, zmm6_1 = sub_141f809b0(rax_10, rsi_3, zmm8_1, 0, zmm7.d)
                            zmm1_2 = data_143a2e320
                        else if (zmm0_1 f>= zmm1_2)
                            break
                        
                        i_2 += 1
                        rbx_2 += 0x10
                    while (i_2 s< arg1[0x4f].d)
            
            if (rbp.b == 0)
                *(arg1 + 0x284) = zmm6_1.d
            else
                result = (*(*arg1 + 0x660))(arg1, 0)

return result
