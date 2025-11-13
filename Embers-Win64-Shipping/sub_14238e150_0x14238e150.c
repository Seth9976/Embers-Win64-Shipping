// 函数: sub_14238e150
// 地址: 0x14238e150
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x150) != 0
int64_t* r12 = arg3
*arg2 = 0x7f7f
uint32_t r9

if (not(cond:0))
    r9.b = 0
    arg3.b = 0
else if ((r12[0x15d].b & 1) == 0)
    int32_t rcx_1 = *(arg1 + 0x620)
    
    if (rcx_1 s<= 0)
        uint64_t rsi
        rsi.b = 0
        int32_t i = 0
        
        if (*(arg1 + 0x168) != 0)
            rsi = 0
            void* r13_1 = *(arg1 + 0x160)
            int32_t rax_5 = *(*(arg1 + 0x108) + 8)
            void* r15_1 = ***(arg1 + 0x150)
            
            if (*(r15_1 + 0x30) s> 0)
                int64_t rbp_1 = 0
                
                while (true)
                    void* rax_7 = *(r13_1 + 0x40)
                    void* rcx_3 = r13_1 + 0x30
                    
                    if (rax_7 != 0)
                        rcx_3 = rax_7
                    
                    int64_t* rcx_4 = *(rcx_3 + rbp_1)
                    int64_t* rax_9 = (*(*rcx_4 + 0x280))(rcx_4)
                    int64_t arg_10 = 0
                    int64_t r9_2 = *rax_9
                    int64_t* rax_10 = (*(r9_2 + 0x40))(rax_9, zx.q(rax_5), &arg_10, r9_2)
                    int64_t rdx_1 = *rax_10
                    
                    if ((*(rdx_1 + 0x30))(rax_10, rdx_1) != 0)
                        rsi.b = 1
                        break
                    
                    rsi = zx.q(rsi.d + 1)
                    rbp_1 += 0x10
                    
                    if (rsi.d s>= *(r15_1 + 0x30))
                        rsi.b = 0
                        break
        
        int128_t zmm6 = 0x3f800000
        int128_t zmm2 = data_143a30388:4.d
        
        if (not(zmm2.d f== 0f))
            zmm6.d = 1f f/ zmm2.d
        
        float var_98
        int32_t zmm1
        
        if (rsi.b == 0)
            zmm1 = *(arg1 + 0xc4)
            char rax_14 = (*(arg1 + 0x624)).b
            zmm2 = *(arg1 + 0xd8)
            void* rcx_8 = *(arg1 + 0x150)
            var_98 = *(arg1 + 0xc0)
            float var_90_2 = *(arg1 + 0xc8)
            int32_t var_94_2 = zmm1
            int32_t var_8c_2 = 0x3f800000
            char rax_15 = sub_1422e0820(rcx_8, &var_98, zmm2, r12, rax_14, zmm6.d)
            r9 = zx.d(rax_15)
            arg3 = zx.q(rax_15)
        else
            int16_t* rsi_1 = arg2
            
            do
                zmm1 = *(arg1 + 0xc4)
                int32_t rax_12 = *(arg1 + 0x624)
                zmm2 = *(arg1 + 0xd8)
                void* rcx_7 = *(arg1 + 0x150)
                var_98 = *(arg1 + 0xc0)
                float var_90_1 = *(arg1 + 0xc8)
                int32_t var_94_1 = zmm1
                int32_t var_8c_1 = 0x3f800000
                char rax_13
                rax_13, zmm6 = sub_1422e0a60(rcx_7, &var_98, zmm2, r12, rax_12, zmm6.d, i)
                i += 1
                *rsi_1 = rax_13
                rsi_1 += 1
            while (i s< 2)
            
            r9 = zx.d(*arg2)
            arg3 = zx.q(*(arg2 + 1))
    else
        arg3 = zx.q(*(arg1 + 0x624) + 1)
        
        if (rcx_1 s>= arg3.d)
            int32_t rax_3 = *(*(arg1 + 0x150) + 8)
            
            if (rcx_1 s< rax_3)
                rax_3 = rcx_1
            
            arg3 = zx.q(rax_3)
        
        arg3.b -= 1
        r9 = zx.d(arg3.b)
else
    arg3.b = *(*(arg1 + 0x150) + 8) - 1
    r9 = zx.d(arg3.b)

char rdx_4 = *(*(arg1 + 0x150) + 0x5f)
char rcx_9 = rdx_4

if (r9.b s>= rdx_4)
    rcx_9 = r9.b

*arg2 = rcx_9
char rcx_10 = rdx_4

if (arg3.b s>= rdx_4)
    rcx_10 = arg3.b

*(arg2 + 1) = rcx_10
return arg2
