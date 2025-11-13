// 函数: sub_14231c500
// 地址: 0x14231c500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm8 = arg3
int128_t zmm9 = arg4
uint64_t result = sub_141f64a80(arg1)

if (result != 0)
    int64_t r8_1
    result, r8_1 = sub_142249810(result, arg2)
    
    if (result.d != 0xffffffff && result.d s< arg1[0x103].d)
        void* rbx_1 = *(arg1[0x102] + (sx.q(result.d) << 3))
        result = sub_142233f30(rbx_1)
        
        if (result.b == 0)
            int128_t zmm7
            int128_t var_18_1 = zmm7
            sub_141f64a80(arg1)
            r8_1.b = 1
            void* rax_2 = (*(*arg1 + 0x6a8))(arg1, *(rbx_1 + 0x18), r8_1)
            
            if (rax_2 != 0 && sub_142222800(rax_2, arg5) != 0 && sub_14221b2f0(rax_2) != 0)
                zmm8, zmm9 = sub_142221990(rax_2, 1, 0, arg5)
            
            zmm7 = zx.o(0)
            bool rdi_2 = true
            bool rax_5
            
            if (zmm8.d f!= zmm7.d)
                zmm8.d f- 180f
                rax_5 = zmm8.d f< 180f
            else
                rax_5 = true
            
            *(rbx_1 + 0xcc) = zmm8.d
            *(rbx_1 + 0xd4) = rax_5
            sub_142235440(rbx_1)
            bool rax_6
            
            if (zmm9.d f!= zmm7.d)
                zmm9.d f- 180f
                rax_6 = zmm9.d f< 180f
            else
                rax_6 = true
            
            *(rbx_1 + 0xec) = zmm9.d
            *(rbx_1 + 0xf0) = rax_6
            sub_142235440(rbx_1)
            
            if (not(arg6 f== zmm7.d))
                arg6 - 180f
                rdi_2 = arg6 < 180f
            
            *(rbx_1 + 0xd0) = arg6
            *(rbx_1 + 0xd5) = rdi_2
            return sub_142235440(rbx_1)

return result
