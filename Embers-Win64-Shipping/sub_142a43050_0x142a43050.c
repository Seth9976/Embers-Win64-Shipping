// 函数: sub_142a43050
// 地址: 0x142a43050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0

if (arg3 != 0)
    *arg3 = 0

arg2.q f- 0.0
uint128_t zmm7
uint128_t var_28 = zmm7
int128_t zmm8
int128_t var_38 = zmm8
uint128_t zmm9
uint128_t var_48 = zmm9

if (not(is_unordered.q(arg2.q, 0.0)) && arg2.q f== 0.0)
    return 0x8a

if (arg1 != 0)
    bool z_1
    
    if (0 == data_1440153a8)
        data_1440153a8 = 1
        z_1 = true
    else
        data_1440153a8
        z_1 = false
    
    if (not(z_1))
        return 0x8a
    
    int64_t rax_2 = sub_142a40de0(sub_142a43050)
    int128_t zmm0_1 = sub_142a43e20()
    int64_t rbx_5 = (zx.q((rax_2 u>> 0x11).w) + 0x800000) << 0x16
    
    if (arg1 != 0)
        zmm7 = 0x43f0000000000000
        
        do
            if (rdi == 0)
                sub_142a42c60()
            
            data_1440153c0
            int64_t rax_4 =
                sub_142a42ea0(rbx_5, 0x40000000, 0, MEM_COMMIT | MEM_RESERVE | MEM_LARGE_PAGES)
            
            if (rax_4 != rbx_5)
                if (rax_4 == 0)
                    GetLastError()
                    sub_142a43740("could not allocate huge page %zu at 0x%p, error: %i\n", rdi)
                    return 0xc
                
                sub_142a43740("could not allocate contiguous huge page %zu at 0x%p\n", rdi)
                sub_142a42a70(rax_4, sub_142a421d0(0x40000000), 1, &data_14400f130)
                return 0xc
            
            if (rdi != 0)
                data_1440153b0
                data_1440153b0 += 0x40000000
            else
                data_1440153a8
                data_1440153a8 = rbx_5
                data_1440153b0
                data_1440153b0 = 0x40000000
            
            j_sub_142a44ce0(&data_14400f190, 0x40000000)
            j_sub_142a44ce0(&data_14400f170, 0x40000000)
            
            if (arg3 != 0)
                *arg3 = rdi + 1
            
            double zmm0_3
            double zmm6_1
            zmm0_3, zmm6_1 = sub_142a43db0(zmm0_1)
            double zmm1 = zmm0_3
            
            if (zmm0_3 > zmm6_1)
                return 0x8a
            
            if (rdi u>= 1)
                zmm0_3 = float.d(rdi + 1)
                
                if (rdi + 1 s< 0)
                    zmm0_3 = zmm0_3 f+ zmm7.q
                
                zmm1 = zmm1 / zmm0_3
                zmm0_3 = float.d(arg1)
                
                if (arg1 s< 0)
                    zmm0_3 = zmm0_3 f+ zmm7.q
                
                if (zmm1 * zmm0_3 > zmm6_1 f* 0x3ff8000000000000)
                    return 0x8a
            
            rdi += 1
            rbx_5 += 0x40000000
        while (rdi u< arg1)
    
    sub_142a43620("reserved %zu huge pages\n", arg1)

return 0
