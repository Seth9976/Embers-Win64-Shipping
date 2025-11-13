// 函数: sub_140f63490
// 地址: 0x140f63490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint8_t rdi = *(arg1 + 0x4cc) u>> 3 & 1
void* result

if (rdi != 0)
    sub_140ede470(&arg1[0x7a], arg3.d)
    int128_t zmm7
    zmm7.d = arg1[0x7c].d.d f/ *(arg1 + 0x43c)
    
    if (not(zmm7.d f== 0f))
        float zmm0_1
        float zmm6_1
        int128_t zmm7_1
        int32_t zmm8_1
        zmm0_1, result, zmm6_1, zmm7_1, zmm8_1 = sub_140ebf340(&arg1[0x7e], arg1 + 0x434)
        
        if (zmm0_1 == zmm6_1)
        label_140f6356b:
            zmm7_1.d = zmm7_1.d f* zmm8_1
            rdi = 1
            sub_140f5ca10(arg1, arg1 + 0x434, zmm7_1, *(arg1 + 0x3f4), 0)
        else
            zmm0_1 - zmm6_1
            int32_t zmm1_1 = 0x3f800000
            
            if (not(zmm0_1 <= zmm6_1))
                zmm0_1 = 1f
            else if (zmm0_1 >= zmm6_1)
                zmm0_1 = (zx.o(0)).d
            else
                zmm0_1 = -1f
            
            zmm7_1.d f- zmm6_1
            
            if (not(zmm7_1.d f> zmm6_1))
                if (zmm7_1.d f>= zmm6_1)
                    zmm1_1 = (zx.o(0)).d
                else
                    zmm1_1 = -0x40800000
            
            if (zmm0_1 f!= zmm1_1)
                goto label_140f6356b
            
            Dbg1::Reset(&arg1[0x7a])

if (*(arg1 + 0x3f4) == 0)
    int32_t zmm0_2
    int32_t zmm6_2
    float zmm8_2
    zmm0_2, result, zmm6_2, zmm8_2 = sub_140ebf340(&arg1[0x7e], arg1 + 0x434)
    
    if (not(zmm0_2 f== zmm6_2))
        rdi = 1
    
    sub_140ede410(&arg1[0x7e], zmm8_2)

arg1[0x77].d = 0
bool cond:0 = rdi != 0

if (rdi == 0)
    *(arg1 + 0x4cc) &= 0xb7
    sub_140e19ef0(arg1, 5)
    void var_48
    
    if (&arg1[0x96] != &var_48)
        arg1[0x96] = 0
        int64_t* rbx_1 = arg1[0x97]
        
        if (rbx_1 != 0)
            arg1[0x97] = 0
            rbx_1[1].d -= 1
            
            if (rbx_1[1].d == 1)
                (**rbx_1)(rbx_1)
                int32_t temp2_1 = *(rbx_1 + 0xc)
                *(rbx_1 + 0xc) -= 1
                
                if (temp2_1 == 1)
                    (*(*rbx_1 + 8))(rbx_1, 1)
    
    cond:0 = rdi != 0

result.b = cond:0
return result
