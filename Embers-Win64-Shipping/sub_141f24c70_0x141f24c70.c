// 函数: sub_141f24c70
// 地址: 0x141f24c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 f< 0f)
    return 

int32_t zmm3 = *(arg1 + 0x1fc)

if (arg2 f== zmm3)
    return 

uint32_t zmm0[0x4] = arg1[0x40].d
bool cond:0_1 = zmm0[0] f== 0f
*(arg1 + 0x1fc) = arg2

if (cond:0_1 || arg2 f< zmm0[0])
    if ((arg1[0x41].b & 4) != 0 || arg1[0x80] != 0)
        arg2 = (zx.o(0)).d
    
    zmm0[0] = zmm0[0] f- arg2
    
    if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f<= 9.99999994e-09f))
        arg1[0x40].d = arg2
        return sub_141ee8490(arg1) __tailcall
else if (not(zmm3 f!= zmm0[0]))
    if ((arg1[0x41].b & 4) != 0 || arg1[0x80] != 0)
        arg2 = (zx.o(0)).d
    
    zmm0[0] = zmm0[0] f- arg2
    
    if (not(__andps_xmmxud_memxud(zmm0, data_142d3f770)[0] f<= 9.99999994e-09f))
        arg1[0x40].d = arg2
        sub_141ee8490(arg1)
    
    void* rax = arg1[0x15]
    
    if (rax != 0)
        return sub_142449550(rax, nullptr, arg1) __tailcall
    
    rax = sub_141ee69e0(arg1)
    
    if (rax != 0)
        return sub_142449550(rax, nullptr, arg1) __tailcall
