// 函数: sub_14259bcf0
// 地址: 0x14259bcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
uint64_t* r15 = arg2

if (arg4 != 0)
    void** rsi_1 = arg3 + 0x10
    int32_t i
    
    do
        uint64_t* rbp_1 = r15
        r15 = &r15[0xe]
        sub_140780c40(rbp_1, &rsi_1[-2])
        
        if (&rbp_1[2] != rsi_1)
            int32_t j_1 = rbp_1[3].d
            
            if (j_1 != 0)
                int64_t* rbx_2 = rbp_1[2] + 8
                int32_t j
                
                do
                    int64_t rcx_1 = *rbx_2
                    
                    if (rcx_1 != 0)
                        sub_140a74f90(rcx_1)
                    
                    rbx_2 = &rbx_2[4]
                    j = j_1
                    j_1 -= 1
                while (j != 1)
            
            sub_14259b0a0(&rbp_1[2], *rsi_1, rsi_1[1].d, *(rbp_1 + 0x1c), 0)
        
        sub_14259b3d0(&rbp_1[4], &rsi_1[2])
        rsi_1 = &rsi_1[0xe]
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t* result
result.b = 1
return result
