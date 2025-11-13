// 函数: sub_14265c0d0
// 地址: 0x14265c0d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = arg1[0x10].d
int64_t* r15 = arg1

if (rax == 1)
    return 0

int128_t zmm6
int128_t var_28 = zmm6
int32_t i = 0
uint32_t zmm7[0x4]
uint32_t var_38[0x4] = zmm7
int128_t zmm8
int128_t var_48 = zmm8

if (rax s> 0)
    zmm7 = 0x7fffffff
    void* rsi_1 = nullptr
    zmm8 = 0x40a00000
    zmm6 = zx.o(0)
    
    do
        int64_t* rax_2 = r15[0xf]
        
        if (zmm6.d f> *(rsi_1 + rax_2 + 4) || zmm6.d f> *(rsi_1 + rax_2 + 8))
            arg1.b = 0
        else
            arg1.b = 1
        
        if (arg1.b == 0)
            rax_2.b = 0
        else
            int32_t* rdi_2 = &rax_2[0xa] + rsi_1
            rax_2 = sub_140d3c6e0(rdi_2)
            int64_t* rbx_1 = rax_2
            
            if (rax_2 != 0)
            label_14265c1eb:
                void* rax_5
                rax_5, arg1, zmm6 = sub_140bdf2e0()
                void* rdx_1 = rbx_1[2]
                rax_2 = sx.q(*(rax_5 + 0x38))
                
                if (rax_2.d s> *(rdx_1 + 0x38))
                    rax_2.b = 0
                else if ((*(rdx_1 + 0x30))[rax_2] != rax_5 + 0x30)
                    rax_2.b = 0
                else
                    rax_2, arg1 = sub_142452380()
                    
                    if (rax_2 == 0)
                        rax_2.b = 0
                    else
                        rax_2 = sx.q(rax_2[7].d)
                        
                        if (rax_2.d s> rbx_1[7].d)
                            rax_2.b = 0
                        else if (rbx_1[6][rax_2] != &rax_2[6])
                            rax_2.b = 0
                        else
                            rax_2.b = 1
            else if (*(rdi_2 + 0x10) == 0)
                rax_2.b = 0
            else
                if (rax_2.d == data_1439aaa30)
                    data_1439aaa30 = 0
                else
                    rax_2 = zx.q(data_1439aaa30)
                
                if (rax_2.d != rdi_2[2] || *rdi_2 != 0xffffffff)
                    void* rax_3
                    rax_3, zmm6, zmm7, zmm8 = sub_140d2bce0(&rdi_2[4])
                    sub_140d3a3a0(rdi_2, rax_3)
                    
                    if (rax_3 != 0 || data_143e1d7b4 == 0)
                        int32_t rax_4 = 0
                        
                        if (0 == data_1439aaa30)
                            data_1439aaa30 = 0
                        else
                            rax_4 = data_1439aaa30
                        
                        rdi_2[2] = rax_4
                    
                    rax_2, arg1 = sub_140d3c6e0(rdi_2)
                    rbx_1 = rax_2
                    
                    if (rax_2 != 0)
                        goto label_14265c1eb
                    
                    rax_2.b = 0
                else
                    rax_2.b = 0
        
        if (rax_2.b != 0)
            int64_t rax_6 = r15[0xf]
            uint32_t zmm0[0x4] = *(rsi_1 + rax_6 + 4)
            arg1 = rsi_1 + rax_6
            zmm0[0] = zmm0[0] f- *(arg2 + 0x234)
            
            if (_mm_and_ps(zmm0, zmm7)[0] f>= zmm8.d)
                rax_6.b = 0
            else
                zmm0 = arg1[1].d
                zmm0[0] = zmm0[0] f- *(arg2 + 0x238)
                
                if (_mm_and_ps(zmm0, zmm7)[0] f>= zmm8.d)
                    rax_6.b = 0
                else
                    zmm0 = *(arg1 + 0xc)
                    
                    if (zmm0[0] f< zmm6.d)
                    label_14265c292:
                        rax_6, arg1 = sub_141ded5a0(arg1, arg2 + 0x230)
                        
                        if (rax_6.b == 0)
                            rax_6.b = 0
                        else
                            rax_6.b = 1
                    else
                        int32_t zmm1 = *(arg2 + 0x23c)
                        
                        if (zmm1 f< zmm6.d)
                            goto label_14265c292
                        
                        zmm0[0] = zmm0[0] f- zmm1
                        
                        if (not(_mm_and_ps(zmm0, zmm7)[0] f>= zmm8.d))
                            goto label_14265c292
                        
                        rax_6.b = 0
            
            if (rax_6.b != 0)
                return zx.q(i)
        
        i += 1
        rsi_1 += 0x78
    while (i s< r15[0x10].d)

return 0xffffffff
