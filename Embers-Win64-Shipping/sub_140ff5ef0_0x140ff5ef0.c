// 函数: sub_140ff5ef0
// 地址: 0x140ff5ef0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

double zmm6[0x2]

if (data_143e2b8c0 != 0)
    void* rax_1 = *(arg1 + 0x148)
    
    if (rax_1 != 0 && *(rax_1 + 0x78) != 0)
        arg4 = sub_1427c83a0(rax_1 + 0x10, *(arg1 + 0x138), zx.q(*(rax_1 + 0x6c)))
        bool cond:1_1 = data_1439b4aa0 != 0
        *(*(arg1 + 0x148) + 0x78) = 0
        bool cond:2_1
        
        if (not(cond:1_1))
            void* rcx_1 = *(arg1 + 0x148)
            int32_t rbx_1
            rbx_1.b = *(rcx_1 + 0x6c) != 1
            sub_1427c8690(rcx_1 + 0x10, *(arg1 + 0x138), rbx_1, 1)
            zmm6 = sub_1427c8470(*(arg1 + 0x148) + 0x10, *(arg1 + 0x138), rbx_1, 1)
            void* rax_3 = *(arg1 + 0x148)
            void var_18
            int128_t* rax_4 = sub_1427c7f80(rax_3 + 0x40, &var_18, rbx_1, *(rax_3 + 0x68))
            arg4.q = 0x3f50624dd2f1a9fc f/ data_143d796f8
            int64_t rax_5 = 0
            arg2 = 0x43e0000000000000
            
            if (not(arg4.q f< arg2.q))
                arg4.q = arg4.q f- arg2.q
                
                if (not(arg4.q f>= arg2.q))
                    rax_5 = -0x8000000000000000
            
            int64_t rax_6
            int64_t rdx_6
            rdx_6:rax_6 = mulu.dp.q(0x431bde82d7b634db, *(rax_4 + 8))
            cond:2_1 = data_1439b4aa0 == 0
            *(*(arg1 + 0x148) + 0x70) = (int.q(arg4.q) + rax_5) * (rdx_6 u>> 0x12)
        
        if (cond:1_1 || not(cond:2_1))
            data_1439b4aa0 = 0

int32_t result = sub_140fe5ed0(arg1 + 0x17cf8, arg2, arg3, arg4, zmm6)
int64_t* rbx_2 = *(arg1 + 0x17ce0)
*(arg1 + 0x17ce0) = 0

if (rbx_2 != 0)
    result = rbx_2[1].d
    rbx_2[1].d -= 1
    
    if (result == 1)
        if (rbx_2[2].b != 0)
            return (**rbx_2)(rbx_2, 1)
        
        if (data_143f0f1d0 == 0 && sub_1405949a0() != 0)
            return (**rbx_2)(rbx_2, 1)
        
        result = 0
        bool z_1
        
        if (0 == *(rbx_2 + 0xc))
            *(rbx_2 + 0xc) = 1
            z_1 = true
        else
            result = *(rbx_2 + 0xc)
            z_1 = false
        
        if (z_1)
            return sub_1405dcc10(&data_143f02390, rbx_2) __tailcall

return result
