// 函数: sub_14224dc70
// 地址: 0x14224dc70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
int64_t rbx = arg4
void* rax_2 = sub_14224ddf0(arg1, arg3)

if (rax_2 != 0)
    int128_t zmm6 = *(rax_2 + 0x1c0)
    int128_t zmm7 = *(rax_2 + 0x1d0)
    int128_t zmm8 = *(rax_2 + 0x1e0)
    void* rax_3 = sub_142591550()
    void* rdx_1 = *(rax_2 + 0x10)
    int64_t rax_4 = sx.q(*(rax_3 + 0x38))
    
    if (rax_4.d s<= *(rdx_1 + 0x38) && *(*(rdx_1 + 0x30) + (rax_4 << 3)) == rax_3 + 0x30)
        void* rax_6 = sub_141f64a80(rax_2)
        int32_t rcx_2
        rcx_2.b = arg4:4.d == 0
        
        if ((rcx_2.b & sub_140b5b8a0(rbx.d, 0)) != 0 && rax_6 != 0)
            int32_t rax_8 = sub_142310b30(rax_2)
            char rcx_4
            
            if (rax_8 s< 0 || rax_8 s>= *(rax_6 + 0x48))
                rcx_4 = 0
            else
                rcx_4 = 1
            
            if (rcx_4 != 0)
                rbx = *(*(*(rax_6 + 0x40) + (sx.q(rax_8) << 3)) + 0x80)
        
        int32_t rax_10 = sub_141f5e0e0(rax_2, rbx)
        
        if (rax_10 != 0xffffffff)
            void var_98
            int128_t* rax_11 = sub_141f5e780(rax_2, &var_98, rax_10)
            zmm6 = *rax_11
            zmm7 = rax_11[1]
            zmm8 = rax_11[2]
    
    *arg2 = zmm6
    arg2[1] = zmm7
    arg2[2] = zmm8
else
    *arg2 = data_143dbb0c0
    arg2[1] = data_143dbb0d0
    arg2[2] = data_143dbb0e0

__security_check_cookie(rax_1 ^ &var_b8)
return arg2
