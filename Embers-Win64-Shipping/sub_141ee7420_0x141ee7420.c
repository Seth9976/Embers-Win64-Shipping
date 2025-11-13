// 函数: sub_141ee7420
// 地址: 0x141ee7420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *arg2
char rax_1 = (*(*rsi + 0x50))(rsi)
int64_t rdx = *arg1

if ((*(rdx + 0x50))(arg1, rdx) == rax_1)
    char rax_2 = rsi[0x2d].b
    
    if (*(arg1 + 0x39) == rax_2 && arg1[0x2d].b == rax_2)
        if (not(rsi[0x3d].d[0] f!= arg1[0x3d].d) && not((*(rsi + 0x1ec))[0] f!= *(arg1 + 0x1ec))
                && rsi[0x3e].d[0] f== arg1[0x3e].d)
            return 0
        
        uint32_t zmm0[0x4] = *(arg1 + 0x204)
        zmm0[0] = zmm0[0] f- *(rsi + 0x204)
        
        if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f> *(arg1 + 0x29c)))
            float zmm2 = *(rsi + 0x1fc) f* *(arg1 + 0x1fc)
            zmm0 = rsi[0x3f].d
            zmm0[0] = zmm0[0] f* arg1[0x3f].d
            
            if (not(zmm2 f+ zmm0[0] + rsi[0x40].d f* arg1[0x40].d f< arg1[0x53].d))
                return 0

return 1
