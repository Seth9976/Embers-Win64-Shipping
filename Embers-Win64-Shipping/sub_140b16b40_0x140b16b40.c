// 函数: sub_140b16b40
// 地址: 0x140b16b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

for (int64_t* i = arg1[2]; i != arg2; i = arg1[2])
    arg1[2] = *i
    
    if (i[1].d != 0xfff0)
        sub_140a74f90(i)
    else
        int32_t rax_2 = sub_140a20af0()
        uint64_t rbp_1 = zx.q(rax_2)
        void* const rax_3
        
        if (rax_2 != 0)
            rax_3 = *((rbp_1 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rbp_1.d) & 0x3fff) * 0x18
        else
            rax_3 = nullptr
        
        *(rax_3 + 8) = i
        bool z_1
        
        do
            int64_t rax_7 = 0
            
            if (0 == data_143de67c8)
                data_143de67c8 = 0
            else
                rax_7 = data_143de67c8
            
            if ((((rax_7 & 0xfffffffffc000000) + 0x4000000) & 0xfffffffffc000000)
                    u< (rax_7 & 0xfffffffffc000000))
                sub_140a2c900()
            
            void* rcx_3
            
            if (rbp_1.d != 0)
                rcx_3 = *((rbp_1 u>> 0xe << 3) + &data_143cf0bf8) + (zx.q(rbp_1.d) & 0x3fff) * 0x18
            else
                rcx_3 = nullptr
            
            *(rcx_3 + 0x10) = rax_7.d & 0x3ffffff
            
            if (rax_7 == data_143de67c8)
                data_143de67c8 = rbp_1 | ((rax_7 & 0xfffffffffc000000) + 0x4000000)
                z_1 = true
            else
                data_143de67c8
                z_1 = false
        while (not(z_1))

void* result = arg1[2]
*arg1 = 0
arg1[1] = 0

if (result != 0)
    *arg1 = result + 0x10
    result = sx.q(*(result + 8)) + result + 0x10
    arg1[1] = result

return result
