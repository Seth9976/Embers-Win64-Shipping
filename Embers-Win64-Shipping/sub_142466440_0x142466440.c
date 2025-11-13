// 函数: sub_142466440
// 地址: 0x142466440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r15 = arg2

if (arg4 != 0)
    int64_t* rsi_1 = arg3 + 0x20
    int32_t i
    
    do
        void* rbp_1 = r15
        r15 += 0x70
        *(rbp_1 + 8) = rsi_1[-3]
        *(rbp_1 + 0x10) = *(rsi_1 - 0x10)
        
        if (rbp_1 + 0x20 != rsi_1)
            int32_t j_1 = *(rbp_1 + 0x28)
            
            if (j_1 != 0)
                void* rbx_2 = *(rbp_1 + 0x20) + 0x50
                int32_t j
                
                do
                    int64_t rcx = *(rbx_2 + 0x20)
                    
                    if (rcx != 0)
                        sub_140a74f90(rcx)
                    
                    int64_t rcx_1 = *rbx_2
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    int64_t rcx_2 = *(rbx_2 - 0x10)
                    
                    if (rcx_2 != 0)
                        sub_140a74f90(rcx_2)
                    
                    int64_t rcx_3 = *(rbx_2 - 0x20)
                    
                    if (rcx_3 != 0)
                        sub_140a74f90(rcx_3)
                    
                    rbx_2 += 0x90
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            sub_142464670(rbp_1 + 0x20, *rsi_1, rsi_1[1].d, *(rbp_1 + 0x2c), 0)
        
        *(rbp_1 + 0x30) = rsi_1[2].d
        *(rbp_1 + 0x34) = *(rsi_1 + 0x14)
        *(rbp_1 + 0x38) = rsi_1[3].b
        *(rbp_1 + 0x39) = *(rsi_1 + 0x19)
        *(rbp_1 + 0x3c) = *(rsi_1 + 0x1c)
        *(rbp_1 + 0x40) = rsi_1[4].d
        *(rbp_1 + 0x44) = *(rsi_1 + 0x24)
        sub_142465940(rbp_1 + 0x48, &rsi_1[5])
        rsi_1 = &rsi_1[0xe]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
