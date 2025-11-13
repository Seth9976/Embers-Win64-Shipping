// 函数: sub_141e2e410
// 地址: 0x141e2e410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6
int128_t var_28 = zmm6
sub_141deec70(arg1)
int64_t rdx
int128_t zmm0_1

for (int32_t i = 0; i s>= 0; i += 1)
    if (i s>= arg1[0x2c].d)
        break
    
    sub_141df0ab0(arg1[0x2b] + ((sx.q(i) * 3 + 1) << 3))
    zmm6 = zx.o(0)
    
    for (int32_t j = 0; j s>= 0; j += 1)
        if (j s>= arg1[0x2c].d)
            break
        
        int64_t rcx_3 = sx.q(j) * 3
        int64_t rax_4 = arg1[0x2b]
        
        if (*(rax_4 + (rcx_3 << 3) + 0x10) s> 0)
            zmm0_1, rdx, zmm6 = sub_141debbc0(rax_4 + 8 + (rcx_3 << 3))
            zmm6 = _mm_max_ss(zmm0_1.d, zmm6.d)
    
    if (not(zmm6.d f== arg1[0x12].d))
        arg1[0x12].d = zmm6.d

int64_t* i_1 = arg1[0x29]
int128_t zmm7 = 0xbf800000
float zmm1
int128_t zmm2

for (void* rbp_1 = sx.q(arg1[0x2a].d) * 0x58 + i_1; i_1 != rbp_1; i_1 = &i_1[0xb])
    zmm2 = i_1[7].d
    
    if (zmm2.d f== 0f)
        void* rdx_1 = i_1[1]
        
        if (rdx_1 != 0)
            int64_t rcx_8 = sx.q(*(i_1 + 0x14))
            
            if (rcx_8.d != 0xffffffff)
                int64_t rax_8 = sx.q(i_1[2].d)
                
                if (rax_8.d != 0xffffffff && rax_8.d s>= 0 && rax_8.d s< *(rdx_1 + 0x160))
                    int64_t r8_1 = rax_8 * 3
                    int64_t rax_9 = *(rdx_1 + 0x158)
                    
                    if (rcx_8.d s>= 0 && rcx_8.d s< *(rax_9 + (r8_1 << 3) + 0x10))
                        int64_t* rsi_2 = (rcx_8 << 5) + *(rax_9 + (r8_1 << 3) + 8)
                        
                        if (*rsi_2 == i_1[5])
                            if (*(i_1 + 0x19) == 1)
                                zmm6 = *(i_1 + 0x24)
                                
                                if (zmm6.d f>= 0f)
                                    zmm0_1 = _mm_min_ss(sub_141debb60(rsi_2).d, zmm6.d)
                                else
                                    zmm0_1 = zx.o(0)
                                
                                *(i_1 + 0x24) = zmm0_1.d
                            
                            *(i_1 + 0x1c) = rsi_2[1].d
                            i_1[4].d = sub_141debb60(rsi_2)
        
        char rax_12 = *(i_1 + 0x19)
        
        if (rax_12 == 0)
            zmm2 = *(i_1 + 0x24)
        else
            uint32_t rcx_11 = zx.d(rax_12)
            
            if (rcx_11 == 1)
                zmm2.d = (*(i_1 + 0x24)).d f+ *(i_1 + 0x1c)
            else if (rcx_11 != 2)
                zmm2 = *(i_1 + 0x24)
            else
                zmm2.d = (*(i_1 + 0x24)).d f* i_1[4].d
                zmm2.d = zmm2.d f+ *(i_1 + 0x1c)
    else
        if (i_1[3].b != 0)
            char rax_7 = *(i_1 + 0x19)
            i_1[3].b = 0
            
            if (rax_7 == 0)
                zmm1 = *(i_1 + 0x24)
            else
                uint32_t rcx_5 = zx.d(rax_7)
                
                if (rcx_5 == 1)
                    zmm1 = *(i_1 + 0x24) f+ *(i_1 + 0x1c)
                else if (rcx_5 != 2)
                    zmm1 = *(i_1 + 0x24)
                else
                    zmm1 = *(i_1 + 0x24) f* i_1[4].d f+ *(i_1 + 0x1c)
            
            sub_141e2d2b0(i_1, zmm1)
            zmm2 = i_1[7].d
        
        i_1[5] = 0
        *(i_1 + 0x1c) = 0xbf800000
        i_1[4].d = 0xbf800000
        *(i_1 + 0x14) = 0xffffffff
    
    rdx, zmm7 = sub_141e2b920(i_1, arg1, zmm2, 0)

if (arg1[0x2f].b != 0 || *(arg1 + 0x179) != 0)
    void* i_2 = arg1[0x2b]
    
    for (void* rbp_2 = i_2 + sx.q(arg1[0x2c].d) * 0x18; i_2 != rbp_2; i_2 += 0x18)
        int64_t* j_1 = *(i_2 + 8)
        
        for (void* rsi_5 = &j_1[sx.q(*(i_2 + 0x10)) * 4]; j_1 != rsi_5; j_1 = &j_1[4])
            int64_t* rcx_15 = *j_1
            
            if (rcx_15 != 0)
                rdx.b = 1
                (*(*rcx_15 + 0x328))(rcx_15, rdx, zx.q(*(arg1 + 0x17b)))

if (data_143de5450 == 0)
    void* rbp_3 = arg1[7]
    
    if (rbp_3 != 0)
        int32_t i_3 = 0
        
        if (arg1[0x2c].d s> 0)
            int64_t* rbx_1 = nullptr
            
            do
                int64_t arg_8 = *(rbx_1 + arg1[0x2b])
                sub_141e46d90(rbp_3, &arg_8)
                i_3 += 1
                rbx_1 = &rbx_1[3]
            while (i_3 s< arg1[0x2c].d)

int64_t* i_4 = arg1[0x10]

for (void* rsi_7 = sx.q(arg1[0x11].d) * 0xb8 + i_4; i_4 != rsi_7; i_4 = &i_4[0x17])
    zmm2 = i_4[6].d
    
    if (zmm2.d f== 0f)
        char rax_18 = *(i_4 + 0x19)
        
        if (rax_18 == 0)
            zmm2 = *(i_4 + 0x24)
        else
            uint32_t rcx_21 = zx.d(rax_18)
            
            if (rcx_21 == 1)
                zmm2.d = (*(i_4 + 0x24)).d f+ *(i_4 + 0x1c)
            else if (rcx_21 != 2)
                zmm2 = *(i_4 + 0x24)
            else
                zmm2.d = (*(i_4 + 0x24)).d f* i_4[4].d
                zmm2.d = zmm2.d f+ *(i_4 + 0x1c)
    else
        if (i_4[3].b != 0)
            char rax_17 = *(i_4 + 0x19)
            i_4[3].b = 0
            
            if (rax_17 == 0)
                zmm1 = *(i_4 + 0x24)
            else
                uint32_t rcx_18 = zx.d(rax_17)
                
                if (rcx_18 == 1)
                    zmm1 = *(i_4 + 0x24) f+ *(i_4 + 0x1c)
                else if (rcx_18 != 2)
                    zmm1 = *(i_4 + 0x24)
                else
                    zmm1 = *(i_4 + 0x24) f* i_4[4].d f+ *(i_4 + 0x1c)
            
            sub_141e2d2b0(i_4, zmm1)
            zmm2 = i_4[6].d
        
        i_4[5] = 0
        *(i_4 + 0x1c) = 0xbf800000
        i_4[4].d = 0xbf800000
        *(i_4 + 0x14) = 0xffffffff
    
    zmm7 = sub_141e2b920(i_4, arg1, zmm2, 0)
    zmm2 = i_4[0xb].d
    
    if (not(zmm2.d f== 0f))
        char rax_19 = *(i_4 + 0x19)
        float zmm0_3
        
        if (rax_19 == 0)
            zmm0_3 = *(i_4 + 0x24)
        else
            uint32_t rcx_24 = zx.d(rax_19)
            
            if (rcx_24 == 1)
                zmm0_3 = *(i_4 + 0x24) f+ *(i_4 + 0x1c)
            else if (rcx_24 != 2)
                zmm0_3 = *(i_4 + 0x24)
            else
                zmm0_3 = *(i_4 + 0x24) f* i_4[4].d f+ *(i_4 + 0x1c)
        
        zmm2.d = zmm2.d f+ zmm0_3
        zmm7 = sub_141e2b920(&i_4[0xc], arg1, zmm2, 0)

if (sub_140d3cb50(arg1) != 0 && *(sub_140d3cb50(arg1) + 0x240) s< 0x1a2)
    zmm7 = sub_141e1ab70(arg1)

zmm1 = arg1[0x1b].d

if (not(zmm1 f== zmm7.d))
    sub_141defc90(&arg1[0x15], zmm1)
    arg1[0x1b].d = 0xbf800000

zmm1 = arg1[0x22].d

if (not(zmm1 f== zmm7.d))
    sub_141defc90(&arg1[0x1c], zmm1)
    arg1[0x22].d = 0xbf800000

return sub_141e18210(arg1) __tailcall
