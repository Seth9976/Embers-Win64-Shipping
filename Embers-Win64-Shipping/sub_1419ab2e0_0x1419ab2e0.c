// 函数: sub_1419ab2e0
// 地址: 0x1419ab2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = 0x40800000
int128_t zmm7 = 0x3f800000

while (data_143f0fdf1 != 0)
    int128_t zmm0
    zmm0.d = zmm7.d f/ (data_1439c85c8 f* zmm6.d)
    zmm6 = sub_140b73230(zmm0)
    int32_t rax_2 = data_143db7a64
    
    if (rax_2 == 0)
        if (rax_2 == data_143f0fdfc)
            data_143f0fdfc = 0
        else
            rax_2 = data_143f0fdfc
        
        if (rax_2 s< 4)
            data_143f0fdfc += 1
            
            if (sub_140a80f40() == 0)
                if (data_143f138f4 == 0)
                    uint32_t rax_4
                    
                    if (data_143de5480 != 0)
                        rax_4.b = GetCurrentThreadId() == data_143de5470
                    
                    if (data_143de5480 == 0 || rax_4.b != 0)
                        zmm6, zmm7 = sub_141995590()
                        continue
                
                void var_50
                void** rax_5 = sub_14199bb20(&var_50, nullptr, 0xff)
                void* rcx_2 = *rax_5
                int32_t r8_1 = rax_5[2].d
                int64_t* rdx_3 = rax_5[1]
                int64_t* rbx_1 = *(rcx_2 + 0x18)
                int64_t* var_58_1 = rbx_1
                void* rdi_1 = &rbx_1[9]
                
                if (rbx_1 != 0)
                    *rdi_1 += 1
                    rbx_1 = var_58_1
                
                zmm6 = sub_1419ae690(rcx_2, rdx_3, r8_1, 1)
                
                if (rbx_1 != 0)
                    int32_t rax_6 = *rdi_1
                    *rdi_1 -= 1
                    
                    if (rax_6 == 1)
                        zmm6 = sub_140a2f6e0(var_58_1)
            else
                zmm6, zmm7 = sub_141995590()

return 0
