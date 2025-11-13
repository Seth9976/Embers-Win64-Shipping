// 函数: sub_142c71300
// 地址: 0x142c71300
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result_2 = nullptr
void* const result = nullptr

if (arg1 == 0)
    return 0

int128_t* r15 = *arg1[3]

if (r15 != 0)
    int128_t** r12_1 = nullptr
    
    while (true)
        int64_t rdi_1 = 0x10
        
        if (arg1[2].w == 0x17)
            rdi_1 = 0x1c
        
        void* result_1 = data_143ccb8b8(1, 0x30)
        
        if (result_1 != 0)
            int64_t rax_2 = data_143ccb8b0(*arg1)
            *(result_1 + 0x18) = rax_2
            
            if (rax_2 != 0)
                int64_t rax_3 = data_143ccb8b8(1, rdi_1)
                *(result_1 + 0x20) = rax_3
                
                if (rax_3 == 0)
                    data_143ccb8a0(*(result_1 + 0x18))
                else
                    if (result == 0)
                        result = result_1
                    
                    if (result_2 != 0)
                        *(result_2 + 0x28) = result_1
                    
                    int32_t rax_4 = sx.d(arg1[2].w)
                    *(result_1 + 4) = rax_4
                    *(result_1 + 8) = 1
                    *(result_1 + 0x10) = rdi_1.d
                    int16_t* rdi_2
                    
                    if (rax_4 == 2)
                        rdi_2 = *(result_1 + 0x20)
                        *(rdi_2 + 4) = *r15
                        *rdi_2 = arg1[2].w
                        rdi_2[1] = htons(arg2)
                    else if (rax_4 == 0x17)
                        rdi_2 = *(result_1 + 0x20)
                        *(rdi_2 + 8) = *r15
                        *rdi_2 = arg1[2].w
                        rdi_2[1] = htons(arg2)
                    r12_1 = &r12_1[1]
                    result_2 = result_1
                    r15 = *(r12_1 + arg1[3])
                    
                    if (r15 == 0)
                        break
                    
                    continue
            
            data_143ccb8a0(result_1)
        
        if (result != 0)
            void* i
            
            do
                data_143ccb8a0(*(result + 0x20))
                data_143ccb8a0(*(result + 0x18))
                i = *(result + 0x28)
                data_143ccb8a0(result)
                result = i
            while (i != 0)
        
        return nullptr

return result
